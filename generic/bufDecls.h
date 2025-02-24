/*
 * bufDecls.h --
 *
 *	Declarations of functions in the platform independent public Buf API.
 *
 * Copyright (c) 1999 by Andreas Kupries <a.kupries@westend.com>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * RCS: @(#) $Id$
 */

#ifndef _BUFDECLS
#define _BUFDECLS

#ifdef BUILD_Memchan
#undef  TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT
#endif

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/buf.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */

/* 0 */
EXTERN int		Buf_IsInitialized _ANSI_ARGS_((Tcl_Interp * interp));
/* 1 */
EXTERN int		Buf_Init _ANSI_ARGS_((Tcl_Interp * interp));
/* Slot 2 is reserved */
/* Slot 3 is reserved */
/* Slot 4 is reserved */
/* Slot 5 is reserved */
/* Slot 6 is reserved */
/* Slot 7 is reserved */
/* Slot 8 is reserved */
/* Slot 9 is reserved */
/* 10 */
EXTERN void		Buf_RegisterType _ANSI_ARGS_((
				Buf_BufferType* bufType));
/* Slot 11 is reserved */
/* Slot 12 is reserved */
/* Slot 13 is reserved */
/* Slot 14 is reserved */
/* Slot 15 is reserved */
/* Slot 16 is reserved */
/* Slot 17 is reserved */
/* Slot 18 is reserved */
/* Slot 19 is reserved */
/* 20 */
EXTERN void		Buf_IncrRefcount _ANSI_ARGS_((Buf_Buffer buf));
/* 21 */
EXTERN void		Buf_DecrRefcount _ANSI_ARGS_((Buf_Buffer buf));
/* 22 */
EXTERN int		Buf_IsShared _ANSI_ARGS_((Buf_Buffer buf));
/* 23 */
EXTERN Buf_BufferType*	Buf_GetType _ANSI_ARGS_((Buf_Buffer buf));
/* 24 */
EXTERN CONST char*	Buf_GetTypeName _ANSI_ARGS_((Buf_Buffer buf));
/* 25 */
EXTERN int		Buf_Size _ANSI_ARGS_((Buf_Buffer buf));
/* 26 */
EXTERN ClientData	Buf_GetClientData _ANSI_ARGS_((Buf_Buffer buf));
/* Slot 27 is reserved */
/* Slot 28 is reserved */
/* Slot 29 is reserved */
/* 30 */
EXTERN Buf_Buffer	Buf_Create _ANSI_ARGS_((Buf_BufferType* bufType, 
				ClientData clientData));
/* 31 */
EXTERN Buf_Buffer	Buf_Dup _ANSI_ARGS_((Buf_Buffer buf));
/* 32 */
EXTERN Buf_Buffer	Buf_CreateFixedBuffer _ANSI_ARGS_((int size));
/* 33 */
EXTERN Buf_Buffer	Buf_CreateExtendableBuffer _ANSI_ARGS_((int size));
/* 34 */
EXTERN Buf_Buffer	Buf_CreateRange _ANSI_ARGS_((Buf_Buffer buf, 
				int size));
/* Slot 35 is reserved */
/* Slot 36 is reserved */
/* Slot 37 is reserved */
/* Slot 38 is reserved */
/* Slot 39 is reserved */
/* 40 */
EXTERN int		Buf_Read _ANSI_ARGS_((Buf_Buffer buf, void* outbuf, 
				int size));
/* 41 */
EXTERN int		Buf_Write _ANSI_ARGS_((Buf_Buffer buf, 
				CONST void* inbuf, int size));
/* Slot 42 is reserved */
/* Slot 43 is reserved */
/* Slot 44 is reserved */
/* Slot 45 is reserved */
/* Slot 46 is reserved */
/* Slot 47 is reserved */
/* Slot 48 is reserved */
/* Slot 49 is reserved */
/* 50 */
EXTERN char*		Buf_PositionPtr _ANSI_ARGS_((Buf_BufferPosition loc));
/* 51 */
EXTERN Buf_BufferPosition Buf_Tell _ANSI_ARGS_((Buf_Buffer buf));
/* 52 */
EXTERN void		Buf_FreePosition _ANSI_ARGS_((Buf_BufferPosition loc));
/* 53 */
EXTERN void		Buf_MovePosition _ANSI_ARGS_((Buf_BufferPosition loc, 
				int offset));
