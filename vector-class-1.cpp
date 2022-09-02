#include<iostream>
#include"vector.h"
using namespace std;


int main(){

    Vector<char>vc;
    vc.push_back('a');
    vc.push_back('b');
    
    for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<endl;

    }

    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }

    return 0; 
}