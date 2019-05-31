#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
    DIR *directory;
    struct dirent *dirstruct;
    char *file_name;
    int *file_size;

    struct dir_file {
        char name[32];
        int  size;
    };
    // Parse command line

    if(argc > 2)
    {
        printf("Expected 1 argument got %d\n", argc - 1);
        return(1);
    }
    else
    {
        if(argv[1] == NULL)
        {
            printf("Opening current directory\n");
            directory = opendir(".");
        }
        else
        {
            printf("Opening directory %s\n", argv[1]);

            directory = opendir(argv[1]);

        }
        while ((dirstruct=readdir(directory)) != NULL)
        {
            file_name = dirstruct->d_name;
            struct stat newFile;
            //printf("%s%s file\n",argv[1],file_name);
            //char filename[128];
            //strcpy(file_name, filename);
            char *fullpath;

            if(argv[1] != NULL)
                fullpath = argv[1],dirstruct->d_name;

            else
                fullpath = dirstruct->d_name;

            //printf("%s%s\n",fullpath,dirstruct->d_name);
            if(stat(fullpath,&newFile) != -1){
                printf("%ld %s\n",newFile.st_size,dirstruct->d_name);
            }
        }

        closedir(directory);
        // Open directory

        // Repeatly read and print entries

        // Close directory

        return 0;
    }
}
