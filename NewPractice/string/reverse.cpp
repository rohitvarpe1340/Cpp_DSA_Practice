#include <iostream>
#include <string>
using namespace std;

string reverseString(string str ,int n ){
    int st = 0 , end= n-1;
    while(st < end){
    swap(str[st], str[end]);
    st++;
    end--;
    }
    return str;
}

int main(){
    string str = "epraV tihoR";
    int n = str.length();
    str = reverseString(str, n);
    cout << str << endl;
    return 0;
}
