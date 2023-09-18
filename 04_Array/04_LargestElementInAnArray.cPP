// naive method
#include<iostream>

using namespace std;
int Getlargest(int arr[],int n)
{
          for (int i=0;i<n;i++)
          {
                    bool flag =true;
                    for (int  j=0;j<n;j++)
                    {
                              if(arr[j]>arr[i])
                              {
                                        flag=false;
                                        break;
                              }
                    }
                    if(flag==true)
                    {
                              return i;
                    }
                    
          }
          return -1;
}
int main(){
          int arr[]={22,23,45,43,2341,45};
          cout<<Getlargest(arr,6);
          return 0;
}