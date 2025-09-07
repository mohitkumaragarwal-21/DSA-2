class Solution {
public:
    vector<int> sumZero(int n) {
         if(n==1)
         return {0};

         vector<int>ans;

         if(n%2 ==0)
         { 
             int m = n/2;
             for(int i=-m;i<=m;i++)
             {
                 if(i !=0)
                 {
                     ans.push_back(i);
                 }
             }

             return ans;  
         }
         
         int m = n/2;
         for(int i=-m;i<=m;i++)
         {
             ans.push_back(i);
         }

         return ans;
    }
};