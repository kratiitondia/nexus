class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int val=0;
        
        for(int num:nums) val ^= num;
        
        val &= -val;
        vector<int> ret(2,0);
        for(int num:nums) {
            if(num&val) ret[0] ^= num;
            else ret[1] ^= num;
        }
        return ret;
    }
};
