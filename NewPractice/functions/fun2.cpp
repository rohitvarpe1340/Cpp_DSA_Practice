#include <iostream>
using namespace std;
//find sumN
int sumN(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
}
//find factorial
int factN(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
//even and odd
int checkNum(int n){
    if(n %2==0){
        cout<<"even num";
    }else{
        cout<<"odd num\n";
    }
}

int main(){
    cout<<sumN(23)<<endl;
    //cout<<factN(5)<<endl;
    //cout<<checkNum(5)<<endl;


    return 0;
}