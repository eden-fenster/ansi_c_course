typedef struct mat; /* The matrix where the numbers are stored */
mat read_mat(char name, float numbers[]); /* Reads in matrix */
mat print_mat(char name); /* Prints matrix */
mat add_mat(char name_one, char name_two, char name_three); /* Adds 2 matrixes and puts them in third */
mat sub_mat(char name_one, char name_two, char name_three); /* Subtracts 2 matrixes and puts them in third */
mat mul_mat(char name_one, char name_two, char name_three); /* Multiplies 2 matrixes and puts them in third */
mat mul_scalar(char name_one, char name_two, float number); /* Multiplies matrix with number and puts it in second */
mat trans_mat(char name_one, char name_two); /* Transpose and store in second */
mat stop(); /* Stop program*/


 

