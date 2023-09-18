// naive method 2
#include <iostream>

using namespace std;
int countsetbit(int n)
{
    int res = 0;
    while (n > 0)
    {
        if ((n&1)==1)
        {
            res++;

        }
        n=n>>1;
    }
    return res;
}
int main()
{
    int a = 4, b;

    cout << countsetbit(a);

    return 0;
}