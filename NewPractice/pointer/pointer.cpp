#include <iostream>
using namespace std;
void changeA(int &a){
     a=20;
}
int main(){
    int a=10;
    int *p=&a;
    cout<<p<<endl;
    cout<<&a<<endl;

    changeA(a);
    cout<<a<<endl;

    return 0;
}