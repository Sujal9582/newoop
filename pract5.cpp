#include<iostream>
using namespace std;
template <class T1>
void selectionsort(T1 a[10],int s)
{
    int i,j,min;
    T1 temp;
    for(i=0;i<s-1;i++)
    {
        min=i;
        for (j=i+1;j<s;j++)
        {
            if(a[min]>a[j]) min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout<<"sorted array by selection sort :"<<endl;
    for(i=0;i<s;i++)
    {
        cout<<" "<<a[i];
    }
}
int main()
{
    int x[10],n,ch;
    cout<<"Enter the size of integer array :";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    float y[10],m;
    cout<<"Enter the size if float array :";
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>y[i];
    }

    cout<<"Enter your choice :1.selectionsort :"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:selectionsort(x,n);
                 selectionsort(y,m);
                 break;
    }
}