#include<iostream>
using namespace std;

int c=0;
void LSearch(int *,int,int);
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

    LSearch(a,n,val);

    cout<<"c="<<c<<endl;
    return 0;
}

void LSearch(int a[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        c+=1;
        if(a[i]==val)
        {
        	c++;
            cout<<"Element found at location "<<i+1<<endl;
            return;
        }
    }
    c+=1;
    cout<<"Element not present in the array\n";
}
