# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 331 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.c" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.h" 1


# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/txtBuf.h" 1



# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stddef.h" 1
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/_fake_defines.h" 1
# 2 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stddef.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/_fake_typedefs.h" 1



typedef int size_t;
typedef int __builtin_va_list;
typedef int __gnuc_va_list;
typedef int va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int64_t;
typedef int __uint64_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int __s8;
typedef int __u8;
typedef int __s16;
typedef int __u16;
typedef int __s32;
typedef int __u32;
typedef int __s64;
typedef int __u64;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int __sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int jmp_buf;
typedef int rlim_t;
typedef int sa_family_t;
typedef int sigjmp_buf;
typedef int stack_t;
typedef int siginfo_t;
typedef int z_stream;


typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;


typedef int int_least8_t;
typedef int uint_least8_t;
typedef int int_least16_t;
typedef int uint_least16_t;
typedef int int_least32_t;
typedef int uint_least32_t;
typedef int int_least64_t;
typedef int uint_least64_t;


typedef int int_fast8_t;
typedef int uint_fast8_t;
typedef int int_fast16_t;
typedef int uint_fast16_t;
typedef int int_fast32_t;
typedef int uint_fast32_t;
typedef int int_fast64_t;
typedef int uint_fast64_t;


typedef int intptr_t;
typedef int uintptr_t;


typedef int intmax_t;
typedef int uintmax_t;


typedef _Bool bool;


typedef void* MirEGLNativeWindowType;
typedef void* MirEGLNativeDisplayType;
typedef struct MirConnection MirConnection;
typedef struct MirSurface MirSurface;
typedef struct MirSurfaceSpec MirSurfaceSpec;
typedef struct MirScreencast MirScreencast;
typedef struct MirPromptSession MirPromptSession;
typedef struct MirBufferStream MirBufferStream;
typedef struct MirPersistentId MirPersistentId;
typedef struct MirBlob MirBlob;
typedef struct MirDisplayConfig MirDisplayConfig;


typedef struct xcb_connection_t xcb_connection_t;
typedef uint32_t xcb_window_t;
typedef uint32_t xcb_visualid_t;
# 3 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stddef.h" 2
# 5 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/txtBuf.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stdarg.h" 1
# 6 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/txtBuf.h" 2




typedef struct TxtBuf{
    char *buf;
    size_t size, len;
} TxtBuf;

void *smalloc(size_t size);

TxtBuf *initTxtBuf(size_t size);
void freeTxtBuf(TxtBuf **ppBuf);
void writeToBuf(TxtBuf **ppBuf, const char *fmt, ...);
void appendToBuf(TxtBuf **ppDst, TxtBuf *pSrc);
# 4 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 1



# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/err.h" 1
# 5 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/dlfcn.h" 1
# 6 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 2

# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/emit.h" 1
# 8 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jitUtils.h" 1


# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stdlib.h" 1
# 4 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jitUtils.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stddef.h" 1
# 5 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jitUtils.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/err.h" 1
# 6 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jitUtils.h" 2

void *smalloc(size_t size);
# 9 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 1
# 59 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/msvc.h" 1
# 60 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2




# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vxworks.h" 1
# 65 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 167 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h" 1
# 35 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stdarg.h" 1
# 36 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h" 2
# 162 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           extern const char sqlite3_version[];
           const char *sqlite3_libversion(void);
           const char *sqlite3_sourceid(void);
           int sqlite3_libversion_number(void);
# 190 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_compileoption_used(const char *zOptName);
           const char *sqlite3_compileoption_get(int N);
# 230 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_threadsafe(void);
# 246 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3 sqlite3;
# 275 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;

typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
# 331 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_close(sqlite3*);
           int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
