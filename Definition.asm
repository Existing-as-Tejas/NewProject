.code
product proc
mov eax,ecx
imul eax,edx
ret
product endp
quotient proc
mov eax,edx
or eax,eax
jz InvalidDivisor
mov r10d,edx
mov eax,ecx
cdq 
idiv r10d
mov [r8],eax
mov eax,1
mov [r9],edx
InvalidDivisor:
ret
quotient endp
end