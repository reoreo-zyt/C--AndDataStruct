## 复习题

### 1. c++ 程序的模块是什么

函数

### 2. 下面的预处理编译指令有什么用？

```c++
#include <iostream>
```

头文件提供函数原型，用来使用预定义的类，`istream` 以及 `ostream`

### 3. 下面的语句是做什么用的？

```c++
using namespace std;
```

命名空间，用来使用命名空间中的 `cin`、`cout`等函数，如果不使用命名空间，则要在调用函数前加上命名空间，如

```c++
std::cout >> "";
```

### 4. 打印 "hello World"，然后切换下一行

```c++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    return 0;
}
```

### 5. 创建名为 chesses 的整数变量

```c++
int chesses;
```

### 6. 将值32赋值给chesses

```c++
chesses = 32;
```

### 7. 读入数据到 chesses 变量中

```c++
cin >> chesses
```

### 8. 打印 "We have X varieties of chesses"，X 为变量 chesses 的当前值

```c++
cout << "We have " << chesses << " varieties of chesses"
```

### 9. 下面的函数原型指出了哪些信息？

```c++
int froop(double t)
void rattle(int n)
int prune(void)
```

* 函数返回 int 类型的值，有一个 double 类型的参数。
* 函数没有返回值，有一个 int 类型的参数。
* 函数返回 int 类型的值，没有参数。

### 10. 定义函数时，什么情况下不必使用关键字 return

不需要返回值的时候

### 11. 编译器指出 cout 是未知标识符，有可能是什么问题

* 没有头文件
* 没有命名空间std