.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $100, -4(%rbp)
  movl $100, -8(%rbp)
  movl -4(%rbp), %eax
  subl $10, %eax
  movl $2, %ebx
  imul -8(%rbp), %ebx
  addl %ebx, %eax
  movl %eax, -12(%rbp)
  movl -12(%rbp), %eax

  # epilogue
  popq %rbp
  ret

