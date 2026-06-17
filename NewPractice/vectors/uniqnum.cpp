#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> &vec, int n,int &index){
    int ans =0;
    index=-1;
    for(int i=0;i<n;i++){
        ans = ans^ vec[i];
       if(vec[i]==ans){
        index =i;
        break;
       }
    }
    return ans;
}
int main(){
    vector<int> vec={4,1,2,1,2};
    int n = vec.size();
    int index;
    cout<<findUnique(vec,n,index)<<endl;
    cout<<index<<endl;

    return 0;
}