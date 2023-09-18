#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                return false;
            } else if (c == ')' && st.top() != '(') {
                return false;
            } else if (c == ']' && st.top() != '[') {
                return false;
            } else if (c == '}' && st.top() != '{') {
                return false;
            } else {
                st.pop();
            }
        }
    }
    return st.empty();
}
int main(){
          string str="(({}))";
          if(isBalanced(str))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }
          return 0;
}