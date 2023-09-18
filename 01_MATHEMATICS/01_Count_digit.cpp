#include <iostream>
int count(int x);
using namespace std;
int main()
{
    int a, b;
    cout << "enter number of which you want to count digits:\n";
    cin >> a;

    b = count(a);
    cout << endl;
    cout << "number of digits are"<<" " << b;

    return 0;
}
int count(int x)
{
    int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }
    return res;
}