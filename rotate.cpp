#include<iostream>
#include<vector>
using namespace std;



vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    vector<int> v;
    int n=a.size();
    for(int i=n-k;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<n-k;i++){
        v.push_back(a[i]);
    }
    return v;
}

int main(){
vector<int> a={1,2,3,4,56,7};
vector<int> g=kRotate(a,2);

for(int i=0; i < a. size(); i++){
 std::cout << g.at(i) << ' ';
}

    return 0;
}
