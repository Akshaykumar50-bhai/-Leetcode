class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i : nums){
            if(target == i) return true;
        }
        return false;
    }
};