 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $2, -4(%rbp)
  movl $4, -8(%rbp)
  movl $6, -12(%rbp)
  movl $1, -16(%rbp)
  movl -4(%rbp), %eax
  imul -8(%rbp), %eax
  subl $c/a, %eax
  addl -16(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

