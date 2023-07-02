class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int curr_cnt = 0;
        int longest = 1;
        int smaller = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==smaller){
                curr_cnt++;;
                smaller = nums[i];
            }
            else if(nums[i]!=smaller){
                smaller = nums[i];
                curr_cnt=1;
            }
            longest = max(longest,curr_cnt);
        }
        return longest;
    }
};