# 403 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
# 670 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
# 769 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (*xClose)(sqlite3_file*);
  int (*xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (*xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (*xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (*xSync)(sqlite3_file*, int flags);
  int (*xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (*xLock)(sqlite3_file*, int);
  int (*xUnlock)(sqlite3_file*, int);
  int (*xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (*xFileControl)(sqlite3_file*, int op, void *pArg);
  int (*xSectorSize)(sqlite3_file*);
  int (*xDeviceCharacteristics)(sqlite3_file*);

  int (*xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (*xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (*xShmBarrier)(sqlite3_file*);
  int (*xShmUnmap)(sqlite3_file*, int deleteFlag);

  int (*xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (*xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);


};
# 1118 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_mutex sqlite3_mutex;
# 1128 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_api_routines sqlite3_api_routines;
# 1293 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (*xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (*xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (*xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (*xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(*xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (*xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (*(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (*xDlClose)(sqlite3_vfs*, void*);
  int (*xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (*xSleep)(sqlite3_vfs*, int microseconds);
  int (*xCurrentTime)(sqlite3_vfs*, double*);
  int (*xGetLastError)(sqlite3_vfs*, int, char *);




  int (*xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);




  int (*xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (*xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(*xNextSystemCall)(sqlite3_vfs*, const char *zName);





};
# 1471 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_initialize(void);
           int sqlite3_shutdown(void);
           int sqlite3_os_init(void);
           int sqlite3_os_end(void);
# 1507 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_config(int, ...);
# 1526 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_db_config(sqlite3*, int op, ...);
# 1591 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(*xMalloc)(int);
  void (*xFree)(void*);
  void *(*xRealloc)(void*,int);
  int (*xSize)(void*);
  int (*xRoundup)(int);
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  void *pAppData;
};
# 2103 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_extended_result_codes(sqlite3*, int onoff);
# 2165 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
# 2175 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
# 2228 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_changes(sqlite3*);
# 2252 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_total_changes(sqlite3*);
# 2289 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_interrupt(sqlite3*);
# 2324 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_complete(const char *sql);
           int sqlite3_complete16(const void *sql);
# 2386 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_busy_handler(sqlite3*,int(*)(void*,int),void*);
# 2409 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_busy_timeout(sqlite3*, int ms);
# 2484 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
           void sqlite3_free_table(char **result);
# 2534 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           char *sqlite3_mprintf(const char*,...);
           char *sqlite3_vmprintf(const char*, va_list);
           char *sqlite3_snprintf(int,char*,const char*, ...);
           char *sqlite3_vsnprintf(int,char*,const char*, va_list);
# 2627 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_malloc(int);
           void *sqlite3_malloc64(sqlite3_uint64);
           void *sqlite3_realloc(void*, int);
           void *sqlite3_realloc64(void*, sqlite3_uint64);
           void sqlite3_free(void*);
           sqlite3_uint64 sqlite3_msize(void*);
# 2657 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_int64 sqlite3_memory_used(void);
           sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
# 2681 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_randomness(int N, void *P);
# 2772 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
# 2880 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                             void *sqlite3_trace(sqlite3*,
   void(*xTrace)(void*,const char*), void*);
                             void *sqlite3_profile(sqlite3*,
   void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
# 2971 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(*xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
# 3010 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
# 3239 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
           int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
           int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
# 3293 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam);
           int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
           sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
# 3339 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_errcode(sqlite3 *db);
           int sqlite3_extended_errcode(sqlite3 *db);
           const char *sqlite3_errmsg(sqlite3*);
           const void *sqlite3_errmsg16(sqlite3*);
           const char *sqlite3_errstr(int);
# 3369 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_stmt sqlite3_stmt;
# 3411 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_limit(sqlite3*, int id, int newVal);
# 3606 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
           int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
           int sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
           int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
           int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
           int sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
# 3683 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_sql(sqlite3_stmt *pStmt);
           char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);
# 3720 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
# 3741 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_stmt_busy(sqlite3_stmt*);
# 3783 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_value sqlite3_value;
# 3797 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_context sqlite3_context;
# 3915 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
           int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
           int sqlite3_bind_double(sqlite3_stmt*, int, double);
           int sqlite3_bind_int(sqlite3_stmt*, int, int);
           int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
           int sqlite3_bind_null(sqlite3_stmt*, int);
           int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
           int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
           int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
           int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
           int sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(*)(void*));
           int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
           int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
# 3950 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_bind_parameter_count(sqlite3_stmt*);
# 3978 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
# 3996 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
# 4006 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_clear_bindings(sqlite3_stmt*);
# 4022 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_column_count(sqlite3_stmt *pStmt);
# 4051 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_column_name(sqlite3_stmt*, int N);
           const void *sqlite3_column_name16(sqlite3_stmt*, int N);
# 4100 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_column_database_name(sqlite3_stmt*,int);
           const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
           const char *sqlite3_column_table_name(sqlite3_stmt*,int);
           const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
           const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
           const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
# 4137 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_column_decltype(sqlite3_stmt*,int);
           const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
# 4222 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_step(sqlite3_stmt*);
# 4243 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_data_count(sqlite3_stmt *pStmt);
# 4472 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
           double sqlite3_column_double(sqlite3_stmt*, int iCol);
           int sqlite3_column_int(sqlite3_stmt*, int iCol);
           sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
           const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
           const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
           sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
           int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
           int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
           int sqlite3_column_type(sqlite3_stmt*, int iCol);
# 4509 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_finalize(sqlite3_stmt *pStmt);
# 4536 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_reset(sqlite3_stmt *pStmt);
# 4636 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
           int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
           int sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void(*xDestroy)(void*)
);
# 4702 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                             int sqlite3_aggregate_count(sqlite3_context*);
                             int sqlite3_expired(sqlite3_stmt*);
                             int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
                             int sqlite3_global_recover(void);
                             void sqlite3_thread_cleanup(void);
                             int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
# 4810 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const void *sqlite3_value_blob(sqlite3_value*);
           double sqlite3_value_double(sqlite3_value*);
           int sqlite3_value_int(sqlite3_value*);
           sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
           void *sqlite3_value_pointer(sqlite3_value*, const char*);
           const unsigned char *sqlite3_value_text(sqlite3_value*);
           const void *sqlite3_value_text16(sqlite3_value*);
           const void *sqlite3_value_text16le(sqlite3_value*);
           const void *sqlite3_value_text16be(sqlite3_value*);
           int sqlite3_value_bytes(sqlite3_value*);
           int sqlite3_value_bytes16(sqlite3_value*);
           int sqlite3_value_type(sqlite3_value*);
           int sqlite3_value_numeric_type(sqlite3_value*);
           int sqlite3_value_nochange(sqlite3_value*);
# 4835 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           unsigned int sqlite3_value_subtype(sqlite3_value*);
# 4851 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_value *sqlite3_value_dup(const sqlite3_value*);
           void sqlite3_value_free(sqlite3_value*);
# 4897 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
# 4912 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_user_data(sqlite3_context*);
# 4924 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
# 4983 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_get_auxdata(sqlite3_context*, int N);
           void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
# 5001 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef void (*sqlite3_destructor_type)(void*);
# 5131 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
           void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
           void sqlite3_result_double(sqlite3_context*, double);
           void sqlite3_result_error(sqlite3_context*, const char*, int);
           void sqlite3_result_error16(sqlite3_context*, const void*, int);
           void sqlite3_result_error_toobig(sqlite3_context*);
           void sqlite3_result_error_nomem(sqlite3_context*);
           void sqlite3_result_error_code(sqlite3_context*, int);
           void sqlite3_result_int(sqlite3_context*, int);
           void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
           void sqlite3_result_null(sqlite3_context*);
           void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
           void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
           void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
           void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
           void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
           void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
           void sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(*)(void*));
           void sqlite3_result_zeroblob(sqlite3_context*, int n);
           int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
# 5167 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_result_subtype(sqlite3_context*,unsigned int);
# 5249 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
           int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
           int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
# 5299 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
           int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);
# 5382 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_sleep(int);
# 5440 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           extern char *sqlite3_temp_directory;
# 5477 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           extern char *sqlite3_data_directory;
# 5501 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_get_autocommit(sqlite3*);
# 5514 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
# 5531 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName);
# 5541 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
# 5557 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
# 5606 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
           void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
# 5658 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
# 5699 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_enable_shared_cache(int);
# 5715 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_release_memory(int);
# 5729 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_db_release_memory(sqlite3*);
# 5782 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
# 5793 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                             void sqlite3_soft_heap_limit(int N);
# 5865 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
# 5921 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
# 5953 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
# 5991 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_auto_extension(void(*xEntryPoint)(void));
# 6003 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_cancel_auto_extension(void(*xEntryPoint)(void));







           void sqlite3_reset_auto_extension(void);
# 6025 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
# 6046 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
struct sqlite3_module {
  int iVersion;
  int (*xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (*xDisconnect)(sqlite3_vtab *pVTab);
  int (*xDestroy)(sqlite3_vtab *pVTab);
  int (*xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (*xClose)(sqlite3_vtab_cursor*);
  int (*xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (*xNext)(sqlite3_vtab_cursor*);
  int (*xEof)(sqlite3_vtab_cursor*);
  int (*xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (*xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (*xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (*xBegin)(sqlite3_vtab *pVTab);
  int (*xSync)(sqlite3_vtab *pVTab);
  int (*xCommit)(sqlite3_vtab *pVTab);
  int (*xRollback)(sqlite3_vtab *pVTab);
  int (*xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (*xRename)(sqlite3_vtab *pVtab, const char *zNew);


  int (*xSavepoint)(sqlite3_vtab *pVTab, int);
  int (*xRelease)(sqlite3_vtab *pVTab, int);
  int (*xRollbackTo)(sqlite3_vtab *pVTab, int);
};
# 6177 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
struct sqlite3_index_info {

  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;

  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;

  sqlite3_int64 estimatedRows;

  int idxFlags;

  sqlite3_uint64 colUsed;
};
# 6263 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
           int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
# 6295 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
# 6319 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
# 6332 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
# 6351 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
# 6375 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_blob sqlite3_blob;
# 6460 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
# 6493 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
# 6516 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_blob_close(sqlite3_blob *);
# 6532 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_blob_bytes(sqlite3_blob *);
# 6561 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
# 6603 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
# 6634 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
           int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
           int sqlite3_vfs_unregister(sqlite3_vfs*);
# 6752 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_mutex *sqlite3_mutex_alloc(int);
           void sqlite3_mutex_free(sqlite3_mutex*);
           void sqlite3_mutex_enter(sqlite3_mutex*);
           int sqlite3_mutex_try(sqlite3_mutex*);
           void sqlite3_mutex_leave(sqlite3_mutex*);
# 6823 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (*xMutexInit)(void);
  int (*xMutexEnd)(void);
  sqlite3_mutex *(*xMutexAlloc)(int);
  void (*xMutexFree)(sqlite3_mutex *);
  void (*xMutexEnter)(sqlite3_mutex *);
  int (*xMutexTry)(sqlite3_mutex *);
  void (*xMutexLeave)(sqlite3_mutex *);
  int (*xMutexHeld)(sqlite3_mutex *);
  int (*xMutexNotheld)(sqlite3_mutex *);
};
# 6866 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_mutex_held(sqlite3_mutex*);
           int sqlite3_mutex_notheld(sqlite3_mutex*);
# 6907 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_mutex *sqlite3_db_mutex(sqlite3*);
# 6942 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
# 6961 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_test_control(int op, ...);
# 7026 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
           int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
# 7136 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
# 7279 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
# 7355 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_pcache sqlite3_pcache;
# 7367 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
# 7532 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int szExtra, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (*xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
  void (*xShrink)(sqlite3_pcache*);
};






typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  void *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, void*, int discard);
  void (*xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
};
# 7581 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_backup sqlite3_backup;
# 7769 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           sqlite3_backup *sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
           int sqlite3_backup_step(sqlite3_backup *p, int nPage);
           int sqlite3_backup_finish(sqlite3_backup *p);
           int sqlite3_backup_remaining(sqlite3_backup *p);
           int sqlite3_backup_pagecount(sqlite3_backup *p);
# 7895 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (*xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
# 7910 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_stricmp(const char *, const char *);
           int sqlite3_strnicmp(const char *, const char *, int);
# 7928 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_strglob(const char *zGlob, const char *zStr);
# 7951 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
# 7974 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_log(int iErrCode, const char *zFormat, ...);
# 8010 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void *sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
# 8045 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
# 8067 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
# 8161 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
# 8197 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_vtab_config(sqlite3*, int op, ...);
# 8250 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_vtab_on_conflict(sqlite3 *);
# 8269 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_vtab_nochange(sqlite3_context*);
# 8284 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                               const char *sqlite3_vtab_collation(sqlite3_index_info*,int);
# 8389 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
# 8405 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# 8437 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_db_cacheflush(sqlite3*);
# 8551 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_system_errno(sqlite3*);
# 8579 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_snapshot {
  unsigned char hidden[48];
} sqlite3_snapshot;
# 8626 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                               int sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
# 8664 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                               int sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
# 8681 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                               void sqlite3_snapshot_free(sqlite3_snapshot*);
# 8705 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                               int sqlite3_snapshot_cmp(
  sqlite3_snapshot *p1,
  sqlite3_snapshot *p2
);
# 8730 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
                               int sqlite3_snapshot_recover(sqlite3 *db, const char *zDb);
# 8767 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;







  typedef double sqlite3_rtree_dbl;
# 8785 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
           int sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);






struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void *);
};







           int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
# 8829 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;

  sqlite3_value **apSqlParam;
};
# 10219 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;

typedef void (*fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);

struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
# 10451 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
struct Fts5ExtensionApi {
  int iVersion;

  void *(*xUserData)(Fts5Context*);

  int (*xColumnCount)(Fts5Context*);
  int (*xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (*xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);

  int (*xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (*xToken)(void*, int, const char*, int, int, int)
  );

  int (*xPhraseCount)(Fts5Context*);
  int (*xPhraseSize)(Fts5Context*, int iPhrase);

  int (*xInstCount)(Fts5Context*, int *pnInst);
  int (*xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);

  sqlite3_int64 (*xRowid)(Fts5Context*);
  int (*xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (*xColumnSize)(Fts5Context*, int iCol, int *pnToken);

  int (*xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(*)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (*xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(*xGetAuxdata)(Fts5Context*, int bClear);

  int (*xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (*xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);

  int (*xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (*xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
# 10685 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (*xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (*xDelete)(Fts5Tokenizer*);
  int (*xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (*xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};
# 10722 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqlite3.h"
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;


  int (*xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (*xDestroy)(void*)
  );


  int (*xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );


  int (*xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (*xDestroy)(void*)
  );
};
# 168 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 178 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteLimit.h" 1
# 179 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 529 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/hash.h" 1
# 19 "/Users/aleksei/Desktop/DB/sqlitejit2/src/hash.h"
typedef struct Hash Hash;
typedef struct HashElem HashElem;
# 43 "/Users/aleksei/Desktop/DB/sqlitejit2/src/hash.h"
struct Hash {
  unsigned int htsize;
  unsigned int count;
  HashElem *first;
  struct _ht {
    int count;
    HashElem *chain;
  } *ht;
};







struct HashElem {
  HashElem *next, *prev;
  void *data;
  const char *pKey;
};




void sqlite3HashInit(Hash*);
void *sqlite3HashInsert(Hash*, const char *pKey, void *pData);
void *sqlite3HashFind(const Hash*, const char *pKey);
void sqlite3HashClear(Hash*);
# 530 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/parse.h" 1
# 531 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stdio.h" 1
# 532 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stdlib.h" 1
# 533 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/string.h" 1
# 534 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/assert.h" 1
# 535 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stddef.h" 1
# 536 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 727 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
typedef sqlite_int64 i64;
typedef sqlite_uint64 u64;
typedef unsigned int u32;
typedef unsigned short int u16;
typedef short int i16;
typedef unsigned char u8;
typedef signed char i8;
# 752 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
 typedef u32 tRowcnt;
# 778 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
typedef short int LogEst;
# 801 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  typedef u64 uptr;
# 901 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
# 1 "/usr/include/TargetConditionals.h" 1 3 4
# 902 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 962 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
typedef struct BusyHandler BusyHandler;
struct BusyHandler {
  int (*xFunc)(void *,int);
  void *pArg;
  int nBusy;
};
# 1056 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
typedef struct AggInfo AggInfo;
typedef struct AuthContext AuthContext;
typedef struct AutoincInfo AutoincInfo;
typedef struct Bitvec Bitvec;
typedef struct CollSeq CollSeq;
typedef struct Column Column;
typedef struct Db Db;
typedef struct Schema Schema;
typedef struct Expr Expr;
typedef struct ExprList ExprList;
typedef struct FKey FKey;
typedef struct FuncDestructor FuncDestructor;
typedef struct FuncDef FuncDef;
typedef struct FuncDefHash FuncDefHash;
typedef struct IdList IdList;
typedef struct Index Index;
typedef struct IndexSample IndexSample;
typedef struct KeyClass KeyClass;
typedef struct KeyInfo KeyInfo;
typedef struct Lookaside Lookaside;
typedef struct LookasideSlot LookasideSlot;
typedef struct Module Module;
typedef struct NameContext NameContext;
typedef struct Parse Parse;
typedef struct PreUpdate PreUpdate;
typedef struct PrintfArguments PrintfArguments;
typedef struct RowSet RowSet;
typedef struct Savepoint Savepoint;
typedef struct Select Select;
typedef struct SQLiteThread SQLiteThread;
typedef struct SelectDest SelectDest;
typedef struct SrcList SrcList;
typedef struct StrAccum StrAccum;
typedef struct Table Table;
typedef struct TableLock TableLock;
typedef struct Token Token;
typedef struct TreeView TreeView;
typedef struct Trigger Trigger;
typedef struct TriggerPrg TriggerPrg;
typedef struct TriggerStep TriggerStep;
typedef struct UnpackedRecord UnpackedRecord;
typedef struct VTable VTable;
typedef struct VtabCtx VtabCtx;
typedef struct Walker Walker;
typedef struct WhereInfo WhereInfo;
typedef struct With With;







typedef int VList;







# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h" 1
# 39 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
typedef struct Btree Btree;
typedef struct BtCursor BtCursor;
typedef struct BtShared BtShared;
typedef struct BtreePayload BtreePayload;


int sqlite3BtreeOpen(
  sqlite3_vfs *pVfs,
  const char *zFilename,
  sqlite3 *db,
  Btree **ppBtree,
  int flags,
  int vfsFlags
);
# 65 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
int sqlite3BtreeClose(Btree*);
int sqlite3BtreeSetCacheSize(Btree*,int);
int sqlite3BtreeSetSpillSize(Btree*,int);

  int sqlite3BtreeSetMmapLimit(Btree*,sqlite3_int64);

int sqlite3BtreeSetPagerFlags(Btree*,unsigned);
int sqlite3BtreeSetPageSize(Btree *p, int nPagesize, int nReserve, int eFix);
int sqlite3BtreeGetPageSize(Btree*);
int sqlite3BtreeMaxPageCount(Btree*,int);
u32 sqlite3BtreeLastPage(Btree*);
int sqlite3BtreeSecureDelete(Btree*,int);
int sqlite3BtreeGetOptimalReserve(Btree*);
int sqlite3BtreeGetReserveNoMutex(Btree *p);
int sqlite3BtreeSetAutoVacuum(Btree *, int);
int sqlite3BtreeGetAutoVacuum(Btree *);
int sqlite3BtreeBeginTrans(Btree*,int);
int sqlite3BtreeCommitPhaseOne(Btree*, const char *zMaster);
int sqlite3BtreeCommitPhaseTwo(Btree*, int);
int sqlite3BtreeCommit(Btree*);
int sqlite3BtreeRollback(Btree*,int,int);
int sqlite3BtreeBeginStmt(Btree*,int);
int sqlite3BtreeCreateTable(Btree*, int*, int flags);
int sqlite3BtreeIsInTrans(Btree*);
int sqlite3BtreeIsInReadTrans(Btree*);
int sqlite3BtreeIsInBackup(Btree*);
void *sqlite3BtreeSchema(Btree *, int, void(*)(void *));
int sqlite3BtreeSchemaLocked(Btree *pBtree);

int sqlite3BtreeLockTable(Btree *pBtree, int iTab, u8 isWriteLock);

int sqlite3BtreeSavepoint(Btree *, int, int);

const char *sqlite3BtreeGetFilename(Btree *);
const char *sqlite3BtreeGetJournalname(Btree *);
int sqlite3BtreeCopyFile(Btree *, Btree *);

int sqlite3BtreeIncrVacuum(Btree *);
# 117 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
int sqlite3BtreeDropTable(Btree*, int, int*);
int sqlite3BtreeClearTable(Btree*, int, int*);
int sqlite3BtreeClearTableOfCursor(BtCursor*);
int sqlite3BtreeTripAllCursors(Btree*, int, int);

void sqlite3BtreeGetMeta(Btree *pBtree, int idx, u32 *pValue);
int sqlite3BtreeUpdateMeta(Btree*, int idx, u32 value);

int sqlite3BtreeNewDb(Btree *p);
# 226 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
int sqlite3BtreeCursor(
  Btree*,
  int iTable,
  int wrFlag,
  struct KeyInfo*,
  BtCursor *pCursor
);
BtCursor *sqlite3BtreeFakeValidCursor(void);
int sqlite3BtreeCursorSize(void);
void sqlite3BtreeCursorZero(BtCursor*);
void sqlite3BtreeCursorHintFlags(BtCursor*, unsigned);




int sqlite3BtreeCloseCursor(BtCursor*);
int sqlite3BtreeMovetoUnpacked(
  BtCursor*,
  UnpackedRecord *pUnKey,
  i64 intKey,
  int bias,
  int *pRes
);
int sqlite3BtreeCursorHasMoved(BtCursor*);
int sqlite3BtreeCursorRestore(BtCursor*, int*);
int sqlite3BtreeDelete(BtCursor*, u8 flags);
# 276 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
struct BtreePayload {
  const void *pKey;
  sqlite3_int64 nKey;
  const void *pData;
  sqlite3_value *aMem;
  u16 nMem;
  int nData;
  int nZero;
};

int sqlite3BtreeInsert(BtCursor*, const BtreePayload *pPayload,
                       int flags, int seekResult);
int sqlite3BtreeFirst(BtCursor*, int *pRes);
int sqlite3BtreeLast(BtCursor*, int *pRes);
int sqlite3BtreeNext(BtCursor*, int flags);
int sqlite3BtreeEof(BtCursor*);
int sqlite3BtreePrevious(BtCursor*, int flags);
i64 sqlite3BtreeIntegerKey(BtCursor*);



int sqlite3BtreePayload(BtCursor*, u32 offset, u32 amt, void*);
const void *sqlite3BtreePayloadFetch(BtCursor*, u32 *pAmt);
u32 sqlite3BtreePayloadSize(BtCursor*);

char *sqlite3BtreeIntegrityCheck(Btree*, int *aRoot, int nRoot, int, int*);
struct Pager *sqlite3BtreePager(Btree*);
i64 sqlite3BtreeRowCountEst(BtCursor*);


int sqlite3BtreePayloadChecked(BtCursor*, u32 offset, u32 amt, void*);
int sqlite3BtreePutData(BtCursor*, u32 offset, u32 amt, void*);
void sqlite3BtreeIncrblobCursor(BtCursor *);

void sqlite3BtreeClearCursor(BtCursor *);
int sqlite3BtreeSetVersion(Btree *pBt, int iVersion);
int sqlite3BtreeCursorHasHint(BtCursor*, unsigned int mask);
int sqlite3BtreeIsReadonly(Btree *pBt);
int sqlite3HeaderSizeBtree(void);




int sqlite3BtreeCursorIsValidNN(BtCursor*);


int sqlite3BtreeCount(BtCursor *, i64 *);
# 331 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
  int sqlite3BtreeCheckpoint(Btree*, int, int *, int *);
# 340 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
  void sqlite3BtreeEnter(Btree*);
  void sqlite3BtreeEnterAll(sqlite3*);
  int sqlite3BtreeSharable(Btree*);
  void sqlite3BtreeEnterCursor(BtCursor*);
  int sqlite3BtreeConnectionCount(Btree*);
# 354 "/Users/aleksei/Desktop/DB/sqlitejit2/src/btree.h"
  void sqlite3BtreeLeave(Btree*);
  void sqlite3BtreeLeaveCursor(BtCursor*);
  void sqlite3BtreeLeaveAll(sqlite3*);
# 1117 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h" 1
# 20 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/utils/fake_libc_include/stdio.h" 1
# 21 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h" 2






typedef struct Vdbe Vdbe;





typedef struct sqlite3_value Mem;
typedef struct SubProgram SubProgram;


# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jitCommons.h" 1



typedef enum {OK, ERROR, NO_MEM, ROW, DEOPT} jitRc;
typedef jitRc (*pJitFunc)(Vdbe*);
# 37 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h" 2






struct VdbeOp {
  u8 opcode;
  signed char p4type;
  u16 p5;
  int p1;
  int p2;
  int p3;
  union p4union {
    int i;
    void *p;
    char *z;
    i64 *pI64;
    double *pReal;
    FuncDef *pFunc;
    sqlite3_context *pCtx;
    CollSeq *pColl;
    Mem *pMem;
    VTable *pVtab;
    KeyInfo *pKeyInfo;
    int *ai;
    SubProgram *pProgram;
    Table *pTab;



    int (*xAdvance)(BtCursor *, int);
  } p4;




  int blackListed;
  int nExec;
  int loopEndPos;
  pJitFunc jitStart;
# 86 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h"
};
typedef struct VdbeOp VdbeOp;





struct SubProgram {
  VdbeOp *aOp;
  int nOp;
  int nMem;
  int nCsr;
  u8 *aOnce;
  void *token;
  SubProgram *pNext;
};





struct VdbeOpList {
  u8 opcode;
  signed char p1;
  signed char p2;
  signed char p3;
};
typedef struct VdbeOpList VdbeOpList;
# 177 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/opcodes.h" 1
# 178 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h" 2
# 189 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/vdbe.h"
Vdbe *sqlite3VdbeCreate(Parse*);
int sqlite3VdbeAddOp0(Vdbe*,int);
int sqlite3VdbeAddOp1(Vdbe*,int,int);
int sqlite3VdbeAddOp2(Vdbe*,int,int,int);
int sqlite3VdbeGoto(Vdbe*,int);
int sqlite3VdbeLoadString(Vdbe*,int,const char*);
void sqlite3VdbeMultiLoad(Vdbe*,int,const char*,...);
int sqlite3VdbeAddOp3(Vdbe*,int,int,int,int);
int sqlite3VdbeAddOp4(Vdbe*,int,int,int,int,const char *zP4,int);
int sqlite3VdbeAddOp4Dup8(Vdbe*,int,int,int,int,const u8*,int);
int sqlite3VdbeAddOp4Int(Vdbe*,int,int,int,int,int);
void sqlite3VdbeEndCoroutine(Vdbe*,int);







VdbeOp *sqlite3VdbeAddOpList(Vdbe*, int nOp, VdbeOpList const *aOp, int iLineno);
void sqlite3VdbeAddParseSchemaOp(Vdbe*,int,char*);
void sqlite3VdbeChangeOpcode(Vdbe*, u32 addr, u8);
void sqlite3VdbeChangeP1(Vdbe*, u32 addr, int P1);
void sqlite3VdbeChangeP2(Vdbe*, u32 addr, int P2);
void sqlite3VdbeChangeP3(Vdbe*, u32 addr, int P3);
void sqlite3VdbeChangeP5(Vdbe*, u16 P5);
void sqlite3VdbeJumpHere(Vdbe*, int addr);
int sqlite3VdbeChangeToNoop(Vdbe*, int addr);
int sqlite3VdbeDeletePriorOpcode(Vdbe*, u8 op);
void sqlite3VdbeChangeP4(Vdbe*, int addr, const char *zP4, int N);
void sqlite3VdbeAppendP4(Vdbe*, void *pP4, int p4type);
void sqlite3VdbeSetP4KeyInfo(Parse*, Index*);
void sqlite3VdbeUsesBtree(Vdbe*, int);
VdbeOp *sqlite3VdbeGetOp(Vdbe*, int);
int sqlite3VdbeMakeLabel(Vdbe*);
void sqlite3VdbeRunOnlyOnce(Vdbe*);
void sqlite3VdbeReusable(Vdbe*);
void sqlite3VdbeDelete(Vdbe*);
void sqlite3VdbeClearObject(sqlite3*,Vdbe*);
void sqlite3VdbeMakeReady(Vdbe*,Parse*);
int sqlite3VdbeFinalize(Vdbe*);
void sqlite3VdbeResolveLabel(Vdbe*, int);
int sqlite3VdbeCurrentAddr(Vdbe*);



void sqlite3VdbeResetStepResult(Vdbe*);
void sqlite3VdbeRewind(Vdbe*);
int sqlite3VdbeReset(Vdbe*);
void sqlite3VdbeSetNumCols(Vdbe*,int);
int sqlite3VdbeSetColName(Vdbe*, int, int, const char *, void(*)(void*));
void sqlite3VdbeCountChanges(Vdbe*);
sqlite3 *sqlite3VdbeDb(Vdbe*);
u8 sqlite3VdbePrepareFlags(Vdbe*);
void sqlite3VdbeSetSql(Vdbe*, const char *z, int n, u8);
void sqlite3VdbeSwap(Vdbe*,Vdbe*);
VdbeOp *sqlite3VdbeTakeOpArray(Vdbe*, int*, int*);
sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe*, int, u8);
void sqlite3VdbeSetVarmask(Vdbe*, int);

  char *sqlite3VdbeExpandSql(Vdbe*, const char*);

int sqlite3MemCompare(const Mem*, const Mem*, const CollSeq*);

void sqlite3VdbeRecordUnpack(KeyInfo*,int,const void*,UnpackedRecord*);
int sqlite3VdbeRecordCompare(int,const void*,UnpackedRecord*);
int sqlite3VdbeRecordCompareWithSkip(int, const void *, UnpackedRecord *, int);
UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(KeyInfo*);

typedef int (*RecordCompare)(int,const void*,UnpackedRecord*);
RecordCompare sqlite3VdbeFindCompare(UnpackedRecord*);


void sqlite3VdbeLinkSubProgram(Vdbe *, SubProgram *);


int sqlite3NotPureFunc(sqlite3_context*);
# 1118 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pager.h" 1
# 33 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pager.h"
typedef u32 Pgno;




typedef struct Pager Pager;




typedef struct PgHdr DbPage;
# 116 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pager.h"
int sqlite3PagerOpen(
  sqlite3_vfs*,
  Pager **ppPager,
  const char*,
  int,
  int,
  int,
  void(*)(DbPage*)
);
int sqlite3PagerClose(Pager *pPager, sqlite3*);
int sqlite3PagerReadFileheader(Pager*, int, unsigned char*);


void sqlite3PagerSetBusyhandler(Pager*, int(*)(void *), void *);
int sqlite3PagerSetPagesize(Pager*, u32*, int);



int sqlite3PagerMaxPageCount(Pager*, int);
void sqlite3PagerSetCachesize(Pager*, int);
int sqlite3PagerSetSpillsize(Pager*, int);
void sqlite3PagerSetMmapLimit(Pager *, sqlite3_int64);
void sqlite3PagerShrink(Pager*);
void sqlite3PagerSetFlags(Pager*,unsigned);
int sqlite3PagerLockingMode(Pager *, int);
int sqlite3PagerSetJournalMode(Pager *, int);
int sqlite3PagerGetJournalMode(Pager*);
int sqlite3PagerOkToChangeJournalMode(Pager*);
i64 sqlite3PagerJournalSizeLimit(Pager *, i64);
sqlite3_backup **sqlite3PagerBackupPtr(Pager*);
int sqlite3PagerFlush(Pager*);


int sqlite3PagerGet(Pager *pPager, Pgno pgno, DbPage **ppPage, int clrFlag);
DbPage *sqlite3PagerLookup(Pager *pPager, Pgno pgno);
void sqlite3PagerRef(DbPage*);
void sqlite3PagerUnref(DbPage*);
void sqlite3PagerUnrefNotNull(DbPage*);
void sqlite3PagerUnrefPageOne(DbPage*);


int sqlite3PagerWrite(DbPage*);
void sqlite3PagerDontWrite(DbPage*);
int sqlite3PagerMovepage(Pager*,DbPage*,Pgno,int);
int sqlite3PagerPageRefcount(DbPage*);
void *sqlite3PagerGetData(DbPage *);
void *sqlite3PagerGetExtra(DbPage *);


void sqlite3PagerPagecount(Pager*, int*);
int sqlite3PagerBegin(Pager*, int exFlag, int);
int sqlite3PagerCommitPhaseOne(Pager*,const char *zMaster, int);
int sqlite3PagerExclusiveLock(Pager*);
int sqlite3PagerSync(Pager *pPager, const char *zMaster);
int sqlite3PagerCommitPhaseTwo(Pager*);
int sqlite3PagerRollback(Pager*);
int sqlite3PagerOpenSavepoint(Pager *pPager, int n);
int sqlite3PagerSavepoint(Pager *pPager, int op, int iSavepoint);
int sqlite3PagerSharedLock(Pager *pPager);


  int sqlite3PagerCheckpoint(Pager *pPager, sqlite3*, int, int*, int*);
  int sqlite3PagerWalSupported(Pager *pPager);
  int sqlite3PagerWalCallback(Pager *pPager);
  int sqlite3PagerOpenWal(Pager *pPager, int *pisOpen);
  int sqlite3PagerCloseWal(Pager *pPager, sqlite3*);
# 199 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pager.h"
u8 sqlite3PagerIsreadonly(Pager*);
u32 sqlite3PagerDataVersion(Pager*);



int sqlite3PagerMemUsed(Pager*);
const char *sqlite3PagerFilename(Pager*, int);
sqlite3_vfs *sqlite3PagerVfs(Pager*);
sqlite3_file *sqlite3PagerFile(Pager*);
sqlite3_file *sqlite3PagerJrnlFile(Pager*);
const char *sqlite3PagerJournalname(Pager*);
void *sqlite3PagerTempSpace(Pager*);
int sqlite3PagerIsMemdb(Pager*);
void sqlite3PagerCacheStat(Pager *, int, int, int *);
void sqlite3PagerClearCache(Pager*);
int sqlite3SectorSize(sqlite3_file *);


void sqlite3PagerTruncateImage(Pager*,Pgno);

void sqlite3PagerRekey(DbPage*, Pgno, u16);
# 1119 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pcache.h" 1
# 18 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pcache.h"
typedef struct PgHdr PgHdr;
typedef struct PCache PCache;





struct PgHdr {
  sqlite3_pcache_page *pPage;
  void *pData;
  void *pExtra;
  PCache *pCache;
  PgHdr *pDirty;
  Pager *pPager;
  Pgno pgno;



  u16 flags;






  i16 nRef;
  PgHdr *pDirtyNext;
  PgHdr *pDirtyPrev;


};
# 62 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pcache.h"
int sqlite3PcacheInitialize(void);
void sqlite3PcacheShutdown(void);




void sqlite3PCacheBufferSetup(void *, int sz, int n);





int sqlite3PcacheOpen(
  int szPage,
  int szExtra,
  int bPurgeable,
  int (*xStress)(void*, PgHdr*),
  void *pStress,
  PCache *pToInit
);


int sqlite3PcacheSetPageSize(PCache *, int);




int sqlite3PcacheSize(void);




sqlite3_pcache_page *sqlite3PcacheFetch(PCache*, Pgno, int createFlag);
int sqlite3PcacheFetchStress(PCache*, Pgno, sqlite3_pcache_page**);
PgHdr *sqlite3PcacheFetchFinish(PCache*, Pgno, sqlite3_pcache_page *pPage);
void sqlite3PcacheRelease(PgHdr*);

void sqlite3PcacheDrop(PgHdr*);
void sqlite3PcacheMakeDirty(PgHdr*);
void sqlite3PcacheMakeClean(PgHdr*);
void sqlite3PcacheCleanAll(PCache*);
void sqlite3PcacheClearWritable(PCache*);


void sqlite3PcacheMove(PgHdr*, Pgno);


void sqlite3PcacheTruncate(PCache*, Pgno x);


PgHdr *sqlite3PcacheDirtyList(PCache*);


void sqlite3PcacheClose(PCache*);


void sqlite3PcacheClearSyncFlags(PCache *);


void sqlite3PcacheClear(PCache*);


int sqlite3PcacheRefCount(PCache*);


void sqlite3PcacheRef(PgHdr*);

int sqlite3PcachePageRefcount(PgHdr*);


int sqlite3PcachePagecount(PCache*);
# 153 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pcache.h"
void sqlite3PcacheSetCachesize(PCache *, int);
# 163 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pcache.h"
int sqlite3PcacheSetSpillsize(PCache *, int);


void sqlite3PcacheShrink(PCache*);
# 177 "/Users/aleksei/Desktop/DB/sqlitejit2/src/pcache.h"
void sqlite3PCacheSetDefault(void);


int sqlite3HeaderSizePcache(void);
int sqlite3HeaderSizePcache1(void);


int sqlite3PCachePercentDirty(PCache*);
# 1120 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/os.h" 1
# 27 "/Users/aleksei/Desktop/DB/sqlitejit2/src/os.h"
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/os_setup.h" 1
# 28 "/Users/aleksei/Desktop/DB/sqlitejit2/src/os.h" 2
# 158 "/Users/aleksei/Desktop/DB/sqlitejit2/src/os.h"
int sqlite3OsInit(void);




void sqlite3OsClose(sqlite3_file*);
int sqlite3OsRead(sqlite3_file*, void*, int amt, i64 offset);
int sqlite3OsWrite(sqlite3_file*, const void*, int amt, i64 offset);
int sqlite3OsTruncate(sqlite3_file*, i64 size);
int sqlite3OsSync(sqlite3_file*, int);
int sqlite3OsFileSize(sqlite3_file*, i64 *pSize);
int sqlite3OsLock(sqlite3_file*, int);
int sqlite3OsUnlock(sqlite3_file*, int);
int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut);
int sqlite3OsFileControl(sqlite3_file*,int,void*);
void sqlite3OsFileControlHint(sqlite3_file*,int,void*);

int sqlite3OsSectorSize(sqlite3_file *id);
int sqlite3OsDeviceCharacteristics(sqlite3_file *id);

int sqlite3OsShmMap(sqlite3_file *,int,int,int,void volatile **);
int sqlite3OsShmLock(sqlite3_file *id, int, int, int);
void sqlite3OsShmBarrier(sqlite3_file *id);
int sqlite3OsShmUnmap(sqlite3_file *id, int);

int sqlite3OsFetch(sqlite3_file *id, i64, int, void **);
int sqlite3OsUnfetch(sqlite3_file *, i64, void *);





int sqlite3OsOpen(sqlite3_vfs *, const char *, sqlite3_file*, int, int *);
int sqlite3OsDelete(sqlite3_vfs *, const char *, int);
int sqlite3OsAccess(sqlite3_vfs *, const char *, int, int *pResOut);
int sqlite3OsFullPathname(sqlite3_vfs *, const char *, int, char *);

void *sqlite3OsDlOpen(sqlite3_vfs *, const char *);
void sqlite3OsDlError(sqlite3_vfs *, int, char *);
void (*sqlite3OsDlSym(sqlite3_vfs *, void *, const char *))(void);
void sqlite3OsDlClose(sqlite3_vfs *, void *);

int sqlite3OsRandomness(sqlite3_vfs *, int, char *);
int sqlite3OsSleep(sqlite3_vfs *, int);
int sqlite3OsGetLastError(sqlite3_vfs*);
int sqlite3OsCurrentTimeInt64(sqlite3_vfs *, sqlite3_int64*);





int sqlite3OsOpenMalloc(sqlite3_vfs *, const char *, sqlite3_file **, int,int*);
void sqlite3OsCloseFree(sqlite3_file *);
# 1121 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/mutex.h" 1
# 1122 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h" 2
# 1161 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Db {
  char *zDbSName;
  Btree *pBt;
  u8 safety_level;
  u8 bSyncSet;
  Schema *pSchema;
};
# 1186 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Schema {
  int schema_cookie;
  int iGeneration;
  Hash tblHash;
  Hash idxHash;
  Hash trigHash;
  Hash fkeyHash;
  Table *pSeqTab;
  u8 file_format;
  u8 enc;
  u16 schemaFlags;
  int cache_size;
};
# 1250 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Lookaside {
  u32 bDisable;
  u16 sz;
  u8 bMalloced;
  u32 nSlot;
  u32 anStat[3];
  LookasideSlot *pInit;
  LookasideSlot *pFree;
  void *pStart;
  void *pEnd;
};
struct LookasideSlot {
  LookasideSlot *pNext;
};
# 1273 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct FuncDefHash {
  FuncDef *a[23];
};
# 1311 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  typedef int (*sqlite3_xauth)(void*,int,const char*,const char*,const char*,
                               const char*);
# 1328 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct sqlite3 {
  sqlite3_vfs *pVfs;
  struct Vdbe *pVdbe;
  CollSeq *pDfltColl;
  sqlite3_mutex *mutex;
  Db *aDb;
  int nDb;
  u32 mDbFlags;
  u32 flags;
  i64 lastRowid;
  i64 szMmap;
  u32 nSchemaLock;
  unsigned int openFlags;
  int errCode;
  int errMask;
  int iSysErrno;
  u16 dbOptFlags;
  u8 enc;
  u8 autoCommit;
  u8 temp_store;
  u8 mallocFailed;
  u8 bBenignMalloc;
  u8 dfltLockMode;
  signed char nextAutovac;
  u8 suppressErr;
  u8 vtabOnConflict;
  u8 isTransactionSavepoint;
  u8 mTrace;
  u8 skipBtreeMutex;
  u8 nSqlExec;
  int nextPagesize;
  u32 magic;
  int nChange;
  int nTotalChange;
  int aLimit[(11 +1)];
  int nMaxSorterMmap;
  struct sqlite3InitInfo {
    int newTnum;
    u8 iDb;
    u8 busy;
    u8 orphanTrigger;
    u8 imposterTable;
  } init;
  int nVdbeActive;
  int nVdbeRead;
  int nVdbeWrite;
  int nVdbeExec;
  int nVDestroy;
  int nExtension;
  void **aExtension;
  int (*xTrace)(u32,void*,void*,void*);
  void *pTraceArg;
  void (*xProfile)(void*,const char*,u64);
  void *pProfileArg;
  void *pCommitArg;
  int (*xCommitCallback)(void*);
  void *pRollbackArg;
  void (*xRollbackCallback)(void*);
  void *pUpdateArg;
  void (*xUpdateCallback)(void*,int, const char*,const char*,sqlite_int64);
# 1396 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  int (*xWalCallback)(void *, sqlite3 *, const char *, int);
  void *pWalArg;

  void(*xCollNeeded)(void*,sqlite3*,int eTextRep,const char*);
  void(*xCollNeeded16)(void*,sqlite3*,int eTextRep,const void*);
  void *pCollNeededArg;
  sqlite3_value *pErr;
  union {
    volatile int isInterrupted;
    double notUsed1;
  } u1;
  Lookaside lookaside;

  sqlite3_xauth xAuth;
  void *pAuthArg;


  int (*xProgress)(void *);
  void *pProgressArg;
  unsigned nProgressOps;


  int nVTrans;
  Hash aModule;
  VtabCtx *pVtabCtx;
  VTable **aVTrans;
  VTable *pDisconnect;

  Hash aFunc;
  Hash aCollSeq;
  BusyHandler busyHandler;
  Db aDbStatic[2];
  Savepoint *pSavepoint;
  int busyTimeout;
  int nSavepoint;
  int nStatement;
  i64 nDeferredCons;
  i64 nDeferredImmCons;
  int *pnBytesFreed;
# 1455 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
};
# 1570 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct FuncDef {
  i8 nArg;
  u16 funcFlags;
  void *pUserData;
  FuncDef *pNext;
  void (*xSFunc)(sqlite3_context*,int,sqlite3_value**);
  void (*xFinalize)(sqlite3_context*);
  const char *zName;
  union {
    FuncDef *pHash;
    FuncDestructor *pDestructor;
  } u;
};
# 1598 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct FuncDestructor {
  int nRef;
  void (*xDestroy)(void *);
  void *pUserData;
};
# 1709 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Savepoint {
  char *zName;
  i64 nDeferredCons;
  i64 nDeferredImmCons;
  Savepoint *pNext;
};
# 1730 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Module {
  const sqlite3_module *pModule;
  const char *zName;
  void *pAux;
  void (*xDestroy)(void *);
  Table *pEpoTab;
};





