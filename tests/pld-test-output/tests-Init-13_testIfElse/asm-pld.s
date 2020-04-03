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
  cmp_lt %eax, %ebx
  jmp .main1

.main1:
  movl -8(%rbp), %eax
  movl %eax, -4(%rbp)
  jmp .main3

.main2:
  movl -4(%rbp), %eax
  movl %eax, -8(%rbp)
  jmp .main3

.main3:
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

