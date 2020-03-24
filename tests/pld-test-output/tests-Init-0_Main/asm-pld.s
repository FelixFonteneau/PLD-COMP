.text 
.global main 
main: 
  # prologue
  pushq %rbp
  movq %rsp, %rbp

  # body 
  movl $8, %eax

  # epilogue
  popq %rbp
  ret
