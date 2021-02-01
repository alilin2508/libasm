				global			_ft_write
				extern			___error

				section			.text
_ft_write:		mov				rax, 0x2000004
				syscall
				jc				error
				ret

error:			mov				r8, rax
				push			rbp
				call			___error
				pop				rbp
				mov				[rax], r8
				mov				rax, -1
				ret
