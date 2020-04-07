 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $42, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

