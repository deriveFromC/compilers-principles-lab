LOCAL_PATH = $(abspath .)

CSRC = $(shell find $(LOCAL_PATH) -name "*.c")

CC = gcc

CFLAGS = -Wall -Werror

TARGET = main

BUILD_DIR = $(LOCAL_PATH)/build

default: $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR)/$(TARGET): $(CSRC)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR)
	