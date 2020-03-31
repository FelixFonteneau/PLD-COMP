.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $17, -4(%rbp)
  movl $42, -8(%rbp)
  movl -4(%rbp), %eax
  movl %eax, %ebx
  movl -8(%rbp), %eax
  cmp_eq %eax, %ebx
