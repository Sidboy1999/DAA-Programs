#include <iostream>
using namespace std;

void BSearch(int *,int ,int );
void Sort(int *, int );

int c;
int main()
{
    int a[20];
    int val,n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to be searched in the array: ";
    cin>>val;

    Sort(a,n);
    BSearch(a,n,val);

    cout<<"c="<<c<<endl;
    return 0;
}
void BSearch(int a[],int n,int val)
{
    int begin=0,end=n,mid=0;
    while(begin<=end )
    {
        mid=(begin+end)/2;
        if(a[mid]==val)
        {
        	c++;
            cout<<"Element found at location "<<mid+1<<endl;
            return;
        }
        else if(val<a[mid])
        {
            end=mid-1;
            c++;
        }
        else
        {
            begin=mid+1;
            c++;
        }
    }
    cout<<"Element is not present in the array\n";
}

void Sort(int a[],int n)
{
    int j,t;
    for(int i=0;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while((t<a[j]) && (j>=0) )
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=t;
    }
    cout<<"\nSorted list is as follows\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
}
