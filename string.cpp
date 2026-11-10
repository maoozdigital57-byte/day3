#include <iostream>
#include <string>
using namespace std;
string reverse(string str){
    int index=0;
    string temp_str = str;
    for (int i=temp_str.length()-1;i>=0;i--){
        str[index]=temp_str[i];
        index ++;
    }
    return str;
}
int main(){
    string s;
    cout<<"ENTER A STRING : \n";
    cin>>s;
    cout<<reverse(s);
}