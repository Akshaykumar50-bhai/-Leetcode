int minimumRecolors(char* blocks, int k) {
    int n = strlen(blocks);
    int s=0;
    int c=0;
    int count=100;
    while(k<=n){
        for(int j=s;j<k;j++){
            if(blocks[j]=='W'){
                c++;
            }
        }
        if(count>c){
            count=c;
        }
        c=0;
        s =s+1;
        k =k+1;
    }
     return count;
}