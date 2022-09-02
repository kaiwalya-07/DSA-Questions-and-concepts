#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {10,11,12,13,8,9,18,5};

    int key;
    cin>>key;

    vector<int>::iterator it=find(arr.begin(),arr.end(),key);
    
    if(it!=arr.end()){
    cout<<it-arr.begin()<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
    
return 0;

}