int maxFreqSum(char* s) {
            int vowelfreq=0,consonantfreq=0,count=0,cnt=0;
    int n = strlen(s);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if( (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
                    if(s[i] == s[j]){ count++;}
                }else{
                    if(s[i]==s[j]){ cnt++;}
                }
            }
            if(vowelfreq <count) vowelfreq=count;
            if(consonantfreq<cnt) consonantfreq = cnt;
             cnt=0,count=0;
        }
        return  vowelfreq+consonantfreq;
}