.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $42,, -0(%rbp)
  movl $100,, -4(%rbp)
  movl -4(%rbp), %eax
  movl %eax, -0(%rbp)
  movl -0(%rbp), %eax

  # epilogue
  popq %rbp
  ret

