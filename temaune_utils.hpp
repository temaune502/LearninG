#ifndef TEMAUNE_UTILS_H
#define TEMAUNE_UTILS_H

#define print(format, ...) printf(format "\n", ##__VA_ARGS__);

#define UNREACHABLE fprintf(stderr, "UNREACHABLE\n");  \
                    exit(69);

#endif