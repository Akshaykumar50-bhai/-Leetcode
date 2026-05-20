class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> c;
        int cnt = 0;
        int k = 0;
        while(k <A.size() ){
         for(int i=k;i>=0;i--){
            for(int j=0;j<=k;j++){
                if(A[j] == B[i]) cnt++;
            }
         }
         c.push_back(cnt);
         k++,cnt=0;
        }
        return c;
         
 }
};