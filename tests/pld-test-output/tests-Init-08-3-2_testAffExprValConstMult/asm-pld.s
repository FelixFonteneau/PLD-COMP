.text
.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $2, -4(%rbp)
  movl $4, -8(%rbp)
  movl -4(%rbp), %eax
  movl $3, %ebx
  imul -8(%rbp), %ebx
  imul %ebx, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

