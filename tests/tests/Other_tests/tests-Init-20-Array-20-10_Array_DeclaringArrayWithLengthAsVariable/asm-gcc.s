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
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rcx
	movl	$8, -32(%rbp)
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -24(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	movslq	%eax, %rdx
	movq	%rdx, %rsi
	movl	$0, %edi
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -16(%rbp)
	movl	$2, -28(%rbp)
	movq	-16(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movl	$6, 4(%rax)
	movl	-28(%rbp), %eax
	leal	6(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, 8(%rax)
	movq	-16(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movq	%rcx, %rsp
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
