#include<iostream>

using namespace std;
void lrotateOne(int arr[],int n)
{
          int temp=arr[0];
          for (int i=1;i<n;i++)
          {
                    arr[i-1]=arr[i];
          }
          arr[n-1]=temp;
          
}

int main(){
          int arr []={23,10,32,5,7,32,67};
          int n=7;
          cout<<"Before rotating array\n";
                 for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout<<endl;
          lrotateOne(arr,n);
          cout<<"after rotating array\n";
              for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          return 0;
}