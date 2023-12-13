#include<iostream>
#include<fstream>
using namespace std;
class employee
{
int id;
char name[15];
int salary;
public:
void accept()
{
cout<<"enter name";
cin>>name;
cout<<"enter id";
cin>>id;
cout<<"enter salary";
cin>>salary;
}
void disp()
{
cout<<"id:"<<id<<"\nname:"<<name<<"\nsalary:"<<salary<<endl;
}
};
int main()
{
employee o[10];
fstream f;
f.open("employee1.txt");
cout<<"File created"<<endl;
int i,n;
cout<<"how many entries:"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter data of employee:"<<endl;
o[i].accept();
f.write((char*)&o[i],sizeof(o));
}
f.close();
f.open("employee1.txt");
for(i=0;i<n;i++)
{
f.read((char*)&o[i],sizeof(o));
o[i].disp();
}
f.close();
return 0;
}