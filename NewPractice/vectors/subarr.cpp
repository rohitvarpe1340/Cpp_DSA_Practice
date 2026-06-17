#include <iostream>
#include <climits>
using namespace std;
int main(){

int arr[5]={6,7,8,3,2};
int n=5;

int maxSum= INT_MIN;
for(int st =0;st<n;st++){
    int currentSum =0;
    for(int end=st;end<n;end++){
       currentSum += arr[end];
       maxSum = max(currentSum , maxSum);
        
    }
}
cout<<"maxSum ="<<maxSum<<endl;
    return 0;
}