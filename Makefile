COMP = gcc main.c -o main -lGL -lGLU -lglut
OUT = ./main
RUN = $(OUT)

all: compile run

compile:
	${COMP}

run:
	${RUN}
