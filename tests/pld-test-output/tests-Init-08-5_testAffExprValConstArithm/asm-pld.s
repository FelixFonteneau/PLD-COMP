 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $2, -4(%rbp)
  movl $6, -8(%rbp)
  movl -4(%rbp), %eax
  imul $4, %eax
  subl $c/2, %eax
  addl $1, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

