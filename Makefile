CMAKE ?= cmake
CTEST ?= ctest
BUILD_DIR := build
TARGET := hello

.PHONY: build configure run test clean

build: configure
	$(CMAKE) --build $(BUILD_DIR)

configure:
	$(CMAKE) -S . -B $(BUILD_DIR)

run: build
	./$(BUILD_DIR)/$(TARGET)

test: configure
	$(CMAKE) --build $(BUILD_DIR)
	$(CTEST) --test-dir $(BUILD_DIR) --output-on-failure

clean:
	rm -rf $(BUILD_DIR)
