section .text
	global ft_strlen
	global _loop

ft_strlen:
	mov rsi, rdi
	cmp byte [rsi + rbx], 0
	jne _loop
	mov rax, rbx
	ret


_loop:
	mov al, byte [rsi + rbx]
	inc rbx
	jmp ft_strlen
