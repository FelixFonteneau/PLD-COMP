 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -4(%rbp)
  movl $2, -8(%rbp)
  movl $3, -12(%rbp)
  movl -4(%rbp), %eax
  imul -8(%rbp), %eax
  imul -12(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

