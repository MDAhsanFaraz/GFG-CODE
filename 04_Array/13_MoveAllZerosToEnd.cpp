// naive method
#include<iostream>

using namespace std;
void movetoend(int arr[] ,int n)
{
          for (int i=0;i<n;i++)
          {
                    if(arr[i]==0)
                    {
                              for(int j =i+1;j<n;j++)
                              {
                                        if(arr[j]!=0)
                                        {
                                                  swap(arr[i],arr[j]);
                                        }
                                       

                              }
                    }
          }
}
int main(){
          int arr []={10,5,0,0,8,0,9,0};
          int n=8;
          cout<<"Before moving 0's to the end\n";
                 for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout<<endl;
          movetoend(arr,n);
          cout<<"after moving 0's to the end\n";
              for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          return 0;
}