.text 
.global main 
main:
.main0:
  #prologue
  pushq %rbp
  movq %rsp, %rbp
<<<<<<< HEAD
  movl $1, -0(%rbp)
  movl $2, -4(%rbp)
  movl $3, -8(%rbp)
  movl -0(%rbp), %eax
=======
  movl $1, -4(%rbp)
  movl $2, -8(%rbp)
  movl $3, -12(%rbp)
  movl -4(%rbp), %eax
>>>>>>> IR integrated for add sub mul par

  # epilogue
  popq %rbp
  ret

