/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
       
    int i = 0;
     
    int *a =(int*)calloc(right-left,sizeof(int ));
      
    
    while(left<=right){
          
        int num = left;
        int flag=1;
        while(num != 0){
           int temp = num % 10;
           if(temp==0){
            flag = 0 ;
            break;
           }
           else if(left % temp==0 ){
                num/=10;
            }
            else {
                flag=0;
                break;
            }

        }
        if(flag==1){
      
      a[i++] = left; 
        }

     left++;
    }
    *returnSize = i;
    return a;
}
  