# Title:Lab3       	Filename:
# Author:       	Date:
# Description:
# Input: 
# Output:
################# Data segment #####################
.data

msg1: .asciiz  "\n Please enter a char to display\n"
msg2: .asciiz  "\n please enter the num of time to dispaly (0-9)\n"



################# Code segment #####################
.text
.globl main
main:	# main program entry

	la $a0,msg1	# Please enter a char to display
	li $v0,4	          # system call to print
	syscall		# out a string 		
	 
	li $v0,12           #get char from the user
	syscall
	
	move $t1,$v0        #keep the char in a temp ($t1)  
again:	la $a0,msg2	# please enter the num of time to dispaly (0-9)
	li $v0,4	          # system call to print
	syscall		# out a string 	
	 
	
	li $v0, 10	# Exit program
	syscall
