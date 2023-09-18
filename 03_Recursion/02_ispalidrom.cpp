#include<iostream>

#include<string.h>


using namespace std;
bool ispalidrom(string str, int start,int end){
    if(start>=end){
        return true;
    }
    return(str [start]==str[end]&& ispalidrom(str,start+1,end-1));
}

int main(){
    string s="aabbaa";
    cout<<(ispalidrom(s,0,5)?"true":"false");
    
    return 0;
}