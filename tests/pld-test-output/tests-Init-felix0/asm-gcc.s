	.file	"input.c"
	.text
	.comm	a,4,4
	.comm	b,4,4
	.comm	c,4,4
	.globl	d
	.data
	.align 4
	.type	d, @object
	.size	d, 4
d:
	.long	5
	.globl	i
	.align 4
	.type	i, @object
	.size	i, 4
i:
	.long	3
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
	movl	$7, a(%rip)
	movl	$42, b(%rip)
	movl	$20, c(%rip)
	movl	$0, d(%rip)
	movl	a(%rip), %edx
	movl	b(%rip), %eax
	addl	%eax, %edx
	movl	c(%rip), %eax
	addl	%eax, %edx
	movl	d(%rip), %eax
	addl	%edx, %eax
	movl	%eax, a(%rip)
	movl	a(%rip), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
