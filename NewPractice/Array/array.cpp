#include <iostream>
#include <vector>
using namespace std;
int main(){
  int arr[5]={4,6,7,3,9};
  arr[1]=44;//change value
int sz=5;
for(int i=0;i<sz;i++){
    cout<<arr[i]<<endl;
}

  cout<<arr[0]<<endl;
  cout<<arr[1]<<endl;
  cout<<arr[2]<<endl;
  cout<<arr[3]<<endl;
  cout<<arr[4]<<endl;
cout<<"arr size in bytes:"<<sizeof(arr)<<endl;





    return 0;
}