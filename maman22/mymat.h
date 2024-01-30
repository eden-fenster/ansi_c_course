typedef struct mat; /* The matrix where the numbers are stored */
void read_mat(mat name[][], float numbers[][]); /* Reads in matrix */
void print_mat(mat name[][]); /* Prints matrix */
void add_mat(mat one[][], mat two[][], mat three[][]); /* Adds 2 matrixes and puts them in third */
void sub_mat(mat one[][], mat two[][], mat three[][]); /* Subtracts 2 matrixes and puts them in third */
void mul_mat(mat one[][], mat two[][], mat three[][]); /* Multiplies 2 matrixes and puts them in third */
void mul_scalar(mat one[][], float num, mat two[][]); /* Multiplies matrix with number and puts it in second */
void trans_mat(mat one[][], mat two[][]); /* Transpose and store in second */
void stop(); /* Stop program*/


 

