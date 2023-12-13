#include<iostream>
using namespace std;

class complex
{
    int real,imag;
    public:
      complex()
      {
          real=0;
          imag=0;
      }
      void display()
      {
         cout<<"\n"<<real<<"+"<<imag<<"i\n";
      }
      
      complex operator +(complex o)
      {
           complex c3;
           c3.real=real+o.real;
           c3.imag=imag+o.imag;
           return c3;
      }
      
      complex operator *(complex v)
      {
           complex c3;
           c3.real=(real*v.real)-(imag*v.imag);
           c3.imag=(real*v.imag)+(imag*v.real);
           return c3;
      }
      
      
      friend complex operator -(complex ob,complex ob1);  
      friend istream &operator >>(istream &input,complex &t);
      friend ostream &operator <<(ostream &output,complex &t); 
};

complex operator -(complex ob,complex ob1)
{
    complex c3;
    c3.real=ob.real-ob1.real;
    c3.imag=ob.imag-ob1.imag;
    return c3;
}

istream &operator >>(istream &input,complex &t)
{

    cout<<"\nenter real number:";
    input>>t.real;
    cout<<"\nenter imag number:";
    input>>t.imag;
    return input;
}

ostream &operator <<(ostream &output,complex &t)
{
   
   output<<t.real<<"+"<<t.imag<<"i\n";
   return output;
}   
    
int main()
{
  complex c,c1,c2,c3;
 
  c.display();
 
  cin>>c1;
  cin>>c2;
  
  c3=c1+c2;
  cout<<c3;
  
  c3=c1-c2;
  cout<<c3;
  
  c3=c1*c2;
  cout<<c3;
  
  return 0;
}                                          