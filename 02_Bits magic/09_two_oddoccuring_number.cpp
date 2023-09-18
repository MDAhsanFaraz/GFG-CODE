// naive method
#include <iostream>

using namespace std;
void oddoccuring(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i]<<" ";
        }
    }
}
int main()
{
    int n = 10;
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    for (int i = 0; i < n; i++)
    {
    }
    oddoccuring(arr, n);

    return 0;
}