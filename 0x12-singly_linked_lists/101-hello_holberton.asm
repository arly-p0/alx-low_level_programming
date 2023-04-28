Section .data
message:      db "Hello, Hoblberton", 0
fmt:	      db "%s", 10, 0

section .text
 global main
 extern printf

main:  
	mov esi, message
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
