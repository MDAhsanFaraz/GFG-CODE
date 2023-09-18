//check for prime
//Naive method
#include <iostream>
bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}
using namespace std;
int main()
{
    int a;
    cout << "Enter the number\n";
    cin >> a;
    if (isprime(a) == true)
    {
        cout << "Your number is prime\n";
    }
    else if (isprime(a) == false)
    {
        cout << "Your number is not  prime\n";
    }

    return 0;
}