 #include<iostream>
 using namespace std;
 int MergeSortedArray(int a[],int b[],int n,int m)
 {
          int i=0; 
          int j=0;
          while(i<n&&j<m)
          {
                    if(a[i]<b[j])
                    {
                              cout<<a[i]<<" ";
                              i++;
                    }
                    else{
                              cout<<b[j]<<" ";
                              j++;
                    }
                    while(i<n)
                    {
                             cout<<a[i]<<" ";
                             i++;
                    }
                      while(j<m)
                    {
                             cout<<b[j]<<" ";
                             j++;
                    }
          }
          return 0;
 }
 int main(){
          int a[]={2,3,44,52,65,67,81,112,334};
          int b[]={23,56,233,234,555};
          int n = sizeof(a) / sizeof(a[0]);
          int m = sizeof(b) / sizeof(b[0]);
          MergeSortedArray(a,b,n, m);
          
          return 0;
 }