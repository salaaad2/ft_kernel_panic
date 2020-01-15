/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   kernel_panic.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:00:17 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:01:05 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_kernel_panic(void)
{
	int *p;

	while(1)
	{
		int inc = 1024 * 1024 * sizeof(char);
		p = (int*)calloc(1,inc);
	}
}

int		main(void) 
{
	ft_kernel_panic();
}
