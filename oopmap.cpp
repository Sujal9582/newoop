#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int n,i,pop;
	string state;
	 map<string,int> mymap;
	 cout<<"Enter the total number of states to be entered ";
	 cin>>n;
	 for (i=0;i<n;i++)
	 {
	 	cout<<"Enter name of state \n";
	 	cin>>state;
	 	cout<<"Enter the population \n";
	 	cin>>pop;
	 	mymap.insert(pair<string,int>(state,pop)); 
	 	
	 }
	 cout<<"Enter name of state to search ";
	 cin>>state;
	 cout<<"Population of "<<state<<" is : "<<mymap[state];
	 return 0;
}
