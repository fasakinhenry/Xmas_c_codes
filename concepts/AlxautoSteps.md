# Auto copy function prototypes from c file into a header file 
Usage: %s -D <directory_path> -H <header_file_path>\n

# Steps :-
 ## 1) check for right argument letters 
 For example :-

        if (argc != 5 || strcmp(argv[1], "-D") != 0 || strcmp(argv[3], "-H") != 0)
        {
            fprintf(stderr, "Usage: %s -D <directory_path> -H <header_file_path>\n", argv[0]);
            exit(EXIT_FAILURE);
        }
## 2) checks the directory 

        #include <dirent.h>

        dir = opendir(directory_path);
            if (dir == NULL) {
                perror("Error opening directory");
                exit(EXIT_FAILURE);
            }
## 3) to read each file .c on the directory 

        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL)
        {
        if (entry->d_type == DT_REG && strstr(entry->d_name, ".c")) {
            /* If the file is a regular file and has a .c extension*/
            /*open the file */
            FILE *source_file = fopen(entry->d_name, "r");
            if (source_file == NULL) {
                perror("Error opening source file");
                closedir(dir);
                fclose(header_file);
                exit(EXIT_FAILURE);
            }
        }
## 4) search the pattern for each file 
### we can use different way to find the function prototype 
    
#### A- normal strcmp but that is work for simple function prototype 
    
#### B- using ctags library that does exctract the function prototype
    
## Using ctags :-
### 1- Auto execute the command 
    
    void generate_ctags(const char *directory_path)
    {
        char command[256];
        snprintf(command, sizeof(command), "ctags -R --c-kinds=+p --fields=+S --extra=+q %s", directory_path);
        system(command);
    }
### 2- searching the pattern 
##### This is exmaple how the file created by the ctags will look like 
    main    tests/4-main.c  /^int main(void)$/;"    f       signature:(void)
    msg     101-hello_holberton.asm /^msg:    db      "Hello, Holberton", 0$/;"     d
    next    lists.h /^      struct list_s *next;$/;"        m       struct:list_s   typeref:struct:list_s::list_s
    next    main01.h        /^      struct list_s *next;$/;"        v       typeref:struct:list_s
    print_list      0-print_list.c  /^size_t print_list(const list_t *h)$/;"        f       signature:(const list_t *h)
    print_list      lists.h /^size_t print_list(const list_t *h);$/;"       p       signature:(const list_t *h)
    str     lists.h /^      char *str;$/;"  m       struct:list_s
    str     main01.h        /^      char *str;$/;"  v

#### using shell to filter the function on the tag file and save it into new file 
    void process_tags() {
    system("cat tags | sed -n 's/^.*\\/\\(.*\\)/\\1/p' | sed 's/\\(.*\\)\\$.*/\\1/' | sed 's/;$//' | uniq | sed '/int main(/d' | sed '/.*:/d' | sed 's/$/;/g' > filtered_tag");
    }

## 5) open the header file 
 1- Add the neccessory header guards.

     FILE *input_file = fopen(input_file_path, "r");
     FILE *output_file = fopen(output_file_path, "w");
     fprintf(output_file, "#ifndef AUTO_HEADER\n");
     fprintf(output_file, "#define AUTO_HEADER\n\n");
2- read each line of the input file and write it to the output_file

- `fget : read each line on a file stream`

        char line[512];
        while (fgets(line, sizeof(line), input_file)) {
        /* Write the function prototype to the output file*/
        fprintf(output_file, "%s", line);
        }

3- Add the end of the header gurads

    fprintf(output_file, "\n#endif /* AUTO_HEADER */\n");


## 6) remove unwanted files tags , filtered_tag

- `int remove(const char *filename);
`
    
        remove("tags");
        remove("filtered_tag");





## Requirments:-

- Ctags installed 
- Betty styled
