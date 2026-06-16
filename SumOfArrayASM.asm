.code
Summation proc
mov eax,0
cmp edx,0
jle InvalidArraySize
@@: 
add eax,[rcx] ; By default every pointer in Assembly x86 64-bit is 64 bit in size
add rcx,4
dec edx    ;intention is to make the loop run with condition n>=0 , and updation n=n-1
jnz @B   ;jump if value of edx is not zero to the nearest label @@
ret
InvalidArraySize :
ret
Summation endp
end