global ft_strcmp

; ft_strcmp(s1 == rdi, s2 = rsi)
ft_strcmp:
	cmp byte [rdi], 0
	jne _second
	sub rdi, rsi
	mov rax, rdi
	ret

_second:
	cmp byte [rdi], 0
	jne _loop
_loop:
	mov al, [rsi]
	cmp al, [rdi]
	je _increm
	
_increm:
	inc rsi
	inc rdi
