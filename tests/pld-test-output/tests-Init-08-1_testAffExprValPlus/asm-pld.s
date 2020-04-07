.text
.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $7, -4(%rbp)
  movl $42, -8(%rbp)
  movl $20, -12(%rbp)
  movl -4(%rbp), %eax
  addl -8(%rbp), %eax
  addl -12(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

