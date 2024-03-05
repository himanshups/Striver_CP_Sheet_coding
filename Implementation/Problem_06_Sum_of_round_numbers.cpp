#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // it takes no of testcases 
    int t;
    cin>>t;
    
    while(t--){
    // vector array to store min round numbers
      vector<int> ans;
      string s;
      cin>>s;
      int len = s.length();
      for(int i = 0;i<len;i++){
          //to check if number is not zero (1...9) range inclusive
          if(s[i]!='0'){
              int RHS_count = len-i-1; //checks rightmost count of a number from i 
              int num = (s[i]-'0') * pow(10,RHS_count); // makes a number to its round like 1 after 3 zeros makes it 1000
              ans.push_back(num);
          }
      }
      cout<<ans.size()<<endl; // prints the size of vector
      
      // prints all vector array elements of min elements round number
      for(auto i: ans) cout<<i<<" ";
      cout<<endl;
    }
    return 0;
}
