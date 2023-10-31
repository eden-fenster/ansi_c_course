# Title: Lab2       	Filename:
# Author:       	Date:
# Description:
# Input: 
# Output:
################# Data segment #####################
.data

msg1: .asciiz  "\n Please enter a letter a-z \n"




################# Code segment #####################
.text
.globl main
main:	# main program entry

	la $a0,msg1	# put string address into a0
	li $v0,4	          # system call to print
	syscall		# out a string 		
	
	 
	
	

	li $v0, 10	# Exit program
	syscall

