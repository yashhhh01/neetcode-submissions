class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int count=0;
            int k=i;
            while(k!=0){
                k=k&(k-1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
