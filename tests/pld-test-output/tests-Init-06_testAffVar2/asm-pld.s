 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $42, -4(%rbp)
  movl $100, -8(%rbp)
  movl -8(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax
  addl -8(%rbp), %eax
  movl %eax, -12(%rbp)
  movl -12(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

