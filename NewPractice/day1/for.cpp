#include <iostream>
using namespace std;
int main(){

    // int n =5;
    // for (int i=0; i <= n; i++){
    //     cout<<i<<endl;
    // }
    

    // int count = 0 ;
    // do{
    //     cout<<count<<endl;
    //     count++;
    // }while(count <= 33);

    // string n = "rohit";
    // for(int i = 0; i <n.length();i++){
    //     cout<<n[i]<<endl;
    // }

    // int g = 56;
    // for(int i = 0;i <= g;i++){
    //     cout<<i<<endl;
    // }

    // int n = 50;
    // int sum =0;
    // for(int i =0 ; i<= n; i++){
    //     sum += i;
    // }
    // cout<<"the sum ="<<sum<<endl;

    // int n = 5;
    // int sum =0;
    // int i =0;
    // while (i<= n){
    //     sum += i;
    //     if(i == 3){
    //         break;
    //     } 
    //     i++;
    // }
    // cout<<"the sum is : "<<sum<<endl;

    int n= 10;
    int sum1= 0;
    for(int i=1 ;i<= n;i++){
      if(i%2!=0){
        cout<<i<<endl;
         sum1 += i;
      }
    }
   cout<<endl;
   cout<<"the sum of odd num"<<sum1<<endl;


    
    return 0;
}