#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int flag = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(auto i:arr){
        if(i==1) flag = 1;
    }
    if(flag) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}
