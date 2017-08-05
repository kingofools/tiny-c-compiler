	.file	"ass1_14CS30017.c"									# source file name (Surya Midatala)
	.section	.rodata											# read-only	data
	.align 8													# aligning with 8-byte boundary
.LC0:															# String literal 1 - used in 1st printf
	.string	"Enter how many elements you want:"
.LC1:															# String literal 2 - used in all scanf
	.string	"%d"
.LC2:															# String literal 3 - used in 2nd printf
	.string	"Enter the %d elements:\n"							
.LC3:															# String literal 4 - used in 3rd printf
	.string	"\nEnter the item to search"						
.LC4:															# String literal 5 - used in 4th printf
	.string	"\n%d found in position: %d\n"						
.LC5:															# String literal 6 - used in 5th printf
	.string	"\n%d inserted in position: %d\n"					 
.LC6:															# String literal 7 - used in 6th printf
	.string	"The list of %d elements:\n"						
.LC7:															# String literal 8 - used in 7th printf
	.string	"%6d"												
	.text														
	.globl	main												# global name of main
	.type	main, @function
main:															# beginning of main
.LFB0:															# local name for main function
	.cfi_startproc												# call frame information
	pushq	%rbp												# saving original base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp											# set start of new stack frame
	.cfi_def_cfa_register 6
	subq	$432, %rsp											# allots memory to rsp
	movq	%fs:40, %rax										# stores value of address fs:40 in rax register
	movq	%rax, -8(%rbp)										# store value of rax at location of rbp - 8
	xorl	%eax, %eax											# set eax as 0
	movl	$.LC0, %edi											# push first argument to first printf function
	call	puts												# call puts to print
	leaq	-432(%rbp), %rax									# rax <-- rbp - 432 (&terms)
	movq	%rax, %rsi 											# stores value of rax in rsi
	movl	$.LC1, %edi											# edi stores the address of the format string of first scanf function
	movl	$0, %eax											# set eax <-- 0
	call	__isoc99_scanf										# Call scanf
	movl	-432(%rbp), %eax									# eax <-- rbp - 432 (eax storing n)
	movl	%eax, %esi											# Stores eax in esi (n)
	movl	$.LC2, %edi											# edi stores address of second printf function
	movl	$0, %eax											# set eax <-- 0
	call	printf												# call printf
	movl	$0, -424(%rbp)										# set rbp - 424 <-- 0
	jmp	.L2 													# jumping to Label .L2				
.L3:
	leaq	-416(%rbp), %rax 									# rax <-- rbp - 416 (&terms)	
	movl	-424(%rbp), %edx									# edx <-- rbp - 432
	movslq	%edx, %rdx 											# rax <-- signextend(eax) 
	salq	$2, %rdx											# rdx <-- rdx << 2
	addq	%rdx, %rax 											# rax <-- rax + rdx
	movq	%rax, %rsi 											# rsi <-- rax
	movl	$.LC1, %edi 										# push the address of format string
	movl	$0, %eax 											# set eax <-- 0 ( i = 0 )
	call	__isoc99_scanf										# call scanf
	addl	$1, -424(%rbp) 										# i++
