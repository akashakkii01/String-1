#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    // string str = "akash is at college";
    // cout<<str.size()<<endl;
    // cout<<str.length(); // 0 to str.lenght()-1
    // int len = str.length();
    // cout<<endl;
    // cout<<len;

    // push back 
    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // str.push_back('h');
    // cout<<str<<endl;

    // string s = "akash";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s;

    // string s = "abc";
    // s = "xyz" + s;
    // cout<<s<<endl;
    // string a = "def";
    // cout<<a<<endl;
    // cout<<s+a<<endl;
    // cout<<s + 'z'<<endl;
    // cout<<s+ "123";

    string a  = "abcdef"; // 0 1 2 3 4 5 6 
    cout<<a<<endl;
    // reverse(a.begin(),a.end());
    // reverse(a.begin()+2,a.end()); 
    reverse(a.begin()+2,a.end()-1); 
    cout<<a<<endl;






    return 0;
}