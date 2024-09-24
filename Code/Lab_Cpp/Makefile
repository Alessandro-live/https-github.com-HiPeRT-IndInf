# Declare variables: I recommend to use these exact names
EXENAME=02-main
CSRCS=02-main.cpp 02-stampa-lib/02-stampa.cpp
CFLAGS=-Wall
LDFLAGS=-l stdc++

# This can also be commented, because typical build environments,
#  such as bash, VSCode, CLion, etc, define it anywyay
CC=gcc

# This is the (only mandatory) "TARGET", called "all"
# IMPORTANT: remember to use TABs, and not spaces, after the line of every target
all:
	${CC} ${CSRCS} ${CFLAGS} -o ${EXENAME} ${LDFLAGS}

# This target is frequently used to "clean up" the workspace
clean:
	rm -f *.o ${EXENAME} *.txt a.out

# This target runs the application
run:
	./${EXENAME}