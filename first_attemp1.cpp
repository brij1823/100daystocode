//https://www.hackerrank.com/challenges/max-array-sum/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming

//first_attempt2
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int answer[n];
    answer[0] = a[0];
    answer[1] = max(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        answer[i] = max(a[i],max(answer[i-1],a[i]+answer[i-2]));
    }

    cout<<answer[n-1];

}
