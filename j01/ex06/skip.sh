FT_LINE1=10
FT_LINE2=20
cat /etc/passwd | sed -n 'n;p' | sed '/^#/d'| cut -d ":" -f 1 | rev | sort -r | tr '\n' ' ' | sort -r | sed "$FT_LINE1"q | sed 's/ /, /g' | sed 's/, \n/\n/g' | cat -e | sed 's/, \$/./g'
