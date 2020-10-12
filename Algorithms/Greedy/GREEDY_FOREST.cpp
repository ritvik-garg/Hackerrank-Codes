/*
Problem : GREEDY FOREST
Link : https://www.hackerrank.com/challenges/greedy-florist/problem
*/

// SOLUTION : 
#include<iostream>
#include<algorithm>

using namespace std;
int main(){

    int n,k,i,j;
    cin>>n>>k;
    int y,arr[n],x=1;
    long sum=0;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    
    if(n%k==0)
        y=n/k;
    else
        y=(n/k)+1;
    i=0;
    while(y>0)
        {
        for(j=0;j<k;j++)        
       { 
            sum=sum+x*arr[i];
            i++;
            if(i==n)
                goto jump;
        
    }
        x++;
        y--;
    }
    jump:
    cout<<sum;
    
    
   return 0;
}
