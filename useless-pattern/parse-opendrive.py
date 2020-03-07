import abc
import csv
import cmath


class CsvReader():
    def __init__(self,path):
        self.s_list = []
        self.x_list = []
        self.y_list = []
        self.hdg_list = []
        self.length_list = []
        self.reader_list = []

        with open(path, 'r') as f:
            self.reader = csv.reader(f)
            index = 0
            for row in self.reader:
                self.reader_list.append(row)
                if index is 0:
                    a =1
                elif index is 1:
                    a =1
                elif index is 2:
                    a =1
                elif index is 3:
                    a =1
                elif index is 4:
                    a =1
                else:
                    x = float(row[0])
                    y = float(row[1])
                    self.x_list.append(x)
                    self.y_list.append(y)
                index += 1

    def calGeometry(self)
        list_length = len(x_list)
        for i in range(list_length - 1):
            dx = x_list[i] - x_list[i+1]
            dy = y_list[i] - y_list[i+1]
            length = cmath.sqrt(pow(dx,2)+pow(dy,2))
            length_list.append(length)
            if i is 0:
                s_list.append(0)
            else:
                s_list.append(s_list[-1] + length)
            hdg = cal_hdg()
            hdg_list.append(hdg)

    def getInstance(self):
        return self.reader

    def getLine(self,index):
        return self.reader_list[index]

    def getPointNumber(self):
        return len(self.reader_list)-5
    
#TODO:设置static的reader对象 类变量
class Command():
    def __init__(self,csvReader):
        self.csvReader = csvReader

    @abc.abstractmethod
    def doCommand(self):
        pass

    @abc.abstractmethod
    def doIndexCommand(self,index):
        pass

    @abc.abstractmethod
    def judge(self):
        pass

    

class FirstCommand(Command):
    def __init__(self,csvReader):
        super(FirstCommand,self).__init__(csvReader)
        print('first command')

    def doCommand(self):
        return ' length = "123"'

    def judge(self):
        return True

class SecondCommand(Command):
    def __init__(self,csvReader):
        super(SecondCommand,self).__init__(csvReader)
        print('second command')

    def doCommand(self):
        return ' cur = "2.1"'

    def judge(self):
        return True

class GeometryCommand(Command):
    def __init__(self,csvReader):
        super(GeometryCommand,self).__init__(csvReader)

    def setIndex(self,index):
        self.index = index

    def doCommand(self):
        return ' cur = "'+str(self.index)+'"'

    def doIndexCommand(self,index):
        pass

    def judge(self):
        return True

#目前第四行是predecessor 第五行是successor
#TODO: 直接返回字符串
class PredecessorCommand(Command):
    def __init__(self,csvReader):
        super(PredecessorCommand,self).__init__(csvReader)

    def doCommand(self):
        return ' pre="1"'
        # print(self.csvReader.getLine(3))
    
    def judge(self):
        return True


class Node():
    def __init__(self,name):
        self.name = name
        self.child = None
        self.sibling = None
    
    def addChild(self,node):
        tmp = self.child
        if not self.child:
            self.child = node
        else:
            self.child.addSibling(node)
    
    def addSibling(self,node):
        tmp = self
        while tmp.sibling:
            tmp = tmp.sibling
        tmp.sibling = node

    def setCommand(self,command):
        self.command = command

    def printCommand(self):
        if self.command.judge():
            re = self.command.doCommand() 
        else:
            re = self.command.doIndexCommand()
        print(re+'>')

    def printStart(self,indentNumber):
        self.gap = ''
        for i in range(indentNumber):
            self.gap = '    ' + self.gap
        startName = self.gap + '<' + self.name
        print(startName,end='')

    def printClosure(self,indentNumber):
        endName = '</' + self.name +'>'
        endName = self.gap + endName
        print(endName)



def recursiveNode(root,cnt):
    # printStart() <Opendrive 
    # docommand()  length = "123" .... >
    # child recursive
    # printClosure() </Opendrive>
    # sibling recursive
    root.printStart(cnt)
    root.printCommand()
    if root.child:
        recursiveNode(root.child,cnt+1)
    root.printClosure(cnt)
    if root.sibling:
        recursiveNode(root.sibling,cnt)
    
reader = CsvReader('cross_0.csv')
c1 = FirstCommand(reader)
c2 = SecondCommand(reader)
c3 = PredecessorCommand(reader)

n1 = Node('OpenDrive')
n2 = Node('header')
n3 = Node('userdata')
n4 = Node('road')

n5 = Node('link')
n6 = Node('predecessor')

n1.setCommand(c1)
n2.setCommand(c2)
n3.setCommand(c1)
n4.setCommand(c1)
n5.setCommand(c2)
n6.setCommand(c3)

for i in range(reader.getPointNumber()):
    tmp_node = Node('Geometry')
    tmp_command = GeometryCommand(reader)
    tmp_command.setIndex(i)
    tmp_node.setCommand(tmp_command)
    n6.addChild(tmp_node)

n5.addChild(n6)
n4.addChild(n5)
n2.addChild(n3)
n2.addSibling(n4)
n1.addChild(n2)
# n1.addChild(n2)
# n1.addChild(n3)
# n1.addChild(n4)
print('----------')
recursiveNode(n1,0)


