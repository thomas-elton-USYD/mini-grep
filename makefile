CC=gcc
CFLAGS=-Wall -Werror
TARGET=file

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	rm $(TARGET)

rm_source_code:
	rm $(TARGET).c
