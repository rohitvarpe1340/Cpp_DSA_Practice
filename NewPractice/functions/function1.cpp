#include <iostream>
using namespace std;

void PrintHello(){
   cout<<"hello rohit!\n";
}
int AddSum(int a ,int b){//parameter function
    int s;
    s= a+b;
    return s;
}
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}


//find sum n num
int sumN(int a){
    int sum =0;
    for(int i=1;i<=a;i++){
        sum +=i;
    }
    return sum;
}
int Add(int y){
int add=0;
for(int i=1;i<=y;i++){
    add +=i;
}
return add;
}


//find fact n num
int fact(int n){
    int f=1 ;
    for(int i=1;i<=n;i++){
        f *=i;
    }
    return f;
}
int facto(int l){
    int fact = 1;
    for(int i=1;i<=l;i++){
        fact *=i;
    }
    return fact;
}
//sum of digits
int sumDigit(int num ){
    int digitSum =0;
    while(num>0){
        int lastDigit=num %10;
        num /=10;
        digitSum += lastDigit;
    }
    cout<<"2+3+5+6 ="<<digitSum<<endl;
    return digitSum;
}
 
int main(){
    sumDigit(2356);
    int a=5; 
    int b=5;
// PrintHello();
// cout<<AddSum(a,b)<<endl;
// cout<<minOfTwo(4,6);
// cout<<sumN(5)<<endl;
// cout<<sumN(3)<<endl;
  //cout<<fact(5)<<endl;
  //cout<<Add(5)<<endl;
  //cout<<facto(5)<<endl;


    return 0;
}