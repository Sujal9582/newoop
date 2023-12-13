#include<iostream>
#include<string.h>
using namespace  std;
 class publication 
 {
 string name;
 int price;
 public:
 void add()
 {
 cout<<"\nEnter the name of publication:";
cin>>name;
 cout<<"\nEnter the price of book:";
 cin>>price;
 }
 void display()
 {
  cout<<"\ntitle the of the publication:"<<name;
  cout<<"\nPrice of the publication:"<<price;
 }
 };   
 class book: public publication
 {
 int page_count;
 public:
 void add_book()
 {
 try
 {
 	add();
 	cout<<"enter pages in the book:";
 	cin>>page_count;
 	if( page_count<=0)
 	{ 
 	throw page_count;
 	}}
 	catch(...)
 	{
 	cout<<"page count is invalid";
 	page_count=0;
 	}}
 
void book_show()
{
	display();	
	cout<<"\npages in book:"<<page_count<<endl;
}};

class tape: public publication
{
float t_time;
public:
void add_tape()
 {
 try
 {
 	add();
	cout << "Enter Play Duration of the Tape : ";
	cin >> t_time;
 	if (t_time <= 0)
 	throw t_time;
 	}
	catch(...)
 	{
 	cout << "\nInvalid run time of tape";
 	t_time = 0;
 	}}
 void tape_show()
 {
 display();
 cout << "\nPlay Time : " <<t_time << " min"<<endl;
 }};

int main()
 {
 book b1[ 10];           
 tape t1[ 10];           
 int ch, b_count = 0, t_count = 0;
 do
 {
 cout<<"\npublication Data:";
 cout << "\nMenu:";
 cout << "\n1. Add Information to Books";
 cout << "\n2. Add Information to Tapes";
 cout << "\n3. Display Books Information";
 cout << "\n4. Display Tapes Information";
 cout << "\n5. Exit";
 cout << "\n\nEnter your choice : ";
 cin >> ch;
 switch(ch)
 {
 case 1:
 b1[b_count].add_book();
 b_count++;
 break;
 case 2:
 t1[t_count].add_tape();
 t_count;
 break;
 case 3:
 cout << "\nBook Information";
 for (int i=0;i < b_count;i++)
 {
 b1[i].book_show();
 }
 break;
 case 4:
 cout << "\nTape Information";
 for (int i=0;i < t_count;i++)
 {
 t1[i].tape_show();
 }
 break;
 case 5:
 exit(0);
 }
 }while (ch != 5);
 return 0;
 }
 
 	
  
