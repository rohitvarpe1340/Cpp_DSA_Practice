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
    string reverse = reverseString(str, n);
    cout << reverse << endl;
    return 0;
}
