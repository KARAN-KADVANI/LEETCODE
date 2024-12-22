/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int fact(int n)//used factorial for the purpose of pascal's traingle pattern
{
    int facto=1;//intialising with 1
    for(int i=1 ; i<=n ; i++)
    {
        facto*=i;//this loop will form factorial of a given number n

    }
    return facto;//return factorial value 
} 


int** generate(int numRows, int* returnSize, int** returnColumnSizes) 
{
    int** arr=(int**)malloc(numRows*sizeof(int*));//dynamic memory allocation in 2D array
    
    *returnColumnSizes=(int*)malloc(numRows*sizeof(int));//returnColumnSizes is the array
    //of array for storing number of elements in each row  
    *returnSize=numRows; //total size is equal to number of rows

    for(int i=0 ; i<numRows ; i++)
    {
        arr[i]=(int*)malloc((i+1)*sizeof(int));//dynamic memory
        // allocation for array to store elements of each row 
        //of pascal's triangle.
        (*returnColumnSizes)[i]=i+1;//storing number of elements in each row
        

        for(int j=0 ; j<=i ; j++)
        {
            arr[i][j]=fact(i)/(fact(j)*fact(i-j));//storing arrays in array i.e 2d array

        }
        
    }




return arr;//return the 2D array as a result


}