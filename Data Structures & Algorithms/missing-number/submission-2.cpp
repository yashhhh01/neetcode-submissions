class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n =nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int check = n*(n+1)/2;
        if(sum==check)
        return 0;
        else
        return  abs(sum-check);
    }
};
