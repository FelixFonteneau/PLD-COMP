 .text
 .global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  subq $32, %rsp
  movl $97, -4(%rbp)
  movl -4(%rbp), %edi
  callq putchar
  movl -4(%rbp), %edi
  callq putchar
  movl -4(%rbp), %edi
  callq putchar
  movl -4(%rbp), %edi
  callq putchar
  movl -4(%rbp), %edi
  callq putchar
  movl -4(%rbp), %edi
  callq putchar
  movl -4(%rbp), %edi
  callq putchar
  movq $0, %rax
  addq $32, %rsp

  # epilogue
  popq %rbp
  ret

