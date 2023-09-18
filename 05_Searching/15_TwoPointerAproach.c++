#include<iostream>

using namespace std;
bool isPair(int arr[],int n,int x)
{
          int left=0,right=n-1;
          while(left<right )
          
          {
                      if(arr[left]+arr[right]==x)
                    { 
                              return true;

                    }
                    if(arr[left]+arr[right]<x)
                    { 
                              left++;

                    }
                    else
                    {
                              right--;
                    }
          }
          return false;
}
int main()
{

       int arr[] = {10, 20, 40, 60, 5, 8}, n = 6;

          int x = 65 ;
        

       if(isPair(arr, n,x))
       cout<< "yes there  is pair";
       else
       {
         cout<< "no pair  found"; 
       }

          return 0;
}