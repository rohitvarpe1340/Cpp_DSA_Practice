#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//find small val
int findSmall(vector <int> &nums, int &n){
    int small=INT_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]<small){
            small = nums[i];
        }
    }
    return small;
}

int main(){

   vector<int> nums = {3,6,7,8,1,5};
   int n = nums.size();

   int ans = findSmall(nums,n);
   cout<<ans<<endl;



    return 0;
}