//Maximum Sum Subarray problem
#include <bits/stdc++.h>
using namespace std;

int slide(int arr[],int k,int n)
{
    int current=0,i;
    for(i=0;i<k;i++)
    {
        current+=arr[i];
    }
    int max_sum=current;//storing because we need to compare with other sums
    for(i=1;i<=n-k;i++)
    {
        current= current-arr[i-1]+arr[i+k-1];

        if(current>max_sum)
        {
            max_sum=current;
        }
    }
    return max_sum;
}

int main(){
    int arr[]={3,8,2,5,7,6,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int window=slide(arr,4,n);
    cout<<window<<endl;
    return 0;
}
// Output: 30
//Time complexity: O(n)