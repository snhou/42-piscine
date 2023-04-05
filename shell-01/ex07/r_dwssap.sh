# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shou <shou@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 11:42:05 by shou              #+#    #+#              #
#    Updated: 2023/03/28 11:49:00 by shou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 0' | awk -F ":" '{  print $1 }' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/\n/,/g' | sed 's/, $/,/'
cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/$/, /g' | tr -d '\n' | rev | cut -c 3- | rev | tr '\n' '.'
