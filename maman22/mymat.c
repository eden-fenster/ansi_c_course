#include "mymat.h"
#include <stdlib.h>
#define SIZE 4
typedef struct mat
{
    double mat[SIZE][SIZE];
}mat;
/* Reads in matrix */
void read_mat(mat *name, double numbers[][])
{
    /* Loop over the matrix */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Insert numbers */   
            name -> mat[i][j] = numbers[i][j];
        }
    }
}
/* Prints matrix */ 
void print_mat(mat *name)
{
    /* Loop over the matrix */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Print */
            printf ("%f\n", name -> mat[i][j]);
        }
    }
}
/* Adds 2 matrixes and puts them in third */
void add_mat(mat *one, mat *two, mat *three)
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Add and put in third matrix */
            three ->mat[i][j] = one -> mat[i][j] + two -> mat[i][j];
        }
    }

}
/* Subtracts 2 matrixes and puts them in third */
void sub_mat(mat *one, mat *two, mat *three)
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Subtract and put in third matrix */
            three ->mat[i][j] = one -> mat[i][j] - two -> mat[i][j];
        }
    }


}
/* Multiplies 2 matrixes and puts them in third */
void mul_mat(mat *one, mat *two, mat *three)
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Multiply and put in third matrix */
            three ->mat[i][j] = one -> mat[i][j] * two -> mat[i][j];
        }
    }


}
/* Multiplies matrix with number and puts it in second */
void mul_scalar(mat *one, float number, mat *two)
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Multiply and put in second matrix */
            two -> mat[i][j] = one -> mat[i][j] * number;
        }
    }



}
/* Transpose and store in second */
void trans_mat(mat *one, mat *two)
{
    /* Loop over the matrixes */
    int row, col = SIZE;
    int i, j;
    double temp;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            /* Switching between the two */
            temp = one -> mat[i][j];  
            one -> mat[i][j] = two -> mat[j][i];  
            two -> mat[j][i] = temp;  
        }
    }

}
/* Stop program*/
void stop()
{
    exit(0);
}
