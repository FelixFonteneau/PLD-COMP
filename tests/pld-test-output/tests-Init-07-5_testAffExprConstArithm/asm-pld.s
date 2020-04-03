.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -4(%rbp)
  movl $2, %eax
  imul $4, %eax
  movl $6, %ebx
  imul $2, %ebx
  subl %ebx, %eax
  addl $1, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

