DYN ?= y
DEBUG ?= n

# $(info DYN=$(DYN))
# $(info DEBUG=$(DEBUG))

SRCS := add.c sub.c

CFLAGS += -Wall -I./include

ifeq ($(DYN),y)
	TARGET := libalgo.so
	CFLAGS += -fPIC
	LDFLAGS += -shared
	PROCESS = $(CC) $(LDFLAGS) $^ -o ./bin/$@
else
	TARGET := libalgo.a
	ARFLAGS := rvs
	PROCESS = $(AR) $(ARFLAGS) ./bin/$@ $?
endif

ifeq ($(DEBUG), y)
	CFLAGS += -g
endif

.PHONY: all
all: $(TARGET)

.PHONY: $(TARGET)
$(TARGET): $(SRCS:.c=.o)
	$(PROCESS)

.PHONY: help
help:
	@echo "DYN=[Y/n]"
	@echo "DEBUG=[y/N]"

.PHONY: clean
clean:
	-rm -rf ./bin/$(TARGET) $(SRCS:.c=.o)
