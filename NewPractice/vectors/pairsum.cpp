#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector <int>& arr,int &target){
    vector<int> ans;
   int n = arr.size();
   int i=0,j=n-1;

   while (i<j) {
    int pairSum = arr[i]+arr[j];
    if(pairSum > target){
        j--;
    }else if(pairSum < target){
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
   }
   

    //    for(int i=0;i<arr.size();i++){
    //     for(int j=i+1;j<arr.size();j++){
    //         if(arr[i]+arr[j]== target){
    //           ans.push_back(i);
    //           ans.push_back(j);
    //           return ans;
    //         }
    //     }
    //    }
}
int main(){
vector<int> arr={2,7,11,15};
int target = 22;
vector<int> res = pairSum(arr,target);
cout<<res[0]<<" "<<res[1]<<endl;

    return 0;
}