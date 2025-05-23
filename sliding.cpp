#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n] ={ 1,3,2,5,6,7};
    int k;
    cin>>k;
    int sum =0;
    int max1 = INT_MIN;
    for(int i=0;i<k;i++)
    {
        sum = sum+arr[i];
    }
    max1 =  max(max1,sum);
    for(int i =k;i<n;i++)
    {
        int remove = i-k;
        sum += arr[i]-arr[remove];
        max1 = max(max1,sum);
    }
    cout<<max1<<"\n";
    return 0;
}