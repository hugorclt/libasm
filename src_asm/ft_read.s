global ft_write

;	sys_read: rax	(unsigned int fd : rdi,	const char *buf: rsi,	size_t count: rdx)
ft_write:
	mov rax, 0          ; 0 is syscall value for read
	syscall
	ret