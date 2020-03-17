.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
 movl $42, -1(%rbp)
 movl $100, -5(%rbp)
 movl -5(%rbp), %eax
 movl %eax, -1(%rbp)
  movl -1(%rbp), %eax

  # epilogue
  popq %rbp
  ret
