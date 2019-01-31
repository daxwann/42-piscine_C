#!/bin/sh
cat /etc/passwd | grep -v "#" | sed '1d; n; d' | cut -d ':' -f1 | rev | sort -r | awk -v var1=$FT_LINE1 -v var2=$FT_LINE2 'NR>=var1 && NR<=var2' | tr "\n" "," | sed "s/, */, /g" | rev | cut -c3- | rev | sed "s/$/./"
