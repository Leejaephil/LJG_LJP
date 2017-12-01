DIRS = data main
.PHONY: all clean

all:
        @for d in $(DIR);\
        do \
            $(MAKE) -C $$d;\
        done
claen :
        @for d in $(DIRS); \
        do \
            $(MAKE) -C $$d claen; \
        done
