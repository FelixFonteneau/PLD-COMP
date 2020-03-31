.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $17, -0(%rbp)
  movl $42, -4(%rbp)
  movl -8(%rbp), %eax

  # epilogue
  popq %rbp
  ret

