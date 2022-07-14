lua 是动态语言类型。

动态语言没有类型定义，每个值都带有自身的类型信息。

lua 基本类型有八种：

* nil
* boolean
* number
* string
* userdata （任意存储在变量中的C数据结构）
* function
* thread
* table

type() 可以获得对应的类型名称。

逻辑运算符：

* and
* or
* not