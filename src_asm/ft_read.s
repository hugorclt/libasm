section .text
	global ft_read

; ft_read(fd == rdi, buf = rsi, len = rdx)
ft_read:
	mov rax, 0 ; mov read syscall to rax register
	syscall ; execute syscall contained in rax
	ret ; return value in rax