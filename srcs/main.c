/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:16:03 by rreedy            #+#    #+#             */
/*   Updated: 2019/09/17 14:24:14 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		shell_loop()
{
	int		exit;

	exit = 0;
	while (!exit)
	{
		termcaps_on();
		get_line();
		termcaps_off();
		parse_line();
		exit = execute_ast();
	}
	return (exit);
}

static void		shell_setup()
{
	extern char		**environ;

	ft_printf("shell setup\n");
}

int				main(void)
{
	int			error;

	shell_setup();
	error = shell_loop();
	return (error);
}
