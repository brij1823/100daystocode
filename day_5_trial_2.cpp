#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll removeDuplicates(ll arr[], ll n)
{
    if (n==0 || n==1)
        return n;

    ll temp[n];

    ll j = 0;
    for (ll i=0; i<n-1; i++)

        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];

    temp[j++] = arr[n-1];

    for (ll i=0; i<j; i++)
        arr[i] = temp[i];

    return j;
}
int main()
{
    ll l1,l2,l3;
    cin>>l1>>l2>>l3;

    ll arr1[l1],arr2[l2],arr3[l3];

    for(ll int i=0;i<l1;i++)
    {
        cin>>arr1[i];
    }
    for(ll int i=0;i<l2;i++)
    {
        cin>>arr2[i];
    }
    for(ll int i=0;i<l3;i++)
    {
        cin>>arr3[i];
    }

    sort(arr1,arr1+l1);
    sort(arr2,arr2+l2);
    sort(arr3,arr3+l3);

    l1 = removeDuplicates(arr1,l1);
    l2 = removeDuplicates(arr2,l2);
    l3 = removeDuplicates(arr3,l3);
    ll answer = 0;

    ll count1=0,count2=0,count3=0;

    while(count2<l2)
    {
        while(count1<l1 && arr2[count2]>=arr1[count1])
        {
            count1++;
        }
        while(count3<l3 && arr2[count2] >= arr3[count3])
        {
            count3++;
        }

        answer = answer + count1*count3;
        count2++;
    }

    cout<<answer<<endl;
}

