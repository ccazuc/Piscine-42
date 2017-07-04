FT_LINE1=15
FT_LINE2=16
cat /etc/passwd | sed -n 'n;p' | sed '/^#/d'| cut -d ":" -f 1 | rev | sort -r | awk "NR>= $FT_LINE1 && NR<= $FT_LINE2" | sort -r | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, \n/\n/g' | cat -e | sed 's/, \$/./g'
