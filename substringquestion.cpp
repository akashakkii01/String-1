#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string str;
   cout<<("Enter a string : ");
   getline(cin,str);
   //abcdefgh -> efgh
   int n = str.length();
   cout<<str.substr(n/2);
   

    return 0;
}