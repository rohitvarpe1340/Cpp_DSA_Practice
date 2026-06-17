#include <iostream>
#include <vector>
using namespace std;
int reverse(vector <int> &nums, int &n){
    int st = 0, end= n-1;
    while(st < end){
        swap(nums[st],nums[end]);
        st++;
        end--;
    }
}
int main(){
    vector<int> vec={1,2,3,4,5,6,7};
    int n = vec.size();
    reverse(vec,n);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}