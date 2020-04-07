 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $3, -4(%rbp)
  movl $2, -8(%rbp)
  movl -8(%rbp), %eax
  movl %eax, %ebx
  movl -4(%rbp), %eax
  xorl %ebx, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

