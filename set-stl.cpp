#include<iostream>
#include<set>
using namespace std;
int main()
{

set<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(0);
s.insert(0);
s.insert(5);
s.insert(7);
s.insert(5);
s.insert(6);
s.insert(6);
s.insert(7);

for(int i : s){
    cout<<i<<endl;

}


s.erase(s.begin());
for(auto i : s){
    cout<<i<<endl;

}

cout<<endl;
cout<<"Is 5 present "<<s.count(5)<<endl;

set<int>:: iterator itr = s.find(5);


cout<<"Value at itr "<<*itr<<endl;

for(auto it=itr; it!=s.end();it++){
    cout<<*it<<" "<<endl;
}

	return 0;
}
