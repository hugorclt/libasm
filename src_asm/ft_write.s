global ft_write
extern __errno_location

; ft_write(fd == rdi, str = rsi, len = rdx)
ft_write:
	mov rax, 1 ; mov write to rax register 
	syscall ; execute rax containing write
	cmp rax, 0 ; cmp return of function with 0
	jl _handle_error ; jump lower --> if left operand of previous function is lower than 0 --> a flag is set to 0 and jl know it have to jump to _handle_error
	ret ; return value in rax

_handle_error:
	neg rax ; negate rax to obtain absolute value of the return of write
	mov rdi, rax ; move rax to rdi to save it ;;;; possibly dangerous cuz rdi is a register designed to be the first parameter prefer push the result on the stack to save it and pop it later
				; but this solution is i supposed more faster because rdi is on the cpu so it didn't have to go copy it on the stack
	call __errno_location ; call errno_location with rax value to return the address of rax
	mov [rax], rdi ; set the value saved in rdi at the address of rax --> containing the address of errno
	mov rax, -1 ; set return value to -1 so that ft_write can return -1 
	ret