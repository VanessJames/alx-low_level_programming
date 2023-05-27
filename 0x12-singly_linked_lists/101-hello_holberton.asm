section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0

section .text
	extern printf	; Declare the external printf function

	global _start

_start:
	; Prepare the arguments for printf
	mov rdi, format
	mov rsi, hello
	xor rax, rax   ; Set rax to 0 (no floating-point arguments)

	; Call printf
	call printf

	; Prepare the arguments for printf (newline)
	mov rdi, format
	mov rsi, newline
	xor rax, rax   ; Set rax to 0 (no floating-point arguments)

	; Call printf
	call printf

	; Exit the program
	mov eax, 60    ; Syscall number for exit
	xor edi, edi   ; Exit status 0
	syscall
