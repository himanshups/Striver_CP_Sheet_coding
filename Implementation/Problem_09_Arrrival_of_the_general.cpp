#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int maxi = 0, mini=0,max_value=0,min_value=110;

    for(int i = 1;i<=n;i++){
        int a;
        // reading array value
        cin>>a;
        // find maximum number and its index in array
        if(a>max_value) max_value=a, maxi=i;
        //find minimum number and its index in array
        if(a<=min_value) min_value = a, mini=i;
    }
    // to find minimum swaps required to bring max number in first postion + min number in last position
    int res = (maxi-1)+(n-mini);
    
    //if maxi > min i that means one swap will be less as its already done 
    if(maxi>mini) cout<<res-1<<endl;
    // otherwise return same result
    else cout<<res<<endl;
    return 0;
}