/* 54 */
EXTERN Buf_BufferPosition Buf_DupPosition _ANSI_ARGS_((
				Buf_BufferPosition loc));
/* 55 */
EXTERN int		Buf_PositionOffset _ANSI_ARGS_((
				Buf_BufferPosition loc));
/* 56 */
EXTERN Buf_BufferPosition Buf_PositionFromOffset _ANSI_ARGS_((Buf_Buffer buf, 
				int offset));
/* Slot 57 is reserved */
/* Slot 58 is reserved */
/* Slot 59 is reserved */
/* 60 */
EXTERN Buf_BufferQueue	Buf_NewQueue _ANSI_ARGS_((void));
/* 61 */
EXTERN void		Buf_FreeQueue _ANSI_ARGS_((Buf_BufferQueue queue));
/* 62 */
EXTERN int		Buf_QueueRead _ANSI_ARGS_((Buf_BufferQueue queue, 
				char* outbuf, int size));
/* 63 */
EXTERN int		Buf_QueueWrite _ANSI_ARGS_((Buf_BufferQueue queue, 
				CONST char* inbuf, int size));
/* 64 */
EXTERN void		Buf_QueueAppend _ANSI_ARGS_((Buf_BufferQueue queue, 
				Buf_Buffer buf));
/* 65 */
EXTERN int		Buf_QueueSize _ANSI_ARGS_((Buf_BufferQueue queue));

typedef struct BufStubHooks {
    struct BufIntStubs *bufIntStubs;
    struct MemchanStubs *memchanStubs;
} BufStubHooks;

typedef struct BufStubs {
    int magic;
    struct BufStubHooks *hooks;

    int (*buf_IsInitialized) _ANSI_ARGS_((Tcl_Interp * interp)); /* 0 */
    int (*buf_Init) _ANSI_ARGS_((Tcl_Interp * interp)); /* 1 */
    void *reserved2;
    void *reserved3;
    void *reserved4;
    void *reserved5;
    void *reserved6;
    void *reserved7;
    void *reserved8;
    void *reserved9;
    void (*buf_RegisterType) _ANSI_ARGS_((Buf_BufferType* bufType)); /* 10 */
    void *reserved11;
    void *reserved12;
    void *reserved13;
    void *reserved14;
    void *reserved15;
    void *reserved16;
    void *reserved17;
    void *reserved18;
    void *reserved19;
    void (*buf_IncrRefcount) _ANSI_ARGS_((Buf_Buffer buf)); /* 20 */
    void (*buf_DecrRefcount) _ANSI_ARGS_((Buf_Buffer buf)); /* 21 */
    int (*buf_IsShared) _ANSI_ARGS_((Buf_Buffer buf)); /* 22 */
    Buf_BufferType* (*buf_GetType) _ANSI_ARGS_((Buf_Buffer buf)); /* 23 */
    CONST char* (*buf_GetTypeName) _ANSI_ARGS_((Buf_Buffer buf)); /* 24 */
    int (*buf_Size) _ANSI_ARGS_((Buf_Buffer buf)); /* 25 */
    ClientData (*buf_GetClientData) _ANSI_ARGS_((Buf_Buffer buf)); /* 26 */
    void *reserved27;
    void *reserved28;
    void *reserved29;
    Buf_Buffer (*buf_Create) _ANSI_ARGS_((Buf_BufferType* bufType, ClientData clientData)); /* 30 */
    Buf_Buffer (*buf_Dup) _ANSI_ARGS_((Buf_Buffer buf)); /* 31 */
    Buf_Buffer (*buf_CreateFixedBuffer) _ANSI_ARGS_((int size)); /* 32 */
    Buf_Buffer (*buf_CreateExtendableBuffer) _ANSI_ARGS_((int size)); /* 33 */
    Buf_Buffer (*buf_CreateRange) _ANSI_ARGS_((Buf_Buffer buf, int size)); /* 34 */
    void *reserved35;
    void *reserved36;
    void *reserved37;
    void *reserved38;
    void *reserved39;
    int (*buf_Read) _ANSI_ARGS_((Buf_Buffer buf, void* outbuf, int size)); /* 40 */
    int (*buf_Write) _ANSI_ARGS_((Buf_Buffer buf, CONST void* inbuf, int size)); /* 41 */
    void *reserved42;
    void *reserved43;
    void *reserved44;
    void *reserved45;
    void *reserved46;
    void *reserved47;
    void *reserved48;
    void *reserved49;
    char* (*buf_PositionPtr) _ANSI_ARGS_((Buf_BufferPosition loc)); /* 50 */
    Buf_BufferPosition (*buf_Tell) _ANSI_ARGS_((Buf_Buffer buf)); /* 51 */
    void (*buf_FreePosition) _ANSI_ARGS_((Buf_BufferPosition loc)); /* 52 */
    void (*buf_MovePosition) _ANSI_ARGS_((Buf_BufferPosition loc, int offset)); /* 53 */
    Buf_BufferPosition (*buf_DupPosition) _ANSI_ARGS_((Buf_BufferPosition loc)); /* 54 */
    int (*buf_PositionOffset) _ANSI_ARGS_((Buf_BufferPosition loc)); /* 55 */
    Buf_BufferPosition (*buf_PositionFromOffset) _ANSI_ARGS_((Buf_Buffer buf, int offset)); /* 56 */
    void *reserved57;
    void *reserved58;
    void *reserved59;
    Buf_BufferQueue (*buf_NewQueue) _ANSI_ARGS_((void)); /* 60 */
    void (*buf_FreeQueue) _ANSI_ARGS_((Buf_BufferQueue queue)); /* 61 */
    int (*buf_QueueRead) _ANSI_ARGS_((Buf_BufferQueue queue, char* outbuf, int size)); /* 62 */
    int (*buf_QueueWrite) _ANSI_ARGS_((Buf_BufferQueue queue, CONST char* inbuf, int size)); /* 63 */
    void (*buf_QueueAppend) _ANSI_ARGS_((Buf_BufferQueue queue, Buf_Buffer buf)); /* 64 */
    int (*buf_QueueSize) _ANSI_ARGS_((Buf_BufferQueue queue)); /* 65 */
} BufStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern BufStubs *bufStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_BUF_STUBS) && !defined(USE_BUF_STUB_PROCS)

