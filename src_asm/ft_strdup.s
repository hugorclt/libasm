global ft_strdup
extern _malloc
extern ft_strlen
extern ft_strcpy

ft_strdup:
	call ft_strlen
	mov rdx, rax
	mov r8, rdi
	mov rdi, rax
	call _malloc
	mov rsi, r8
	call ft_strcpy
	ret 

