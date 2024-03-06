#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cin>>row>>column;
    string s1(column,'#');
    string s2(column,'.');
    int dir = 0;
    for(int i = 0;i<row;i++){
        if(i%2==0) cout<<s1<<endl;
        else{
            if(dir==0) s2[0]='.',s2[column-1]='#';
            else s2[0]='#',s2[column-1]='.';
            cout<<s2<<endl;
            dir = 1-dir;
        }
    }
    
    return 0;
}
