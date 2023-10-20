global ft_read
extern __errno_location

;	sys_read: rax	(unsigned int fd : rdi,	const char *buf: rsi,	size_t count: rdx)
ft_read:
	mov rax, 0          ; 0 is syscall value for read
	syscall
	cmp rax, 0
	jl _handle_error ; jump lower --> if left operand of previous function is lower than 0 --> a flag is set to 0 and jl know it have to jump to _handle_error
	ret ; return value in rax


_handle_error:
	neg rax
    push rax
	call __errno_location wrt ..plt
	pop rdi,
	mov [rax], rdi
    mov rax, -1
    ret