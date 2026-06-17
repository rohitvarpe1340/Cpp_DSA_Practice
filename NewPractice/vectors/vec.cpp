#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector <int> vec;
  vec.push_back(45);
  vec.push_back(23);
  vec.push_back(78);
  cout<<vec.size()<<endl;
  //vec.pop_back();
  cout<<vec.capacity()<<endl;

  // for(int val : vec){
  //   cout<<val<<" ";
  // }
    return 0;
}
