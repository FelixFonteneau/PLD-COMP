.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl -0(%rbp), %eax

  # epilogue
  popq %rbp
  ret

