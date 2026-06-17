#include <iostream>
using namespace std;
int main(){
//    int n = 4;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }


//    int h=4;
//    for(int i=0;i<h;i++){
//     for(int j=0;j<i+1;j++){
//        cout<<(i+1);
//     }
//     cout<<endl;
//    } 


   int n =5;
   
   for(int i=0;i<n;i++){
    char ch ='A'+i;
    for(int j=0;j<i+1;j++){
     cout<<ch<<" ";
    }
    cout<<endl;
   }
    return 0;
}