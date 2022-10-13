#include <iostream>
using namespace std;
//func函数返回值是形参x转化成二进制后包含1的数量
int func(int x)
{
    int count = 0;
    while (x)
    {
        count++;
            x = x & (x - 1);
    }
    return count;
}
int main()
{
    cout << func(9867) << endl;
    return 0;
}