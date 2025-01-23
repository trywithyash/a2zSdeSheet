//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
 
   
   int gcd(int a, int b){
       int ans=1;
       for(int i=min(a,b);i>0;i--){
           if(a%i==0 && b%i==0){
               ans= i;
               break;
           }
       }
       return ans;
   }
   
     int lcm(int a, int b){
       int hcf=gcd(a,b);
       int ans=(a*b)/hcf;
       return ans;
   }
  
    vector<int> lcmAndGcd(int a, int b) {
        vector<int>ans;
        
         ans.push_back(lcm(a,b));
          ans.push_back(gcd(a,b));
       
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends