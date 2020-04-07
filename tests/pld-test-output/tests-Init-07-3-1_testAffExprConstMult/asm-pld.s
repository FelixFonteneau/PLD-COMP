.text
.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -4(%rbp)
  movl $2, %eax
  imul $3, %eax
  imul $4, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

