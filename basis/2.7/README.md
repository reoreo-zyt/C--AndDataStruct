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

