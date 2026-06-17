#include <iostream>
#include <vector>
using namespace std;
int linearSearch( vector <int> &nums, int &n, int &target )
{
    for(int i =0;i<n;i++){
        if(nums[i]== target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector <int> nums = {45,76,87,23,6,90};
    int n = nums.size();
    int target  = 23;

    cout<<linearSearch(nums , n , target)<<endl;
    return 0;

}