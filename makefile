exe:stud_add.o stud_del.o stud_mod.o stud_main.o stud_sort.o stud_save.o stud_show.o
	cc  stud_add.c stud_del.c stud_mod.c stud_main.c stud_sort.c stud_save.c stud_show.c -o exe

stud_add.o:stud_add.c student.h
	cc -c stud_add.c
stud_del.o:stud_del.c student.h
	cc -c stud_del.c
stud_mod.o:stud_mod.c student.h
	cc -c stud_mod.c
stud_main.o:stud_main.c student.h
	cc -c stud_main.c
stud_sort.o:stud_sort.c student.h
	cc -c stud_sort.c
stud_save.o:stud_save.c student.h
	cc -c stud_save.c
stud_show.0:stud_show.c student.h
	cc -c stud_show.c
clean:rm -f *.o exe

