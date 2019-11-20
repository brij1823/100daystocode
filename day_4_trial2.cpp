#include <iostream>
#include <unordered_map>
#include <iterator>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{

    ll test;
    cin>>test;

    while(test--)
    {
        ll money;
        cin>>money;

        ll n;
        cin>>n;
        unordered_map<ll,vector<ll>> pos;
        unordered_map<ll,ll> value;
        ll arr[n];

        for(ll i = 0;i<n;i++)
        {
           cin>>arr[i];

           value[arr[i]]++;
           pos[arr[i]].push_back(i+1);
        }

        if(money%2 == 0)
        {
            ll a = money/2;
            if(value[a] > 1)
            {
                ll b = pos[a][0];
                ll c = pos[a][1];
                cout<<min(b,c)<<" "<<max(b,c)<<endl;

            }
            else{
                for(ll i=0;i<n;i++)
                {
                    ll a = arr[i];
                    value[a]--;
                    ll b = money - arr[i];
                    if(value[b]!=0)
                    {
                        cout<<min(pos[a][0],pos[b][0])<<" "<<max(pos[a][0],pos[b][0])<<endl;
                        break;
                    }
                }
            }

        }
        else{
                for(ll i=0;i<n;i++)
                {
                    ll a = arr[i];
                    ll b = money - arr[i];
                    if(value[b]!=0)
                    {
                        cout<<min(pos[a][0],pos[b][0])<<" "<<max(pos[a][0],pos[b][0])<<endl;

                        break;
                    }
                }

        }

    }



}
