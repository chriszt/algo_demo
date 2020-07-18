DEBUG ?= n

# $(info DEBUG=$(DEBUG))

SRCS := algo_test.c
BINARY := algo_test

CFLAGS := -Wall -I../algo/include
ifeq ($(DEBUG), y)
CFLAGS += -g
endif

LDFLAGS := -L../algo/bin -lalgo

all: $(BINARY)

.PHONY: $(BINARY)
$(BINARY): $(SRCS:.c=.o)
	$(CC) $^ $(LDFLAGS) -o ./bin/$@

.PHONY: help
help:
	@echo "DEBUG=[y/N]"

.PHONY: clean
clean:
	-rm -rf ./bin/$(BINARY) $(SRCS:.c=.o)
