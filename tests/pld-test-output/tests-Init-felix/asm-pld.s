 .text
 .comm a,4,4
 .comm d,4,4
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

