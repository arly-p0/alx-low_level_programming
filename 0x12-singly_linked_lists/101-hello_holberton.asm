Section .data
message:      db "Hello, Hoblberton", 0,

section .text
 global main
 extern printf

main:  
	mov esi, message
	mov eax, 0
	call printf

	mov eax, 0
	ret
