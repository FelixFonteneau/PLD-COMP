 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $1, -4(%rbp)
  jmp .main1

.main1:
  movl -4(%rbp), %eax
  movl %eax, %ebx
  movl $100, %eax
  cmpl %eax, %ebx
  jl .main2
  jge .main3

.main2:
  movl -4(%rbp), %eax
  imul $2, %eax
  movl %eax, -4(%rbp)
  jmp .main1

.main3:
  movl -4(%rbp), %eax

  # epilogue
  popq %rbp
  ret

