#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int l1,l2,l3;
   cin>>l1>>l2>>l3;

   unordered_map<long int,long int> m1,m2,m3;
   long int arr1[l1],arr2[l2],arr3[l3];
   for(long int i=0;i<l1;i++)
   {
       cin>>arr1[i];
   }
   for(long int i=0;i<l2;i++)
   {
       cin>>arr2[i];
   }
   for(long int i=0;i<l3;i++)
   {
       cin>>arr3[i];
   }

   sort(arr1, arr1+l1, greater<long int>());
   sort(arr2, arr2+l2, greater<long int>());
   sort(arr3, arr3+l3, greater<long int>());

   for(long int i=0;i<l1;i++)
   {
       m1[arr1[i]]=i+1;
   }
   for(long int i=0;i<l2;i++)
   {
       m2[arr2[i]]=i+1;
   }
   for(long int i=0;i<l3;i++)
   {
       m3[arr3[i]]=i+1;
   }


   cout<<endl;

   long int answer = 0,flag1=0,flag2=0,key=1;
   long int temp1,temp2;
   int starter = arr2[0];
   cout<<"Starter : "<<starter<<endl;
   int multiplier = 1;
   while(starter)
   {

       if(m2[starter]!=0)
       {
           key=1;
       }
       if(key == 1 && m2[starter]!=0)
       {
           cout<<"Multiplier : "<<multiplier<<endl;
           multiplier+=1;
       }
       if(key==1)
       {

       cout<<"Starter : "<<starter<<endl;
       cout<<"M1[starter] : "<<m1[starter]<<endl;
       if(m1[starter]!=0 && flag1 == 0)
       {
           temp1 = m1[starter];
           flag1=1;
       }
       cout<<"M3[starter] : "<<m3[starter]<<endl;

       if(m3[starter]!=0 && flag2 == 0)
       {
           temp2 = m3[starter];
           flag2=1;
       }
       if(flag1!=0 && flag2!=0)
       {
           cout<<"Temp1 : "<<temp1<<" "<<"Temp 2 : "<<temp2<<endl;
           answer=answer+(multiplier*((l1-temp1+1)*(l3-temp2+1)));
           cout<<"Answer : "<<answer<<endl;
           flag1=0;
           flag2=0;
           key=0;
           multiplier = 1;
       }
    }

    starter--;
   }
   cout<<answer;



}
