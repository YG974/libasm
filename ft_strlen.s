section .data	; used for declaring initialized data or constants.

section .bss	; used for declarring variables.

section .text	; used for keeping the code. must begin with the global _start,
		global _ft_strlen

_ft_strlen:		; entry-point of the file
		mov rax, 0	;put the value 0 into the rax register(counter here)

;BYTE tells the size of the argument BYTE(8 bits)
;rdi is a pointer to ther first arg and rax is my counter
;rax is my counter
;if cmp = 0, compared char = '\0' so it's the end of the string 
cmp:
		cmp BYTE [rdi + rax], 0;compare the value at [rdi+rax] whith 0,
		je end						;if cmp operation is equal to 0, jmp to end
		inc rax						;rax = rax + 1
		jmp cmp						;jump to start of cmp function with rax+1

end:
		ret							;ret return rax value, my lenght here

