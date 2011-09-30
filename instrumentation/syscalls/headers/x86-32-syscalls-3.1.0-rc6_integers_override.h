#ifndef CONFIG_UID16

#define OVERRIDE_sys_getuid16
#define OVERRIDE_sys_getgid16
#define OVERRIDE_sys_geteuid16
#define OVERRIDE_sys_getegid16
#define OVERRIDE_sys_setuid16
#define OVERRIDE_sys_setgid16
#define OVERRIDE_sys_setfsuid16
#define OVERRIDE_sys_setfsgid16
#define OVERRIDE_sys_setreuid16
#define OVERRIDE_sys_setregid16
#define OVERRIDE_sys_fchown16
#define OVERRIDE_sys_setresuid16
#define OVERRIDE_sys_setresgid16

#define OVERRIDE_TABLE_sys_getuid16
#define OVERRIDE_TABLE_sys_getgid16
#define OVERRIDE_TABLE_sys_geteuid16
#define OVERRIDE_TABLE_sys_getegid16
#define OVERRIDE_TABLE_sys_setuid16
#define OVERRIDE_TABLE_sys_setgid16
#define OVERRIDE_TABLE_sys_setreuid16
#define OVERRIDE_TABLE_sys_setregid16
#define OVERRIDE_TABLE_sys_fchown16
#define OVERRIDE_TABLE_sys_setfsuid16
#define OVERRIDE_TABLE_sys_setfsgid16
#define OVERRIDE_TABLE_sys_setresuid16
#define OVERRIDE_TABLE_sys_setresgid16

#endif

#ifdef CREATE_SYSCALL_TABLE

#define OVERRIDE_TABLE_sys_mmap
TRACE_SYSCALL_TABLE(sys_mmap, sys_mmap, 90, 6)

#endif
