.text
.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
  movl $42, %eax

  # epilogue
  popq %rbp
  ret

