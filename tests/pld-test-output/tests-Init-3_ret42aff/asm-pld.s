.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
<<<<<<< HEAD
  movl $42, -0(%rbp)
  movl -0(%rbp), %eax
=======
  movl $42, -4(%rbp)
  movl -4(%rbp), %eax
>>>>>>> IR integrated for add sub mul par

  # epilogue
  popq %rbp
  ret