.L2: 															
	movl	-432(%rbp), %eax 									# eax <-- rbp - 432
	cmpl	%eax, -424(%rbp) 									# if i < n
	jl	.L3 													# goto Label .L3
	movl	-432(%rbp), %edx 									# edx <-- rbp - 432
	leaq	-416(%rbp), %rax 									# rax <-- rbp - 416 (add into array & items)
	movl	%edx, %esi 											# esi <-- edx
	movq	%rax, %rdi 											# rdi <-- rax
	call	inst_sort 											# call insertion sort 
	movl	$.LC3, %edi 										# push first argument to printf
	call	puts 												# calling puts to printf
	leaq	-428(%rbp), %rax 									# rax <-- rbp - 428 (&items)
	movq	%rax, %rsi  										# rsi <-- rax
	movl	$.LC1, %edi 										# push the address of the format string
	movl	$0, %eax 											# set eax <-- 0
	call	__isoc99_scanf 										# call scanf
	movl	-428(%rbp), %edx 									# edx <-- rbp - 428
	movl	-432(%rbp), %ecx 									# ecx <-- rbp - 432
	leaq	-416(%rbp), %rax 									# rax <-- rbp - 416 (&items)
	movl	%ecx, %esi 											# esi <-- ecx
	movq	%rax, %rdi 											# rdi <-- rax
	call	bsearch 											# calling binary search
	movl	%eax, -420(%rbp) 									# rbp - 420 <-- eax
	movl	-420(%rbp), %eax 									# eax <-- rbp - 420
	cltq 														# rax <-- signextend(eax)
	movl	-416(%rbp,%rax,4), %edx 							# edx <-- (rbp - 412 + rax*4)
	movl	-428(%rbp), %eax 									# eax <-- rbp - 428
	cmpl	%eax, %edx 											# if item == a[loc]
	jne	.L4 													# conditional jump to Label .L4
	movl	-420(%rbp), %eax 									# eax <-- rbp - 420									
	leal	1(%rax), %edx 										# edx <-- rax + 1 (&items) (storing loc + 1)
	movl	-428(%rbp), %eax 									# eax <-- rbp - 428
	movl	%eax, %esi 											# esi <-- eax
	movl	$.LC4, %edi 										# edi stores the address of the 4th printf function
	movl	$0, %eax 											# eax <-- 0
	call	printf 												# calling printf function
	jmp	.L5 													# jump to Label .L5
.L4:
	movl	-428(%rbp), %edx 									# edx <-- rbp - 428 (item)
	movl	-432(%rbp), %ecx 									# ecx <-- rbp - 432 (n)
	leaq	-416(%rbp), %rax 									# rax <-- rbp - 416 (&items)
	movl	%ecx, %esi 											# esi <-- ecx (n)
	movq	%rax, %rdi 											# rdi <-- rax
	call	insert 												# 
	movl	%eax, -420(%rbp) 									# (rbp - 420) <-- eax
	movl	-432(%rbp), %eax	 								# eax <-- rbp - 432 (n)
	addl	$1, %eax 											# n++
	movl	%eax, -432(%rbp) 									# (rbp - 420) <-- eax
	movl	-420(%rbp), %eax 									# eax <-- rbp - 420
	leal	1(%rax), %edx 										# edx <-- rax + 1 (&items) (storing loc + 1)
	movl	-428(%rbp), %eax 									# eax <-- rbp - 428
	movl	%eax, %esi 											# esi <-- eax
	movl	$.LC5, %edi 										# edi stores the address of the 5th printf function
	movl	$0, %eax 											# eax <-- 0
	call	printf 												# call printf function
.L5: 											
	movl	-432(%rbp), %eax 									# eax <-- rbp - 432
	movl	%eax, %esi 											# esi <-- eax
	movl	$.LC6, %edi 										# edi stores the address of the 6th printf function
	movl	$0, %eax 											# eax <-- 0
	call	printf 												# call printf
	movl	$0, -424(%rbp) 										# rbp - 420 <-- 0
	jmp	.L6 													# jump to Label .L6
.L7:
	movl	-424(%rbp), %eax 									# eax <-- rbp - 424
	cltq 														# rax <-- signextend(eax)
	movl	-416(%rbp,%rax,4), %eax 							# eax <-- rbp - 416 + 4*rax (eax stores a[i])
	movl	%eax, %esi 											# esi <-- eax
	movl	$.LC7, %edi 										# edi stores the address of printf function
	movl	$0, %eax 											# eax <-- 0
	call	printf 												# call printf 
	addl	$1, -424(%rbp) 										# i++
.L6:
	movl	-432(%rbp), %eax 									# eax <-- rbp - 432
	cmpl	%eax, -424(%rbp) 									# rbp - 424 <-- eax (i < n)
	jl	.L7 													# goto Label .L7
	movl	$10, %edi 											# edi <--10
	call	putchar 											# prints newline from putchar
	movl	$0, %eax 											# eax <-- 0
	movq	-8(%rbp), %rcx 										# rcx <-- rbp - 8
	xorq	%fs:40, %rcx 										
	je	.L9 													# conditional jump to Label .L9
	call	__stack_chk_fail 									# call stack fail check function
