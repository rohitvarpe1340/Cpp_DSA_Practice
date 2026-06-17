#include <iostream>
#include <climits>
using namespace std;
int main(){
// int nums []={5,6,7,-8,-2,76};
// int size = 6;
// int small = INT_MAX;
// for(int i=0;i<size;i++){
//     if(nums[i]<small){
//         small = nums[i];
//     }
// }

int nums[]={5,7,8,2,4,-2};
int sz=6;
int large= INT_MIN;
for(int i=0;i<sz;i++){
    if(nums[i]>large){
       large = nums[i];
    }
}

cout<<"large value:"<<large<<endl;





    return 0;
}