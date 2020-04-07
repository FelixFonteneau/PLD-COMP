.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -4(%rbp)
  movl $2, %eax
  movl %eax, %ebx
  movl $3, %eax
  andl %ebx, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