.L9:
	leave 														 
	.cfi_def_cfa 7, 8
	ret 														# return to calling function
	.cfi_endproc
.LFE0: 															
	.size	main, .-main
	.globl	inst_sort 											# global name is inst_sort
	.type	inst_sort, @function
inst_sort: 														# beginning of inst_sort function
.LFB1:
	.cfi_startproc 												
	pushq	%rbp 												# saving original base pointer 
	.cfi_def_cfa_offset 16 										# set cfa offset to 15
	.cfi_offset 6, -16 	
	movq	%rsp, %rbp 											# set new base pointer
	.cfi_def_cfa_register 6 									 
	movq	%rdi, -24(%rbp) 									# rbp - 24 <-- rdi ( num [] )
	movl	%esi, -28(%rbp)										# rbp - 28 <-- esi ( n )
	movl	$1, -8(%rbp) 										# rbp -8 <-- 1 ( j = 1)
	jmp	.L11 													# jump to Label .L11 ( for loop )
.L15:
	movl	-8(%rbp), %eax 										# eax <-- rbp - 8 
	cltq 														# rax <-- signextend(eax)
	leaq	0(,%rax,4), %rdx 	                                # rdx <-- 4*rax 
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24 
	addq	%rdx, %rax 											# rax <-- rax + rdx
	movl	(%rax), %eax 										# eax <-- rax
	movl	%eax, -4(%rbp) 										# rbp - 4 <-- eax
	movl	-8(%rbp), %eax 										# eax <-- rbp - 8
	subl	$1, %eax 											# eax <-- eax -1  (j-1)
	movl	%eax, -12(%rbp) 									# rbp - 12 <-- eax  ( i )
	jmp	.L12 													# jump to L12abel .L
.L14:
	movl	-12(%rbp), %eax  									# eax <-- rbp - 12	( i )				
	cltq 														# rax <-- signextend(eax) ( i )
	addq	$1, %rax 											# i + 1
	leaq	0(,%rax,4), %rdx 									# rdx <-- rax*4 ( num[i+1])
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24
	addq	%rax, %rdx 											# rdx <-- rdx + rax 
	movl	-12(%rbp), %eax 									# eax <-- rbp - 12 ( i )
	cltq 														# rax <-- signextend(eax) 
	leaq	0(,%rax,4), %rcx 									# rcx <-- 4*rax (num[i+1])
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24
	addq	%rcx, %rax 											# rax <-- rax + rcx
	movl	(%rax), %eax 										# eax <-- rax
	movl	%eax, (%rdx) 										# rdx <-- eax 
	subl	$1, -12(%rbp) 										# restoring i from i+1
.L12:
	cmpl	$0, -12(%rbp) 										# i >= 0
	js	.L13													# jump to Label .L13 if less than 0 
	movl	-12(%rbp), %eax 									# eax <-- rbp -12
	cltq 														# rax <-- signextend(eax) ( i )
	leaq	0(,%rax,4), %rdx 									# rdx <-- rax*4 ( rdx = num[i] )
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24
	addq	%rdx, %rax 											# rax <-- rdx
	movl	(%rax), %eax 										# eax <-- rax (num[i])
	cmpl	-4(%rbp), %eax 										# k < num[i]
	jg	.L14 													# jump to Label .L14 if k > num[i]
.L13:
	movl	-12(%rbp), %eax 									# eax <-- rbp - 12  ( eax = i )
	cltq 														# rax <-- signextend(eax) ( i )
	addq	$1, %rax 											# i += 1 
	leaq	0(,%rax,4), %rdx 									# rdx <-- 4*rax (num[i])
	movq	-24(%rbp), %rax 									# rax <-- rbp-24
	addq	%rax, %rdx 											# rdx <-- rax + rdx
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4
	movl	%eax, (%rdx) 										# rdx <-- eax
	addl	$1, -8(%rbp) 										# j++
