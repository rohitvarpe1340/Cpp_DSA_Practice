#include <iostream>
#include <vector>
using namespace std;
int findLarge(vector <int> &nums, int &n){
    int large = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]> large){
            large = nums[i];
        }
    }
    return large;
}
int main(){
    vector <int> nums = {34,56,78,7,23,43,5,};
    int n = nums.size();
    int ans = findLarge(nums,n);
    cout<<ans<<endl;
    return 0;
}