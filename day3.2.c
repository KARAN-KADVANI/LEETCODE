


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

        //every first and last element is 1.
        arr[i][0]=1;
        arr[i][i]=1;
        

        for(int j=1 ; j<i ; j++)
        {
            arr[i][j]= arr[i-1][j-1]+arr[i-1][j];//understood this logic after seeing solution
//before seeing solution there's another logic which is factorial method but it is not passing all test cases due to data overflow.
        }
        
    }




return arr;//return the 2D array as a result


}