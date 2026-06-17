#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
 vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
int n = nums.size();
int currentsum= 0, maxsum=INT_MIN;
for(int i=0;i<n;i++){
  currentsum += nums[i];
  maxsum = max(currentsum,maxsum);
  if(currentsum < 0){
    currentsum =0;
  }
}
cout<<maxsum<<endl;

    return 0;
}