struct Column {
  char *zName;
  Expr *pDflt;
  char *zColl;
  u8 notNull;
  char affinity;
  u8 szEst;
  u8 colFlags;
};
# 1768 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct CollSeq {
  char *zName;
  u8 enc;
  void *pUser;
  int (*xCmp)(void*,int, const void*, int, const void*);
  void (*xDel)(void*);
};
# 1868 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct VTable {
  sqlite3 *db;
  Module *pMod;
  sqlite3_vtab *pVtab;
  int nRef;
  u8 bConstraint;
  int iSavepoint;
  VTable *pNext;
};





struct Table {
  char *zName;
  Column *aCol;
  Index *pIndex;
  Select *pSelect;
  FKey *pFKey;
  char *zColAff;
  ExprList *pCheck;

  int tnum;
  u32 nTabRef;
  u32 tabFlags;
  i16 iPKey;
  i16 nCol;
  LogEst nRowLogEst;
  LogEst szTabRow;



  u8 keyConf;

  int addColOffset;


  int nModuleArg;
  char **azModuleArg;
  VTable *pVTable;

  Trigger *pTrigger;
  Schema *pSchema;
  Table *pNextZombie;
};
# 1997 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct FKey {
  Table *pFrom;
  FKey *pNextFrom;
  char *zTo;
  FKey *pNextTo;
  FKey *pPrevTo;
  int nCol;

  u8 isDeferred;
  u8 aAction[2];
  Trigger *apTrigger[2];
  struct sColMap {
    int iFrom;
    char *zCol;
  } aCol[1];
};
# 2063 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct KeyInfo {
  u32 nRef;
  u8 enc;
  u16 nKeyField;
  u16 nAllField;
  sqlite3 *db;
  u8 *aSortOrder;
  CollSeq *aColl[1];
};
# 2108 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct UnpackedRecord {
  KeyInfo *pKeyInfo;
  Mem *aMem;
  u16 nField;
  i8 default_rc;
  u8 errCode;
  i8 r1;
  i8 r2;
  u8 eqSeen;
};
# 2154 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Index {
  char *zName;
  i16 *aiColumn;
  LogEst *aiRowLogEst;
  Table *pTable;
  char *zColAff;
  Index *pNext;
  Schema *pSchema;
  u8 *aSortOrder;
  const char **azColl;
  Expr *pPartIdxWhere;
  ExprList *aColExpr;
  int tnum;
  LogEst szIdxRow;
  u16 nKeyCol;
  u16 nColumn;
  u8 onError;
  unsigned idxType:2;
  unsigned bUnordered:1;
  unsigned uniqNotNull:1;
  unsigned isResized:1;
  unsigned isCovering:1;
  unsigned noSkipScan:1;
  unsigned hasStat1:1;
  unsigned bNoQuery:1;
