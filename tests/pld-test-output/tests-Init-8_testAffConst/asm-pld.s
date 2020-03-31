.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
<<<<<<< HEAD
  movl $0, -0(%rbp)
  movl $69, -0(%rbp)
  movl -0(%rbp), %eax
=======
  movl $0, -4(%rbp)
  movl -4(%rbp), %eax
>>>>>>> IR integrated for add sub mul par

  # epilogue
  popq %rbp
  ret

