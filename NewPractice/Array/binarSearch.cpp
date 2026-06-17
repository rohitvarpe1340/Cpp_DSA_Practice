#include <iostream>
#include <vector>
using namespace std;  
int binarySearch(vector <int> &nums, int &n, int &key){
    int st= 0 , end=n-1;
    while(st <= end){
        int mid = (st + end)/2;

        if(nums[mid] == key){

            return mid;
        }else if(nums[mid]  < key){
            st = mid +1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector <int> nums = {2,3,4,5,6,7,8,9,10};
    int n= nums.size();
    int key = 3;

    int ans = binarySearch(nums,n,key);
    cout<<ans<<endl;


    return 0;
}