CC = g++
CFLAGS = -Wall -Wextra

SRCS = return.cpp syscall.cpp system_var.cpp logger.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = Kernel

all: $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean up object files and the target executable
clean:
	rm -f $(OBJS) $(TARGET)
