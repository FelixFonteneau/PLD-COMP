.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $17, -4(%rbp)
  movl $42, -8(%rbp)
  movl $11, -12(%rbp)
  movl -12(%rbp), %eax

  # epilogue
  popq %rbp
  ret

