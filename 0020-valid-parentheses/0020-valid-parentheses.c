int open(char s3){
     return (s3=='{' || s3=='[' ||s3=='(');
}
int compare(char s1,char s2){
    return ((s1=='{' && s2=='}') || (s1=='[' && s2==']') || (s1=='('&& s2==')'));
}
bool isValid(char* s) {
    int top =-1;
    int n = strlen(s);
    char stack[10001];
    for(int i=0;i<n;i++){
        if(open(s[i])){
            stack[++top] = s[i];
        }else{
            if(top==-1){
                return 0;
            }else{
                if(compare(stack[top],s[i])){
                    top--;
                }else{
                    return 0;
                }
            }
        }
    }
    return (top==-1?1:0);
}
 