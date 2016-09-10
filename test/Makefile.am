@CODE_COVERAGE_RULES@
check_PROGRAMS=basic
basic_SOURCES=basic.c
basic_CFLAGS=$(CODE_COVERAGE_CFLAGS) -I../src/ -std=c99 
basic_LDFLAGS=$(CODE_COVERAGE_LDFLAGS) -L../src/.libs -lucrypt 
TESTS=$(check_PROGRAMS)
