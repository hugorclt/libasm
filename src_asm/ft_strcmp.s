global ft_strcmp

;int strcmp(const char *s1 == rdi, const char *s2 == rsi)
ft_strcmp:
    push rbx
    sub rbx, rbx
    jmp _loop
    
_loop:
    cmp [rdi + rbx], byte 0
    je _ret
    cmp [rsi + rbx], byte 0
    je _ret
    mov al, [rdi + rbx]
    cmp al, byte [rsi + rbx] ;; can't compare cmp [rdi + rbx], [rsi + rbx] why ??? this is so weird
    jne _ret
    inc rbx
    jmp _loop

_ret:
    movzx rax, byte [rsi + rbx] ;;movzx permit to move value from value from little regiter here 8bits to another register with more size here rax 64bits
    movzx rdx, byte [rdi, rbx] ;; typically it fill the rest of the register with 0
    sub rax, rdx
    pop rbx
    ret
