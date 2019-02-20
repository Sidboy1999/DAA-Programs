/* Did some changes more to the program in the form of comments for step counter. Incase you are not getting the output comment remove the comments including this :P*/
#include<iostream>
using namespace std;
int main()
{
    int a[15];
    int i,j,k,t,c=0,n;
    cout<<"\nEnter the number of data element to be sorted: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        j=i;
        c+=2;
        for(k=i+1;k<n;k++)
        {
            if(a[k]<=a[j])
            {
                j=k;
                c+=1;    
            }
            c++;
        }
        //c+=2;       //for false condition
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        c+=3;
    }
    c+=1;   //for false condition
    for(i=0;i<n;i++)
    {
        std::cout <<a[i] << '\t';
    }
    std::cout << "\nc=" <<c<<std::endl;
    return 0;
}