/*
 * Inline function declarations:
 */

#ifndef Buf_IsInitialized
#define Buf_IsInitialized \
	(bufStubsPtr->buf_IsInitialized) /* 0 */
#endif
#ifndef Buf_Init
#define Buf_Init \
	(bufStubsPtr->buf_Init) /* 1 */
#endif
/* Slot 2 is reserved */
/* Slot 3 is reserved */
/* Slot 4 is reserved */
/* Slot 5 is reserved */
/* Slot 6 is reserved */
/* Slot 7 is reserved */
/* Slot 8 is reserved */
/* Slot 9 is reserved */
#ifndef Buf_RegisterType
#define Buf_RegisterType \
	(bufStubsPtr->buf_RegisterType) /* 10 */
#endif
/* Slot 11 is reserved */
/* Slot 12 is reserved */
/* Slot 13 is reserved */
/* Slot 14 is reserved */
/* Slot 15 is reserved */
/* Slot 16 is reserved */
/* Slot 17 is reserved */
/* Slot 18 is reserved */
/* Slot 19 is reserved */
#ifndef Buf_IncrRefcount
#define Buf_IncrRefcount \
	(bufStubsPtr->buf_IncrRefcount) /* 20 */
#endif
#ifndef Buf_DecrRefcount
#define Buf_DecrRefcount \
	(bufStubsPtr->buf_DecrRefcount) /* 21 */
#endif
#ifndef Buf_IsShared
#define Buf_IsShared \
	(bufStubsPtr->buf_IsShared) /* 22 */
#endif
#ifndef Buf_GetType
#define Buf_GetType \
	(bufStubsPtr->buf_GetType) /* 23 */
#endif
#ifndef Buf_GetTypeName
#define Buf_GetTypeName \
	(bufStubsPtr->buf_GetTypeName) /* 24 */
