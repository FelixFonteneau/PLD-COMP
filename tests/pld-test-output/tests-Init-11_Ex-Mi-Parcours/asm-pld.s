.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $17, -4(%rbp)
  movl $42, -8(%rbp)
  movl -4(%rbp), %eax
  imul -4(%rbp), %eax
  movl -8(%rbp), %ebx
  imul -8(%rbp), %ebx
  addl %ebx, %eax
  addl $1, %eax
  movl %eax, -12(%rbp)
  movl -12(%rbp), %eax

  # epilogue
  popq %rbp
  ret

