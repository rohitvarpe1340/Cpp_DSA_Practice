#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector <int> &vec,int n, int target){
    for(int i=0;i<n;i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1; // Target not found
}
int main(){
    vector <int> vec={6,7,8,9,2,5,6};
    int n = vec.size();
    int target= 2;
    int ans = linearSearch(vec,n, target);
    cout<<"target index of "<<ans<<endl;

    return 0;
}