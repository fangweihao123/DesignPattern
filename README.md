## 设计模式练习
### 1.策略模式
定义了算法簇，分别封装起来，让它们之间可以互相替换，此模式让算法的变化独立于使用算法的客户
![策略模式](https://user-images.githubusercontent.com/18373220/71788784-8683ce00-3060-11ea-91d7-12aa2aa9f53e.png)
### 2.观察者模式
由订阅者和发布者组成，当发布者的数据发生变化时，会向所有订阅的人发布变化的消息
![观察者模式](https://user-images.githubusercontent.com/18373220/71815857-c035f280-30bb-11ea-8e62-96ca2a30ddf6.png)
### 3.装饰者模式
利用组合来解耦继承方法，使得需求能够动态地添加到我们需要想要的对象上
![装饰者模式](https://user-images.githubusercontent.com/18373220/71892528-1c644980-3184-11ea-896d-bd586dcc1370.png)
### 4.工厂模式
工厂方法模式定义了一个创建对象的接口，但由子类决定实例化的类是哪一个，工厂方法让类把实例化推迟到子类
![工厂模式](https://user-images.githubusercontent.com/18373220/74820154-7f78fc80-533c-11ea-82f5-5877279fc2a0.png)
### 5.抽象工厂模式
提供一个接口,用于创建相关或依赖对象的家族,而不需要明确指定具体类
![抽象工厂方式](https://user-images.githubusercontent.com/18373220/75084641-5040d600-555c-11ea-9616-8de2cbfa0d2d.png)
### 6.单例模式
确保一个类只有一个实例，并提供一个全局访问点
### 7.无用模式(多模式结合)
该模式其实就是自己在写代码过程中利用多种模式的复合进行小框架的开发，通过命令模式、模板方式、单例模式来简化我们的开发流程。血的教训，下次一定要提前做好需求分析！！！不然就会变成开发了用了设计模式但是也没什么用，最后用不到。

该框架是为解析Opendrive文件开发的，opendrive其实就是xml的文件，通过xml的格式来标准化地表示道路。我们建立了DOM树形格式来存储opendrive格式
![DOM树](https://user-images.githubusercontent.com/18373220/76135804-7e96d900-6065-11ea-8f19-0ec13fcdbee1.png)
如上图所示，每一个节点内部都有一个我们定义的Command，这样就能去自己去编写自定义的命令了。
```python
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
```
下面是模板方法
```python
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
```

下面是单例模式

```python
    class CsvReader():
        def getInstance(self):
            return self.reader

        def getLine(self,index):
            return self.reader_list[index]

        def getPointNumber(self):
            return len(self.reader_list)-5
```
