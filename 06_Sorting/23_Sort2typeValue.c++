#include<iostream>

using namespace std;
void segPosneg(int arr[],int n)//segregate +positive AND -NEGATIVE
{
          int i=-1,j=n;
          while(true)
          {
                    do
                    {
                              i++;
                    }while(arr[i]<0);
                    do
                    {
                              j--;
                    }while(arr[j]>0);
                    if(i>=j)
                    {
                              return ;
                    }
                    swap(arr[i],arr[j]);
          }
}
int main(){
          int arr[]={-23,45,12,-55,234,5};
          segPosneg(arr,6);
            for(int i=0;i<6;i++)
          {
                    cout<<arr[i]<<" ";
          }
          return 0;
}