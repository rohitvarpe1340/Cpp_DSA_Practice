#include <iostream>
#include <vector>
using namespace std;
 pair<int ,int> twoSum(vector<int> &arr ,int &target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]== target){
                return {i,j};
            }
        }
    }
}
int main(){
    vector<int> arr={1,6,7,8,4,3,0};
    int target = 12;
     pair <int,int> res = twoSum(arr,target);
    cout<<res.first<<" "<<res.second<<endl;

    return 0;
}