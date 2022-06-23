1. 为了满足不同范围值的需求，节省内存空间
2. 
```c++
short a = 80;
unsigned int b = 42110;
long long c = 3000000000;
```
3. c++ 没有提供自动防止超出整型限制的功能，可以使用头文件climits来确定限制情况
4. 常量33L为long，33则为int
5. 并不真正等价，只有使用ASCII码的系统上，第一条语句才能设置为字母A，第二条语句还可以用于使用其他编码的系统。65是一个int常量，A是一个Char常量。
6. 
```c++
char c = 88;
cout << c << endl;
cout.put(char(88));
cout << char(88) << endl;
cout << (char)88 << endl;
```
7. 取决于两个类型的长度，如果long为4字节，则没有损失。
8. 
74
4
0
4.5
3

9. 
```c++
int pos = (int) (x1 + x2);
int pos = int(x1 + x2);
```
10. 
int
float
char
char32_t
double