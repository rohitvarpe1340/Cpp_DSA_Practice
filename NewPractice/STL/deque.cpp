#include <iostream>
#include <deque>
using namespace std;
int main(){
    //deque<int> d = {1,2,3,4,5};
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.insert(d.begin(), 100);
    d.insert(d.end(), 200);

    d.pop_back();
    d.pop_front();
    cout<<"size : "<<d.size()<<endl;



    for(int val : d){
        cout<<val<<" ";
    }
    return 0;
}