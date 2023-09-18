// efficient method
#include<iostream>

using namespace std;
void movetoend(int arr[],int n)
{
          int count =0;
          for (int i=0;i<n;i++)
          {
                    if(arr[i]!=0)
                    {
                              swap(arr[i],arr[count]);
                              count++;
                    }
          }
}
int main(){
          int arr []={23,0,320,0,0,32,67};
          int n=7;
          cout<<"Before moving 0's to the end";
                 for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout<<endl;
          movetoend(arr,n);
          cout<<"after moving 0's to the end";
              for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          return 0;
}