	section .data
msg:	db "Hello, Holberton", 10
	global main

	section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall
