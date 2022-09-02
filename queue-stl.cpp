#include<iostream>
#include<queue>
using namespace std;
int main()
{

queue<string> q;

q.push("I");
q.push("will");
q.push("fight");

cout<<"First element "<<q.front()<<endl;

q.pop();
cout<<"First element "<<q.front()<<endl;
cout<<"Size"<<q.size()<<endl;
	return 0;
}
