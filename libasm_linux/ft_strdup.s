				global			ft_strdup
				extern			malloc
				extern			ft_strlen
				extern			ft_strcpy

				section			.text
ft_strdup:			call			ft_strlen
				add			rax, 1
				push			rdi
				mov			rdi, rax
				call			malloc wrt ..plt
				cmp			rax, 0
				je			return
				pop			rdx
				mov			rdi, rax
				mov			rsi, rdx
				call			ft_strcpy
				ret

return:				ret
