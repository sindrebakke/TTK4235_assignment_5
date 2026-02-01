SOURCE_DIR := source
BUILD_DIR := build
SOURCES := main.c calculations.c system.c
OBJECTS := $(SOURCES:%.c=$(BUILD_DIR)/%.o)

CC := gcc
CFLAGS := -O0 -g3 -Wall -Werror

main: $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

docs:
	doxygen doxconfig

clean:
	rm -rf $(BUILD_DIR) main

.PHONY: docs clean