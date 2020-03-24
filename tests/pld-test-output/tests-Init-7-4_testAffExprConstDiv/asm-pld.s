.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
 movl $1, -4(%rbp)
  movl $21(%rbp), %eax
  movl $7(%rbp), %eax
  movl $3(%rbp), %eax
movl $222, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret
