#include <iostream>
#include  <string>
#include <vector>
#include <climits>
using namespace std;

int sumOfDigit(int num){
    int digitSum =0;
    while (num>0)
    {
         int lastDigit = num % 10;
        num /=10;
        digitSum += lastDigit;
    }
    return digitSum;
    
}

 int main(){
    int num =55;
    int ans = sumOfDigit(num);
    cout<<ans<<endl;
  
    
    return 0;
}