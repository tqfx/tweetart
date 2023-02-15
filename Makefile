SOURCES := $(wildcard [0-9]*.c)
CFLAGS := -std=c11 -pedantic -Wall -Wextra
ppm: $(subst .c,.ppm,$(SOURCES))
png: $(subst .c,.png,$(SOURCES))
jpg: $(subst .c,.jpg,$(SOURCES))
gif: $(subst .c,.gif,$(SOURCES))
.PHONY: clean
clean:
	$(RM) *.exe *.ppm *.png *.jpg
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
