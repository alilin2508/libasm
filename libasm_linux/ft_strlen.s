				global		ft_strlen

				section		.text
ft_strlen:			xor		rax, rax
				jmp		count_loop

count_loop:			cmp		byte [rdi + rax], 0
				je		return
				inc		rax
				jmp		count_loop

return:				ret
