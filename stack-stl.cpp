#include<iostream>
#include<stack>
using namespace std;
int main()
{

stack<string> s;
s.push("I");
s.push("will");
s.push("fight");

cout<<"Top element "<<s.top()<<endl;

s.pop();
cout<<"Top element "<<s.top()<<endl;

cout<<"Size "<<s.size()<<endl;

cout<<"Empty "<<s.empty()<<endl;


	return 0;
}
