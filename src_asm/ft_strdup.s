global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc

;char	*ft_strdup(char *src = rdi)

ft_strdup:
    push rdi
    mov rax, rdi
    call ft_strlen
    mov rdi, rax
    call malloc wrt ..plt
    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret
