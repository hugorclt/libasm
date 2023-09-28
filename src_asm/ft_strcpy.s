global ft_strcpy
extern ft_strlen

;char * strcpy( char * dest = rdi, const char * src = rsi )
ft_strcpy:
    push rcx
    sub rcx, rcx
    jmp _loop

_loop:
    cmp [rsi + rcx], byte 0
    je _ret
    mov al, byte [rsi + rcx]
    mov byte [rdi + rcx], al
    inc rcx
    jmp _loop


_ret:
    mov byte [rdi + rcx], 0
    mov rax, rdi
    pop rcx 
    ret

