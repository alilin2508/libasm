				global			_ft_strcpy

				section			.text
_ft_strcpy:		xor				rcx, rcx
				jmp				cpy_loop

cpy_loop:		cmp				byte [rsi + rcx], 0
				je				return
				mov				dl, byte [rsi + rcx]
				mov				byte [rdi + rcx], dl
				inc				rcx
				jmp				cpy_loop

return:			mov				dl, 0
				mov				byte [rdi + rcx], dl
				mov				rax, rdi
				ret