.L11:
	movl	-8(%rbp), %eax 										# eax <-- rbp - 8 (eax = j)
	cmpl	-28(%rbp), %eax 									# j < n
	jl	.L15 													# jump to Label .L15 if j > n
	nop 														
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret 														# return to the calling function
	.cfi_endproc
.LFE1:
	.size	inst_sort, .-inst_sort
	.globl	bsearch 											# global name of bsearch
	.type	bsearch, @function
bsearch:														# beginning of bsearch function
.LFB2: 			
	.cfi_startproc
	pushq	%rbp 												# saving original base pointer to the stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp 											# set new base pointer
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp) 									# rbp - 24 <-- rdi ( a[] )
	movl	%esi, -28(%rbp) 									# rbp - 28 <-- esi ( n )
	movl	%edx, -32(%rbp) 									# rbp - 32 <-- edx ( item )
	movl	$1, -8(%rbp) 										# rbp - 8 <-- 1 (bottom = 1 ) 
	movl	-28(%rbp), %eax 									# eax <-- rbp - 28 ( n )
	movl	%eax, -12(%rbp) 									# rbp - 12 <-- eax ( top = n )
.L20: 	
	movl	-8(%rbp), %edx	 									# edx <-- rbp - 8 ( bottom )
	movl	-12(%rbp), %eax 									# eax <-- rbp - 12 ( top )
	addl	%edx, %eax 											# eax <-- edx +  eax( top + bottom )
	movl	%eax, %edx 											# edx <-- eax ( top + bottom )
	shrl	$31, %edx 											# right shift by 31 bits
	addl	%edx, %eax 											# eax <-- eax + edx 
	sarl	%eax 												# eax <-- eax << 2
	movl	%eax, -4(%rbp) 										# rbp - 4 <-- eax ( mid )
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4 ( mid )
	cltq 														# rax <-- signextend(eax) ( i )
	leaq	0(,%rax,4), %rdx 									# rdx <--4*rax 
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24 ( a[] )
	addq	%rdx, %rax 											# rax <-- rax + rdx ( a[mid] )
	movl	(%rax), %eax 										# eax <-- rax					
	cmpl	-32(%rbp), %eax										# item < a[mid]
	jle	.L17 													# jump to Label .L17 if a[mid] <= item
	movl	-4(%rbp), %eax 										# eax <-- rbp -4 ( eax = mid)
	subl	$1, %eax 											# eax <-- eax - 1 ( mid - 1 )
	movl	%eax, -12(%rbp) 									# rbp <-- eax (top = mid -1)
	jmp	.L18 													# jump to Label .L18
.L17:
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4( mid )
	cltq 												  	  	# rax <-- signextend(eax)
	leaq	0(,%rax,4), %rdx 									# rdx <-- 4*rax ( a[] )
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24 ( a[] )
	addq	%rdx, %rax 											# rax <-- rax + rdx ( rax = a[mid] )
	movl	(%rax), %eax 		 							 	# eax <-- rax (a[mid])
	cmpl	-32(%rbp), %eax										# item > a[mid]
	jge	.L18 													# jump to Label .L18 if a[mid] >= item
	movl	-4(%rbp), %eax										# eax <-- rbp - 4
	addl	$1, %eax 											# mid + 1
	movl	%eax, -8(%rbp) 										# bottom = mid + 1 
.L18:
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4 (mid)
	cltq 														# rax <-- signextend(eax) ( mid )
	leaq	0(,%rax,4), %rdx 									# rdx <-- 4*rax
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24 (a[]) 
	addq	%rdx, %rax 											# rax <-- rax + rdx (a[mid])
	movl	(%rax), %eax 										# eax <-- rax ( a[mid] )
	cmpl	-32(%rbp), %eax 									# item != a[mid]
	je	.L19 													# jump to .L19 if item == a[mid]
	movl	-8(%rbp), %eax 										# eax <-- rbp - 8 ( bottom )
	cmpl	-12(%rbp), %eax 									# bottom <= top
	jle	.L20 													# jump to bottom <= top
