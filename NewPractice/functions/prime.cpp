#include <iostream>
using namespace std;

void primeNum(int  n){
    bool isPrime =true;
    if(n<=1){
        isPrime = false;
    }else{
        for(int i=2;i<n-1;i++){
        if(n % i ==0){
            isPrime = false;
            break;
        }
    }
    }
    
    if(isPrime == true){
        cout<<"prime number\n";
    }else{
        cout<<"not prime number\n";
    }
}

int main(){
    int n =11;
    cout<<"prime numbers up to "<<n<<endl;
    for(int i=2;i<=n;i++){
        primeNum(i);
    }
    return 0;
}