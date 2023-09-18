#include<iostream>

using namespace std;
bool isSum(int arr[],int n,int sum)
{
          int currsum=arr[0];
          int s=0;
          for(int e=1;e<n;e++)
          {
                    while(currsum>sum && s<e-1)
                    {
                              currsum-=arr[s];
                              s++;
                    }
                    if(currsum==sum)
                    {
                              return true;
                    }
                    if(e<n)
                    {
                              currsum+=arr[e];
                    }
                   
          }
           return (currsum==sum);
}
int main()
{
          int arr[]={23,12,4,54,-1,24};
          int n=6;
          int sum=53;
          if(isSum(arr,n,sum))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }
          
          
          return 0;
}