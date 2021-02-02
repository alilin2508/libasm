				global			_ft_read
				extern			___error

				section			.text
_ft_read:		mov				rax, 0x02000003
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
