//  Iterative Binary search
 #include<iostream>
 
 using namespace std;
 int BinaryS(int arr[] ,int n, int x)
 {
           int low=0,high=n-1;
           while(low<=high)
           {
                     int mid=(low+high)/2;
                     if(arr[mid]==x)
                     {
                               return mid;
                     }
                     else if(arr[mid]>x)
                     {
                               high=mid-1;
                     }   
                      else
                     {
                               low=mid+1;
                     }  
                        

           }
            return -1;  
           
 }
 int main(){
           int arr []={12,23,234,34,43,54,65,65};
           int n=8;
           int x=34;
           cout<<BinaryS(arr,n,x)<<" is the position of the element in the  array";
           return 0;
 }