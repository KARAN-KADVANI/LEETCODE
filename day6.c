void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int k=m+n-1;
    /*
    the logic behind this question is we will start from back of nums1 array 
    and comparing last non zero element of nums1 array and last element of nums2 array


    after that , the gratesst will be placed at the end of the nums1 array.
    then shift and then recompare in the same way and store.
    */
    while(n>0 && m>0)//upto the end , till n or m becomes zero 
    {
        if(nums1[m-1]>nums2[n-1])
        {
            nums1[k]=nums1[m-1];
            m--;
            k--;       
        }
        else
        {
            nums1[k]=nums2[n-1];
            n--;
            k--;
        }
    }

    /*
    if n becomes zero it means that all elements of the array nums2 are sorted and stored 
    in the nums2 array.

    so , we know that nums1 is already sorted 

    but in case that m becomes zero earlier and n is still non zero so it will need some 
    sortng and storing in nums1 array.
    */

    while(n>0)
    {
        nums1[k]=nums2[n-1];
        n--;//left to right storing the remaining elements in nums1 
        k--;//moving towrds left of array

    }

}