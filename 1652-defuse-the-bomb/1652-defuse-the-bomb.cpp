class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> vec(code.size());
        int move=0;
        int count=0,sum=0;
        for(int i=0;i<code.size();i++){
            
             if(k>0){
                move=i+1;
                for(int j=1;j<=k;j++){
                    int k = (i+j)%code.size();
                    sum+=code[k];
                }
             vec[i]=sum;
             sum=0;
             }else if(k<0){
                move=i-1;
                 for(int j=1;j<=-k;j++){
                    int k = i-j;
                    if(k<0)
                        k+=code.size();
                    sum+=code[k];
                }
             vec[i]=sum;
             sum=0;
             }else{
                 return vec;
             }
        }
        return vec;
    }
};