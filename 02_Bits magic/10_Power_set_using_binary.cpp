#include <iostream>
#include <cmath>

using namespace std;
void printpowerset(string str)
{
    int n = str.length();    // n=3
    int powsize = pow(2, n); // 8
    for (int counter = 0; counter < powsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter&(1<<j))!=0)
            {
                cout << str[j];
            }
        }
        cout << "\n";
    }
}
int main()
{
    	string s = "abc";

    printpowerset(s); 

    return 0;
}