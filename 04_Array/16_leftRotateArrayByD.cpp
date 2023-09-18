// naive method
#include<iostream>

using namespace std;
void leftrotateOne(int arr[],int n)
{
          int temp=arr[0];
          for (int i=1;i<n;i++)
          {
                    arr[i-1]=arr[i];
          }
          arr[n-1]=temp;
          
}
void leftrotateD(int arr[],int n,int d)
{
          for(int i=0;i<d;i++){
                    leftrotateOne(arr,n);
          }
}

int main(){
          int arr []={23,10,32,5,7,32,67};
          int n=7;
          int d=3;
          cout<<"Before rotating array D times\n";
                 for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout<<endl;
          leftrotateD(arr,n,d);
          cout<<"after rotating array D times\n";
              for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          return 0;
}