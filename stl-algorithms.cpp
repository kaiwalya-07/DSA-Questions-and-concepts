#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);


cout<<"Find 6"<<binary_search(v.begin(),v.end(),6)<<endl;
cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"lower bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

int a=4;
int b=8;

cout<<"Max"<<max(a,b)<<endl;

cout<<"Min"<<min(a,b)<<endl;

swap(a,b);
cout<<"a-"<<a<<endl;


string s = "abcd";

reverse(s.begin(),s.end());
cout<<"string->"<<s<<endl;

rotate(v.begin(),v.begin()+1,v.end());

cout<<"after rotate"<<endl;
for(int i:v){

    cout<<i<<" "<<endl;
}

sort(v.begin(),v.end());
cout<<"after sort"<<endl;
for(int i:v){

    cout<<i<<" "<<endl;
}

	return 0;
}