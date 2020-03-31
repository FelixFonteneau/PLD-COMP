	.file	"input.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$17, -12(%rbp)
	movl	$42, -8(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L2
	movl	$-5, -12(%rbp)
	jmp	.L3
.L2:
	cmpl	$0, -12(%rbp)
	je	.L3
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
.L3:
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L4
	movl	$1, -4(%rbp)
	jmp	.L5
.L4:
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L6
	movl	$-1, -4(%rbp)
	jmp	.L5
.L6:
	movl	$69, -4(%rbp)
.L5:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
