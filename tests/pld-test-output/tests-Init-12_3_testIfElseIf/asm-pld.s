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
  jle .main2
  jg .main1

.main1:
  movl $5, %eax
  negl %eax
  movl %eax, -4(%rbp)
  jmp .main4

.main2:
  movl -4(%rbp), %eax
  movl %eax, %ebx
  movl $0, %eax
  cmpl %eax, %ebx
  je .main4
  jne .main3

.main3:
  movl -4(%rbp), %eax
  movl %eax, -8(%rbp)
  jmp .main4

.main4:
  movl -4(%rbp), %eax
  movl %eax, %ebx
  movl -8(%rbp), %eax
  cmpl %eax, %ebx
  jle .main6
  jg .main5

.main5:
  movl $1, -12(%rbp)
  jmp .main9

.main6:
  movl -8(%rbp), %eax
  movl %eax, %ebx
  movl -4(%rbp), %eax
  cmpl %eax, %ebx
  jle .main8
  jg .main7

.main7:
  movl $1, %eax
  negl %eax
  movl %eax, -12(%rbp)
  jmp .main9

.main8:
  movl $69, -12(%rbp)
  jmp .main9

.main9:
  movl -12(%rbp), %eax

  # epilogue
  popq %rbp
  ret

