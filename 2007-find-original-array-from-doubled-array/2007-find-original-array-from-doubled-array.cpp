class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n = changed.size();
        if(n & 1) return {};
        map<int ,int> freq;
        sort(changed.begin(),changed.end());
        for(auto i : changed){
             freq[i]++;
        }
        for(int i=0;i<changed.size();i++){
           if(freq[changed[i]] == 0) continue;

           if(freq[2*changed[i]] == 0) return {};
            
            ans.push_back(changed[i]);
            freq[changed[i]]--;
            freq[2*changed[i]]--;
           
        }
        return ans;
    }
};