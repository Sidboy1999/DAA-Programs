#include<iostream>
using namespace std;
int count=0;
int main()
{
    int i,j,n,k,t;
    int a[15];
    cout<<"\nEnter the number of data element to be sorted: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        j=i-1;
        count+=3;
        while((t<a[j]) && (j>=0) )
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
            count+=2;
        }
        a[j+1]=t;    //insert element in proper place
        count+=1;
    }
    count+=1;
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nc="<<count<<endl;
    return 0;
}
