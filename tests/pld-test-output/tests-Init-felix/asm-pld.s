.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $7, a(%rbp)
  movl $42, -4(%rbp)
  movl $20, -8(%rbp)
  movl $0, d(%rbp)
  movl a(%rbp), %eax
  addl -4(%rbp), %eax
  addl -8(%rbp), %eax
  addl d(%rbp), %eax
  movl %eax, a(%rbp)
  movl a(%rbp), %eax

  # epilogue
  popq %rbp
  ret

