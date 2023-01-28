section .text
	global ft_strcpy

; ft_strcpy(dest == rdi, src = rsi)
ft_strcpy:
	cmp byte [rsi], 0 
	jne _loop
	mov byte [rdi], 0
	mov rax, rdi
	mov rbx, 0
	ret


_loop:
	mov al, [rsi]
	mov [rdi], al
	inc rsi
	inc rdi
	jmp ft_strcpy