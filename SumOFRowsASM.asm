.code
Sum proc
cmp edx,0
jl InvalidDimensions
cmp r8d,0
jl InvalidDimensions
movsxd rdx,edx
movsxd r8,r8d
mov r10,0
mov r11,0
mov rax,0
mov r12,0
Loop1:
@@:
;Base Address + i*4
add rax,[rcx+r10*4]
inc r10
inc r12
cmp r12,r8
jl @B
mov r12,0
mov [r9],rax
add r9,4
inc r11
cmp r11,rdx
mov rax,0
jl Loop1
mov eax,1
ret
InvalidDimensions:
xor eax,eax
ret
Sum endp
end


