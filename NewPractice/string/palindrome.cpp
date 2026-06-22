#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isAlphaNum(char ch){
    return isalnum(ch);
}

bool isPalindrome(string str){
    int st = 0, end = str.length()-1;
    while(st < end){
        if(!isAlphaNum(str[st])){
            st++; continue;
        }
        if(!isAlphaNum(str[end])){
            end--; continue;
        }
        if((tolower(str[st]) != tolower(str[end]))){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string str = {"A man, a plan, a canal: Panama"};

    bool ans =isPalindrome(str);
     cout<<ans<<endl;
    return 0;
}