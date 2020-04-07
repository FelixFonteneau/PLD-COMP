 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $69, -4(%rbp)
  movl $29, -8(%rbp)
  movl $10, -12(%rbp)
  movl -4(%rbp), %eax
  subl -8(%rbp), %eax
  subl -12(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

