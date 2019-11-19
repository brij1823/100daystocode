    #include<iostream>
    #include<unordered_map>
    using namespace std;
    int main()
    {
        long long int test;
        cin>>test;

        while(test--)
        {
            long long int money;
            cin>>money;

            long long int n;
            cin>>n;
            long long int arr[n];
            unordered_map<long long int,long long int> value;
            unordered_map<long long int,long long int> pos;
            for(long long int i=0;i<=n;i++)
            {
                value[i]=0;
                pos[i] = 0;
            }
            for(long long int i=0;i<n;i++)
            {
                cin>>arr[i];
                pos[arr[i]] = i+1;
                value[arr[i]]+=1;
            }

            long long int c = money/2;
            if(money%2 == 0 && value[c]>1)
            {

                for(long long int i=0;i<n;i++)
                {
                    if(arr[i] == c)
                    {
                        cout<<i+1<<" "<<pos[c]<<endl;
                        break;
                    }
                }
            }
            else{


            for(long long int i=1;i<=money;i++)
            {
                long long int a = value[i];
                long long int b = value[money-i];

                if(a*b!=0)
                {
                    if(pos[i] < pos[money-i])
                    {
                        cout<<pos[i]<<" "<<pos[money-i]<<endl;
                    }
                    else{
                         cout<<pos[money-i]<<" "<<pos[i]<<endl;
                    }
                  break;
                }

            }
            }
        }
    }