.L19:
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4 ( mid )
	popq	%rbp 									 
	.cfi_def_cfa 7, 8
	ret 														# returns to the caller function
	.cfi_endproc
.LFE2:
	.size	bsearch, .-bsearch
	.globl	insert 												# global name for insert
	.type	insert, @function
insert: 														# beginning of insert function
.LFB3:
	.cfi_startproc
	pushq	%rbp 								    			# saving original base pointer to stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp 											# set new base pointer
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp) 									# rbp - 24 <-- rdi ( num[] )
	movl	%esi, -28(%rbp)										# rbp - 28 <-- esi ( n )
	movl	%edx, -32(%rbp)										# rbp - 32 <-- edx ( k )
	movl	-28(%rbp), %eax 									# eax <-- rbp - 28 ( n )
	subl	$1, %eax 											# eax <-- n-1 (n-1)
	movl	%eax, -4(%rbp) 										# rbp - 4 <-- eax (i=  n-1)
	jmp	.L23 													# jump to Label .L23
.L25: 	
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4  ( i )
	cltq 														# rax <-- signextend(eax) ( i )
	addq	$1, %rax 											# i + 1
	leaq	0(,%rax,4), %rdx 									# rdx <-- rbp -24 ( i+1 )
	movq	-24(%rbp), %rax 									# rax <-- num[]
	addq	%rax, %rdx 											# rdx <-- num[i+1]
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4 (i)
	cltq 														# rax <-- signextend(eax) ( i )
	leaq	0(,%rax,4), %rcx 									# rcx <-- 4*i
	movq	-24(%rbp), %rax 									# rax <-- rbp -24 ( num[] )
	addq	%rcx, %rax 									 		# rax <-- num[i]
	movl	(%rax), %eax 								  		# eax <-- num[i]
	movl	%eax, (%rdx) 										# rdx <-- eax ( num[i+1] = num[i])
	subl	$1, -4(%rbp) 										# restoring i from i + 1 
.L23:
	cmpl	$0, -4(%rbp) 										# i >= 0
	js	.L24 													# jump to Label .L24 if i < 0
	movl	-4(%rbp), %eax 										# eax <-- rbp - 4 ( i ) 
	cltq 														# rax <-- signextend(eax) ( i )
	leaq	0(,%rax,4), %rdx 									# rdx <-- 4*rax ( num[i] )
	movq	-24(%rbp), %rax 									# rax <-- rbp - 24  (num[])
	addq	%rdx, %rax 											# rax <-- rax + rdx ( num[i])
	movl	(%rax), %eax 										# eax <-- num[i]
	cmpl	-32(%rbp), %eax 									# k > num[i] 
	jg	.L25 													# jump to Label .L25 if k > num[i]
.L24:
	movl	-4(%rbp), %eax 			 							# eax <-- rbp - 4 ( i )
	cltq 														# rax <-- signextend(eax) ( i )
	addq	$1, %rax 											# rax <-- rax + 1 
	leaq	0(,%rax,4), %rdx 									# rdx <-- 4*(i+1)
	movq	-24(%rbp), %rax 									# rax <-- num[]
	addq	%rax, %rdx 											# rdx <-- rdx + rax (num[i+1])
	movl	-32(%rbp), %eax  									# eax <-- rbp - 32 (k)
	movl	%eax, (%rdx) 										# rdx <-- eax ( k )
	movl	-4(%rbp), %eax                                     	# eax <-- rbp - 4 ( i )
	addl	$1, %eax 											# eax <-- eax + 1 ( i + 1 )
	popq	%rbp 												# popping base pointer from stack	
	.cfi_def_cfa 7, 8 												
	ret 														# returns to the caller function
	.cfi_endproc
.LFE3:
	.size	insert, .-insert
	.ident	"GCC: (Ubuntu 5.3.1-14ubuntu2) 5.3.1 20160413"
	.section	.note.GNU-stack,"",@progbits
