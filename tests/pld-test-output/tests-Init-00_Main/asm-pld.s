 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $8, %eax

  # epilogue
  popq %rbp
  ret

