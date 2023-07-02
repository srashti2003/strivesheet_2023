class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256,-1);
        int le=0,ri=0;
        int len=0;
        while(ri<s.size()){
            if(mp[s[ri]]!=-1){
                le = max(mp[s[ri]]+1,le);
            }
            mp[s[ri]] = ri;
            len = max(len, ri-le+1);
            ri++;
        }
        return len;

    }
};
