#ifndef TYPES_H_
#define TYPES_H_

#include <inttypes.h>

#define VOID        void

typedef uint64_t    UINTN;
typedef uint64_t    UINT64;
typedef uint32_t    UINT32;
typedef uint16_t    UINT16;
typedef uint8_t     UINT8;

typedef UINT16      CHAR16;
typedef UINT8       BOOLEAN;

#ifndef CONST
   #define CONST const
#endif

#ifndef TRUE
    #define TRUE    ((BOOLEAN) 1)
    #define FALSE   ((BOOLEAN) 0)
#endif

#ifndef NULL
    #define NULL    ((VOID *) 0)
#endif

#endif