# 2187 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
};
# 2213 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct IndexSample {
  void *p;
  int n;
  tRowcnt *anEq;
  tRowcnt *anLt;
  tRowcnt *anDLt;
};
# 2229 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Token {
  const char *z;
  unsigned int n;
};
# 2247 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct AggInfo {
  u8 directMode;

  u8 useSortingIdx;

  int sortingIdx;
  int sortingIdxPTab;
  int nSortingColumn;
  int mnReg, mxReg;
  ExprList *pGroupBy;
  struct AggInfo_col {
    Table *pTab;
    int iTable;
    int iColumn;
    int iSorterColumn;
    int iMem;
    Expr *pExpr;
  } *aCol;
  int nColumn;
  int nAccumulator;


  struct AggInfo_func {
    Expr *pExpr;
    FuncDef *pFunc;
    int iMem;
    int iDistinct;
  } *aFunc;
  int nFunc;
};
# 2289 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
typedef i16 ynVar;
# 2357 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Expr {
  u8 op;
  char affinity;
  u32 flags;
  union {
    char *zToken;
    int iValue;
  } u;






  Expr *pLeft;
  Expr *pRight;
  union {
    ExprList *pList;
    Select *pSelect;
  } x;







  int nHeight;

  int iTable;




  ynVar iColumn;


  i16 iAgg;
  i16 iRightJoinTable;
  u8 op2;


  AggInfo *pAggInfo;
  Table *pTab;

};
# 2488 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct ExprList {
  int nExpr;
  struct ExprList_item {
    Expr *pExpr;
    char *zName;
    char *zSpan;
    u8 sortOrder;
    unsigned done :1;
    unsigned bSpanIsTab :1;
    unsigned reusable :1;
    union {
      struct {
        u16 iOrderByCol;
        u16 iAlias;
      } x;
      int iConstExprReg;
    } u;
  } a[1];
};
# 2523 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct IdList {
  struct IdList_item {
    char *zName;
    int idx;
  } *a;
  int nId;
};
# 2541 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  typedef u64 Bitmask;
# 2575 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct SrcList {
  int nSrc;
  u32 nAlloc;
  struct SrcList_item {
    Schema *pSchema;
    char *zDatabase;
    char *zName;
    char *zAlias;
    Table *pTab;
    Select *pSelect;
    int addrFillSub;
    int regReturn;
    int regResult;
    struct {
      u8 jointype;
      unsigned notIndexed :1;
      unsigned isIndexedBy :1;
      unsigned isTabFunc :1;
      unsigned isCorrelated :1;
      unsigned viaCoroutine :1;
      unsigned isRecursive :1;
    } fg;

    u8 iSelectId;

    int iCursor;
    Expr *pOn;
    IdList *pUsing;
    Bitmask colUsed;
    union {
      char *zIndexedBy;
      ExprList *pFuncArg;
    } u1;
    Index *pIBIndex;
  } a[1];
};
# 2678 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct NameContext {
  Parse *pParse;
  SrcList *pSrcList;
  ExprList *pEList;
  AggInfo *pAggInfo;
  NameContext *pNext;
  int nRef;
  int nErr;
  u16 ncFlags;
};
# 2727 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Select {
  ExprList *pEList;
  u8 op;
  LogEst nSelectRow;
  u32 selFlags;
  int iLimit, iOffset;



  int addrOpenEphm[2];
  SrcList *pSrc;
  Expr *pWhere;
  ExprList *pGroupBy;
  Expr *pHaving;
  ExprList *pOrderBy;
  Select *pPrior;
  Select *pNext;
  Expr *pLimit;
  With *pWith;
};
# 2865 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct SelectDest {
  u8 eDest;
  int iSDParm;
  int iSdst;
  int nSdst;
  char *zAffSdst;
  ExprList *pOrderBy;
};
# 2883 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct AutoincInfo {
  AutoincInfo *pNext;
  Table *pTab;
  int iDb;
  int regCtr;
};
# 2915 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct TriggerPrg {
  Trigger *pTrigger;
  TriggerPrg *pNext;
  SubProgram *pProgram;
  int orconf;
  u32 aColmask[2];
};
# 2934 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  typedef unsigned int yDbMask;
# 2958 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Parse {
  sqlite3 *db;
  char *zErrMsg;
  Vdbe *pVdbe;
  int rc;
  u8 colNamesSet;
  u8 checkSchema;
  u8 nested;
  u8 nTempReg;
  u8 isMultiWrite;
  u8 mayAbort;
  u8 hasCompound;
  u8 okConstFactor;
  u8 disableLookaside;
  u8 nColCache;
  int nRangeReg;
  int iRangeReg;
  int nErr;
  int nTab;
  int nMem;
  int nOpAlloc;
  int szOpAlloc;
  int iSelfTab;

  int iCacheLevel;
  int iCacheCnt;
  int nLabel;
  int *aLabel;
  ExprList *pConstExpr;
  Token constraintName;
  yDbMask writeMask;
  yDbMask cookieMask;
  int regRowid;
  int regRoot;
  int nMaxArg;





  int nTableLock;
  TableLock *aTableLock;

  AutoincInfo *pAinc;
  Parse *pToplevel;
  Table *pTriggerTab;
  int addrCrTab;
  u32 nQueryLoop;
  u32 oldmask;
  u32 newmask;
  u8 eTriggerOp;
  u8 eOrconf;
  u8 disableTriggers;
