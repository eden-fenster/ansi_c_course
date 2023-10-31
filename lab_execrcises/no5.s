# Title: lab5       	 Filename:
# Author:      ID:    	  Date:
# Description: String and ASCII games
# Input: 
# Output:
################# Data segment #####################
.data
buf:    .space    19
str:	.asciiz "Please enter a string\n"
msg1:   .asciiz "\n The swap string is:\n"
msg2:   .asciiz "\n The reverse string is:\n"
msg3:   .asciiz "\n The number of <a> in the string is: " 
msg4:   .asciiz "\n The number of <ab> in the string is: "         
msg5:   .asciiz "\n The number of <abc> in the string is: "
     

################# Code segment #####################
.text
.globl main
main:	# main program entry
		
	li $v0,4
	la $a0,str     #"please enter a string"
	syscall

##########################################
# get string from the user (syscall 8)
##########################################
	li $a1,19
	la $a0,buf
	li $v0,8
	syscall
								
################################################
#1) Swap from big --> small , small --> big
#################################################
		
	li $v0,4
	la $a0,msg1     #"The swap string is:"
	syscall
	
	
	
	
	
################################################
#2) print the string reverse 
#################################################
	
	
################################################
#3) count the number of <a> in the string 
#################################################	
	
	
		
################################################
#4) count the number of <ab> in the string 
#################################################	
	
	
			
################################################
#5) count the number of <abc> in the string 
#################################################	
	
	
			
		
	
	
	
	
	
	


	
	
	
	

		
	
			
	

exit:
	li $v0,10
	syscall


