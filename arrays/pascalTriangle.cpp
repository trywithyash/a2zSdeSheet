class Solution {
    public:
    
        vector<int>generateNum(int n){
            long long ans=1;
            vector<int>temp;
            temp.push_back(ans);
             for(int i=1;i<n;i++){
                ans=ans*(n-i);
                ans=ans/i;
                temp.push_back(ans);
               }
               return temp;
        }
        vector<vector<int>> generate(int numRows) {
            int n=numRows;
               vector<vector<int>>result;
                vector<int>ans;
                for(int i=1;i<=n;i++){
                ans=generateNum(i);
                result.push_back(ans);
                }
                
               return result;
        }
    };