# 3019 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  struct yColCache {
    int iTable;
    i16 iColumn;
    u8 tempReg;
    int iLevel;
    int iReg;
    int lru;
  } aColCache[10];
  int aTempReg[8];
  Token sNameToken;
# 3037 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  Token sLastToken;
  ynVar nVar;
  u8 iPkSortOrder;
  u8 explain;

  u8 declareVtab;
  int nVtabLock;

  int nHeight;

  int iSelectId;
  int iNextSelectId;

  VList *pVList;
  Vdbe *pReprepare;
  const char *zTail;
  Table *pNewTable;
  Trigger *pNewTrigger;
  const char *zAuthContext;

  Token sArg;
  Table **apVtabLock;

  Table *pZombieTab;
  TriggerPrg *pTriggerPrg;
  With *pWith;
  With *pWithToFree;
};
# 3087 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct AuthContext {
  const char *zAuthContext;
  Parse *pParse;
};
# 3138 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Trigger {
  char *zName;
  char *table;
  u8 op;
  u8 tr_tm;
  Expr *pWhen;
  IdList *pColumns;

  Schema *pSchema;
  Schema *pTabSchema;
  TriggerStep *step_list;
  Trigger *pNext;
};
# 3200 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct TriggerStep {
  u8 op;
  u8 orconf;
  Trigger *pTrig;
  Select *pSelect;
  char *zTarget;
  Expr *pWhere;
  ExprList *pExprList;
  IdList *pIdList;
  char *zSpan;
  TriggerStep *pNext;
  TriggerStep *pLast;
};






typedef struct DbFixer DbFixer;
struct DbFixer {
  Parse *pParse;
  Schema *pSchema;
  int bVarOnly;
  const char *zDb;
  const char *zType;
  const Token *pName;
};





struct StrAccum {
  sqlite3 *db;
  char *zText;
  u32 nAlloc;
  u32 mxAlloc;
  u32 nChar;
  u8 accError;
  u8 printfFlags;
};
# 3255 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
typedef struct {
  sqlite3 *db;
  char **pzErrMsg;
  int iDb;
  int rc;
} InitData;






struct Sqlite3Config {
  int bMemstat;
  int bCoreMutex;
  int bFullMutex;
  int bOpenUri;
  int bUseCis;
  int bSmallMalloc;
  int mxStrlen;
  int neverCorrupt;
  int szLookaside;
  int nLookaside;
  int nStmtSpill;
  sqlite3_mem_methods m;
  sqlite3_mutex_methods mutex;
  sqlite3_pcache_methods2 pcache2;
  void *pHeap;
  int nHeap;
  int mnReq, mxReq;
  sqlite3_int64 szMmap;
  sqlite3_int64 mxMmap;
  void *pPage;
  int szPage;
  int nPage;
  int mxParserStack;
  int sharedCacheEnabled;
  u32 szPma;


  int isInit;
  int inProgress;
  int isMutexInit;
  int isMallocInit;
  int isPCacheInit;
  int nRefInitMutex;
  sqlite3_mutex *pInitMutex;
  void (*xLog)(void*,int,const char*);
  void *pLogArg;
# 3316 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  int (*xTestCallback)(int);

  int bLocaltimeFault;
  int iOnceResetThreshold;
};
# 3343 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct Walker {
  Parse *pParse;
  int (*xExprCallback)(Walker*, Expr*);
  int (*xSelectCallback)(Walker*,Select*);
  void (*xSelectCallback2)(Walker*,Select*);
  int walkerDepth;
  u8 eCode;
  union {
    NameContext *pNC;
    int n;
    int iCur;
    SrcList *pSrcList;
    struct SrcCount *pSrcCount;
    struct CCurHint *pCCurHint;
    int *aiCol;
    struct IdxCover *pIdxCover;
    struct IdxExprTrans *pIdxTrans;
    ExprList *pGroupBy;
    struct HavingToWhereCtx *pHavingCtx;
  } u;
};


int sqlite3WalkExpr(Walker*, Expr*);
int sqlite3WalkExprList(Walker*, ExprList*);
int sqlite3WalkSelect(Walker*, Select*);
int sqlite3WalkSelectExpr(Walker*, Select*);
int sqlite3WalkSelectFrom(Walker*, Select*);
int sqlite3ExprWalkNoop(Walker*, Expr*);
int sqlite3SelectWalkNoop(Walker*, Select*);
int sqlite3SelectWalkFail(Walker*, Select*);
# 3390 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct With {
  int nCte;
  With *pOuter;
  struct Cte {
    char *zName;
    ExprList *pCols;
    Select *pSelect;
    const char *zCteErr;
  } a[1];
};
# 3429 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
int sqlite3ReportError(int iErr, int lineno, const char *zType);
int sqlite3CorruptError(int);
int sqlite3MisuseError(int);
int sqlite3CantopenError(int);
# 3500 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
int sqlite3IsIdChar(u8);





int sqlite3StrICmp(const char*,const char*);
int sqlite3Strlen30(const char*);
char *sqlite3ColumnType(Column*,char*);


int sqlite3MallocInit(void);
void sqlite3MallocEnd(void);
void *sqlite3Malloc(u64);
void *sqlite3MallocZero(u64);
void *sqlite3DbMallocZero(sqlite3*, u64);
void *sqlite3DbMallocRaw(sqlite3*, u64);
void *sqlite3DbMallocRawNN(sqlite3*, u64);
char *sqlite3DbStrDup(sqlite3*,const char*);
char *sqlite3DbStrNDup(sqlite3*,const char*, u64);
char *sqlite3DbSpanDup(sqlite3*,const char*,const char*);
void *sqlite3Realloc(void*, u64);
void *sqlite3DbReallocOrFree(sqlite3 *, void *, u64);
void *sqlite3DbRealloc(sqlite3 *, void *, u64);
void sqlite3DbFree(sqlite3*, void*);
void sqlite3DbFreeNN(sqlite3*, void*);
int sqlite3MallocSize(void*);
int sqlite3DbMallocSize(sqlite3*, void*);
void *sqlite3PageMalloc(int);
void sqlite3PageFree(void*);
void sqlite3MemSetDefault(void);

void sqlite3BenignMallocHooks(void (*)(void), void (*)(void));

int sqlite3HeapNearlyFull(void);
# 3567 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  sqlite3_mutex_methods const *sqlite3DefaultMutex(void);
  sqlite3_mutex_methods const *sqlite3NoopMutex(void);
  sqlite3_mutex *sqlite3MutexAlloc(int);
  int sqlite3MutexInit(void);
  int sqlite3MutexEnd(void);


  void sqlite3MemoryBarrier(void);




sqlite3_int64 sqlite3StatusValue(int);
void sqlite3StatusUp(int, int);
void sqlite3StatusDown(int, int);
void sqlite3StatusHighwater(int, int);
int sqlite3LookasideUsed(sqlite3*,int*);


sqlite3_mutex *sqlite3Pcache1Mutex(void);
sqlite3_mutex *sqlite3MallocMutex(void);
# 3596 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  int sqlite3IsNaN(double);
# 3605 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
struct PrintfArguments {
  int nArg;
  int nUsed;
  sqlite3_value **apArg;
};

void sqlite3VXPrintf(StrAccum*, const char*, va_list);
void sqlite3XPrintf(StrAccum*, const char*, ...);
char *sqlite3MPrintf(sqlite3*,const char*, ...);
char *sqlite3VMPrintf(sqlite3*,const char*, va_list);
# 3631 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
void sqlite3SetString(char **, sqlite3*, const char*);
void sqlite3ErrorMsg(Parse*, const char*, ...);
void sqlite3Dequote(char*);
void sqlite3TokenInit(Token*,char*);
int sqlite3KeywordCode(const unsigned char*, int);
int sqlite3RunParser(Parse*, const char*, char **);
void sqlite3FinishCoding(Parse*);
int sqlite3GetTempReg(Parse*);
void sqlite3ReleaseTempReg(Parse*,int);
int sqlite3GetTempRange(Parse*,int);
void sqlite3ReleaseTempRange(Parse*,int,int);
void sqlite3ClearTempRegCache(Parse*);



Expr *sqlite3ExprAlloc(sqlite3*,int,const Token*,int);
Expr *sqlite3Expr(sqlite3*,int,const char*);
void sqlite3ExprAttachSubtrees(sqlite3*,Expr*,Expr*,Expr*);
Expr *sqlite3PExpr(Parse*, int, Expr*, Expr*);
void sqlite3PExprAddSelect(Parse*, Expr*, Select*);
Expr *sqlite3ExprAnd(sqlite3*,Expr*, Expr*);
Expr *sqlite3ExprFunction(Parse*,ExprList*, Token*);
void sqlite3ExprAssignVarNumber(Parse*, Expr*, u32);
void sqlite3ExprDelete(sqlite3*, Expr*);
ExprList *sqlite3ExprListAppend(Parse*,ExprList*,Expr*);
ExprList *sqlite3ExprListAppendVector(Parse*,ExprList*,IdList*,Expr*);
void sqlite3ExprListSetSortOrder(ExprList*,int);
void sqlite3ExprListSetName(Parse*,ExprList*,Token*,int);
void sqlite3ExprListSetSpan(Parse*,ExprList*,const char*,const char*);
void sqlite3ExprListDelete(sqlite3*, ExprList*);
u32 sqlite3ExprListFlags(const ExprList*);
int sqlite3Init(sqlite3*, char**);
int sqlite3InitCallback(void*, int, char**, char**);
void sqlite3Pragma(Parse*,Token*,Token*,Token*,int);

Module *sqlite3PragmaVtabRegister(sqlite3*,const char *zName);

