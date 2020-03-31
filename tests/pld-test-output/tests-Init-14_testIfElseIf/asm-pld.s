.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
<<<<<<< HEAD
  movl $17, -0(%rbp)
  movl $42, -4(%rbp)
  movl -8(%rbp), %eax
=======
  movl -12(%rbp), %eax
>>>>>>> IR integrated for add sub mul par

  # epilogue
  popq %rbp
  ret

