.const   ;could not be overwritten 
Array dword 7,15,3,8
n dword ($-Array)/sizeof dword
public n
.data   ;modifiable part
sum dword ?
.code
FetchValue proc
;First checking if index entered  is valid or not
cmp ecx,0
jl InvalidIndex
cmp ecx,[n]
jge InvalidIndex
movsxd rcx,ecx
mov [rsp+8],rcx ;copying i to the home for backup
shl rcx,2
mov r11,offset Array
add r11,rcx
mov eax,[r11]
mov [rdx],eax
mov eax,1
ret
InvalidIndex : 
xor eax,eax
ret
FetchValue endp
end

