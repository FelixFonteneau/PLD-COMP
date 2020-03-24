.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
  movl $1(%rbp), %eax
 movl %eax, -4(%rbp)
  movl $3(%rbp), %eax
  subl -4(%rbp), %eax
movl $0, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret
