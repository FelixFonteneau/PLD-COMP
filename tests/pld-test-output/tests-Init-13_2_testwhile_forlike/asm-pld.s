.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $0, -4(%rbp)
  movl $0, -8(%rbp)
  jmp .main1

.main1:
  movl -4(%rbp), %eax
  movl %eax, %ebx
  movl $100, %eax
  cmpl %eax, %ebx
  jle .main2
  jg .main3

.main2:
  movl -8(%rbp), %eax
  addl -4(%rbp), %eax
  movl %eax, -8(%rbp)
  movl -4(%rbp), %eax
  addl $1, %eax
  movl %eax, -4(%rbp)
  jmp .main1

.main3:
  movl -8(%rbp), %eax

  # epilogue
  popq %rbp
  ret

