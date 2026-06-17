#include <iostream>
#include <vector>
using namespace std;
int printUnique(vector<int> &vec){
    int ans=0;
    for(int val : vec){
        ans = ans ^ val;
    }
    return ans;
}
 
int main(){
    vector <int> arr={2,3,2,3,4,5,4,8,7,8,7};
    cout<<printUnique(arr)<<endl;;
    return 0;

    
}