#endif
#ifndef Buf_Size
#define Buf_Size \
	(bufStubsPtr->buf_Size) /* 25 */
#endif
#ifndef Buf_GetClientData
#define Buf_GetClientData \
	(bufStubsPtr->buf_GetClientData) /* 26 */
#endif
/* Slot 27 is reserved */
/* Slot 28 is reserved */
/* Slot 29 is reserved */
#ifndef Buf_Create
#define Buf_Create \
	(bufStubsPtr->buf_Create) /* 30 */
#endif
#ifndef Buf_Dup
#define Buf_Dup \
	(bufStubsPtr->buf_Dup) /* 31 */
#endif
#ifndef Buf_CreateFixedBuffer
#define Buf_CreateFixedBuffer \
	(bufStubsPtr->buf_CreateFixedBuffer) /* 32 */
#endif
#ifndef Buf_CreateExtendableBuffer
#define Buf_CreateExtendableBuffer \
	(bufStubsPtr->buf_CreateExtendableBuffer) /* 33 */
#endif
#ifndef Buf_CreateRange
#define Buf_CreateRange \
	(bufStubsPtr->buf_CreateRange) /* 34 */
#endif
/* Slot 35 is reserved */
/* Slot 36 is reserved */
/* Slot 37 is reserved */
/* Slot 38 is reserved */
/* Slot 39 is reserved */
#ifndef Buf_Read
#define Buf_Read \
	(bufStubsPtr->buf_Read) /* 40 */
#endif
#ifndef Buf_Write
#define Buf_Write \
	(bufStubsPtr->buf_Write) /* 41 */
#endif
/* Slot 42 is reserved */
/* Slot 43 is reserved */
/* Slot 44 is reserved */
/* Slot 45 is reserved */
/* Slot 46 is reserved */
/* Slot 47 is reserved */
/* Slot 48 is reserved */
/* Slot 49 is reserved */
#ifndef Buf_PositionPtr
#define Buf_PositionPtr \
	(bufStubsPtr->buf_PositionPtr) /* 50 */
#endif
#ifndef Buf_Tell
#define Buf_Tell \
	(bufStubsPtr->buf_Tell) /* 51 */
#endif
#ifndef Buf_FreePosition
#define Buf_FreePosition \
	(bufStubsPtr->buf_FreePosition) /* 52 */
#endif
#ifndef Buf_MovePosition
#define Buf_MovePosition \
	(bufStubsPtr->buf_MovePosition) /* 53 */
#endif
#ifndef Buf_DupPosition
#define Buf_DupPosition \
	(bufStubsPtr->buf_DupPosition) /* 54 */
#endif
#ifndef Buf_PositionOffset
#define Buf_PositionOffset \
	(bufStubsPtr->buf_PositionOffset) /* 55 */
#endif
#ifndef Buf_PositionFromOffset
#define Buf_PositionFromOffset \
	(bufStubsPtr->buf_PositionFromOffset) /* 56 */
#endif
/* Slot 57 is reserved */
/* Slot 58 is reserved */
/* Slot 59 is reserved */
#ifndef Buf_NewQueue
#define Buf_NewQueue \
	(bufStubsPtr->buf_NewQueue) /* 60 */
#endif
#ifndef Buf_FreeQueue
#define Buf_FreeQueue \
	(bufStubsPtr->buf_FreeQueue) /* 61 */
#endif
#ifndef Buf_QueueRead
#define Buf_QueueRead \
	(bufStubsPtr->buf_QueueRead) /* 62 */
#endif
#ifndef Buf_QueueWrite
#define Buf_QueueWrite \
	(bufStubsPtr->buf_QueueWrite) /* 63 */
#endif
#ifndef Buf_QueueAppend
#define Buf_QueueAppend \
	(bufStubsPtr->buf_QueueAppend) /* 64 */
#endif
#ifndef Buf_QueueSize
#define Buf_QueueSize \
	(bufStubsPtr->buf_QueueSize) /* 65 */
#endif

#endif /* defined(USE_BUF_STUBS) && !defined(USE_BUF_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#undef  TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#endif /* _BUFDECLS */

