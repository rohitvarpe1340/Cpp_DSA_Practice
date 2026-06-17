#include <iostream>
using namespace std;
//find swap the min and max number in array
void swapMinMax(int arr[],int sz){
    int minIndex=0;
    int maxIndex=0;
    for(int i=0;i<sz;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex =i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);
}
int main(){
    int arr[]={1,7,8,3,4,10};
    int sz=6;
  swapMinMax(arr,sz);
  for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";
  }


    return 0;
}