CFLAGS := -std=c11 -Ofast -pedantic -Wall -Wextra
SOURCES := $(wildcard [0-9]*.c)
ppm: $(subst .c,.ppm,$(SOURCES))
png: $(subst .c,.png,$(SOURCES))
jpg: $(subst .c,.jpg,$(SOURCES))
gif: $(subst .c,.gif,$(SOURCES))
.PHONY: clean
clean:
	$(RM) $(shell cat .gitignore)
%.exe: %.c
	$(CC) $(CFLAGS) $^ -o $@ -lm
%.ppm: %.exe
	./$< $@
%.png: %.ppm
	convert $< $@
%.jpg: %.ppm
	convert $< $@
%.gif: %.ppm
	convert $< $@
