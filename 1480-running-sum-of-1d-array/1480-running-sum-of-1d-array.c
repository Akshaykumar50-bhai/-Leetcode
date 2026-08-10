/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int n, int* returnSize) {
    *returnSize = n;
    int *k=malloc( sizeof(int )*n);
    int sum=0;
    for(int i=0;i<n;i++){
         sum+=nums[i];
         k[i] =sum;
    }
    return k;
    }