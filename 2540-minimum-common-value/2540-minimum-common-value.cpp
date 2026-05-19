class Solution {
public:
    int getCommon(vector<int>& num1, vector<int>& num2) {
        int j=0,i=0;
        while( i<num1.size() && j<num2.size()){
            if(num1[i] == num2[j]) return num1[i];
            else if(num1[i] > num2[j])j++;
            else i++;
        }
        return -1;
    }
};