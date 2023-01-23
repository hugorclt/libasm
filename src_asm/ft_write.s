section .text
	global ft_write
	global _handle_error

; ft_write(fd == rdi, str = rsi, len = rdx)
ft_write:
	mov rax, 1 ; mov write to rax register 
	syscall ; execute rax containing write
	cmp rax, 0 ; cmp return of function with 0
	jl _handle_error ; jump lower --> if left operand of previous function is lower than 0 --> a flag is set to 0 and jl know it have to jump to _handle_error
	ret ; return value in rax

_handle_error:
	mov rax, -1
	ret