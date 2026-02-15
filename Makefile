SOURCES = $(wildcard .*c)
TARGET = main

$(TARGET): $(SOURCES)
	cc $(SOURCES) -I../../include -o $(TARGET)

clean:
	rm -f $(TARGET)