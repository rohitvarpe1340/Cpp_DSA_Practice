#include <iostream>
#include <vector>
using namespace std;

int print(vector <int> nums , int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int bubbleSort(vector <int> &nums , int &n){
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
    print(nums ,n);
}

int main() {
    vector <int> nums= {6,3,4,9,2,6,0,1};
    int n = nums.size();
    bubbleSort(nums,n);
    return 0;
}
