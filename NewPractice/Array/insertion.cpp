#include <iostream>
using namespace std;
void insertArray(int arr1[],int size1,int arr2[],int size2,int result[]){
    for(int i=0;i<size1;i++){
        result[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
      result[size1 +i]=arr2[i];
    }
}
int main(){
    int arr1[]={1,2,3};
    int size1=3;

    int arr2[]={4,5,6};
    int size2=3;

    int result[6];
     insertArray(arr1,size1,arr2,size2,result);
    for(int i=0;i<size1+size2;i++){
        cout<<result[i]<<" ";
    }

    return 0;
}