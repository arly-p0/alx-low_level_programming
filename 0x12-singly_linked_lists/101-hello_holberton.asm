Section .data
	message: db "Hello, Hoblberton", 0
	format: db "%s", 10, 0

section .text
 	global main
 	extern printf

main:
	mov esi, format
	mov edi, message
	mov eax, 0
	call printf

	mov eax, 0
	ret
