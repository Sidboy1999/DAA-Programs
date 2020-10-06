#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

   string s;
   cout<<"Enter the string:\t";
   cin>>s;
   string::iterator it=s.begin();
   int len=s.length();
   int alpha[26]={0};
   int i=0;
   while(i!=len)
   {
       int j=*it;
       alpha[j-97]++;
       it++;
       i++;
   }
  /* for(int k=0;k<26;k++)
   {
       cout<<(char)(k+97)<<" : "<<alpha[k];
       cout<<endl;
   }*/
   cout<<"Unique is:- ";
   for(int k=0;k<26;k++)
   {
       if(alpha[k]==1)
         cout<<"  "<<(char)(k+97);

   }

}
