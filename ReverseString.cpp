//REVERSE STRING

#include <iostream>
#include <string>

#include <algorithm>
using namespace std;

int main(){
    string str = "hello";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    string s= "survive";
    cout<<s.substr(1,4)<<endl;
    cout<<s.substr(1)<<endl;

    string str1="college";
    string str2="wallah";
    cout<<str1+str2<<endl;

    

    return 0;
}
