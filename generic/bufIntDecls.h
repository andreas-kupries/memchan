/*
 * bufIntDecls.h --
 *
 *	This file contains the declarations for all unsupported
 *	functions that are exported by the Buf library.  These
 *	interfaces are not guaranteed to remain the same between
 *	versions.  Use at your own risk.
 *
 */

#ifndef _BUFINTDECLS
#define _BUFINTDECLS

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/bufInt.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */


typedef struct BufIntStubs {
    int magic;
    struct BufIntStubHooks *hooks;

} BufIntStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern BufIntStubs *bufIntStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_BUF_STUBS) && !defined(USE_BUF_STUB_PROCS)

/*
 * Inline function declarations:
 */


#endif /* defined(USE_BUF_STUBS) && !defined(USE_BUF_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#endif /* _BUFINTDECLS */
