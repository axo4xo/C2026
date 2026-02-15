all:
	@for dir in src/*/main.c; do cc "$$dir" src/lib/*.c -I./include -o "$${dir%%.c}" && echo "OK: $$dir"; done

clean:
	@find src -name main -type f -delete