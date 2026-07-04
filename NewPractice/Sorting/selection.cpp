#include <iostream>
#include <vector>
using namespace std;
void print(vector <int> nums, int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
void selectionSort(vector <int> &nums,int &n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(nums[j] < nums[minindex]){
                minindex= j;
            }
        }
        swap(nums[i],nums[minindex]);
    }
    print(nums,n);
}
int main(){
    vector<int> nums= {5,4,3,2,1};
    int n = nums.size();
    selectionSort(nums,n);
    return 0;
}