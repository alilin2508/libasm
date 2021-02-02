				global			_ft_read
				extern			__errno_location

				section			.text
_ft_read:		mov				rax, 0
				syscall
				cmp				rax, 0
				jl				error
				ret

error:			neg				rax
				mov				rdx, rax
				call			__errno_location wrt ..plt
				mov				[rax], rdx
				mov				rax, -1
				ret