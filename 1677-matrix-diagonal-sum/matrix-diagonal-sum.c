 int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;
    
    for (int i = 0; i < matSize; i++) {
        // Primary diagonal element
        sum += mat[i][i];
        
        // Secondary diagonal element
        sum += mat[i][matSize - 1 - i];
    }
    
    // If matSize is odd, subtract the middle element (counted twice)
    if (matSize % 2 == 1) {
        sum -= mat[matSize / 2][matSize / 2];
    }
    
    return sum;
}

