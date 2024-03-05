#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int total_drinks = k*l; // k bottles * l mililitres each bottles so tatal kL mililitres total drinks;
    total_drinks = total_drinks/nl; // total drinks divided by nl to required to make toasts evenly
    int total_slices = c*d; // c limes present, d slices of 1 lime , so total c*d slices present
    int total_salt = p/np; // p - original salt , np amount of salt requried to make toasts
    
    int res = min(total_salt,min(total_drinks,total_slices))/n; // divided by n to make it even ->
    cout<< res;
    
    
    return 0;
}
