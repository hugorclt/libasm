global ft_strlen

; ft_strlen(str == rdi)

ft_strlen:
    push rbx, ;save value of rbx for the end
    sub rbx, rbx ; put rbx to 0, same than mov rbx 0 // THE MOST IMPORTANT THING LOL
    jmp _loop ; -> go to _loop

_loop:
    cmp  BYTE [rdi + rbx], 0 ;str[i] == 0
    jne  _incrementation ; jne == jump if not equal
    mov  rax, rbx ; mov i to return value
    pop rbx, ; restore old value of rbx
    ret ; return 
_incrementation:
    inc rbx ; increm rbx --> i + 1
    jmp  _loop


