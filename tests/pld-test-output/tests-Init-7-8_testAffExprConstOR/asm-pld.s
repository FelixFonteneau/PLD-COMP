.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -0(%rbp)
  movl $3, -0(%rbp)
  movl -0(%rbp), %eax

  # epilogue
  popq %rbp
  ret

