#include <iostream>

using namespace std;

template <typename T>
void print(T (&arr)[100])
{
    for (auto elem : arr)
        cout << elem << endl;
}

long long fibonacci(unsigned n)
{
    int result[2] = {0, 1};
    if (n < 2)
        return result[n];

    long long fibNMinusOne = 1;
    long long fibNMinusTwo = 0;
    long long fibN = 0;
    for (unsigned int i = 2; i <= n; ++i)
    {
        fibN = fibNMinusOne + fibNMinusTwo;

        fibNMinusTwo = fibNMinusOne;
        fibNMinusOne = fibN;
    }
    return fibN;
}

int main()
{
 //   int f[100] = {0,1,2};
 /*
    int f[100];
    f[0] = 0; f[1] = 1; f[2] = 2;
    for (int i = 2; i < 10000; i++)
    {
        f[i] = f[i-1] + f[i-2];
        print(f);
    }
    */
    long long f = fibonacci(100);
    cout << f << endl;
}
