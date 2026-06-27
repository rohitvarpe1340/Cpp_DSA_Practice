#include <iostream>
#include <vector>
using namespace std;
void print(vector <int> nums, int n ){
    for(int i=0;i<n;i++){
        cout<<nums[i] <<" ";
    }
}

 void sortColor(vector <int> &nums, int &n){
       int low = 0 , mid = 0 , high = n-1;
       while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid++ , low++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid] , nums[high]);
            high--;
        }
       }

       print(nums , n);
 }
int main(){
     vector <int> nums = {2 , 0 , 0 , 1 , 1, 2};
    int n = nums.size();

    sortColor(nums,n);
    return 0;
}