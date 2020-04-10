 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -4(%rbp)
  movl $3, -8(%rbp)
  movl -4(%rbp), %eax
  subl $-b, %eax
  movl %eax, -12(%rbp)
  movq -12(%rbp), %rax

  # epilogue
  popq %rbp
  ret

