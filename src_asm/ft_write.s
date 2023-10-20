global ft_write
extern __errno_location

; ft_write(fd == rdi, str = rsi, len = rdx)
ft_write:
	mov rax, 1 ; mov write to rax register 
	syscall ; execute rax containing write
	cmp rax, 0
	jl _handle_error
	ret ; return value

_handle_error:
	neg rax
    push rax
	call __errno_location wrt ..plt
	pop rdi,
	mov [rax], rdi
    mov rax, -1
    ret