//naive

#include<iostream>

using namespace std;
int Union(int a[],int b[],int m,int n)
{
         int  res=0;
         
          int dist[m+n];
           for(int k=0;k<m+n;k++)
                              {
                                        dist[k]=NULL;
                              }
           
         for(int i=0;i<m;i++)
          {
                    bool flag=false;
                    for(int j=0;j<m+n;j++)
                    {
                              if(dist[j]==a[i])
                              {
                                        flag=true;
                                        break;
                              }
                    }
                    if(flag==false)
                    {
                              
                         dist[res]=a[i];
                         res++;
                            

                    }
                      
          }
        
           for(int i=0;i<n;i++)
          {
                    bool flag=false;
                    for(int j=0;j<m+n;j++)
                    {
                              if(dist[j]==b[i])
                              {
                                        flag=true;
                                        break;
                              }
                    }
                    if(flag==false)
                    {
                              dist [res]=b[i];
                              res++;
                        

                    }

          }
          cout<<"All the distinct Element\n";
            for(int k=0;k<m+n;k++)
                              {
                                        cout<<k<<" "<<dist[k]<<"\n";
                              }
          return res;
}
int main(){
           int a[]={1,2,3,4,5,6,7,8,9,10};
             int b[]={1,12,23,34,5,46} ;
          int m=10;
          int n=6;
         cout<<"Total "<< Union(a,b,m,n)<<" Distinct element are present in the array";
          
          return 0;
}