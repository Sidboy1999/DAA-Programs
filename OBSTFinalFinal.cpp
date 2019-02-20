#include<iostream>
#include<limits.h>
using namespace std;

int key[]={10,20,30,40};
int freq[]={4,2,6,3};
int cost[10][10],root[10][10],temp[10][10];
int n=sizeof(freq)/sizeof(freq[0]);
int minimum=INT_MAX;

int Weight(int p,int q)
{
    int wt=0;
    for(int i=p;i<q;i++)
        wt+=freq[i];
    return wt;
}
int sum;
int FindMin(int i,int j)
{
    if(i==j)
        return 0;
    else if(i+1==j)
        return cost[i][j];
    else
    {
        for(int k=i+1;k<j;k++)
        {
            sum=FindMin(i,k-1)+FindMin(k,j);

        }
        minimum=sum<minimum?sum:minimum;
        temp[i][j]=minimum;
        minimum=INT_MAX;
        return temp[i][j];
    }
}

int main()
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==j)
                cost[i][j]=0;
            else if(j<=i)
                continue;
            else
            {
                cost[i][j]=Weight(i,j);
            }
        }
    }
    cout<<"Weight of the Binary Tree is:\n";
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            cout<<cost[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl<<endl<<"Cost of the Optimal Binary Tree is:\n";
    for(int i=0;i<=n;i++)
    {
        for(int j=i+2;j<=n;j++)
        {
            if(i==j)
                continue;
            else if(j<=i)
                continue;
            else
            {
                cost[i][j]+=FindMin(i,j);
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            cout<<cost[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
}
