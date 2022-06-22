## 1. 显示姓名和地址

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "my name is zhong, and my place is China";
    cin.get();
}
```

## 2. 用户输入long为单位的值，转化为码（1 long 等于220码）

```c++
#include <iostream>

using namespace std;

long switchTo(long d);

int main()
{
    long distance;
    cout << "enter a distance" << endl;
    cin >> distance;
    cout << switchTo(distance);
    cin.get();
    cin.get();
}

long switchTo(long d)
{
    return 220 * d;
}
```

## 3. 编写程序，使用三个定义的函数（包含 main() ），输出以下：

```c++
#include <iostream>

using namespace std;

void cout1(string s);

void cout2(string s);

int main()
{
    cout1("Three blind mice");
    cout2("See how they run");
    cin.get();
}

void cout1(string s)
{
    cout << s << endl;
    cout << s << endl;
}

void cout2(string s)
{
    cout << s << endl;
    cout << s << endl;
}
```

## 4. 输入年龄，然后显示该年龄包含多少个月

```c++
#include <iostream>

using namespace std;

int countMouth(int y);

int main()
{
    cout << "Enter your age: " << endl;
    int age;
    cin >> age;
    cout << "mouths are " << countMouth(age);

    cin.get();
    cin.get();
}

int countMouth(int y)
{
    return y * 12;
}

```

## 5. 以摄氏温度值为参数，并返回相应的华氏温度值

华氏温度 = 1.8 * 摄氏温度值 + 32.0

```c++
#include <iostream>

using namespace std;

double getValue(double c);

int main()
{
    double value;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    cout << value << "degree Celsius is " << getValue(value) << " degree Fahrenheit";

    cin.get();
    cin.get();
}

double getValue(double c)
{
    return 1.8 * c + 32.0;
}
```

## 6. 光年转天文单位

```c++
#include <iostream>

using namespace std;

double getValue(double c);

int main()
{
    double value;
    cout << "Enter the number of light years: ";
    cin >> value;
    cout << value << "light years =  " << getValue(value) << " astronomical units";

    cin.get();
    cin.get();
}

double getValue(double c)
{
    return 63240 * c;
}
```

## 7. 输入小时数和分钟数展示

```c++
#include <iostream>

using namespace std;

int main()
{
    int hours;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << endl;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << endl;
    cout << "Time: " << hours << " : " << minutes;
    
    cin.get();
    cin.get();
}
```