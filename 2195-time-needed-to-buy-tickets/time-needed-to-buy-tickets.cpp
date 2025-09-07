class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(i<=k) cnt += min(tickets[i],tickets[k]);
            else cnt += min(tickets[i],tickets[k]-1);
        }
        return cnt;
         
    }
};