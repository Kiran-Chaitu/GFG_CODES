class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        int maxi = 0 , jc =0 , ans =0 ;
        for(int i : deadline) if( i > maxi) maxi = i;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<deadline.size();i++){
            mp[deadline[i]].push_back(profit[i]);
        }
        priority_queue<int> pq;
        while(maxi >0){
            for(auto i : mp[maxi]) pq.push(i);
            if(pq.size() >0){
                jc++;
                ans+=pq.top();
                pq.pop();
            }
            maxi--;
        }
        return {jc , ans};
    }
};