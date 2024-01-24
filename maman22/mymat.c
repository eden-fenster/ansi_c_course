#include "mymat.h"
#include <stdlib.h>
#define SIZE 4
typedef struct mat
{
    float mat[SIZE][SIZE];
}mat;
/* Reads in matrix */
mat read_mat(char name, float numbers[])
{
    /* Loop over the matrix */
    /* Insert numbers */   
}
/* Prints matrix */ 
mat print_mat(char name)
{
    /* Loop over the matrix */
    /* Print */
}
/* Adds 2 matrixes and puts them in third */
mat add_mat(char name_one, char name_two, char name_three)
{
    /* Loop over the matrixes */
    /* Add */
    /* Put in third matrix */

}
/* Subtracts 2 matrixes and puts them in third */
mat sub_mat(char name_one, char name_two, char name_three)
{
    /* Loop over the matrixes */
    /* Subtract */
    /* Put in third matrix */

}
/* Multiplies 2 matrixes and puts them in third */
mat mul_mat(char name_one, char name_two, char name_three)
{
    /* Loop over the matrixes */
    /* Multiply */
    /* Put in third matrix */

}
/* Multiplies matrix with number and puts it in second */
mat mul_scalar(char name_one, char name_two, float number)
{
    /* Loop over matrix */
    /* Multiply by number */
    /* Put in other matrix */


}
/* Transpose and store in second */
mat trans_mat(char name_one, char name_two)
{

}
/* Stop program*/
mat stop()
{
    exit(0);
}
