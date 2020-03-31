.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
<<<<<<< HEAD
  movl $1, -0(%rbp)
  movl -0(%rbp), %eax
=======
  movl $1, -4(%rbp)
  movl -4(%rbp), %eax
>>>>>>> IR integrated for add sub mul par

  # epilogue
  popq %rbp
  ret

