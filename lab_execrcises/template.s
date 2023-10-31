# Title:        	 Filename:
# Author:    ID:    	Date:
# Description:
# Input: 
# Output:
################# Data segment #####################
.data
################# Code segment #####################
.text
.globl main
main:	# main program entry
 
 li $v0, 10	# Exit program
syscall
