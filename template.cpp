#include<iostream>

using namespace std;

template <class T>
void selectionsort(T a[10],int s)
{
    T temp=0;
    int i,j,min;
    i=j=min=0;
    for(i=0;i<s-1;i++)
    {
        min=i;
        for(j=i+1;j<s;j++)
        {
            if (a[min]>a[j]) min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout<<"\n Sorted Array by Selection sort : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<" "<<a[i];
	}
}



int main()
{
    int x[10],n,m;
    cout<<"Enter the size of interger array \t";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    float y[10];
    cout<<"Enter the size of float array \t";
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>y[i];
    }

    selectionsort(x,n);
    selectionsort(y,m);

}