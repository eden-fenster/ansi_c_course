#include "mymat.h"
#include <stdlib.h>
#define SIZE 4
typedef struct mat
{
    float mat[SIZE][SIZE];
}mat;
/* Reads in matrix */
void read_mat(mat name[][], float numbers[][])
{
    /* Loop over the matrix */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Insert numbers */   
            name[i][j] = numbers[i][j];
            /* Print */
            printf ("%f is in array in location %d, %d\n", numbers[i][j], i, j);
        }
    }
}
/* Prints matrix */ 
void print_mat(mat name[][])
{
    /* Loop over the matrix */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Print */
            printf ("%f\n", numbers[i][j]);
        }
    }
}
/* Adds 2 matrixes and puts them in third */
void add_mat(mat one[][], mat two[][], mat three[][])
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Add and put in third matrix */
            three[i][j] = one[i][j] + two[i][j];
        }
    }

}
/* Subtracts 2 matrixes and puts them in third */
void sub_mat(mat one[][], mat two[][], mat three[][])
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Subtract and put in third matrix */
            three[i][j] = one[i][j] - two[i][j];
        }
    }


}
/* Multiplies 2 matrixes and puts them in third */
void mul_mat(mat one[][], mat two[][], mat three[][])
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Multiply and put in third matrix */
            three[i][j] = one[i][j] * two[i][j];
        }
    }


}
/* Multiplies matrix with number and puts it in second */
void mul_scalar(mat one[][], float number, mat two[][])
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Multiply and put in second matrix */
            two[i][j] = one[i][j] * number;
        }
    }



}
/* Transpose and store in second */
void trans_mat(mat one[][], mat two[][])
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j, temp;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Switching between the two */
            temp = matrix[i][j];  
            matrix[i][j] = matrix[j][i];  
            matrix[j][i] = temp;  
        }
    }

}
/* Stop program*/
void stop()
{
    exit(0);
}
