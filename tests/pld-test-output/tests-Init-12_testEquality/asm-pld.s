.text 
.global main
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret
