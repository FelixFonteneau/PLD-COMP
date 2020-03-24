.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
 movl $100, -4(%rbp)
 movl $100, -8(%rbp)
  movl -4(%rbp), %eax
  subl -8(%rbp), %eax
 movl %eax, -12(%rbp)
  movl -12(%rbp), %eax

  # epilogue
  popq %rbp
  ret
