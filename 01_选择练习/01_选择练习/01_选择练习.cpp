#include <iostream>
using namespace std;
//func��������ֵ���β�xת���ɶ����ƺ����1������
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