void sqlite3ResetAllSchemasOfConnection(sqlite3*);
void sqlite3ResetOneSchema(sqlite3*,int);
void sqlite3CollapseDatabaseArray(sqlite3*);
void sqlite3CommitInternalChanges(sqlite3*);
void sqlite3DeleteColumnNames(sqlite3*,Table*);
int sqlite3ColumnsFromExprList(Parse*,ExprList*,i16*,Column**);
void sqlite3SelectAddColumnTypeAndCollation(Parse*,Table*,Select*);
Table *sqlite3ResultSetOfSelect(Parse*,Select*);
void sqlite3OpenMasterTable(Parse *, int);
Index *sqlite3PrimaryKeyIndex(Table*);
i16 sqlite3ColumnOfIndex(Index*, i16);
void sqlite3StartTable(Parse*,Token*,Token*,int,int,int,int);





void sqlite3AddColumn(Parse*,Token*,Token*);
void sqlite3AddNotNull(Parse*, int);
void sqlite3AddPrimaryKey(Parse*, ExprList*, int, int, int);
void sqlite3AddCheckConstraint(Parse*, Expr*);
void sqlite3AddDefaultValue(Parse*,Expr*,const char*,const char*);
void sqlite3AddCollateType(Parse*, Token*);
void sqlite3EndTable(Parse*,Token*,Token*,u8,Select*);
int sqlite3ParseUri(const char*,const char*,unsigned int*,
                    sqlite3_vfs**,char**,char **);
Btree *sqlite3DbNameToBtree(sqlite3*,const char*);




  int sqlite3FaultSim(int);


Bitvec *sqlite3BitvecCreate(u32);
int sqlite3BitvecTest(Bitvec*, u32);
int sqlite3BitvecTestNotNull(Bitvec*, u32);
int sqlite3BitvecSet(Bitvec*, u32);
void sqlite3BitvecClear(Bitvec*, u32, void*);
void sqlite3BitvecDestroy(Bitvec*);
u32 sqlite3BitvecSize(Bitvec*);

int sqlite3BitvecBuiltinTest(int,int*);


RowSet *sqlite3RowSetInit(sqlite3*, void*, unsigned int);
void sqlite3RowSetClear(RowSet*);
void sqlite3RowSetInsert(RowSet*, i64);
int sqlite3RowSetTest(RowSet*, int iBatch, i64);
int sqlite3RowSetNext(RowSet*, i64*);

void sqlite3CreateView(Parse*,Token*,Token*,Token*,ExprList*,Select*,int,int);


  int sqlite3ViewGetColumnNames(Parse*,Table*);







void sqlite3DropTable(Parse*, SrcList*, int, int);
void sqlite3CodeDropTable(Parse*, Table*, int, int);
void sqlite3DeleteTable(sqlite3*, Table*);

  void sqlite3AutoincrementBegin(Parse *pParse);
  void sqlite3AutoincrementEnd(Parse *pParse);




void sqlite3Insert(Parse*, SrcList*, Select*, IdList*, int);
void *sqlite3ArrayAllocate(sqlite3*,void*,int,int*,int*);
IdList *sqlite3IdListAppend(sqlite3*, IdList*, Token*);
int sqlite3IdListIndex(IdList*,const char*);
SrcList *sqlite3SrcListEnlarge(sqlite3*, SrcList*, int, int);
SrcList *sqlite3SrcListAppend(sqlite3*, SrcList*, Token*, Token*);
SrcList *sqlite3SrcListAppendFromTerm(Parse*, SrcList*, Token*, Token*,
                                      Token*, Select*, Expr*, IdList*);
void sqlite3SrcListIndexedBy(Parse *, SrcList *, Token *);
void sqlite3SrcListFuncArgs(Parse*, SrcList*, ExprList*);
int sqlite3IndexedByLookup(Parse *, struct SrcList_item *);
void sqlite3SrcListShiftJoinType(SrcList*);
void sqlite3SrcListAssignCursors(Parse*, SrcList*);
void sqlite3IdListDelete(sqlite3*, IdList*);
void sqlite3SrcListDelete(sqlite3*, SrcList*);
Index *sqlite3AllocateIndexObject(sqlite3*,i16,int,char**);
void sqlite3CreateIndex(Parse*,Token*,Token*,SrcList*,ExprList*,int,Token*,
                          Expr*, int, int, u8);
void sqlite3DropIndex(Parse*, SrcList*, int);
int sqlite3Select(Parse*, Select*, SelectDest*);
Select *sqlite3SelectNew(Parse*,ExprList*,SrcList*,Expr*,ExprList*,
                         Expr*,ExprList*,u32,Expr*);
void sqlite3SelectDelete(sqlite3*, Select*);
Table *sqlite3SrcListLookup(Parse*, SrcList*);
int sqlite3IsReadOnly(Parse*, Table*, int);
void sqlite3OpenTable(Parse*, int iCur, int iDb, Table*, int);



void sqlite3DeleteFrom(Parse*, SrcList*, Expr*, ExprList*, Expr*);
void sqlite3Update(Parse*, SrcList*, ExprList*,Expr*,int,ExprList*,Expr*);
WhereInfo *sqlite3WhereBegin(Parse*,SrcList*,Expr*,ExprList*,ExprList*,u16,int);
void sqlite3WhereEnd(WhereInfo*);
LogEst sqlite3WhereOutputRowCount(WhereInfo*);
int sqlite3WhereIsDistinct(WhereInfo*);
int sqlite3WhereIsOrdered(WhereInfo*);
int sqlite3WhereOrderedInnerLoop(WhereInfo*);
int sqlite3WhereIsSorted(WhereInfo*);
int sqlite3WhereContinueLabel(WhereInfo*);
int sqlite3WhereBreakLabel(WhereInfo*);
int sqlite3WhereOkOnePass(WhereInfo*, int*);



void sqlite3ExprCodeLoadIndexColumn(Parse*, Index*, int, int, int);
int sqlite3ExprCodeGetColumn(Parse*, Table*, int, int, int, u8);
void sqlite3ExprCodeGetColumnToReg(Parse*, Table*, int, int, int);
void sqlite3ExprCodeGetColumnOfTable(Vdbe*, Table*, int, int, int);
void sqlite3ExprCodeMove(Parse*, int, int, int);
void sqlite3ExprCacheStore(Parse*, int, int, int);
void sqlite3ExprCachePush(Parse*);
void sqlite3ExprCachePop(Parse*);
void sqlite3ExprCacheRemove(Parse*, int, int);
void sqlite3ExprCacheClear(Parse*);
void sqlite3ExprCacheAffinityChange(Parse*, int, int);
void sqlite3ExprCode(Parse*, Expr*, int);
void sqlite3ExprCodeCopy(Parse*, Expr*, int);
void sqlite3ExprCodeFactorable(Parse*, Expr*, int);
int sqlite3ExprCodeAtInit(Parse*, Expr*, int);
int sqlite3ExprCodeTemp(Parse*, Expr*, int*);
int sqlite3ExprCodeTarget(Parse*, Expr*, int);
void sqlite3ExprCodeAndCache(Parse*, Expr*, int);
int sqlite3ExprCodeExprList(Parse*, ExprList*, int, int, u8);




void sqlite3ExprIfTrue(Parse*, Expr*, int, int);
void sqlite3ExprIfFalse(Parse*, Expr*, int, int);
void sqlite3ExprIfFalseDup(Parse*, Expr*, int, int);
Table *sqlite3FindTable(sqlite3*,const char*, const char*);


Table *sqlite3LocateTable(Parse*,u32 flags,const char*, const char*);
Table *sqlite3LocateTableItem(Parse*,u32 flags,struct SrcList_item *);
Index *sqlite3FindIndex(sqlite3*,const char*, const char*);
void sqlite3UnlinkAndDeleteTable(sqlite3*,int,const char*);
void sqlite3UnlinkAndDeleteIndex(sqlite3*,int,const char*);
void sqlite3Vacuum(Parse*,Token*);
int sqlite3RunVacuum(char**, sqlite3*, int);
char *sqlite3NameFromToken(sqlite3*, Token*);
int sqlite3ExprCompare(Parse*,Expr*, Expr*, int);
int sqlite3ExprCompareSkip(Expr*, Expr*, int);
int sqlite3ExprListCompare(ExprList*, ExprList*, int);
int sqlite3ExprImpliesExpr(Parse*,Expr*, Expr*, int);
void sqlite3ExprAnalyzeAggregates(NameContext*, Expr*);
void sqlite3ExprAnalyzeAggList(NameContext*,ExprList*);
int sqlite3ExprCoveredByIndex(Expr*, int iCur, Index *pIdx);
int sqlite3FunctionUsesThisSrc(Expr*, SrcList*);
Vdbe *sqlite3GetVdbe(Parse*);

void sqlite3PrngSaveState(void);
void sqlite3PrngRestoreState(void);

void sqlite3RollbackAll(sqlite3*,int);
void sqlite3CodeVerifySchema(Parse*, int);
void sqlite3CodeVerifyNamedSchema(Parse*, const char *zDb);
void sqlite3BeginTransaction(Parse*, int);
void sqlite3EndTransaction(Parse*,int);
void sqlite3Savepoint(Parse*, int, Token*);
void sqlite3CloseSavepoints(sqlite3 *);
void sqlite3LeaveMutexAndCloseZombie(sqlite3*);
int sqlite3ExprIsConstant(Expr*);
int sqlite3ExprIsConstantNotJoin(Expr*);
int sqlite3ExprIsConstantOrFunction(Expr*, u8);
int sqlite3ExprIsConstantOrGroupBy(Parse*, Expr*, ExprList*);
int sqlite3ExprIsTableConstant(Expr*,int);



int sqlite3ExprIsInteger(Expr*, int*);
int sqlite3ExprCanBeNull(const Expr*);
int sqlite3ExprNeedsNoAffinityChange(const Expr*, char);
int sqlite3IsRowid(const char*);
void sqlite3GenerateRowDelete(
    Parse*,Table*,Trigger*,int,int,int,i16,u8,u8,u8,int);
void sqlite3GenerateRowIndexDelete(Parse*, Table*, int, int, int*, int);
int sqlite3GenerateIndexKey(Parse*, Index*, int, int, int, int*,Index*,int);
void sqlite3ResolvePartIdxLabel(Parse*,int);
void sqlite3GenerateConstraintChecks(Parse*,Table*,int*,int,int,int,int,
                                     u8,u8,int,int*,int*);





void sqlite3CompleteInsertion(Parse*,Table*,int,int,int,int*,int,int,int);
int sqlite3OpenTableAndIndices(Parse*, Table*, int, u8, int, u8*, int*, int*);
void sqlite3BeginWriteOperation(Parse*, int, int);
void sqlite3MultiWrite(Parse*);
void sqlite3MayAbort(Parse*);
void sqlite3HaltConstraint(Parse*, int, int, char*, i8, u8);
void sqlite3UniqueConstraint(Parse*, int, Index*);
void sqlite3RowidConstraint(Parse*, int, Table*);
Expr *sqlite3ExprDup(sqlite3*,Expr*,int);
ExprList *sqlite3ExprListDup(sqlite3*,ExprList*,int);
SrcList *sqlite3SrcListDup(sqlite3*,SrcList*,int);
IdList *sqlite3IdListDup(sqlite3*,IdList*);
Select *sqlite3SelectDup(sqlite3*,Select*,int);





void sqlite3InsertBuiltinFuncs(FuncDef*,int);
FuncDef *sqlite3FindFunction(sqlite3*,const char*,int,u8,u8);
void sqlite3RegisterBuiltinFunctions(void);
void sqlite3RegisterDateTimeFunctions(void);
void sqlite3RegisterPerConnectionBuiltinFunctions(sqlite3*);
int sqlite3SafetyCheckOk(sqlite3*);
int sqlite3SafetyCheckSickOrOk(sqlite3*);
void sqlite3ChangeCookie(Parse*, int);


void sqlite3MaterializeView(Parse*, Table*, Expr*, ExprList*,Expr*,int);



  void sqlite3BeginTrigger(Parse*, Token*,Token*,int,int,IdList*,SrcList*,
                           Expr*,int, int);
  void sqlite3FinishTrigger(Parse*, TriggerStep*, Token*);
  void sqlite3DropTrigger(Parse*, SrcList*, int);
  void sqlite3DropTriggerPtr(Parse*, Trigger*);
  Trigger *sqlite3TriggersExist(Parse *, Table*, int, ExprList*, int *pMask);
  Trigger *sqlite3TriggerList(Parse *, Table *);
  void sqlite3CodeRowTrigger(Parse*, Trigger *, int, ExprList*, int, Table *,
                            int, int, int);
  void sqlite3CodeRowTriggerDirect(Parse *, Trigger *, Table *, int, int, int);
  void sqliteViewTriggers(Parse*, Table*, Expr*, int, ExprList*);
  void sqlite3DeleteTriggerStep(sqlite3*, TriggerStep*);
  TriggerStep *sqlite3TriggerSelectStep(sqlite3*,Select*,
                                        const char*,const char*);
  TriggerStep *sqlite3TriggerInsertStep(sqlite3*,Token*, IdList*,
                                        Select*,u8,const char*,const char*);
  TriggerStep *sqlite3TriggerUpdateStep(sqlite3*,Token*,ExprList*, Expr*, u8,
                                        const char*,const char*);
  TriggerStep *sqlite3TriggerDeleteStep(sqlite3*,Token*, Expr*,
                                        const char*,const char*);
  void sqlite3DeleteTrigger(sqlite3*, Trigger*);
  void sqlite3UnlinkAndDeleteTrigger(sqlite3*,int,const char*);
  u32 sqlite3TriggerColmask(Parse*,Trigger*,ExprList*,int,int,Table*,int);
