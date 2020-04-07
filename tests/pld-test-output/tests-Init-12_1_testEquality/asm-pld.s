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
  cmpl %eax, %ebx
  je .main1
  jne .main2

.main1:
  movl $69, -4(%rbp)
  jmp .main2

.main2:
  movl -4(%rbp), %eax
  movl %eax, %ebx
  movl -8(%rbp), %eax
  cmpl %eax, %ebx
  je .main4
  jne .main3

.main3:
  movl $12, -4(%rbp)
  jmp .main4

.main4:
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

