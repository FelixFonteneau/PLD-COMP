.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
 movl $1, -4(%rbp)
  movl $69(%rbp), %eax
  subl $29(%rbp), %eax
  subl $10(%rbp), %eax
movl $0, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret
