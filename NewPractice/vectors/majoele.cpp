#include <iostream>
#include <vector>
using namespace  std;
int majorEle(vector<int> &arr,int &n){
    int freq =0 , ans=0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;

}
int main(){

 vector<int> arr={2,2,1,1,1,2,2};
 int n = arr.size();
  int res= majorEle(arr,n);
   cout << res << endl;
    return 0;
}