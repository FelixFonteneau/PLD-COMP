.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
 movl $1, -4(%rbp)
  movl $7(%rbp), %eax
  addl $42(%rbp), %eax
  addl $20(%rbp), %eax
movl $0, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret
