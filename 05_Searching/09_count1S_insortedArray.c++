#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == 0)
		{
			low = mid + 1;
		}

		else
		{
			if (mid == 0 || arr[mid - 1] != arr[mid]) // to the 1 we got is the
			{
				return (n - mid);
			} // first occured 1 in the array
			  //  then only we can find toatal number of
			  // 1s by substracting first occured [index]
			  //  with whole array
			  // total number of array
			else
				high = mid - 1;
		}
	}

	return 0;
}

int main()
{

	int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;

	cout <<"Total number of 1's in the array is "<<countOnes(arr, n);

	return 0;
}