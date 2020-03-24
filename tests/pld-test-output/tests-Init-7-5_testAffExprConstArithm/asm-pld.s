.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
 movl $1, -4(%rbp)
  movl $2(%rbp), %eax
  movl $4(%rbp), %eax
  subl $6(%rbp), %eax
  addl $1(%rbp), %eax
movl $0, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret
