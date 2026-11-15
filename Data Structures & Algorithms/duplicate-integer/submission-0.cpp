class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        for(auto m:nums){
            if(u.contains(m)) return true;
            u.insert(m);
        }
        return false;
    }
};