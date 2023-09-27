global ft_strcpy

; ft_strlen(dest == rdi, src == rsi)
ft_strcpy:
    push rbx
    sub rbx, rbx
    jmp _loop
    mov al, 0
    mov [rdi + rbx], 0
    mov rax, rdi
    pop rbx
    ret
    
_loop:
    cmp BYTE [rsi + rbx], 0
    jne _incrementation
    

_incrementation:
    mov al, [rsi + rbx]
    mov [rdi + rbx], al
    inc rbx
    jmp _loop
