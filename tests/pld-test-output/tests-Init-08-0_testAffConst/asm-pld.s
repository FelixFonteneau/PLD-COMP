 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $0, -4(%rbp)
  movl $69, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

