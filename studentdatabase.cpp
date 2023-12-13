#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
    static int cnt;
    char name[10],roll[10],cls[10],div[5],dob[10],bg[5],add[10],phone[20];
    Student()
    {   cnt++;
        strcpy(name,"Xyz");
        strcpy(roll,"60");
        strcpy(cls,"SE");
        strcpy(div,"B");
        strcpy(dob,"09082004");
        strcpy(bg,"A");
        strcpy(add,"AVCOE");
        strcpy(phone,"88888");
    }
    
    Student(Student &s)
    {
        cnt++;
        strcpy(name,s.name);
        strcpy(roll,s.roll);
        strcpy(cls,s.cls);
        strcpy(div,s.div);
        strcpy(dob,s.dob);
        strcpy(bg,s.bg);
        strcpy(add,s.add);
        strcpy(phone,s.phone); 
    }

    static int countshow(){
        cout<<"\nNo of studentts="<<cnt;
        return cnt;
    }
    
    void getdata()
    {
        cout<<"Enter Name\n";
        cin>>name;
        cout<<"Enter roll no \n";
        cin>>roll;
        cout<<"Enter class \n";
        cin>>cls;
        cout<<"Enter div \n";
        cin>>div;
        cout<<"Enter dob\n";
        cin>>dob;
        cout<<"Enter  bloodgrp\n";
        cin>>bg;
        cout<<"Enter adddress\n";
        cin>>add;
        cout<<"Enter phone no\n";
        cin>>phone;
        
    }
    friend void show(Student *p);
};

void show(Student *p)
{
    cout<<"\n"<<p->name<<"\t"<<p->roll<<"\t"<<p->div<<"\t"<<p->cls<<"\t"<<p->dob<<"\t"<<p->bg<<"\t"<<p->add<<"\t"<<p->phone;
}
int Student::cnt=0;

int main()
{
    Student s1,s2(s1);
    int n;
    cout<<"Enter total no of students\n";
    cin>>n;
    Student *p[n];
    for (int i=0;i<n;i++)
    {
        p[i]=new Student;
        p[i]->getdata();
    }
    cout<<"Name\tRoll no\tDiv\tClass\tdob\tbloodgrp\taddress\ttelephone";
    show(&s1);
    show(&s2);
    for (int i=0;i<n;i++)
    {
        show(p[i]);
    }
   Student::countshow();
   return 0;

}