section .text
	global ft_read
	global _handle_error

; ft_read(fd == rdi, buf = rsi, len = rdx)
ft_read:
	mov rax, 0 ; mov read syscall to rax register
	syscall ; execute syscall contained in rax
	cmp rax, 0 ; cmp return of function with 0
	jl _handle_error ; jump to handle error if rax is lower than zero
	ret ; return value of rax

_handle_error: ; same than ft_write handling
	neg rax
	mov rdi, rax
	call __errno_location
	mov [rax], rdi
	mov rax, -1
	ret