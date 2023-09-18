#include <iostream>

using namespace std;
int SquareRoot(int x)
{
          int ans = -1;
          int low = 1, high = x;
          while (low <= high)
          {
                    int mid = (low + high) / 2;
                    int msg = mid * mid;
                    if (msg == x)
                    {
                              return mid;
                    }
                    if (msg > x)
                    {
                              high = mid - 1;
                    }
                    else
                    {
                              low = mid + 1;
                              ans = mid;
                    }
          }
          return ans;
}
int main(){
          int d=789;
          cout<<SquareRoot(d)<<"is the square root of Given input";
          

          return 0;
}                   