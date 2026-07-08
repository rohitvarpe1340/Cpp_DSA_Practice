#include <iostream>
#include <vector>
using namespace std;
int main(){

    //vector 1
   //  vector <int> nums;

   //  nums.push_back(10);
   //  nums.push_back(20);
   //  nums.push_back(30);
   //  nums.push_back(40);
   //  nums.push_back(50);

   //  cout<<nums.front()<<endl;
   //  cout<<nums.back()<<endl;

   //  nums.pop_back();

   //   for(int val : nums){
   //      cout<<val<<" ";
   //   }  
   //   cout<<endl;
   //   cout<<nums.size()<<endl;
   //   cout<<nums.capacity()<<endl;

     //vector 2 
      // vector <int> vec={1,2,3,4,5,};

      // for(int val : vec){
      //   cout<<val<<" ";
      // }
      // cout<<"\n";
      //vector 3
   //    vector <int> arr(5,10);

   //    for(int val : arr){
   //      cout<<val<<" ";
   //    }
   // cout<<"\n";
      //vector 4
      // vector <int> vec1= {1, 2, 3, 4};
      // vector<int> vec2(vec1);

      //  for(int val : vec2){
      //   cout<<val <<" ";
      //  }

       //vector 5
      //  vector<int> num1= {1,2,3,4,5};

      //  num1.insert(num1.begin()+2, 100);
       //num1.clear();
       //num1.erase(num1.begin()+1, num1.begin()+3);

      //   cout<<"size :"<<num1.size()<<endl;
      //   cout<<"capacity : "<<num1.capacity()<<endl;

      //vector 6 
      vector<int> nums = {1,2,3,4,5};
     //vector<int>::iterator vec;
     for( auto vec= nums.begin();vec != nums.end();vec++){
      cout<<*(vec)<<" ";
     }
     cout<<"\n";
     for(auto vec = nums.rbegin();vec != nums.rend();vec++){
      cout<<*(vec)<<" ";
     }
     


    return 0;
}