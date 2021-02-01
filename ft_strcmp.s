				global			_ft_strcmp

				section			.text
_ft_strcmp:		xor				rcx, rcx
				jmp				cmp_loop

cmp_loop:		mov				dl, byte [rdi + rcx]
				cmp				dl, byte [rsi + rcx]
				jg				retpos
				jl				retneg
				cmp				dl, 0
				je				return
				cmp				byte [rsi + rcx], 0
				je				return
				inc				rcx
				jmp				cmp_loop

retneg:			mov				rax, -1
				ret

retpos:			mov				rax, 1
				ret

return:			mov				rax, 0
				ret
