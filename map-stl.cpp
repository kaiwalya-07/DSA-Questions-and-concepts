#include<iostream>
#include<map>
using namespace std;
int main()
{
map<int, string> m;
m[1]="I";
m[2]="will";
m[10]="fight";


m.insert({5, "World"});
cout<<"Before erase"<<endl;

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

  cout<<"Finding 10 "<<m.count(13)<<endl;

  m.erase(5);
  cout<<"After erase"<<endl;
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

auto it = m.find(10);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}
	return 0;
}