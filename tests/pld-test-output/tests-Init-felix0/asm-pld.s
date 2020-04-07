 .text
 .comm a,4,4
 .global d
 .data 
 .align 4
 .type d, @object
 .size d, 4
d:
 .long 5
 .global i
 .data 
 .align 4
 .type i, @object
 .size i, 4
i:
 .long 3
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $7, a(%rip)
  movl $42, -4(%rbp)
  movl $20, -8(%rbp)
  movl $0, d(%rip)
  movl a(%rip), %eax
  addl -4(%rbp), %eax
  addl -8(%rbp), %eax
  addl d(%rip), %eax
  movl %eax, a(%rip)
  movl a(%rip), %eax

  # epilogue
  popq %rbp
  ret

