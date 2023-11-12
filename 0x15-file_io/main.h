#ifndef _MAIN_H_
#define _MAIN_H_

#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filen, size_t letter);
int create_file(const char *filen, char *textContent);
int append_text_to_file(const char *filen, char *textContent);

#endif