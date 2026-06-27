.code
Maximum proc
mov eax,ecx
cmp eax,edx
jge CompareAFurther
cmp edx,r8d
jge MaxIsB
mov eax,r8d
CompareAFurther:
cmp eax,r8d
jge MaxisA
mov eax,r8d
MaxIsA:
ret
MaxIsB:
mov eax,edx
ret
Maximum endp
end

