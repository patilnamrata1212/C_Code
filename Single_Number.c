int singleNumber(int* nums, int numsSize){
    int result=0;
    for(int i=0;i<numsSize;i++)
    {
        result ^= nums[i]; 
    }
    return result;
}
int main()
{
        int ar[] = {2, 3, 5, 4, 5, 3, 4};
        int n = sizeof(ar) / sizeof(ar[0]);
        cout << "Element occurring once is "
             << singleNumber(ar, n);
        return 0;
}
