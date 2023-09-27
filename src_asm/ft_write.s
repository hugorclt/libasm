global ft_write

; ft_write(fd == rdi, str = rsi, len = rdx)
ft_write:
	mov rax, 1 ; mov write to rax register 
	syscall ; execute rax containing write
	ret ; return value