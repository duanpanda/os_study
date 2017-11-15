forkproc: forkproc.c
	gcc -g -o forkproc forkproc.c

posix_shm: posix_shm.c
	gcc -g -o posix_shm posix_shm.c

ex3_3: ex3_3.c
	gcc -g -o ex3_3 ex3_3.c

clean:
	rm forkproc posix_shm