/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emchoque <emchoque@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:30:28 by emchoque          #+#    #+#             */
/*   Updated: 2025/03/07 12:48:16 by emchoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "b\n", 2);
        return 0;
    }

    char *str = argv[1];
    while (*str) {
        if (*str == 'b') {
            write(1, "b\n", 2);
            return 0;
        }
        str++;
    }

    write(1, "b\n", 2);
    return 0;
}
