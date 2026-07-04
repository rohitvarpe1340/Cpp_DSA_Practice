#include <iostream>
#include <vector>
using namespace std;
int main(){
     vector <int> nums;
     nums.push_back(23);
     nums.push_back(22);
     nums.push_back(24);
     nums.push_back(25);
     nums.emplace_back(26);

     nums.pop_back();

     for(int val : nums){
        cout<<val<<" ";
     }
     cout<<endl;
    
     cout<< "front : "<<nums.front()<<endl;
     cout<<"back : " <<nums.back()<<endl;

    cout<<nums.at(2)<<endl;
    cout<<endl;
    cout<<nums.size()<<endl;
    cout<<nums.capacity()<<endl;

    vector <int> vec= { 1, 2 ,3 , 4 , 5};
    vec.pop_back();
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<"\n";

    vector <int> vec1(4 , 10);
    for(int val : vec1){
        cout<<val<<" ";
    }
    cout<<"\n";

    vector <int> arr1 = {1 ,2 , 3, 4, 5};
    vector<int> arr2(arr1);
    for(int val : arr2){
        cout<<val <<" ";
    }

    return 0;
}


