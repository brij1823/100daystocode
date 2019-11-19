#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int n;
    cin>>n;

    long int arr[n];
    for(long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long int right_answer[n];
    right_answer[0] = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            right_answer[i] = right_answer[i-1]+1;
        }
        else{
            right_answer[i] = 1;
        }
    }

    long int left_answer[n];
    left_answer[n-1] = 1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        {
            left_answer[i] = left_answer[i+1]+1;
        }
        else{
            left_answer[i] = 1;
        }
    }
    long int sum = 0;
    for(long int i=0;i<n;i++)
    {
        sum+=max(left_answer[i],right_answer[i]);
    }

    cout<<sum;

}
