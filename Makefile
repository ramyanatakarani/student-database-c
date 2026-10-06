CC = gcc

TARGET= student

OBJS = stud_main.o stud_add.o stud_del.o stud_delall.o stud_mod.o stud_read.o stud_rev.o stud_save.o stud_show.o stud_sort.o

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

stud_main.o : stud_main.c student.h
	$(CC) -c stud_main.c

stud_add.o : stud_add.c student.h
	$(CC) -c stud_add.c

stud_del.o : stud_del.c student.h
	$(CC) -c stud_del.c

stud_delall.o : stud_delall.c student.h
	$(CC) -c stud_delall.c

stud_mod.o : stud_mod.c student.h
	$(CC) -c stud_mod.c

stud_read.o : stud_read.c student.h
	$(CC) -c stud_read.c

stud_rev.o : stud_rev.c student.h
	$(CC) -c stud_rev.c

stud_save.o : stud_save.c student.h
	$(CC) -c stud_save.c

stud_show.o : stud_show.c student.h
	$(CC) -c stud_show.c

stud_sort.o : stud_sort.c student.h
	$(CC) -c stud_sort.c

clean :
	@echo "cleaning up..."
	rm -f *.o $(TARGET)
