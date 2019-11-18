#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string entry1,entry2;

        cin>>entry1>>entry2;
        int count1 = entry1.length(),count2 = entry2.length();
        int counter = 0;
        int flag = 0;
        for(int i=0;i<count2;i++)
        {
            int a = entry2[i];
            int b = entry1[counter];
            if(a == b || (a+32) == b)
            {
                counter++;
                continue;
            }
            else{
                int temp = entry1[counter];
                if(counter>count2 || temp<97)
                {
                    flag = 1;
                    cout<<"NO"<<endl;
                    break;
                }
                 counter++;

                i--;
            }

        }
    if(flag == 0)
    {



        for(int i=counter ; i<count1;i++)
        {
            int temp = entry1[i];
            if(temp<97)
            {
                flag = 1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
    }

    }
}
