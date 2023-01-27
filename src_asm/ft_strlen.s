section .text
	global ft_strlen
	global _loop

ft_strlen:
	cmp byte [rdi + rbx], 0 ; cmp the rdi[rbx] rbx is the iterator to '\0'
	jne _loop ; if not equal '\0' jump to _loop
	mov rax, rbx ; mov rbx(i) value to rax because rax is the return value
	mov rbx, 0 ; reset rbx(i) to zero
	ret ; return

_loop:
	inc rbx ; incremente rbx(i + 1)
	jmp ft_strlen ; jump to ft_strlen
