
//brute force-> first iteratre over matrix and if u got zero usko pass krdo mark row and mark col funtionn m 
//jisme we will whole row and col with unique value and atlast we again iterate over and when we find that unique 
//value, at that place we set it to zero
class Solution {
    public:
    
    void markRow(vector<vector<int>>& matrix, int row){    
            for(int i=0;i<matrix[0].size();i++){
                if(matrix[row][i]!=0){
                    matrix[row][i]= -99999999; 
                }
         }
    }
    void markCol(vector<vector<int>>& matrix, int col){
         for(int i=0;i<matrix.size();i++){
                if(matrix[i][col]!=0){
                    matrix[i][col]= -99999999;
                }
         }
    }
    
        void setZeroes(vector<vector<int>>& matrix) {
           
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    if(matrix[i][j]==0){
                        markRow(matrix,i);
                        markCol(matrix,j);
                    }
                }
            }
    
               for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                      if(matrix[i][j] == -99999999) {
                        matrix[i][j] = 0;
                }
            }
        }
        }
    };

   // ----*****************BETTER APPROCH****************____________
   class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
           int m=matrix.size();
           int n=matrix[0].size();
              vector<int> row(m, 0);
            vector<int> col(n, 0);
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                   if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                   }
                }
            }
    
               for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                      if(row[i] || col[j]) {
                        matrix[i][j] = 0;
                }
            }
        }
        }
    };