# 3936 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
int sqlite3JoinType(Parse*, Token*, Token*, Token*);
void sqlite3CreateForeignKey(Parse*, ExprList*, Token*, ExprList*, int);
void sqlite3DeferForeignKey(Parse*, int);

  void sqlite3AuthRead(Parse*,Expr*,Schema*,SrcList*);
  int sqlite3AuthCheck(Parse*,int, const char*, const char*, const char*);
  void sqlite3AuthContextPush(Parse*, AuthContext*, const char*);
  void sqlite3AuthContextPop(AuthContext*);
  int sqlite3AuthReadCol(Parse*, const char *, const char *, int);






void sqlite3Attach(Parse*, Expr*, Expr*, Expr*);
void sqlite3Detach(Parse*, Expr*);
void sqlite3FixInit(DbFixer*, Parse*, int, const char*, const Token*);
int sqlite3FixSrcList(DbFixer*, SrcList*);
int sqlite3FixSelect(DbFixer*, Select*);
int sqlite3FixExpr(DbFixer*, Expr*);
int sqlite3FixExprList(DbFixer*, ExprList*);
int sqlite3FixTriggerStep(DbFixer*, TriggerStep*);
int sqlite3AtoF(const char *z, double*, int, u8);
int sqlite3GetInt32(const char *, int*);
int sqlite3Atoi(const char*);

int sqlite3Utf16ByteLen(const void *pData, int nChar);

int sqlite3Utf8CharLen(const char *pData, int nByte);
u32 sqlite3Utf8Read(const u8**);
LogEst sqlite3LogEst(u64);
LogEst sqlite3LogEstAdd(LogEst,LogEst);

LogEst sqlite3LogEstFromDouble(double);






VList *sqlite3VListAdd(sqlite3*,VList*,const char*,int,int);
const char *sqlite3VListNumToName(VList*,int);
int sqlite3VListNameToNum(VList*,const char*,int);






int sqlite3PutVarint(unsigned char*, u64);
u8 sqlite3GetVarint(const unsigned char *, u64 *);
u8 sqlite3GetVarint32(const unsigned char *, u32 *);
int sqlite3VarintLen(u64 v);
# 4005 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
const char *sqlite3IndexAffinityStr(sqlite3*, Index*);
void sqlite3TableAffinity(Vdbe*, Table*, int);
char sqlite3CompareAffinity(Expr *pExpr, char aff2);
int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity);
char sqlite3TableColumnAffinity(Table*,int);
char sqlite3ExprAffinity(Expr *pExpr);
int sqlite3Atoi64(const char*, i64*, int, u8);
int sqlite3DecOrHexToI64(const char*, i64*);
void sqlite3ErrorWithMsg(sqlite3*, int, const char*,...);
void sqlite3Error(sqlite3*,int);
void sqlite3SystemError(sqlite3*,int);
void *sqlite3HexToBlob(sqlite3*, const char *z, int n);
u8 sqlite3HexToInt(int h);
int sqlite3TwoPartName(Parse *, Token *, Token *, Token **);





const char *sqlite3ErrStr(int);
int sqlite3ReadSchema(Parse *pParse);
CollSeq *sqlite3FindCollSeq(sqlite3*,u8 enc, const char*,int);
CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char*zName);
CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr);
CollSeq *sqlite3ExprNNCollSeq(Parse *pParse, Expr *pExpr);
int sqlite3ExprCollSeqMatch(Parse*,Expr*,Expr*);
Expr *sqlite3ExprAddCollateToken(Parse *pParse, Expr*, const Token*, int);
Expr *sqlite3ExprAddCollateString(Parse*,Expr*,const char*);
Expr *sqlite3ExprSkipCollate(Expr*);
int sqlite3CheckCollSeq(Parse *, CollSeq *);
int sqlite3CheckObjectName(Parse *, const char *);
void sqlite3VdbeSetChanges(sqlite3 *, int);
int sqlite3AddInt64(i64*,i64);
int sqlite3SubInt64(i64*,i64);
int sqlite3MulInt64(i64*,i64);
int sqlite3AbsInt32(int);





u8 sqlite3GetBoolean(const char *z,u8);

const void *sqlite3ValueText(sqlite3_value*, u8);
int sqlite3ValueBytes(sqlite3_value*, u8);
void sqlite3ValueSetStr(sqlite3_value*, int, const void *,u8,
                        void(*)(void*));
void sqlite3ValueSetNull(sqlite3_value*);
void sqlite3ValueFree(sqlite3_value*);
sqlite3_value *sqlite3ValueNew(sqlite3 *);

char *sqlite3Utf16to8(sqlite3 *, const void*, int, u8);

int sqlite3ValueFromExpr(sqlite3 *, Expr *, u8, u8, sqlite3_value **);
void sqlite3ValueApplyAffinity(sqlite3_value *, u8, u8);

extern const unsigned char sqlite3OpcodeProperty[];
extern const char sqlite3StrBINARY[];
extern const unsigned char sqlite3UpperToLower[];
extern const unsigned char sqlite3CtypeMap[];
extern const Token sqlite3IntTokens[];
extern struct Sqlite3Config sqlite3Config;
extern FuncDefHash sqlite3BuiltinFunctions;

extern int sqlite3PendingByte;





void sqlite3RootPageMoved(sqlite3*, int, int, int);
void sqlite3Reindex(Parse*, Token*, Token*);
void sqlite3AlterFunctions(void);
void sqlite3AlterRenameTable(Parse*, SrcList*, Token*);
int sqlite3GetToken(const unsigned char *, int *);
void sqlite3NestedParse(Parse*, const char*, ...);
void sqlite3ExpirePreparedStatements(sqlite3*);
int sqlite3CodeSubselect(Parse*, Expr *, int, int);
void sqlite3SelectPrep(Parse*, Select*, NameContext*);
void sqlite3SelectWrongNumTermsError(Parse *pParse, Select *p);
int sqlite3MatchSpanName(const char*, const char*, const char*, const char*);
int sqlite3ResolveExprNames(NameContext*, Expr*);
int sqlite3ResolveExprListNames(NameContext*, ExprList*);
void sqlite3ResolveSelectNames(Parse*, Select*, NameContext*);
void sqlite3ResolveSelfReference(Parse*,Table*,int,Expr*,ExprList*);
int sqlite3ResolveOrderGroupBy(Parse*, Select*, ExprList*, const char*);
void sqlite3ColumnDefault(Vdbe *, Table *, int, int);
void sqlite3AlterFinishAddColumn(Parse *, Token *);
void sqlite3AlterBeginAddColumn(Parse *, SrcList *);
CollSeq *sqlite3GetCollSeq(Parse*, u8, CollSeq *, const char*);
char sqlite3AffinityType(const char*, u8*);
void sqlite3Analyze(Parse*, Token*, Token*);
int sqlite3InvokeBusyHandler(BusyHandler*);
int sqlite3FindDb(sqlite3*, Token*);
int sqlite3FindDbName(sqlite3 *, const char *);
int sqlite3AnalysisLoad(sqlite3*,int iDB);
void sqlite3DeleteIndexSamples(sqlite3*,Index*);
void sqlite3DefaultRowEst(Index*);
void sqlite3RegisterLikeFunctions(sqlite3*, int);
int sqlite3IsLikeFunction(sqlite3*,Expr*,int*,char*);
void sqlite3SchemaClear(void *);
Schema *sqlite3SchemaGet(sqlite3 *, Btree *);
int sqlite3SchemaToIndex(sqlite3 *db, Schema *);
KeyInfo *sqlite3KeyInfoAlloc(sqlite3*,int,int);
void sqlite3KeyInfoUnref(KeyInfo*);
KeyInfo *sqlite3KeyInfoRef(KeyInfo*);
KeyInfo *sqlite3KeyInfoOfIndex(Parse*, Index*);



int sqlite3CreateFunc(sqlite3 *, const char *, int, int, void *,
  void (*)(sqlite3_context*,int,sqlite3_value **),
  void (*)(sqlite3_context*,int,sqlite3_value **), void (*)(sqlite3_context*),
  FuncDestructor *pDestructor
);
void sqlite3OomFault(sqlite3*);
void sqlite3OomClear(sqlite3*);
int sqlite3ApiExit(sqlite3 *db, int);
int sqlite3OpenTempDatabase(Parse *);

void sqlite3StrAccumInit(StrAccum*, sqlite3*, char*, int, int);
void sqlite3StrAccumAppend(StrAccum*,const char*,int);
void sqlite3StrAccumAppendAll(StrAccum*,const char*);
void sqlite3AppendChar(StrAccum*,int,char);
char *sqlite3StrAccumFinish(StrAccum*);
void sqlite3StrAccumReset(StrAccum*);
void sqlite3SelectDestInit(SelectDest*,int,int);
Expr *sqlite3CreateColumnExpr(sqlite3 *, SrcList *, int, int);

void sqlite3BackupRestart(sqlite3_backup *);
void sqlite3BackupUpdate(sqlite3_backup *, Pgno, const u8 *);


int sqlite3ExprCheckIN(Parse*, Expr*);
# 4157 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  void *sqlite3ParserAlloc(void*(*)(u64));
  void sqlite3ParserFree(void*, void(*)(void*));

void sqlite3Parser(void*, int, Token, Parse*);




void sqlite3AutoLoadExtensions(sqlite3*);

  void sqlite3CloseExtensions(sqlite3*);





  void sqlite3TableLock(Parse *, int, int, u8, const char *);
# 4194 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
   void sqlite3VtabClear(sqlite3 *db, Table*);
   void sqlite3VtabDisconnect(sqlite3 *db, Table *p);
   int sqlite3VtabSync(sqlite3 *db, Vdbe*);
   int sqlite3VtabRollback(sqlite3 *db);
   int sqlite3VtabCommit(sqlite3 *db);
   void sqlite3VtabLock(VTable *);
   void sqlite3VtabUnlock(VTable *);
   void sqlite3VtabUnlockList(sqlite3*);
   int sqlite3VtabSavepoint(sqlite3 *, int, int);
   void sqlite3VtabImportErrmsg(Vdbe*, sqlite3_vtab*);
   VTable *sqlite3GetVTable(sqlite3*, Table*);
   Module *sqlite3VtabCreateModule(
     sqlite3*,
     const char*,
     const sqlite3_module*,
     void*,
     void(*)(void*)
   );


int sqlite3VtabEponymousTableInit(Parse*,Module*);
void sqlite3VtabEponymousTableClear(sqlite3*,Module*);
void sqlite3VtabMakeWritable(Parse*,Table*);
void sqlite3VtabBeginParse(Parse*, Token*, Token*, Token*, int);
void sqlite3VtabFinishParse(Parse*, Token*);
void sqlite3VtabArgInit(Parse*);
void sqlite3VtabArgExtend(Parse*, Token*);
int sqlite3VtabCallCreate(sqlite3*, int, const char *, char **);
int sqlite3VtabCallConnect(Parse*, Table*);
int sqlite3VtabCallDestroy(sqlite3*, int, const char *);
int sqlite3VtabBegin(sqlite3 *, VTable *);
FuncDef *sqlite3VtabOverloadFunction(sqlite3 *,FuncDef*, int nArg, Expr*);
void sqlite3InvalidFunction(sqlite3_context*,int,sqlite3_value**);
sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context*);
int sqlite3VdbeParameterIndex(Vdbe*, const char*, int);
int sqlite3TransferBindings(sqlite3_stmt *, sqlite3_stmt *);
void sqlite3ParserReset(Parse*);
int sqlite3Reprepare(Vdbe*);
void sqlite3ExprListCheckLength(Parse*, ExprList*, const char*);
CollSeq *sqlite3BinaryCompareCollSeq(Parse *, Expr *, Expr *);
int sqlite3TempInMemory(const sqlite3*);
const char *sqlite3JournalModename(int);

  int sqlite3Checkpoint(sqlite3*, int, int, int*, int*);
  int sqlite3WalDefaultHook(void*,sqlite3*,const char*,int);


  With *sqlite3WithAdd(Parse*,With*,Token*,ExprList*,Select*);
  void sqlite3WithDelete(sqlite3*,With*);
  void sqlite3WithPush(Parse*, With*, u8);
# 4257 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  void sqlite3FkCheck(Parse*, Table*, int, int, int*, int);
  void sqlite3FkDropTable(Parse*, SrcList *, Table*);
  void sqlite3FkActions(Parse*, Table*, ExprList*, int, int*, int);
  int sqlite3FkRequired(Parse*, Table*, int*, int);
  u32 sqlite3FkOldmask(Parse*, Table*);
  FKey *sqlite3FkReferences(Table *);
# 4272 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  void sqlite3FkDelete(sqlite3 *, Table*);
  int sqlite3FkLocateIndex(Parse*,Table*,FKey*,Index**,int**);
# 4292 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
  void sqlite3BeginBenignMalloc(void);
  void sqlite3EndBenignMalloc(void);
# 4313 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
int sqlite3FindInIndex(Parse *, Expr *, u32, int*, int*);

