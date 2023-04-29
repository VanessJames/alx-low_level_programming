	format db "Hello,Holberton!", 0x0a, 0x00


	global main
	extern pritf

main:
	movedi, format
	xor eax, eax
	call printf
	xor eax, eax
	ret
