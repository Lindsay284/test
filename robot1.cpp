#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
    clock_t start, end;
    start = clock();
    //测试运行时间
    int n;
    cin >> n;
    int a[50000]; //储存值
    int b[50000]; //储存num
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 1;
    }
    //dp
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] <= a[i])
            {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    cout << b[0] << endl;
    //测试并输出运行时间
    end = clock();
    cout << "运行时间为：" << (double)(end - start) / CLOCKS_PER_SEC << "s";
    return 0;
}