int sqlite3JournalOpen(sqlite3_vfs *, const char *, sqlite3_file *, int, int);
int sqlite3JournalSize(sqlite3_vfs *);





int sqlite3JournalIsInMemory(sqlite3_file *p);
void sqlite3MemJournalOpen(sqlite3_file *);

void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p);

  int sqlite3SelectExprHeight(Select *);
  int sqlite3ExprCheckHeight(Parse*, int);





u32 sqlite3Get4byte(const u8*);
void sqlite3Put4byte(u8*, u32);
# 4413 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
int sqlite3ThreadCreate(SQLiteThread**,void*(*)(void*),void*);
int sqlite3ThreadJoin(SQLiteThread*, void**);
# 4424 "/Users/aleksei/Desktop/DB/sqlitejit2/src/sqliteInt.h"
int sqlite3ExprVectorSize(Expr *pExpr);
int sqlite3ExprIsVector(Expr *pExpr);
Expr *sqlite3VectorFieldSubexpr(Expr*, int);
Expr *sqlite3ExprForVectorField(Parse*,Expr*,int);
void sqlite3VectorErrorMsg(Parse*, Expr*);


const char **sqlite3CompileOptions(int *pnOpt);
# 10 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 2
# 1 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h" 1
# 45 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
typedef struct VdbeOp Op;




typedef unsigned Bool;


typedef struct VdbeSorter VdbeSorter;


typedef struct AuxData AuxData;
# 74 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
typedef struct VdbeCursor VdbeCursor;
struct VdbeCursor {
  u8 eCurType;
  i8 iDb;
  u8 nullRow;
  u8 deferredMoveto;
  u8 isTable;




  Bool isEphemeral:1;
  Bool useRandomRowid:1;
  Bool isOrdered:1;
  Btree *pBtx;
  i64 seqCount;
  int *aAltMap;





  u32 cacheStatus;
  int seekResult;
# 106 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
  VdbeCursor *pAltCursor;
  union {
    BtCursor *pCursor;
    sqlite3_vtab_cursor *pVCur;
    VdbeSorter *pSorter;
  } uc;
  KeyInfo *pKeyInfo;
  u32 iHdrOffset;
  Pgno pgnoRoot;
  i16 nField;
  u16 nHdrParsed;
  i64 movetoTarget;
  u32 *aOffset;
  const u8 *aRow;
  u32 payloadSize;
  u32 szRow;







  u32 aType[1];
};
# 159 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
typedef struct VdbeFrame VdbeFrame;
struct VdbeFrame {
  Vdbe *v;
  VdbeFrame *pParent;
  Op *aOp;
  i64 *anExec;
  Mem *aMem;
  VdbeCursor **apCsr;
  u8 *aOnce;
  void *token;
  i64 lastRowid;
  AuxData *pAuxData;
  int nCursor;
  int pc;
  int nOp;
  int nMem;
  int nChildMem;
  int nChildCsr;
  int nChange;
  int nDbChange;
};
# 188 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
struct sqlite3_value {
  union MemValue {
    double r;
    i64 i;
    int nZero;
    const char *zPType;
    FuncDef *pDef;
    RowSet *pRowSet;
    VdbeFrame *pFrame;
  } u;
  u16 flags;
  u8 enc;
  u8 eSubtype;
  int n;
  char *z;

  char *zMalloc;
  int szMalloc;
  u32 uTemp;
  sqlite3 *db;
  void (*xDel)(void*);




};
# 291 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
struct AuxData {
  int iAuxOp;
  int iAuxArg;
  void *pAux;
  void (*xDeleteAux)(void*);
  AuxData *pNextAux;
};
# 312 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
struct sqlite3_context {
  Mem *pOut;
  FuncDef *pFunc;
  Mem *pMem;
  Vdbe *pVdbe;
  int iOp;
  int isError;
  u8 skipFlag;
  u8 argc;
  sqlite3_value *argv[1];
};




typedef unsigned bft;

typedef struct ScanStatus ScanStatus;
struct ScanStatus {
  int addrExplain;
  int addrLoop;
  int addrVisit;
  int iSelectID;
  LogEst nEst;
  char *zName;
};
# 346 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
struct Vdbe {
  sqlite3 *db;
  Vdbe *pPrev,*pNext;
  Parse *pParse;
  ynVar nVar;
  u32 magic;
  int nMem;
  int nCursor;
  u32 cacheCtr;
  int pc;
  int rc;
  int nChange;
  int iStatement;
  i64 iCurrentTime;
  i64 nFkConstraint;
  i64 nStmtDefCons;
  i64 nStmtDefImmCons;




  Op *aOp;
  Mem *aMem;
  Mem **apArg;
  Mem *aColName;
  Mem *pResultSet;
  char *zErrMsg;
  VdbeCursor **apCsr;
  Mem *aVar;
  VList *pVList;

  i64 startTime;

  int nOp;



  u16 nResColumn;
  u8 errorAction;
  u8 minWriteFileFormat;
  u8 prepFlags;
  bft expired:1;
  bft doingRerun:1;
  bft explain:2;
  bft changeCntOn:1;
  bft runOnlyOnce:1;
  bft usesStmtJournal:1;
  bft readOnly:1;
  bft bIsReader:1;
  yDbMask btreeMask;
  yDbMask lockMask;
  u32 aCounter[7];
  char *zSql;
  void *pFree;
  VdbeFrame *pFrame;
  VdbeFrame *pDelFrame;
  int nFrame;
  u32 expmask;
  SubProgram *pProgram;
  AuxData *pAuxData;





};
# 426 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
struct PreUpdate {
  Vdbe *v;
  VdbeCursor *pCsr;
  int op;
  u8 *aRecord;
  KeyInfo keyinfo;
  UnpackedRecord *pUnpacked;
  UnpackedRecord *pNewUnpacked;
  int iNewReg;
  i64 iKey1;
  i64 iKey2;
  Mem *aNew;
  Table *pTab;
  Index *pPk;
};




void sqlite3VdbeError(Vdbe*, const char *, ...);
void sqlite3VdbeFreeCursor(Vdbe *, VdbeCursor*);
void sqliteVdbePopStack(Vdbe*,int);
int sqlite3VdbeCursorMoveto(VdbeCursor**, int*);
int sqlite3VdbeCursorRestore(VdbeCursor*);



u32 sqlite3VdbeSerialTypeLen(u32);
u8 sqlite3VdbeOneByteSerialTypeLen(u8);
u32 sqlite3VdbeSerialType(Mem*, int, u32*);
u32 sqlite3VdbeSerialPut(unsigned char*, Mem*, u32);
u32 sqlite3VdbeSerialGet(const unsigned char*, u32, Mem*);
void sqlite3VdbeDeleteAuxData(sqlite3*, AuxData**, int, int);

int sqlite2BtreeKeyCompare(BtCursor *, const void *, int, int, int *);
int sqlite3VdbeIdxKeyCompare(sqlite3*,VdbeCursor*,UnpackedRecord*,int*);
int sqlite3VdbeIdxRowid(sqlite3*, BtCursor*, i64*);
int sqlite3VdbeExec(Vdbe*);
int sqlite3VdbeList(Vdbe*);
int sqlite3VdbeHalt(Vdbe*);
int sqlite3VdbeChangeEncoding(Mem *, int);
int sqlite3VdbeMemTooBig(Mem*);
int sqlite3VdbeMemCopy(Mem*, const Mem*);
void sqlite3VdbeMemShallowCopy(Mem*, const Mem*, int);
void sqlite3VdbeMemMove(Mem*, Mem*);
int sqlite3VdbeMemNulTerminate(Mem*);
int sqlite3VdbeMemSetStr(Mem*, const char*, int, u8, void(*)(void*));
void sqlite3VdbeMemSetInt64(Mem*, i64);



  void sqlite3VdbeMemSetDouble(Mem*, double);

void sqlite3VdbeMemSetPointer(Mem*, void*, const char*, void(*)(void*));
void sqlite3VdbeMemInit(Mem*,sqlite3*,u16);
void sqlite3VdbeMemSetNull(Mem*);
void sqlite3VdbeMemSetZeroBlob(Mem*,int);
void sqlite3VdbeMemSetRowSet(Mem*);
int sqlite3VdbeMemMakeWriteable(Mem*);
int sqlite3VdbeMemStringify(Mem*, u8, u8);
i64 sqlite3VdbeIntValue(Mem*);
int sqlite3VdbeMemIntegerify(Mem*);
double sqlite3VdbeRealValue(Mem*);
void sqlite3VdbeIntegerAffinity(Mem*);
int sqlite3VdbeMemRealify(Mem*);
int sqlite3VdbeMemNumerify(Mem*);
void sqlite3VdbeMemCast(Mem*,u8,u8);
int sqlite3VdbeMemFromBtree(BtCursor*,u32,u32,Mem*);
void sqlite3VdbeMemRelease(Mem *p);
int sqlite3VdbeMemFinalize(Mem*, FuncDef*);
const char *sqlite3OpcodeName(int);
int sqlite3VdbeMemGrow(Mem *pMem, int n, int preserve);
int sqlite3VdbeMemClearAndResize(Mem *pMem, int n);
int sqlite3VdbeCloseStatement(Vdbe *, int);
void sqlite3VdbeFrameDelete(VdbeFrame*);
int sqlite3VdbeFrameRestore(VdbeFrame *);



int sqlite3VdbeTransferError(Vdbe *p);

int sqlite3VdbeSorterInit(sqlite3 *, int, VdbeCursor *);
void sqlite3VdbeSorterReset(sqlite3 *, VdbeSorter *);
void sqlite3VdbeSorterClose(sqlite3 *, VdbeCursor *);
int sqlite3VdbeSorterRowkey(const VdbeCursor *, Mem *);
int sqlite3VdbeSorterNext(sqlite3 *, const VdbeCursor *);
int sqlite3VdbeSorterRewind(const VdbeCursor *, int *);
int sqlite3VdbeSorterWrite(const VdbeCursor *, Mem *);
int sqlite3VdbeSorterCompare(const VdbeCursor *, Mem *, int, int *);


  void sqlite3VdbeEnter(Vdbe*);





  void sqlite3VdbeLeave(Vdbe*);
# 534 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
int sqlite3VdbeCheckFk(Vdbe *, int);
# 544 "/Users/aleksei/Desktop/DB/sqlitejit2/src/vdbeInt.h"
  int sqlite3VdbeMemTranslate(Mem*, u8);
  int sqlite3VdbeMemHandleBom(Mem *pMem);



  int sqlite3VdbeMemExpandBlob(Mem *);
# 11 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h" 2
# 36 "/Users/aleksei/Desktop/DB/sqlitejit2/jit_regular/jitsrc/jit.h"
pJitFunc jitLoop(Vdbe *p, int start_pos, int end_pos);
int isJittable(Op *pOp);
# 5 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.h" 2




TxtBuf *emitTxt(Vdbe *p, int start_pos, int end_pos);
# 2 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.c" 2
# 42 "/Users/aleksei/Desktop/DB/sqlitejit2/generator/cfiles/emitTemplate.c"
void emitNext(Vdbe *p, Op *pOp, TxtBuf **buf, int pos){
    int jmpPos = pOp->p2;
    writeToBuf(buf, "L%d: \n{\n  VdbeCursor *pC = p->apCsr[%d]; \n  rc = ((int (*)(BtCursor *, int))%p)(pC->uc.pCursor, %d); \n  pC->cacheStatus = CACHE_STALE; \n  if( rc==SQLITE_OK ){ \n    pC->nullRow = 0; \n    p->aCounter[%d]++; \n    goto L%d; \n  } \n  p->pc = %d + 1; \n  return SQLITE_OK; \n\n};", pos, pOp->p1, pOp->p4.xAdvance, pOp->p3, pOp->p5, jmpPos, pos);
}

TxtBuf *emitTxt(Vdbe *p, int start_pos, int end_pos){
    TxtBuf *txt = initTxtBuf(1024);
    TxtBuf *tmp = initTxtBuf(1024);

    int nJittedOps = 0;

    writeToBuf(&txt, "%s", "#include \"opcodeTemplates.h\" \n#include \"jitted_func.h\" \njitRc jitted_func(Vdbe *p){ \n  Op *aOp = p->aOp; \n  Op *pOp; \n  Mem *aMem = p->aMem;\n  Mem *pIn1 = 0;\n  Mem *pIn2 = 0;\n  Mem *pIn3 = 0;\n  Mem *pOut = 0;\n  int rc = OK; \n  sqlite3 *db = p->db;\n  u8 encoding = ENC(db); \n  int iCompare = 0;\n  unsigned nVmStep = 0;\n  unsigned nProgressLimit;\n");

    for(int i = start_pos; i < end_pos+1; i++){
        Op *cOp = &p->aOp[i];
        nJittedOps++;
        switch(cOp->opcode){
            case 7:
                emitNext(p, cOp, &tmp, i);
                break;

            default:
                warnx("%s not implemented.\n", sqlite3OpcodeName(cOp->opcode));
                freeTxtBuf(&txt);
                freeTxtBuf(&tmp);
                return 0;
        }

        appendToBuf(&txt, tmp);
    }

    writeToBuf(&tmp, "L%d:\n  return 0; \n}\n", end_pos+1);
    appendToBuf(&txt, tmp);
    freeTxtBuf(&tmp);
    fprintf(stderr, "jitted ops: %d, ", nJittedOps);
    return txt;
}
