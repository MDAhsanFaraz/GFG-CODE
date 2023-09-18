#include <iostream>
#include<stack>
using namespace std;
void PrintSpan(int arr[],int n)
{
          stack<int>st;
          st.push(0);
          cout<<"1"<<" ";
          for(int i=0 ;i<n;i++)
          {
                    while(st.empty()==false && arr[st.top()]>=arr[i])
                    {
                              st.pop();
                    }
                    int span=st.empty()?i+1:i-st.top();
                    cout<<span<<" ";
                    st.push(i);
          }
}

int main()
{
          int arr[] = {18, 12, 13, 14, 11, 16};
          int n = 6;
          PrintSpan(arr, n);
          return 0;
}