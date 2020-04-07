.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $21, -4(%rbp)
  movl $7, -8(%rbp)
  movl $3, -12(%rbp)
  movl -4(%rbp), %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

