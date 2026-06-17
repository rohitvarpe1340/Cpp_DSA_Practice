#include <iostream>
#include <vector>
using namespace std;
int peakBinary(vector <int> &nums, int n ){
    int st = 1, end = n-2;
    while(st <= end){
        int mid = st + (end - st) / 2;
         if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid + 1] ){
            return mid;
         }else if(nums[mid - 1] < nums[mid]){
            st = mid + 1;
         }else{
            end = mid - 1;
         }
    }
    return -1;
}
int main(){
    vector <int> nums ={0 , 1 , 0};
    int n = nums.size();
    int ans = peakBinary(nums , n);
    cout<<ans<<endl;
    return 0;
}