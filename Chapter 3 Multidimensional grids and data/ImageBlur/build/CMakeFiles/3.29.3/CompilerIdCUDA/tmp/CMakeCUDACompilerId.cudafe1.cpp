# 1 "CMakeCUDACompilerId.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false
#if defined(__nv_is_extended_device_lambda_closure_type) && defined(__nv_is_extended_host_device_lambda_closure_type)
#endif

# 1
# 61 "/usr/include/cuda_runtime.h" 3
#pragma GCC diagnostic push
# 64
#pragma GCC diagnostic ignored "-Wunused-function"
# 68 "/usr/include/device_types.h" 3
#if 0
# 68
enum cudaRoundMode { 
# 70
cudaRoundNearest, 
# 71
cudaRoundZero, 
# 72
cudaRoundPosInf, 
# 73
cudaRoundMinInf
# 74
}; 
#endif
# 100 "/usr/include/vector_types.h" 3
#if 0
# 100
struct char1 { 
# 102
signed char x; 
# 103
}; 
#endif
# 105 "/usr/include/vector_types.h" 3
#if 0
# 105
struct uchar1 { 
# 107
unsigned char x; 
# 108
}; 
#endif
# 111 "/usr/include/vector_types.h" 3
#if 0
# 111
struct __attribute((aligned(2))) char2 { 
# 113
signed char x, y; 
# 114
}; 
#endif
# 116 "/usr/include/vector_types.h" 3
#if 0
# 116
struct __attribute((aligned(2))) uchar2 { 
# 118
unsigned char x, y; 
# 119
}; 
#endif
# 121 "/usr/include/vector_types.h" 3
#if 0
# 121
struct char3 { 
# 123
signed char x, y, z; 
# 124
}; 
#endif
# 126 "/usr/include/vector_types.h" 3
#if 0
# 126
struct uchar3 { 
# 128
unsigned char x, y, z; 
# 129
}; 
#endif
# 131 "/usr/include/vector_types.h" 3
#if 0
# 131
struct __attribute((aligned(4))) char4 { 
# 133
signed char x, y, z, w; 
# 134
}; 
#endif
# 136 "/usr/include/vector_types.h" 3
#if 0
# 136
struct __attribute((aligned(4))) uchar4 { 
# 138
unsigned char x, y, z, w; 
# 139
}; 
#endif
# 141 "/usr/include/vector_types.h" 3
#if 0
# 141
struct short1 { 
# 143
short x; 
# 144
}; 
#endif
# 146 "/usr/include/vector_types.h" 3
#if 0
# 146
struct ushort1 { 
# 148
unsigned short x; 
# 149
}; 
#endif
# 151 "/usr/include/vector_types.h" 3
#if 0
# 151
struct __attribute((aligned(4))) short2 { 
# 153
short x, y; 
# 154
}; 
#endif
# 156 "/usr/include/vector_types.h" 3
#if 0
# 156
struct __attribute((aligned(4))) ushort2 { 
# 158
unsigned short x, y; 
# 159
}; 
#endif
# 161 "/usr/include/vector_types.h" 3
#if 0
# 161
struct short3 { 
# 163
short x, y, z; 
# 164
}; 
#endif
# 166 "/usr/include/vector_types.h" 3
#if 0
# 166
struct ushort3 { 
# 168
unsigned short x, y, z; 
# 169
}; 
#endif
# 171 "/usr/include/vector_types.h" 3
#if 0
# 171
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 172 "/usr/include/vector_types.h" 3
#if 0
# 172
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 174 "/usr/include/vector_types.h" 3
#if 0
# 174
struct int1 { 
# 176
int x; 
# 177
}; 
#endif
# 179 "/usr/include/vector_types.h" 3
#if 0
# 179
struct uint1 { 
# 181
unsigned x; 
# 182
}; 
#endif
# 184 "/usr/include/vector_types.h" 3
#if 0
# 184
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 185 "/usr/include/vector_types.h" 3
#if 0
# 185
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 187 "/usr/include/vector_types.h" 3
#if 0
# 187
struct int3 { 
# 189
int x, y, z; 
# 190
}; 
#endif
# 192 "/usr/include/vector_types.h" 3
#if 0
# 192
struct uint3 { 
# 194
unsigned x, y, z; 
# 195
}; 
#endif
# 197 "/usr/include/vector_types.h" 3
#if 0
# 197
struct __attribute((aligned(16))) int4 { 
# 199
int x, y, z, w; 
# 200
}; 
#endif
# 202 "/usr/include/vector_types.h" 3
#if 0
# 202
struct __attribute((aligned(16))) uint4 { 
# 204
unsigned x, y, z, w; 
# 205
}; 
#endif
# 207 "/usr/include/vector_types.h" 3
#if 0
# 207
struct long1 { 
# 209
long x; 
# 210
}; 
#endif
# 212 "/usr/include/vector_types.h" 3
#if 0
# 212
struct ulong1 { 
# 214
unsigned long x; 
# 215
}; 
#endif
# 222 "/usr/include/vector_types.h" 3
#if 0
# 222
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 224
long x, y; 
# 225
}; 
#endif
# 227 "/usr/include/vector_types.h" 3
#if 0
# 227
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 229
unsigned long x, y; 
# 230
}; 
#endif
# 234 "/usr/include/vector_types.h" 3
#if 0
# 234
struct long3 { 
# 236
long x, y, z; 
# 237
}; 
#endif
# 239 "/usr/include/vector_types.h" 3
#if 0
# 239
struct ulong3 { 
# 241
unsigned long x, y, z; 
# 242
}; 
#endif
# 244 "/usr/include/vector_types.h" 3
#if 0
# 244
struct __attribute((aligned(16))) long4 { 
# 246
long x, y, z, w; 
# 247
}; 
#endif
# 249 "/usr/include/vector_types.h" 3
#if 0
# 249
struct __attribute((aligned(16))) ulong4 { 
# 251
unsigned long x, y, z, w; 
# 252
}; 
#endif
# 254 "/usr/include/vector_types.h" 3
#if 0
# 254
struct float1 { 
# 256
float x; 
# 257
}; 
#endif
# 276 "/usr/include/vector_types.h" 3
#if 0
# 276
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 281 "/usr/include/vector_types.h" 3
#if 0
# 281
struct float3 { 
# 283
float x, y, z; 
# 284
}; 
#endif
# 286 "/usr/include/vector_types.h" 3
#if 0
# 286
struct __attribute((aligned(16))) float4 { 
# 288
float x, y, z, w; 
# 289
}; 
#endif
# 291 "/usr/include/vector_types.h" 3
#if 0
# 291
struct longlong1 { 
# 293
long long x; 
# 294
}; 
#endif
# 296 "/usr/include/vector_types.h" 3
#if 0
# 296
struct ulonglong1 { 
# 298
unsigned long long x; 
# 299
}; 
#endif
# 301 "/usr/include/vector_types.h" 3
#if 0
# 301
struct __attribute((aligned(16))) longlong2 { 
# 303
long long x, y; 
# 304
}; 
#endif
# 306 "/usr/include/vector_types.h" 3
#if 0
# 306
struct __attribute((aligned(16))) ulonglong2 { 
# 308
unsigned long long x, y; 
# 309
}; 
#endif
# 311 "/usr/include/vector_types.h" 3
#if 0
# 311
struct longlong3 { 
# 313
long long x, y, z; 
# 314
}; 
#endif
# 316 "/usr/include/vector_types.h" 3
#if 0
# 316
struct ulonglong3 { 
# 318
unsigned long long x, y, z; 
# 319
}; 
#endif
# 321 "/usr/include/vector_types.h" 3
#if 0
# 321
struct __attribute((aligned(16))) longlong4 { 
# 323
long long x, y, z, w; 
# 324
}; 
#endif
# 326 "/usr/include/vector_types.h" 3
#if 0
# 326
struct __attribute((aligned(16))) ulonglong4 { 
# 328
unsigned long long x, y, z, w; 
# 329
}; 
#endif
# 331 "/usr/include/vector_types.h" 3
#if 0
# 331
struct double1 { 
# 333
double x; 
# 334
}; 
#endif
# 336 "/usr/include/vector_types.h" 3
#if 0
# 336
struct __attribute((aligned(16))) double2 { 
# 338
double x, y; 
# 339
}; 
#endif
# 341 "/usr/include/vector_types.h" 3
#if 0
# 341
struct double3 { 
# 343
double x, y, z; 
# 344
}; 
#endif
# 346 "/usr/include/vector_types.h" 3
#if 0
# 346
struct __attribute((aligned(16))) double4 { 
# 348
double x, y, z, w; 
# 349
}; 
#endif
# 363 "/usr/include/vector_types.h" 3
#if 0
typedef char1 
# 363
char1; 
#endif
# 364 "/usr/include/vector_types.h" 3
#if 0
typedef uchar1 
# 364
uchar1; 
#endif
# 365 "/usr/include/vector_types.h" 3
#if 0
typedef char2 
# 365
char2; 
#endif
# 366 "/usr/include/vector_types.h" 3
#if 0
typedef uchar2 
# 366
uchar2; 
#endif
# 367 "/usr/include/vector_types.h" 3
#if 0
typedef char3 
# 367
char3; 
#endif
# 368 "/usr/include/vector_types.h" 3
#if 0
typedef uchar3 
# 368
uchar3; 
#endif
# 369 "/usr/include/vector_types.h" 3
#if 0
typedef char4 
# 369
char4; 
#endif
# 370 "/usr/include/vector_types.h" 3
#if 0
typedef uchar4 
# 370
uchar4; 
#endif
# 371 "/usr/include/vector_types.h" 3
#if 0
typedef short1 
# 371
short1; 
#endif
# 372 "/usr/include/vector_types.h" 3
#if 0
typedef ushort1 
# 372
ushort1; 
#endif
# 373 "/usr/include/vector_types.h" 3
#if 0
typedef short2 
# 373
short2; 
#endif
# 374 "/usr/include/vector_types.h" 3
#if 0
typedef ushort2 
# 374
ushort2; 
#endif
# 375 "/usr/include/vector_types.h" 3
#if 0
typedef short3 
# 375
short3; 
#endif
# 376 "/usr/include/vector_types.h" 3
#if 0
typedef ushort3 
# 376
ushort3; 
#endif
# 377 "/usr/include/vector_types.h" 3
#if 0
typedef short4 
# 377
short4; 
#endif
# 378 "/usr/include/vector_types.h" 3
#if 0
typedef ushort4 
# 378
ushort4; 
#endif
# 379 "/usr/include/vector_types.h" 3
#if 0
typedef int1 
# 379
int1; 
#endif
# 380 "/usr/include/vector_types.h" 3
#if 0
typedef uint1 
# 380
uint1; 
#endif
# 381 "/usr/include/vector_types.h" 3
#if 0
typedef int2 
# 381
int2; 
#endif
# 382 "/usr/include/vector_types.h" 3
#if 0
typedef uint2 
# 382
uint2; 
#endif
# 383 "/usr/include/vector_types.h" 3
#if 0
typedef int3 
# 383
int3; 
#endif
# 384 "/usr/include/vector_types.h" 3
#if 0
typedef uint3 
# 384
uint3; 
#endif
# 385 "/usr/include/vector_types.h" 3
#if 0
typedef int4 
# 385
int4; 
#endif
# 386 "/usr/include/vector_types.h" 3
#if 0
typedef uint4 
# 386
uint4; 
#endif
# 387 "/usr/include/vector_types.h" 3
#if 0
typedef long1 
# 387
long1; 
#endif
# 388 "/usr/include/vector_types.h" 3
#if 0
typedef ulong1 
# 388
ulong1; 
#endif
# 389 "/usr/include/vector_types.h" 3
#if 0
typedef long2 
# 389
long2; 
#endif
# 390 "/usr/include/vector_types.h" 3
#if 0
typedef ulong2 
# 390
ulong2; 
#endif
# 391 "/usr/include/vector_types.h" 3
#if 0
typedef long3 
# 391
long3; 
#endif
# 392 "/usr/include/vector_types.h" 3
#if 0
typedef ulong3 
# 392
ulong3; 
#endif
# 393 "/usr/include/vector_types.h" 3
#if 0
typedef long4 
# 393
long4; 
#endif
# 394 "/usr/include/vector_types.h" 3
#if 0
typedef ulong4 
# 394
ulong4; 
#endif
# 395 "/usr/include/vector_types.h" 3
#if 0
typedef float1 
# 395
float1; 
#endif
# 396 "/usr/include/vector_types.h" 3
#if 0
typedef float2 
# 396
float2; 
#endif
# 397 "/usr/include/vector_types.h" 3
#if 0
typedef float3 
# 397
float3; 
#endif
# 398 "/usr/include/vector_types.h" 3
#if 0
typedef float4 
# 398
float4; 
#endif
# 399 "/usr/include/vector_types.h" 3
#if 0
typedef longlong1 
# 399
longlong1; 
#endif
# 400 "/usr/include/vector_types.h" 3
#if 0
typedef ulonglong1 
# 400
ulonglong1; 
#endif
# 401 "/usr/include/vector_types.h" 3
#if 0
typedef longlong2 
# 401
longlong2; 
#endif
# 402 "/usr/include/vector_types.h" 3
#if 0
typedef ulonglong2 
# 402
ulonglong2; 
#endif
# 403 "/usr/include/vector_types.h" 3
#if 0
typedef longlong3 
# 403
longlong3; 
#endif
# 404 "/usr/include/vector_types.h" 3
#if 0
typedef ulonglong3 
# 404
ulonglong3; 
#endif
# 405 "/usr/include/vector_types.h" 3
#if 0
typedef longlong4 
# 405
longlong4; 
#endif
# 406 "/usr/include/vector_types.h" 3
#if 0
typedef ulonglong4 
# 406
ulonglong4; 
#endif
# 407 "/usr/include/vector_types.h" 3
#if 0
typedef double1 
# 407
double1; 
#endif
# 408 "/usr/include/vector_types.h" 3
#if 0
typedef double2 
# 408
double2; 
#endif
# 409 "/usr/include/vector_types.h" 3
#if 0
typedef double3 
# 409
double3; 
#endif
# 410 "/usr/include/vector_types.h" 3
#if 0
typedef double4 
# 410
double4; 
#endif
# 418 "/usr/include/vector_types.h" 3
#if 0
# 418
struct dim3 { 
# 420
unsigned x, y, z; 
# 432
}; 
#endif
# 434 "/usr/include/vector_types.h" 3
#if 0
typedef dim3 
# 434
dim3; 
#endif
# 23 "/usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3
extern "C" {
# 24
extern long __sysconf(int __name) noexcept(true); 
# 25
}
# 143 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3
typedef long ptrdiff_t; 
# 209 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3
typedef unsigned long size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
# 426 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3
typedef 
# 415 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3
struct { 
# 416
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
# 417
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 426 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3
} max_align_t; 
# 433
typedef __decltype((nullptr)) nullptr_t; 
# 201 "/usr/include/driver_types.h" 3
#if 0
# 201
enum cudaError { 
# 208
cudaSuccess, 
# 214
cudaErrorInvalidValue, 
# 220
cudaErrorMemoryAllocation, 
# 226
cudaErrorInitializationError, 
# 233
cudaErrorCudartUnloading, 
# 240
cudaErrorProfilerDisabled, 
# 248
cudaErrorProfilerNotInitialized, 
# 255
cudaErrorProfilerAlreadyStarted, 
# 262
cudaErrorProfilerAlreadyStopped, 
# 271 "/usr/include/driver_types.h" 3
cudaErrorInvalidConfiguration, 
# 277
cudaErrorInvalidPitchValue = 12, 
# 283
cudaErrorInvalidSymbol, 
# 291
cudaErrorInvalidHostPointer = 16, 
# 299
cudaErrorInvalidDevicePointer, 
# 305
cudaErrorInvalidTexture, 
# 311
cudaErrorInvalidTextureBinding, 
# 318
cudaErrorInvalidChannelDescriptor, 
# 324
cudaErrorInvalidMemcpyDirection, 
# 334 "/usr/include/driver_types.h" 3
cudaErrorAddressOfConstant, 
# 343 "/usr/include/driver_types.h" 3
cudaErrorTextureFetchFailed, 
# 352 "/usr/include/driver_types.h" 3
cudaErrorTextureNotBound, 
# 361 "/usr/include/driver_types.h" 3
cudaErrorSynchronizationError, 
# 367
cudaErrorInvalidFilterSetting, 
# 373
cudaErrorInvalidNormSetting, 
# 381
cudaErrorMixedDeviceExecution, 
# 389
cudaErrorNotYetImplemented = 31, 
# 398 "/usr/include/driver_types.h" 3
cudaErrorMemoryValueTooLarge, 
# 405
cudaErrorStubLibrary = 34, 
# 412
cudaErrorInsufficientDriver, 
# 419
cudaErrorCallRequiresNewerDriver, 
# 425
cudaErrorInvalidSurface, 
# 431
cudaErrorDuplicateVariableName = 43, 
# 437
cudaErrorDuplicateTextureName, 
# 443
cudaErrorDuplicateSurfaceName, 
# 453 "/usr/include/driver_types.h" 3
cudaErrorDevicesUnavailable, 
# 466 "/usr/include/driver_types.h" 3
cudaErrorIncompatibleDriverContext = 49, 
# 472
cudaErrorMissingConfiguration = 52, 
# 481 "/usr/include/driver_types.h" 3
cudaErrorPriorLaunchFailure, 
# 488
cudaErrorLaunchMaxDepthExceeded = 65, 
# 496
cudaErrorLaunchFileScopedTex, 
# 504
cudaErrorLaunchFileScopedSurf, 
# 519 "/usr/include/driver_types.h" 3
cudaErrorSyncDepthExceeded, 
# 531 "/usr/include/driver_types.h" 3
cudaErrorLaunchPendingCountExceeded, 
# 537
cudaErrorInvalidDeviceFunction = 98, 
# 543
cudaErrorNoDevice = 100, 
# 550
cudaErrorInvalidDevice, 
# 555
cudaErrorDeviceNotLicensed, 
# 564 "/usr/include/driver_types.h" 3
cudaErrorSoftwareValidityNotEstablished, 
# 569
cudaErrorStartupFailure = 127, 
# 574
cudaErrorInvalidKernelImage = 200, 
# 584 "/usr/include/driver_types.h" 3
cudaErrorDeviceUninitialized, 
# 589
cudaErrorMapBufferObjectFailed = 205, 
# 594
cudaErrorUnmapBufferObjectFailed, 
# 600
cudaErrorArrayIsMapped, 
# 605
cudaErrorAlreadyMapped, 
# 613
cudaErrorNoKernelImageForDevice, 
# 618
cudaErrorAlreadyAcquired, 
# 623
cudaErrorNotMapped, 
# 629
cudaErrorNotMappedAsArray, 
# 635
cudaErrorNotMappedAsPointer, 
# 641
cudaErrorECCUncorrectable, 
# 647
cudaErrorUnsupportedLimit, 
# 653
cudaErrorDeviceAlreadyInUse, 
# 659
cudaErrorPeerAccessUnsupported, 
# 665
cudaErrorInvalidPtx, 
# 670
cudaErrorInvalidGraphicsContext, 
# 676
cudaErrorNvlinkUncorrectable, 
# 683
cudaErrorJitCompilerNotFound, 
# 690
cudaErrorUnsupportedPtxVersion, 
# 697
cudaErrorJitCompilationDisabled, 
# 702
cudaErrorUnsupportedExecAffinity, 
# 707
cudaErrorInvalidSource = 300, 
# 712
cudaErrorFileNotFound, 
# 717
cudaErrorSharedObjectSymbolNotFound, 
# 722
cudaErrorSharedObjectInitFailed, 
# 727
cudaErrorOperatingSystem, 
# 734
cudaErrorInvalidResourceHandle = 400, 
# 740
cudaErrorIllegalState, 
# 747
cudaErrorSymbolNotFound = 500, 
# 755
cudaErrorNotReady = 600, 
# 763
cudaErrorIllegalAddress = 700, 
# 772 "/usr/include/driver_types.h" 3
cudaErrorLaunchOutOfResources, 
# 783 "/usr/include/driver_types.h" 3
cudaErrorLaunchTimeout, 
# 789
cudaErrorLaunchIncompatibleTexturing, 
# 796
cudaErrorPeerAccessAlreadyEnabled, 
# 803
cudaErrorPeerAccessNotEnabled, 
# 816 "/usr/include/driver_types.h" 3
cudaErrorSetOnActiveProcess = 708, 
# 823
cudaErrorContextIsDestroyed, 
# 830
cudaErrorAssert, 
# 837
cudaErrorTooManyPeers, 
# 843
cudaErrorHostMemoryAlreadyRegistered, 
# 849
cudaErrorHostMemoryNotRegistered, 
# 858 "/usr/include/driver_types.h" 3
cudaErrorHardwareStackError, 
# 866
cudaErrorIllegalInstruction, 
# 875 "/usr/include/driver_types.h" 3
cudaErrorMisalignedAddress, 
# 886 "/usr/include/driver_types.h" 3
cudaErrorInvalidAddressSpace, 
# 894
cudaErrorInvalidPc, 
# 905 "/usr/include/driver_types.h" 3
cudaErrorLaunchFailure, 
# 914 "/usr/include/driver_types.h" 3
cudaErrorCooperativeLaunchTooLarge, 
# 919
cudaErrorNotPermitted = 800, 
# 925
cudaErrorNotSupported, 
# 934 "/usr/include/driver_types.h" 3
cudaErrorSystemNotReady, 
# 941
cudaErrorSystemDriverMismatch, 
# 950 "/usr/include/driver_types.h" 3
cudaErrorCompatNotSupportedOnDevice, 
# 955
cudaErrorMpsConnectionFailed, 
# 960
cudaErrorMpsRpcFailure, 
# 966
cudaErrorMpsServerNotReady, 
# 971
cudaErrorMpsMaxClientsReached, 
# 976
cudaErrorMpsMaxConnectionsReached, 
# 981
cudaErrorStreamCaptureUnsupported = 900, 
# 987
cudaErrorStreamCaptureInvalidated, 
# 993
cudaErrorStreamCaptureMerge, 
# 998
cudaErrorStreamCaptureUnmatched, 
# 1004
cudaErrorStreamCaptureUnjoined, 
# 1011
cudaErrorStreamCaptureIsolation, 
# 1017
cudaErrorStreamCaptureImplicit, 
# 1023
cudaErrorCapturedEvent, 
# 1030
cudaErrorStreamCaptureWrongThread, 
# 1035
cudaErrorTimeout, 
# 1041
cudaErrorGraphExecUpdateFailure, 
# 1051 "/usr/include/driver_types.h" 3
cudaErrorExternalDevice, 
# 1056
cudaErrorUnknown = 999, 
# 1064
cudaErrorApiFailureBase = 10000
# 1065
}; 
#endif
# 1070 "/usr/include/driver_types.h" 3
#if 0
# 1070
enum cudaChannelFormatKind { 
# 1072
cudaChannelFormatKindSigned, 
# 1073
cudaChannelFormatKindUnsigned, 
# 1074
cudaChannelFormatKindFloat, 
# 1075
cudaChannelFormatKindNone, 
# 1076
cudaChannelFormatKindNV12, 
# 1077
cudaChannelFormatKindUnsignedNormalized8X1, 
# 1078
cudaChannelFormatKindUnsignedNormalized8X2, 
# 1079
cudaChannelFormatKindUnsignedNormalized8X4, 
# 1080
cudaChannelFormatKindUnsignedNormalized16X1, 
# 1081
cudaChannelFormatKindUnsignedNormalized16X2, 
# 1082
cudaChannelFormatKindUnsignedNormalized16X4, 
# 1083
cudaChannelFormatKindSignedNormalized8X1, 
# 1084
cudaChannelFormatKindSignedNormalized8X2, 
# 1085
cudaChannelFormatKindSignedNormalized8X4, 
# 1086
cudaChannelFormatKindSignedNormalized16X1, 
# 1087
cudaChannelFormatKindSignedNormalized16X2, 
# 1088
cudaChannelFormatKindSignedNormalized16X4, 
# 1089
cudaChannelFormatKindUnsignedBlockCompressed1, 
# 1090
cudaChannelFormatKindUnsignedBlockCompressed1SRGB, 
# 1091
cudaChannelFormatKindUnsignedBlockCompressed2, 
# 1092
cudaChannelFormatKindUnsignedBlockCompressed2SRGB, 
# 1093
cudaChannelFormatKindUnsignedBlockCompressed3, 
# 1094
cudaChannelFormatKindUnsignedBlockCompressed3SRGB, 
# 1095
cudaChannelFormatKindUnsignedBlockCompressed4, 
# 1096
cudaChannelFormatKindSignedBlockCompressed4, 
# 1097
cudaChannelFormatKindUnsignedBlockCompressed5, 
# 1098
cudaChannelFormatKindSignedBlockCompressed5, 
# 1099
cudaChannelFormatKindUnsignedBlockCompressed6H, 
# 1100
cudaChannelFormatKindSignedBlockCompressed6H, 
# 1101
cudaChannelFormatKindUnsignedBlockCompressed7, 
# 1102
cudaChannelFormatKindUnsignedBlockCompressed7SRGB
# 1103
}; 
#endif
# 1108 "/usr/include/driver_types.h" 3
#if 0
# 1108
struct cudaChannelFormatDesc { 
# 1110
int x; 
# 1111
int y; 
# 1112
int z; 
# 1113
int w; 
# 1114
cudaChannelFormatKind f; 
# 1115
}; 
#endif
# 1120 "/usr/include/driver_types.h" 3
typedef struct cudaArray *cudaArray_t; 
# 1125
typedef const cudaArray *cudaArray_const_t; 
# 1127
struct cudaArray; 
# 1132
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 1137
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 1139
struct cudaMipmappedArray; 
# 1149 "/usr/include/driver_types.h" 3
#if 0
# 1149
struct cudaArraySparseProperties { 
# 1150
struct { 
# 1151
unsigned width; 
# 1152
unsigned height; 
# 1153
unsigned depth; 
# 1154
} tileExtent; 
# 1155
unsigned miptailFirstLevel; 
# 1156
unsigned long long miptailSize; 
# 1157
unsigned flags; 
# 1158
unsigned reserved[4]; 
# 1159
}; 
#endif
# 1164 "/usr/include/driver_types.h" 3
#if 0
# 1164
enum cudaMemoryType { 
# 1166
cudaMemoryTypeUnregistered, 
# 1167
cudaMemoryTypeHost, 
# 1168
cudaMemoryTypeDevice, 
# 1169
cudaMemoryTypeManaged
# 1170
}; 
#endif
# 1175 "/usr/include/driver_types.h" 3
#if 0
# 1175
enum cudaMemcpyKind { 
# 1177
cudaMemcpyHostToHost, 
# 1178
cudaMemcpyHostToDevice, 
# 1179
cudaMemcpyDeviceToHost, 
# 1180
cudaMemcpyDeviceToDevice, 
# 1181
cudaMemcpyDefault
# 1182
}; 
#endif
# 1189 "/usr/include/driver_types.h" 3
#if 0
# 1189
struct cudaPitchedPtr { 
# 1191
void *ptr; 
# 1192
size_t pitch; 
# 1193
size_t xsize; 
# 1194
size_t ysize; 
# 1195
}; 
#endif
# 1202 "/usr/include/driver_types.h" 3
#if 0
# 1202
struct cudaExtent { 
# 1204
size_t width; 
# 1205
size_t height; 
# 1206
size_t depth; 
# 1207
}; 
#endif
# 1214 "/usr/include/driver_types.h" 3
#if 0
# 1214
struct cudaPos { 
# 1216
size_t x; 
# 1217
size_t y; 
# 1218
size_t z; 
# 1219
}; 
#endif
# 1224 "/usr/include/driver_types.h" 3
#if 0
# 1224
struct cudaMemcpy3DParms { 
# 1226
cudaArray_t srcArray; 
# 1227
cudaPos srcPos; 
# 1228
cudaPitchedPtr srcPtr; 
# 1230
cudaArray_t dstArray; 
# 1231
cudaPos dstPos; 
# 1232
cudaPitchedPtr dstPtr; 
# 1234
cudaExtent extent; 
# 1235
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1236
}; 
#endif
# 1241 "/usr/include/driver_types.h" 3
#if 0
# 1241
struct cudaMemcpy3DPeerParms { 
# 1243
cudaArray_t srcArray; 
# 1244
cudaPos srcPos; 
# 1245
cudaPitchedPtr srcPtr; 
# 1246
int srcDevice; 
# 1248
cudaArray_t dstArray; 
# 1249
cudaPos dstPos; 
# 1250
cudaPitchedPtr dstPtr; 
# 1251
int dstDevice; 
# 1253
cudaExtent extent; 
# 1254
}; 
#endif
# 1259 "/usr/include/driver_types.h" 3
#if 0
# 1259
struct cudaMemsetParams { 
# 1260
void *dst; 
# 1261
size_t pitch; 
# 1262
unsigned value; 
# 1263
unsigned elementSize; 
# 1264
size_t width; 
# 1265
size_t height; 
# 1266
}; 
#endif
# 1271 "/usr/include/driver_types.h" 3
#if 0
# 1271
enum cudaAccessProperty { 
# 1272
cudaAccessPropertyNormal, 
# 1273
cudaAccessPropertyStreaming, 
# 1274
cudaAccessPropertyPersisting
# 1275
}; 
#endif
# 1288 "/usr/include/driver_types.h" 3
#if 0
# 1288
struct cudaAccessPolicyWindow { 
# 1289
void *base_ptr; 
# 1290
size_t num_bytes; 
# 1291
float hitRatio; 
# 1292
cudaAccessProperty hitProp; 
# 1293
cudaAccessProperty missProp; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1294
}; 
#endif
# 1306 "/usr/include/driver_types.h" 3
typedef void (*cudaHostFn_t)(void * userData); 
# 1311
#if 0
# 1311
struct cudaHostNodeParams { 
# 1312
cudaHostFn_t fn; 
# 1313
void *userData; 
# 1314
}; 
#endif
# 1319 "/usr/include/driver_types.h" 3
#if 0
# 1319
enum cudaStreamCaptureStatus { 
# 1320
cudaStreamCaptureStatusNone, 
# 1321
cudaStreamCaptureStatusActive, 
# 1322
cudaStreamCaptureStatusInvalidated
# 1324
}; 
#endif
# 1330 "/usr/include/driver_types.h" 3
#if 0
# 1330
enum cudaStreamCaptureMode { 
# 1331
cudaStreamCaptureModeGlobal, 
# 1332
cudaStreamCaptureModeThreadLocal, 
# 1333
cudaStreamCaptureModeRelaxed
# 1334
}; 
#endif
# 1336 "/usr/include/driver_types.h" 3
#if 0
# 1336
enum cudaSynchronizationPolicy { 
# 1337
cudaSyncPolicyAuto = 1, 
# 1338
cudaSyncPolicySpin, 
# 1339
cudaSyncPolicyYield, 
# 1340
cudaSyncPolicyBlockingSync
# 1341
}; 
#endif
# 1346 "/usr/include/driver_types.h" 3
#if 0
# 1346
enum cudaStreamAttrID { 
# 1347
cudaStreamAttributeAccessPolicyWindow = 1, 
# 1348
cudaStreamAttributeSynchronizationPolicy = 3
# 1349
}; 
#endif
# 1354 "/usr/include/driver_types.h" 3
#if 0
# 1354
union cudaStreamAttrValue { 
# 1355
cudaAccessPolicyWindow accessPolicyWindow; 
# 1356
cudaSynchronizationPolicy syncPolicy; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1357
}; 
#endif
# 1362 "/usr/include/driver_types.h" 3
#if 0
# 1362
enum cudaStreamUpdateCaptureDependenciesFlags { 
# 1363
cudaStreamAddCaptureDependencies, 
# 1364
cudaStreamSetCaptureDependencies
# 1365
}; 
#endif
# 1370 "/usr/include/driver_types.h" 3
#if 0
# 1370
enum cudaUserObjectFlags { 
# 1371
cudaUserObjectNoDestructorSync = 1
# 1372
}; 
#endif
# 1377 "/usr/include/driver_types.h" 3
#if 0
# 1377
enum cudaUserObjectRetainFlags { 
# 1378
cudaGraphUserObjectMove = 1
# 1379
}; 
#endif
# 1384 "/usr/include/driver_types.h" 3
struct cudaGraphicsResource; 
# 1389
#if 0
# 1389
enum cudaGraphicsRegisterFlags { 
# 1391
cudaGraphicsRegisterFlagsNone, 
# 1392
cudaGraphicsRegisterFlagsReadOnly, 
# 1393
cudaGraphicsRegisterFlagsWriteDiscard, 
# 1394
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 1395
cudaGraphicsRegisterFlagsTextureGather = 8
# 1396
}; 
#endif
# 1401 "/usr/include/driver_types.h" 3
#if 0
# 1401
enum cudaGraphicsMapFlags { 
# 1403
cudaGraphicsMapFlagsNone, 
# 1404
cudaGraphicsMapFlagsReadOnly, 
# 1405
cudaGraphicsMapFlagsWriteDiscard
# 1406
}; 
#endif
# 1411 "/usr/include/driver_types.h" 3
#if 0
# 1411
enum cudaGraphicsCubeFace { 
# 1413
cudaGraphicsCubeFacePositiveX, 
# 1414
cudaGraphicsCubeFaceNegativeX, 
# 1415
cudaGraphicsCubeFacePositiveY, 
# 1416
cudaGraphicsCubeFaceNegativeY, 
# 1417
cudaGraphicsCubeFacePositiveZ, 
# 1418
cudaGraphicsCubeFaceNegativeZ
# 1419
}; 
#endif
# 1424 "/usr/include/driver_types.h" 3
#if 0
# 1424
enum cudaKernelNodeAttrID { 
# 1425
cudaKernelNodeAttributeAccessPolicyWindow = 1, 
# 1426
cudaKernelNodeAttributeCooperative
# 1427
}; 
#endif
# 1432 "/usr/include/driver_types.h" 3
#if 0
# 1432
union cudaKernelNodeAttrValue { 
# 1433
cudaAccessPolicyWindow accessPolicyWindow; 
# 1434
int cooperative; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1435
}; 
#endif
# 1440 "/usr/include/driver_types.h" 3
#if 0
# 1440
enum cudaResourceType { 
# 1442
cudaResourceTypeArray, 
# 1443
cudaResourceTypeMipmappedArray, 
# 1444
cudaResourceTypeLinear, 
# 1445
cudaResourceTypePitch2D
# 1446
}; 
#endif
# 1451 "/usr/include/driver_types.h" 3
#if 0
# 1451
enum cudaResourceViewFormat { 
# 1453
cudaResViewFormatNone, 
# 1454
cudaResViewFormatUnsignedChar1, 
# 1455
cudaResViewFormatUnsignedChar2, 
# 1456
cudaResViewFormatUnsignedChar4, 
# 1457
cudaResViewFormatSignedChar1, 
# 1458
cudaResViewFormatSignedChar2, 
# 1459
cudaResViewFormatSignedChar4, 
# 1460
cudaResViewFormatUnsignedShort1, 
# 1461
cudaResViewFormatUnsignedShort2, 
# 1462
cudaResViewFormatUnsignedShort4, 
# 1463
cudaResViewFormatSignedShort1, 
# 1464
cudaResViewFormatSignedShort2, 
# 1465
cudaResViewFormatSignedShort4, 
# 1466
cudaResViewFormatUnsignedInt1, 
# 1467
cudaResViewFormatUnsignedInt2, 
# 1468
cudaResViewFormatUnsignedInt4, 
# 1469
cudaResViewFormatSignedInt1, 
# 1470
cudaResViewFormatSignedInt2, 
# 1471
cudaResViewFormatSignedInt4, 
# 1472
cudaResViewFormatHalf1, 
# 1473
cudaResViewFormatHalf2, 
# 1474
cudaResViewFormatHalf4, 
# 1475
cudaResViewFormatFloat1, 
# 1476
cudaResViewFormatFloat2, 
# 1477
cudaResViewFormatFloat4, 
# 1478
cudaResViewFormatUnsignedBlockCompressed1, 
# 1479
cudaResViewFormatUnsignedBlockCompressed2, 
# 1480
cudaResViewFormatUnsignedBlockCompressed3, 
# 1481
cudaResViewFormatUnsignedBlockCompressed4, 
# 1482
cudaResViewFormatSignedBlockCompressed4, 
# 1483
cudaResViewFormatUnsignedBlockCompressed5, 
# 1484
cudaResViewFormatSignedBlockCompressed5, 
# 1485
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1486
cudaResViewFormatSignedBlockCompressed6H, 
# 1487
cudaResViewFormatUnsignedBlockCompressed7
# 1488
}; 
#endif
# 1493 "/usr/include/driver_types.h" 3
#if 0
# 1493
struct cudaResourceDesc { 
# 1494
cudaResourceType resType; 
# 1496
union { 
# 1497
struct { 
# 1498
cudaArray_t array; 
# 1499
} array; 
# 1500
struct { 
# 1501
cudaMipmappedArray_t mipmap; 
# 1502
} mipmap; 
# 1503
struct { 
# 1504
void *devPtr; 
# 1505
cudaChannelFormatDesc desc; 
# 1506
size_t sizeInBytes; 
# 1507
} linear; 
# 1508
struct { 
# 1509
void *devPtr; 
# 1510
cudaChannelFormatDesc desc; 
# 1511
size_t width; 
# 1512
size_t height; 
# 1513
size_t pitchInBytes; 
# 1514
} pitch2D; 
# 1515
} res; 
# 1516
}; 
#endif
# 1521 "/usr/include/driver_types.h" 3
#if 0
# 1521
struct cudaResourceViewDesc { 
# 1523
cudaResourceViewFormat format; 
# 1524
size_t width; 
# 1525
size_t height; 
# 1526
size_t depth; 
# 1527
unsigned firstMipmapLevel; 
# 1528
unsigned lastMipmapLevel; 
# 1529
unsigned firstLayer; 
# 1530
unsigned lastLayer; 
# 1531
}; 
#endif
# 1536 "/usr/include/driver_types.h" 3
#if 0
# 1536
struct cudaPointerAttributes { 
# 1542
cudaMemoryType type; 
# 1553 "/usr/include/driver_types.h" 3
int device; 
# 1559
void *devicePointer; 
# 1568 "/usr/include/driver_types.h" 3
void *hostPointer; 
# 1569
}; 
#endif
# 1574 "/usr/include/driver_types.h" 3
#if 0
# 1574
struct cudaFuncAttributes { 
# 1581
size_t sharedSizeBytes; 
# 1587
size_t constSizeBytes; 
# 1592
size_t localSizeBytes; 
# 1599
int maxThreadsPerBlock; 
# 1604
int numRegs; 
# 1611
int ptxVersion; 
# 1618
int binaryVersion; 
# 1624
int cacheModeCA; 
# 1631
int maxDynamicSharedSizeBytes; 
# 1640 "/usr/include/driver_types.h" 3
int preferredShmemCarveout; 
# 1690 "/usr/include/driver_types.h" 3
}; 
#endif
# 1695 "/usr/include/driver_types.h" 3
#if 0
# 1695
enum cudaFuncAttribute { 
# 1697
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1698
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1707 "/usr/include/driver_types.h" 3
cudaFuncAttributeMax
# 1708
}; 
#endif
# 1713 "/usr/include/driver_types.h" 3
#if 0
# 1713
enum cudaFuncCache { 
# 1715
cudaFuncCachePreferNone, 
# 1716
cudaFuncCachePreferShared, 
# 1717
cudaFuncCachePreferL1, 
# 1718
cudaFuncCachePreferEqual
# 1719
}; 
#endif
# 1725 "/usr/include/driver_types.h" 3
#if 0
# 1725
enum cudaSharedMemConfig { 
# 1727
cudaSharedMemBankSizeDefault, 
# 1728
cudaSharedMemBankSizeFourByte, 
# 1729
cudaSharedMemBankSizeEightByte
# 1730
}; 
#endif
# 1735 "/usr/include/driver_types.h" 3
#if 0
# 1735
enum cudaSharedCarveout { 
# 1736
cudaSharedmemCarveoutDefault = (-1), 
# 1737
cudaSharedmemCarveoutMaxShared = 100, 
# 1738
cudaSharedmemCarveoutMaxL1 = 0
# 1739
}; 
#endif
# 1755 "/usr/include/driver_types.h" 3
#if 0
# 1755
enum cudaComputeMode { 
# 1757
cudaComputeModeDefault, 
# 1758
cudaComputeModeExclusive, 
# 1759
cudaComputeModeProhibited, 
# 1760
cudaComputeModeExclusiveProcess
# 1761
}; 
#endif
# 1766 "/usr/include/driver_types.h" 3
#if 0
# 1766
enum cudaLimit { 
# 1768
cudaLimitStackSize, 
# 1769
cudaLimitPrintfFifoSize, 
# 1770
cudaLimitMallocHeapSize, 
# 1771
cudaLimitDevRuntimeSyncDepth, 
# 1772
cudaLimitDevRuntimePendingLaunchCount, 
# 1773
cudaLimitMaxL2FetchGranularity, 
# 1774
cudaLimitPersistingL2CacheSize
# 1775
}; 
#endif
# 1780 "/usr/include/driver_types.h" 3
#if 0
# 1780
enum cudaMemoryAdvise { 
# 1782
cudaMemAdviseSetReadMostly = 1, 
# 1783
cudaMemAdviseUnsetReadMostly, 
# 1784
cudaMemAdviseSetPreferredLocation, 
# 1785
cudaMemAdviseUnsetPreferredLocation, 
# 1786
cudaMemAdviseSetAccessedBy, 
# 1787
cudaMemAdviseUnsetAccessedBy
# 1788
}; 
#endif
# 1793 "/usr/include/driver_types.h" 3
#if 0
# 1793
enum cudaMemRangeAttribute { 
# 1795
cudaMemRangeAttributeReadMostly = 1, 
# 1796
cudaMemRangeAttributePreferredLocation, 
# 1797
cudaMemRangeAttributeAccessedBy, 
# 1798
cudaMemRangeAttributeLastPrefetchLocation
# 1799
}; 
#endif
# 1804 "/usr/include/driver_types.h" 3
#if 0
# 1804
enum cudaOutputMode { 
# 1806
cudaKeyValuePair, 
# 1807
cudaCSV
# 1808
}; 
#endif
# 1813 "/usr/include/driver_types.h" 3
#if 0
# 1813
enum cudaFlushGPUDirectRDMAWritesOptions { 
# 1814
cudaFlushGPUDirectRDMAWritesOptionHost = (1 << 0), 
# 1815
cudaFlushGPUDirectRDMAWritesOptionMemOps
# 1816
}; 
#endif
# 1821 "/usr/include/driver_types.h" 3
#if 0
# 1821
enum cudaGPUDirectRDMAWritesOrdering { 
# 1822
cudaGPUDirectRDMAWritesOrderingNone, 
# 1823
cudaGPUDirectRDMAWritesOrderingOwner = 100, 
# 1824
cudaGPUDirectRDMAWritesOrderingAllDevices = 200
# 1825
}; 
#endif
# 1830 "/usr/include/driver_types.h" 3
#if 0
# 1830
enum cudaFlushGPUDirectRDMAWritesScope { 
# 1831
cudaFlushGPUDirectRDMAWritesToOwner = 100, 
# 1832
cudaFlushGPUDirectRDMAWritesToAllDevices = 200
# 1833
}; 
#endif
# 1838 "/usr/include/driver_types.h" 3
#if 0
# 1838
enum cudaFlushGPUDirectRDMAWritesTarget { 
# 1839
cudaFlushGPUDirectRDMAWritesTargetCurrentDevice
# 1840
}; 
#endif
# 1846 "/usr/include/driver_types.h" 3
#if 0
# 1846
enum cudaDeviceAttr { 
# 1848
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1849
cudaDevAttrMaxBlockDimX, 
# 1850
cudaDevAttrMaxBlockDimY, 
# 1851
cudaDevAttrMaxBlockDimZ, 
# 1852
cudaDevAttrMaxGridDimX, 
# 1853
cudaDevAttrMaxGridDimY, 
# 1854
cudaDevAttrMaxGridDimZ, 
# 1855
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1856
cudaDevAttrTotalConstantMemory, 
# 1857
cudaDevAttrWarpSize, 
# 1858
cudaDevAttrMaxPitch, 
# 1859
cudaDevAttrMaxRegistersPerBlock, 
# 1860
cudaDevAttrClockRate, 
# 1861
cudaDevAttrTextureAlignment, 
# 1862
cudaDevAttrGpuOverlap, 
# 1863
cudaDevAttrMultiProcessorCount, 
# 1864
cudaDevAttrKernelExecTimeout, 
# 1865
cudaDevAttrIntegrated, 
# 1866
cudaDevAttrCanMapHostMemory, 
# 1867
cudaDevAttrComputeMode, 
# 1868
cudaDevAttrMaxTexture1DWidth, 
# 1869
cudaDevAttrMaxTexture2DWidth, 
# 1870
cudaDevAttrMaxTexture2DHeight, 
# 1871
cudaDevAttrMaxTexture3DWidth, 
# 1872
cudaDevAttrMaxTexture3DHeight, 
# 1873
cudaDevAttrMaxTexture3DDepth, 
# 1874
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1875
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1876
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1877
cudaDevAttrSurfaceAlignment, 
# 1878
cudaDevAttrConcurrentKernels, 
# 1879
cudaDevAttrEccEnabled, 
# 1880
cudaDevAttrPciBusId, 
# 1881
cudaDevAttrPciDeviceId, 
# 1882
cudaDevAttrTccDriver, 
# 1883
cudaDevAttrMemoryClockRate, 
# 1884
cudaDevAttrGlobalMemoryBusWidth, 
# 1885
cudaDevAttrL2CacheSize, 
# 1886
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1887
cudaDevAttrAsyncEngineCount, 
# 1888
cudaDevAttrUnifiedAddressing, 
# 1889
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1890
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1891
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1892
cudaDevAttrMaxTexture2DGatherHeight, 
# 1893
cudaDevAttrMaxTexture3DWidthAlt, 
# 1894
cudaDevAttrMaxTexture3DHeightAlt, 
# 1895
cudaDevAttrMaxTexture3DDepthAlt, 
# 1896
cudaDevAttrPciDomainId, 
# 1897
cudaDevAttrTexturePitchAlignment, 
# 1898
cudaDevAttrMaxTextureCubemapWidth, 
# 1899
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1900
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1901
cudaDevAttrMaxSurface1DWidth, 
# 1902
cudaDevAttrMaxSurface2DWidth, 
# 1903
cudaDevAttrMaxSurface2DHeight, 
# 1904
cudaDevAttrMaxSurface3DWidth, 
# 1905
cudaDevAttrMaxSurface3DHeight, 
# 1906
cudaDevAttrMaxSurface3DDepth, 
# 1907
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1908
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1909
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1910
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1911
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1912
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1913
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1914
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1915
cudaDevAttrMaxTexture1DLinearWidth, 
# 1916
cudaDevAttrMaxTexture2DLinearWidth, 
# 1917
cudaDevAttrMaxTexture2DLinearHeight, 
# 1918
cudaDevAttrMaxTexture2DLinearPitch, 
# 1919
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1920
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1921
cudaDevAttrComputeCapabilityMajor, 
# 1922
cudaDevAttrComputeCapabilityMinor, 
# 1923
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1924
cudaDevAttrStreamPrioritiesSupported, 
# 1925
cudaDevAttrGlobalL1CacheSupported, 
# 1926
cudaDevAttrLocalL1CacheSupported, 
# 1927
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1928
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1929
cudaDevAttrManagedMemory, 
# 1930
cudaDevAttrIsMultiGpuBoard, 
# 1931
cudaDevAttrMultiGpuBoardGroupID, 
# 1932
cudaDevAttrHostNativeAtomicSupported, 
# 1933
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1934
cudaDevAttrPageableMemoryAccess, 
# 1935
cudaDevAttrConcurrentManagedAccess, 
# 1936
cudaDevAttrComputePreemptionSupported, 
# 1937
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1938
cudaDevAttrReserved92, 
# 1939
cudaDevAttrReserved93, 
# 1940
cudaDevAttrReserved94, 
# 1941
cudaDevAttrCooperativeLaunch, 
# 1942
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1943
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1944
cudaDevAttrCanFlushRemoteWrites, 
# 1945
cudaDevAttrHostRegisterSupported, 
# 1946
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1947
cudaDevAttrDirectManagedMemAccessFromHost, 
# 1948
cudaDevAttrMaxBlocksPerMultiprocessor = 106, 
# 1949
cudaDevAttrMaxPersistingL2CacheSize = 108, 
# 1950
cudaDevAttrMaxAccessPolicyWindowSize, 
# 1951
cudaDevAttrReservedSharedMemoryPerBlock = 111, 
# 1952
cudaDevAttrSparseCudaArraySupported, 
# 1953
cudaDevAttrHostRegisterReadOnlySupported, 
# 1954
cudaDevAttrTimelineSemaphoreInteropSupported, 
# 1955
cudaDevAttrMaxTimelineSemaphoreInteropSupported = 114, 
# 1956
cudaDevAttrMemoryPoolsSupported, 
# 1957
cudaDevAttrGPUDirectRDMASupported, 
# 1958
cudaDevAttrGPUDirectRDMAFlushWritesOptions, 
# 1959
cudaDevAttrGPUDirectRDMAWritesOrdering, 
# 1960
cudaDevAttrMemoryPoolSupportedHandleTypes, 
# 1964
cudaDevAttrMax
# 1965
}; 
#endif
# 1970 "/usr/include/driver_types.h" 3
#if 0
# 1970
enum cudaMemPoolAttr { 
# 1980 "/usr/include/driver_types.h" 3
cudaMemPoolReuseFollowEventDependencies = 1, 
# 1987
cudaMemPoolReuseAllowOpportunistic, 
# 1995
cudaMemPoolReuseAllowInternalDependencies, 
# 2006 "/usr/include/driver_types.h" 3
cudaMemPoolAttrReleaseThreshold, 
# 2012
cudaMemPoolAttrReservedMemCurrent, 
# 2019
cudaMemPoolAttrReservedMemHigh, 
# 2025
cudaMemPoolAttrUsedMemCurrent, 
# 2032
cudaMemPoolAttrUsedMemHigh
# 2033
}; 
#endif
# 2038 "/usr/include/driver_types.h" 3
#if 0
# 2038
enum cudaMemLocationType { 
# 2039
cudaMemLocationTypeInvalid, 
# 2040
cudaMemLocationTypeDevice
# 2041
}; 
#endif
# 2048 "/usr/include/driver_types.h" 3
#if 0
# 2048
struct cudaMemLocation { 
# 2049
cudaMemLocationType type; 
# 2050
int id; 
# 2051
}; 
#endif
# 2056 "/usr/include/driver_types.h" 3
#if 0
# 2056
enum cudaMemAccessFlags { 
# 2057
cudaMemAccessFlagsProtNone, 
# 2058
cudaMemAccessFlagsProtRead, 
# 2059
cudaMemAccessFlagsProtReadWrite = 3
# 2060
}; 
#endif
# 2065 "/usr/include/driver_types.h" 3
#if 0
# 2065
struct cudaMemAccessDesc { 
# 2066
cudaMemLocation location; 
# 2067
cudaMemAccessFlags flags; 
# 2068
}; 
#endif
# 2073 "/usr/include/driver_types.h" 3
#if 0
# 2073
enum cudaMemAllocationType { 
# 2074
cudaMemAllocationTypeInvalid, 
# 2078
cudaMemAllocationTypePinned, 
# 2079
cudaMemAllocationTypeMax = 2147483647
# 2080
}; 
#endif
# 2085 "/usr/include/driver_types.h" 3
#if 0
# 2085
enum cudaMemAllocationHandleType { 
# 2086
cudaMemHandleTypeNone, 
# 2087
cudaMemHandleTypePosixFileDescriptor, 
# 2088
cudaMemHandleTypeWin32, 
# 2089
cudaMemHandleTypeWin32Kmt = 4
# 2090
}; 
#endif
# 2095 "/usr/include/driver_types.h" 3
#if 0
# 2095
struct cudaMemPoolProps { 
# 2096
cudaMemAllocationType allocType; 
# 2097
cudaMemAllocationHandleType handleTypes; 
# 2098
cudaMemLocation location; 
# 2105
void *win32SecurityAttributes; 
# 2106
unsigned char reserved[64]; 
# 2107
}; 
#endif
# 2112 "/usr/include/driver_types.h" 3
#if 0
# 2112
struct cudaMemPoolPtrExportData { 
# 2113
unsigned char reserved[64]; 
# 2114
}; 
#endif
# 2119 "/usr/include/driver_types.h" 3
#if 0
# 2119
struct cudaMemAllocNodeParams { 
# 2124
cudaMemPoolProps poolProps; 
# 2125
const cudaMemAccessDesc *accessDescs; 
# 2126
size_t accessDescCount; 
# 2127
size_t bytesize; 
# 2128
void *dptr; 
# 2129
}; 
#endif
# 2134 "/usr/include/driver_types.h" 3
#if 0
# 2134
enum cudaGraphMemAttributeType { 
# 2139
cudaGraphMemAttrUsedMemCurrent = 1, 
# 2146
cudaGraphMemAttrUsedMemHigh, 
# 2153
cudaGraphMemAttrReservedMemCurrent, 
# 2160
cudaGraphMemAttrReservedMemHigh
# 2161
}; 
#endif
# 2167 "/usr/include/driver_types.h" 3
#if 0
# 2167
enum cudaDeviceP2PAttr { 
# 2168
cudaDevP2PAttrPerformanceRank = 1, 
# 2169
cudaDevP2PAttrAccessSupported, 
# 2170
cudaDevP2PAttrNativeAtomicSupported, 
# 2171
cudaDevP2PAttrCudaArrayAccessSupported
# 2172
}; 
#endif
# 2179 "/usr/include/driver_types.h" 3
#if 0
# 2179
struct CUuuid_st { 
# 2180
char bytes[16]; 
# 2181
}; 
#endif
# 2182 "/usr/include/driver_types.h" 3
#if 0
typedef CUuuid_st 
# 2182
CUuuid; 
#endif
# 2184 "/usr/include/driver_types.h" 3
#if 0
typedef CUuuid_st 
# 2184
cudaUUID_t; 
#endif
# 2189 "/usr/include/driver_types.h" 3
#if 0
# 2189
struct cudaDeviceProp { 
# 2191
char name[256]; 
# 2192
cudaUUID_t uuid; 
# 2193
char luid[8]; 
# 2194
unsigned luidDeviceNodeMask; 
# 2195
size_t totalGlobalMem; 
# 2196
size_t sharedMemPerBlock; 
# 2197
int regsPerBlock; 
# 2198
int warpSize; 
# 2199
size_t memPitch; 
# 2200
int maxThreadsPerBlock; 
# 2201
int maxThreadsDim[3]; 
# 2202
int maxGridSize[3]; 
# 2203
int clockRate; 
# 2204
size_t totalConstMem; 
# 2205
int major; 
# 2206
int minor; 
# 2207
size_t textureAlignment; 
# 2208
size_t texturePitchAlignment; 
# 2209
int deviceOverlap; 
# 2210
int multiProcessorCount; 
# 2211
int kernelExecTimeoutEnabled; 
# 2212
int integrated; 
# 2213
int canMapHostMemory; 
# 2214
int computeMode; 
# 2215
int maxTexture1D; 
# 2216
int maxTexture1DMipmap; 
# 2217
int maxTexture1DLinear; 
# 2218
int maxTexture2D[2]; 
# 2219
int maxTexture2DMipmap[2]; 
# 2220
int maxTexture2DLinear[3]; 
# 2221
int maxTexture2DGather[2]; 
# 2222
int maxTexture3D[3]; 
# 2223
int maxTexture3DAlt[3]; 
# 2224
int maxTextureCubemap; 
# 2225
int maxTexture1DLayered[2]; 
# 2226
int maxTexture2DLayered[3]; 
# 2227
int maxTextureCubemapLayered[2]; 
# 2228
int maxSurface1D; 
# 2229
int maxSurface2D[2]; 
# 2230
int maxSurface3D[3]; 
# 2231
int maxSurface1DLayered[2]; 
# 2232
int maxSurface2DLayered[3]; 
# 2233
int maxSurfaceCubemap; 
# 2234
int maxSurfaceCubemapLayered[2]; 
# 2235
size_t surfaceAlignment; 
# 2236
int concurrentKernels; 
# 2237
int ECCEnabled; 
# 2238
int pciBusID; 
# 2239
int pciDeviceID; 
# 2240
int pciDomainID; 
# 2241
int tccDriver; 
# 2242
int asyncEngineCount; 
# 2243
int unifiedAddressing; 
# 2244
int memoryClockRate; 
# 2245
int memoryBusWidth; 
# 2246
int l2CacheSize; 
# 2247
int persistingL2CacheMaxSize; 
# 2248
int maxThreadsPerMultiProcessor; 
# 2249
int streamPrioritiesSupported; 
# 2250
int globalL1CacheSupported; 
# 2251
int localL1CacheSupported; 
# 2252
size_t sharedMemPerMultiprocessor; 
# 2253
int regsPerMultiprocessor; 
# 2254
int managedMemory; 
# 2255
int isMultiGpuBoard; 
# 2256
int multiGpuBoardGroupID; 
# 2257
int hostNativeAtomicSupported; 
# 2258
int singleToDoublePrecisionPerfRatio; 
# 2259
int pageableMemoryAccess; 
# 2260
int concurrentManagedAccess; 
# 2261
int computePreemptionSupported; 
# 2262
int canUseHostPointerForRegisteredMem; 
# 2263
int cooperativeLaunch; 
# 2264
int cooperativeMultiDeviceLaunch; 
# 2265
size_t sharedMemPerBlockOptin; 
# 2266
int pageableMemoryAccessUsesHostPageTables; 
# 2267
int directManagedMemAccessFromHost; 
# 2268
int maxBlocksPerMultiProcessor; 
# 2269
int accessPolicyMaxWindowSize; 
# 2270
size_t reservedSharedMemPerBlock; 
# 2274
}; 
#endif
# 2375 "/usr/include/driver_types.h" 3
#if 0
typedef 
# 2372
struct cudaIpcEventHandle_st { 
# 2374
char reserved[64]; 
# 2375
} cudaIpcEventHandle_t; 
#endif
# 2383 "/usr/include/driver_types.h" 3
#if 0
typedef 
# 2380
struct cudaIpcMemHandle_st { 
# 2382
char reserved[64]; 
# 2383
} cudaIpcMemHandle_t; 
#endif
# 2388 "/usr/include/driver_types.h" 3
#if 0
# 2388
enum cudaExternalMemoryHandleType { 
# 2392
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
# 2396
cudaExternalMemoryHandleTypeOpaqueWin32, 
# 2400
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
# 2404
cudaExternalMemoryHandleTypeD3D12Heap, 
# 2408
cudaExternalMemoryHandleTypeD3D12Resource, 
# 2412
cudaExternalMemoryHandleTypeD3D11Resource, 
# 2416
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
# 2420
cudaExternalMemoryHandleTypeNvSciBuf
# 2421
}; 
#endif
# 2463 "/usr/include/driver_types.h" 3
#if 0
# 2463
struct cudaExternalMemoryHandleDesc { 
# 2467
cudaExternalMemoryHandleType type; 
# 2468
union { 
# 2474
int fd; 
# 2490 "/usr/include/driver_types.h" 3
struct { 
# 2494
void *handle; 
# 2499
const void *name; 
# 2500
} win32; 
# 2505
const void *nvSciBufObject; 
# 2506
} handle; 
# 2510
unsigned long long size; 
# 2514
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2515
}; 
#endif
# 2520 "/usr/include/driver_types.h" 3
#if 0
# 2520
struct cudaExternalMemoryBufferDesc { 
# 2524
unsigned long long offset; 
# 2528
unsigned long long size; 
# 2532
unsigned flags; 
# 2533
}; 
#endif
# 2538 "/usr/include/driver_types.h" 3
#if 0
# 2538
struct cudaExternalMemoryMipmappedArrayDesc { 
# 2543
unsigned long long offset; 
# 2547
cudaChannelFormatDesc formatDesc; 
# 2551
cudaExtent extent; 
# 2556
unsigned flags; 
# 2560
unsigned numLevels; 
# 2561
}; 
#endif
# 2566 "/usr/include/driver_types.h" 3
#if 0
# 2566
enum cudaExternalSemaphoreHandleType { 
# 2570
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
# 2574
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
# 2578
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
# 2582
cudaExternalSemaphoreHandleTypeD3D12Fence, 
# 2586
cudaExternalSemaphoreHandleTypeD3D11Fence, 
# 2590
cudaExternalSemaphoreHandleTypeNvSciSync, 
# 2594
cudaExternalSemaphoreHandleTypeKeyedMutex, 
# 2598
cudaExternalSemaphoreHandleTypeKeyedMutexKmt, 
# 2602
cudaExternalSemaphoreHandleTypeTimelineSemaphoreFd, 
# 2606
cudaExternalSemaphoreHandleTypeTimelineSemaphoreWin32
# 2607
}; 
#endif
# 2612 "/usr/include/driver_types.h" 3
#if 0
# 2612
struct cudaExternalSemaphoreHandleDesc { 
# 2616
cudaExternalSemaphoreHandleType type; 
# 2617
union { 
# 2624
int fd; 
# 2640 "/usr/include/driver_types.h" 3
struct { 
# 2644
void *handle; 
# 2649
const void *name; 
# 2650
} win32; 
# 2654
const void *nvSciSyncObj; 
# 2655
} handle; 
# 2659
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2660
}; 
#endif
# 2665 "/usr/include/driver_types.h" 3
#if 0
# 2665
struct cudaExternalSemaphoreSignalParams_v1 { 
# 2666
struct { 
# 2670
struct { 
# 2674
unsigned long long value; 
# 2675
} fence; 
# 2676
union { 
# 2681
void *fence; 
# 2682
unsigned long long reserved; 
# 2683
} nvSciSync; 
# 2687
struct { 
# 2691
unsigned long long key; 
# 2692
} keyedMutex; 
# 2693
} params; 
# 2704 "/usr/include/driver_types.h" 3
unsigned flags; 
# 2705
}; 
#endif
# 2710 "/usr/include/driver_types.h" 3
#if 0
# 2710
struct cudaExternalSemaphoreWaitParams_v1 { 
# 2711
struct { 
# 2715
struct { 
# 2719
unsigned long long value; 
# 2720
} fence; 
# 2721
union { 
# 2726
void *fence; 
# 2727
unsigned long long reserved; 
# 2728
} nvSciSync; 
# 2732
struct { 
# 2736
unsigned long long key; 
# 2740
unsigned timeoutMs; 
# 2741
} keyedMutex; 
# 2742
} params; 
# 2753 "/usr/include/driver_types.h" 3
unsigned flags; 
# 2754
}; 
#endif
# 2759 "/usr/include/driver_types.h" 3
#if 0
# 2759
struct cudaExternalSemaphoreSignalParams { 
# 2760
struct { 
# 2764
struct { 
# 2768
unsigned long long value; 
# 2769
} fence; 
# 2770
union { 
# 2775
void *fence; 
# 2776
unsigned long long reserved; 
# 2777
} nvSciSync; 
# 2781
struct { 
# 2785
unsigned long long key; 
# 2786
} keyedMutex; 
# 2787
unsigned reserved[12]; 
# 2788
} params; 
# 2799 "/usr/include/driver_types.h" 3
unsigned flags; 
# 2800
unsigned reserved[16]; 
# 2801
}; 
#endif
# 2806 "/usr/include/driver_types.h" 3
#if 0
# 2806
struct cudaExternalSemaphoreWaitParams { 
# 2807
struct { 
# 2811
struct { 
# 2815
unsigned long long value; 
# 2816
} fence; 
# 2817
union { 
# 2822
void *fence; 
# 2823
unsigned long long reserved; 
# 2824
} nvSciSync; 
# 2828
struct { 
# 2832
unsigned long long key; 
# 2836
unsigned timeoutMs; 
# 2837
} keyedMutex; 
# 2838
unsigned reserved[10]; 
# 2839
} params; 
# 2850 "/usr/include/driver_types.h" 3
unsigned flags; 
# 2851
unsigned reserved[16]; 
# 2852
}; 
#endif
# 2864 "/usr/include/driver_types.h" 3
#if 0
typedef cudaError 
# 2864
cudaError_t; 
#endif
# 2869 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUstream_st *
# 2869
cudaStream_t; 
#endif
# 2874 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUevent_st *
# 2874
cudaEvent_t; 
#endif
# 2879 "/usr/include/driver_types.h" 3
#if 0
typedef cudaGraphicsResource *
# 2879
cudaGraphicsResource_t; 
#endif
# 2884 "/usr/include/driver_types.h" 3
#if 0
typedef cudaOutputMode 
# 2884
cudaOutputMode_t; 
#endif
# 2889 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUexternalMemory_st *
# 2889
cudaExternalMemory_t; 
#endif
# 2894 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUexternalSemaphore_st *
# 2894
cudaExternalSemaphore_t; 
#endif
# 2899 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUgraph_st *
# 2899
cudaGraph_t; 
#endif
# 2904 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUgraphNode_st *
# 2904
cudaGraphNode_t; 
#endif
# 2909 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUuserObject_st *
# 2909
cudaUserObject_t; 
#endif
# 2914 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUfunc_st *
# 2914
cudaFunction_t; 
#endif
# 2919 "/usr/include/driver_types.h" 3
#if 0
typedef struct CUmemPoolHandle_st *
# 2919
cudaMemPool_t; 
#endif
# 2924 "/usr/include/driver_types.h" 3
#if 0
# 2924
enum cudaCGScope { 
# 2925
cudaCGScopeInvalid, 
# 2926
cudaCGScopeGrid, 
# 2927
cudaCGScopeMultiGrid
# 2928
}; 
#endif
# 2933 "/usr/include/driver_types.h" 3
#if 0
# 2933
struct cudaLaunchParams { 
# 2935
void *func; 
# 2936
dim3 gridDim; 
# 2937
dim3 blockDim; 
# 2938
void **args; 
# 2939
size_t sharedMem; 
# 2940
cudaStream_t stream; 
# 2941
}; 
#endif
# 2946 "/usr/include/driver_types.h" 3
#if 0
# 2946
struct cudaKernelNodeParams { 
# 2947
void *func; 
# 2948
dim3 gridDim; 
# 2949
dim3 blockDim; 
# 2950
unsigned sharedMemBytes; 
# 2951
void **kernelParams; 
# 2952
void **extra; 
# 2953
}; 
#endif
# 2958 "/usr/include/driver_types.h" 3
#if 0
# 2958
struct cudaExternalSemaphoreSignalNodeParams { 
# 2959
cudaExternalSemaphore_t *extSemArray; 
# 2960
const cudaExternalSemaphoreSignalParams *paramsArray; 
# 2961
unsigned numExtSems; 
# 2962
}; 
#endif
# 2967 "/usr/include/driver_types.h" 3
#if 0
# 2967
struct cudaExternalSemaphoreWaitNodeParams { 
# 2968
cudaExternalSemaphore_t *extSemArray; 
# 2969
const cudaExternalSemaphoreWaitParams *paramsArray; 
# 2970
unsigned numExtSems; 
# 2971
}; 
#endif
# 2976 "/usr/include/driver_types.h" 3
#if 0
# 2976
enum cudaGraphNodeType { 
# 2977
cudaGraphNodeTypeKernel, 
# 2978
cudaGraphNodeTypeMemcpy, 
# 2979
cudaGraphNodeTypeMemset, 
# 2980
cudaGraphNodeTypeHost, 
# 2981
cudaGraphNodeTypeGraph, 
# 2982
cudaGraphNodeTypeEmpty, 
# 2983
cudaGraphNodeTypeWaitEvent, 
# 2984
cudaGraphNodeTypeEventRecord, 
# 2985
cudaGraphNodeTypeExtSemaphoreSignal, 
# 2986
cudaGraphNodeTypeExtSemaphoreWait, 
# 2987
cudaGraphNodeTypeMemAlloc, 
# 2988
cudaGraphNodeTypeMemFree, 
# 2989
cudaGraphNodeTypeCount
# 2990
}; 
#endif
# 2995 "/usr/include/driver_types.h" 3
typedef struct CUgraphExec_st *cudaGraphExec_t; 
# 3000
#if 0
# 3000
enum cudaGraphExecUpdateResult { 
# 3001
cudaGraphExecUpdateSuccess, 
# 3002
cudaGraphExecUpdateError, 
# 3003
cudaGraphExecUpdateErrorTopologyChanged, 
# 3004
cudaGraphExecUpdateErrorNodeTypeChanged, 
# 3005
cudaGraphExecUpdateErrorFunctionChanged, 
# 3006
cudaGraphExecUpdateErrorParametersChanged, 
# 3007
cudaGraphExecUpdateErrorNotSupported, 
# 3008
cudaGraphExecUpdateErrorUnsupportedFunctionChange
# 3009
}; 
#endif
# 3015 "/usr/include/driver_types.h" 3
#if 0
# 3015
enum cudaGetDriverEntryPointFlags { 
# 3016
cudaEnableDefault, 
# 3017
cudaEnableLegacyStream, 
# 3018
cudaEnablePerThreadDefaultStream
# 3019
}; 
#endif
# 3024 "/usr/include/driver_types.h" 3
#if 0
# 3024
enum cudaGraphDebugDotFlags { 
# 3025
cudaGraphDebugDotFlagsVerbose = (1 << 0), 
# 3026
cudaGraphDebugDotFlagsKernelNodeParams = (1 << 2), 
# 3027
cudaGraphDebugDotFlagsMemcpyNodeParams = (1 << 3), 
# 3028
cudaGraphDebugDotFlagsMemsetNodeParams = (1 << 4), 
# 3029
cudaGraphDebugDotFlagsHostNodeParams = (1 << 5), 
# 3030
cudaGraphDebugDotFlagsEventNodeParams = (1 << 6), 
# 3031
cudaGraphDebugDotFlagsExtSemasSignalNodeParams = (1 << 7), 
# 3032
cudaGraphDebugDotFlagsExtSemasWaitNodeParams = (1 << 8), 
# 3033
cudaGraphDebugDotFlagsKernelNodeAttributes = (1 << 9), 
# 3034
cudaGraphDebugDotFlagsHandles = (1 << 10)
# 3035
}; 
#endif
# 3040 "/usr/include/driver_types.h" 3
#if 0
# 3040
enum cudaGraphInstantiateFlags { 
# 3041
cudaGraphInstantiateFlagAutoFreeOnLaunch = 1
# 3042
}; 
#endif
# 84 "/usr/include/surface_types.h" 3
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/usr/include/surface_types.h" 3
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/usr/include/surface_types.h" 3
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/usr/include/surface_types.h" 3
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/usr/include/texture_types.h" 3
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/usr/include/texture_types.h" 3
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/usr/include/texture_types.h" 3
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/usr/include/texture_types.h" 3
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 138
unsigned maxAnisotropy; 
# 142
cudaTextureFilterMode mipmapFilterMode; 
# 146
float mipmapLevelBias; 
# 150
float minMipmapLevelClamp; 
# 154
float maxMipmapLevelClamp; 
# 158
int disableTrilinearOptimization; 
# 159
int __cudaReserved[14]; 
# 160
}; 
#endif
# 165 "/usr/include/texture_types.h" 3
#if 0
# 165
struct cudaTextureDesc { 
# 170
cudaTextureAddressMode addressMode[3]; 
# 174
cudaTextureFilterMode filterMode; 
# 178
cudaTextureReadMode readMode; 
# 182
int sRGB; 
# 186
float borderColor[4]; 
# 190
int normalizedCoords; 
# 194
unsigned maxAnisotropy; 
# 198
cudaTextureFilterMode mipmapFilterMode; 
# 202
float mipmapLevelBias; 
# 206
float minMipmapLevelClamp; 
# 210
float maxMipmapLevelClamp; 
# 214
int disableTrilinearOptimization; 
# 215
}; 
#endif
# 220 "/usr/include/texture_types.h" 3
#if 0
typedef unsigned long long 
# 220
cudaTextureObject_t; 
#endif
# 84 "/usr/include/library_types.h" 3
typedef 
# 54
enum cudaDataType_t { 
# 56
CUDA_R_16F = 2, 
# 57
CUDA_C_16F = 6, 
# 58
CUDA_R_16BF = 14, 
# 59
CUDA_C_16BF, 
# 60
CUDA_R_32F = 0, 
# 61
CUDA_C_32F = 4, 
# 62
CUDA_R_64F = 1, 
# 63
CUDA_C_64F = 5, 
# 64
CUDA_R_4I = 16, 
# 65
CUDA_C_4I, 
# 66
CUDA_R_4U, 
# 67
CUDA_C_4U, 
# 68
CUDA_R_8I = 3, 
# 69
CUDA_C_8I = 7, 
# 70
CUDA_R_8U, 
# 71
CUDA_C_8U, 
# 72
CUDA_R_16I = 20, 
# 73
CUDA_C_16I, 
# 74
CUDA_R_16U, 
# 75
CUDA_C_16U, 
# 76
CUDA_R_32I = 10, 
# 77
CUDA_C_32I, 
# 78
CUDA_R_32U, 
# 79
CUDA_C_32U, 
# 80
CUDA_R_64I = 24, 
# 81
CUDA_C_64I, 
# 82
CUDA_R_64U, 
# 83
CUDA_C_64U
# 84
} cudaDataType; 
# 92
typedef 
# 87
enum libraryPropertyType_t { 
# 89
MAJOR_VERSION, 
# 90
MINOR_VERSION, 
# 91
PATCH_LEVEL
# 92
} libraryPropertyType; 
# 115 "/usr/include/cuda_device_runtime_api.h" 3
extern "C" {
# 117
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 118
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 119
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 120
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 121
extern cudaError_t cudaDeviceSynchronize(); 
# 122
extern cudaError_t cudaGetLastError(); 
# 123
extern cudaError_t cudaPeekAtLastError(); 
# 124
extern const char *cudaGetErrorString(cudaError_t error); 
# 125
extern const char *cudaGetErrorName(cudaError_t error); 
# 126
extern cudaError_t cudaGetDeviceCount(int * count); 
# 127
extern cudaError_t cudaGetDevice(int * device); 
# 128
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 129
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 130
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 131
__attribute__((unused)) extern cudaError_t cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 132
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 133
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
# 134
__attribute__((unused)) extern cudaError_t cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 135
extern cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 136
__attribute__((unused)) extern cudaError_t cudaEventRecordWithFlags_ptsz(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 137
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 138
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 139
extern cudaError_t cudaFree(void * devPtr); 
# 140
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 141
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 142
__attribute__((unused)) extern cudaError_t cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 143
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 144
__attribute__((unused)) extern cudaError_t cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 145
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 146
__attribute__((unused)) extern cudaError_t cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 147
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 148
__attribute__((unused)) extern cudaError_t cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 149
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 150
__attribute__((unused)) extern cudaError_t cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 151
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 152
__attribute__((unused)) extern cudaError_t cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 153
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 174 "/usr/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 202 "/usr/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 203
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 204
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 222 "/usr/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern cudaError_t cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 223
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 226
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 227
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 229
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 230
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 231
__attribute__((unused)) extern cudaError_t cudaCGSynchronizeGrid(unsigned long long handle, unsigned flags); 
# 232
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 233
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 234
}
# 236
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 237
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 238
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 239
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 266 "/usr/include/cuda_runtime_api.h" 3
extern "C" {
# 306 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceReset(); 
# 327 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSynchronize(); 
# 414 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 449 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 472 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetTexture1DLinearMaxWidth(size_t * maxWidthInElements, const cudaChannelFormatDesc * fmtDesc, int device); 
# 506 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 543 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 587 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 618 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 662 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 689 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 719 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 767 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 808 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 851 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 915 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 951 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 983 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceFlushGPUDirectRDMAWrites(cudaFlushGPUDirectRDMAWritesTarget target, cudaFlushGPUDirectRDMAWritesScope scope); 
# 1027 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadExit(); 
# 1053 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSynchronize(); 
# 1102 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 1135 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1171 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1218 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1281 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetLastError(); 
# 1329 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaPeekAtLastError(); 
# 1345 "/usr/include/cuda_runtime_api.h" 3
extern const char *cudaGetErrorName(cudaError_t error); 
# 1361 "/usr/include/cuda_runtime_api.h" 3
extern const char *cudaGetErrorString(cudaError_t error); 
# 1389 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1667 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1868 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1886 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetDefaultMemPool(cudaMemPool_t * memPool, int device); 
# 1910 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetMemPool(int device, cudaMemPool_t memPool); 
# 1930 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetMemPool(cudaMemPool_t * memPool, int device); 
# 1978 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
# 2018 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 2039 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 2080 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetDevice(int device); 
# 2101 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDevice(int * device); 
# 2132 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 2197 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 2241 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 2281 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 2313 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2359 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2386 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2411 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2426 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCtxResetPersistingL2Cache(); 
# 2446 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src); 
# 2467 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetAttribute(cudaStream_t hStream, cudaStreamAttrID attr, cudaStreamAttrValue * value_out); 
# 2491 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamSetAttribute(cudaStream_t hStream, cudaStreamAttrID attr, const cudaStreamAttrValue * value); 
# 2525 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2556 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags = 0); 
# 2564
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2631 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2655 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2680 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2764 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2803 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
# 2854 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
# 2882 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
# 2920 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
# 2952 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned long long * pId); 
# 3007 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetCaptureInfo_v2(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned long long * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, size_t * numDependencies_out = 0); 
# 3040 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t * dependencies, size_t numDependencies, unsigned flags = 0); 
# 3077 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 3114 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 3154 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 3201 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream = 0, unsigned flags = 0); 
# 3233 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 3263 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 3292 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 3335 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 3515 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
# 3570 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
# 3630 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
# 3654 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
# 3807 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
# 3874 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSignalExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3950 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaWaitExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3973 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
# 4040 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4097 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4198 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 4245 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 4300 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 4333 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 4370 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 4396 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 4420 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForHost(double * d); 
# 4488 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
# 4545 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 4574 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyAvailableDynamicSMemPerBlock(size_t * dynamicSmemSize, const void * func, int numBlocks, int blockSize); 
# 4619 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 4740 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 4773 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 4806 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 4849 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 4898 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 4927 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFree(void * devPtr); 
# 4950 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeHost(void * ptr); 
# 4973 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 4996 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 5062 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 5155 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 5178 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostUnregister(void * ptr); 
# 5223 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 5245 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 5284 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 5426 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 5568 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 5601 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 5706 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 5737 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 5855 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 5881 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 5904 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 5930 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 5959 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaArrayGetPlane(cudaArray_t * pPlaneArray, cudaArray_t hArray, unsigned planeIdx); 
# 5987 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaArray_t array); 
# 6017 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMipmappedArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaMipmappedArray_t mipmap); 
# 6062 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 6097 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 6146 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6196 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6246 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 6293 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 6336 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 6379 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 6436 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6471 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 6534 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6592 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6649 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6700 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6751 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6780 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 6814 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 6860 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 6896 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 6937 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 6990 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 7018 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 7045 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 7115 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 7231 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 7290 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 7329 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 7389 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 7431 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 7474 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 7525 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7575 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7644 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocAsync(void ** devPtr, size_t size, cudaStream_t hStream); 
# 7670 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeAsync(void * devPtr, cudaStream_t hStream); 
# 7695 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep); 
# 7733 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolSetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 7771 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolGetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 7786 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolSetAccess(cudaMemPool_t memPool, const cudaMemAccessDesc * descList, size_t count); 
# 7799 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolGetAccess(cudaMemAccessFlags * flags, cudaMemPool_t memPool, cudaMemLocation * location); 
# 7819 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolCreate(cudaMemPool_t * memPool, const cudaMemPoolProps * poolProps); 
# 7841 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolDestroy(cudaMemPool_t memPool); 
# 7877 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocFromPoolAsync(void ** ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream); 
# 7902 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolExportToShareableHandle(void * shareableHandle, cudaMemPool_t memPool, cudaMemAllocationHandleType handleType, unsigned flags); 
# 7929 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolImportFromShareableHandle(cudaMemPool_t * memPool, void * shareableHandle, cudaMemAllocationHandleType handleType, unsigned flags); 
# 7952 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolExportPointer(cudaMemPoolPtrExportData * exportData, void * ptr); 
# 7981 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPoolImportPointer(void ** ptr, cudaMemPool_t memPool, cudaMemPoolPtrExportData * exportData); 
# 8133 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 8174 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 8216 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 8238 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 8302 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 8337 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 8376 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 8411 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 8443 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 8481 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 8510 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 8581 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 8640 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 8678 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 8718 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 8744 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 8773 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 8803 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 8848 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 8873 "/usr/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 8908 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 8938 "/usr/include/cuda_runtime_api.h" 3
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 9156 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 9176 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 9196 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 9216 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 9237 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 9282 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 9302 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 9321 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 9355 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 9380 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 9427 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
# 9524 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
# 9557 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
# 9582 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 9602 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst); 
# 9625 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode, cudaKernelNodeAttrID attr, cudaKernelNodeAttrValue * value_out); 
# 9649 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode, cudaKernelNodeAttrID attr, const cudaKernelNodeAttrValue * value); 
# 9699 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
# 9758 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 9827 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 9895 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemcpyNode1D(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 9927 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
# 9953 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 9992 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10038 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10084 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10131 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
# 10154 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
# 10177 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 10218 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
# 10241 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
# 10264 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 10304 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
# 10331 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
# 10368 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
# 10411 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddEventRecordNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 10438 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 10465 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 10511 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddEventWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 10538 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 10565 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 10614 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 10647 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreSignalNodeParams * params_out); 
# 10674 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 10723 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 10756 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreWaitNodeParams * params_out); 
# 10783 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 10860 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemAllocNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaMemAllocNodeParams * nodeParams); 
# 10887 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, cudaMemAllocNodeParams * params_out); 
# 10947 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemFreeNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dptr); 
# 10971 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void * dptr_out); 
# 10999 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGraphMemTrim(int device); 
# 11036 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11070 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11098 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
# 11126 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
# 11157 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
# 11188 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
# 11219 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
# 11253 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
# 11284 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
# 11316 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
# 11347 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11378 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11408 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node); 
# 11446 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
# 11489 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphInstantiateWithFlags(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned long long flags); 
# 11533 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 11583 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 11638 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 11701 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 11762 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 11816 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 11855 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 11901 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, cudaGraph_t childGraph); 
# 11945 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 11989 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12036 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 12083 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 12158 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t * hErrorNode_out, cudaGraphExecUpdateResult * updateResult_out); 
# 12183 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 12214 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 12237 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
# 12258 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDestroy(cudaGraph_t graph); 
# 12277 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDebugDotPrint(cudaGraph_t graph, const char * path, unsigned flags); 
# 12313 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaUserObjectCreate(cudaUserObject_t * object_out, void * ptr, cudaHostFn_t destroy, unsigned initialRefcount, unsigned flags); 
# 12337 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaUserObjectRetain(cudaUserObject_t object, unsigned count = 1); 
# 12365 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaUserObjectRelease(cudaUserObject_t object, unsigned count = 1); 
# 12393 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1, unsigned flags = 0); 
# 12418 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1); 
# 12484 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDriverEntryPoint(const char * symbol, void ** funcPtr, unsigned long long flags); 
# 12489
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 12665 "/usr/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetFuncBySymbol(cudaFunction_t * functionPtr, const void * symbolPtr); 
# 12807 "/usr/include/cuda_runtime_api.h" 3
}
# 124 "/usr/include/channel_descriptor.h" 3
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 125
{ 
# 126
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 127
} 
# 129
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 130
{ 
# 131
int e = (((int)sizeof(unsigned short)) * 8); 
# 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 134
} 
# 136
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 137
{ 
# 138
int e = (((int)sizeof(unsigned short)) * 8); 
# 140
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 141
} 
# 143
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 144
{ 
# 145
int e = (((int)sizeof(unsigned short)) * 8); 
# 147
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 148
} 
# 150
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 151
{ 
# 152
int e = (((int)sizeof(unsigned short)) * 8); 
# 154
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 155
} 
# 157
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 158
{ 
# 159
int e = (((int)sizeof(char)) * 8); 
# 164
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 166
} 
# 168
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 169
{ 
# 170
int e = (((int)sizeof(signed char)) * 8); 
# 172
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 173
} 
# 175
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 176
{ 
# 177
int e = (((int)sizeof(unsigned char)) * 8); 
# 179
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 180
} 
# 182
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 183
{ 
# 184
int e = (((int)sizeof(signed char)) * 8); 
# 186
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 187
} 
# 189
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 190
{ 
# 191
int e = (((int)sizeof(unsigned char)) * 8); 
# 193
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 194
} 
# 196
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 197
{ 
# 198
int e = (((int)sizeof(signed char)) * 8); 
# 200
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 201
} 
# 203
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 204
{ 
# 205
int e = (((int)sizeof(unsigned char)) * 8); 
# 207
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 208
} 
# 210
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 211
{ 
# 212
int e = (((int)sizeof(signed char)) * 8); 
# 214
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 215
} 
# 217
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 218
{ 
# 219
int e = (((int)sizeof(unsigned char)) * 8); 
# 221
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 222
} 
# 224
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 225
{ 
# 226
int e = (((int)sizeof(short)) * 8); 
# 228
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 229
} 
# 231
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 232
{ 
# 233
int e = (((int)sizeof(unsigned short)) * 8); 
# 235
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 236
} 
# 238
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 239
{ 
# 240
int e = (((int)sizeof(short)) * 8); 
# 242
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 243
} 
# 245
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 246
{ 
# 247
int e = (((int)sizeof(unsigned short)) * 8); 
# 249
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 250
} 
# 252
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 253
{ 
# 254
int e = (((int)sizeof(short)) * 8); 
# 256
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 257
} 
# 259
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 260
{ 
# 261
int e = (((int)sizeof(unsigned short)) * 8); 
# 263
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 264
} 
# 266
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 267
{ 
# 268
int e = (((int)sizeof(short)) * 8); 
# 270
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 271
} 
# 273
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 274
{ 
# 275
int e = (((int)sizeof(unsigned short)) * 8); 
# 277
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 278
} 
# 280
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 281
{ 
# 282
int e = (((int)sizeof(int)) * 8); 
# 284
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 285
} 
# 287
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 288
{ 
# 289
int e = (((int)sizeof(unsigned)) * 8); 
# 291
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 292
} 
# 294
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 295
{ 
# 296
int e = (((int)sizeof(int)) * 8); 
# 298
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 299
} 
# 301
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 302
{ 
# 303
int e = (((int)sizeof(unsigned)) * 8); 
# 305
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 306
} 
# 308
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 309
{ 
# 310
int e = (((int)sizeof(int)) * 8); 
# 312
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 313
} 
# 315
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 316
{ 
# 317
int e = (((int)sizeof(unsigned)) * 8); 
# 319
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 320
} 
# 322
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 323
{ 
# 324
int e = (((int)sizeof(int)) * 8); 
# 326
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 327
} 
# 329
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 330
{ 
# 331
int e = (((int)sizeof(unsigned)) * 8); 
# 333
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 334
} 
# 396 "/usr/include/channel_descriptor.h" 3
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 397
{ 
# 398
int e = (((int)sizeof(float)) * 8); 
# 400
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 401
} 
# 403
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 404
{ 
# 405
int e = (((int)sizeof(float)) * 8); 
# 407
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 408
} 
# 410
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 411
{ 
# 412
int e = (((int)sizeof(float)) * 8); 
# 414
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 415
} 
# 417
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 418
{ 
# 419
int e = (((int)sizeof(float)) * 8); 
# 421
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 422
} 
# 424
static inline cudaChannelFormatDesc cudaCreateChannelDescNV12() 
# 425
{ 
# 426
int e = (((int)sizeof(char)) * 8); 
# 428
return cudaCreateChannelDesc(e, e, e, 0, cudaChannelFormatKindNV12); 
# 429
} 
# 431
template< cudaChannelFormatKind > inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 432
{ 
# 433
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 434
} 
# 437
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X1> () 
# 438
{ 
# 439
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedNormalized8X1); 
# 440
} 
# 442
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X2> () 
# 443
{ 
# 444
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedNormalized8X2); 
# 445
} 
# 447
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X4> () 
# 448
{ 
# 449
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindSignedNormalized8X4); 
# 450
} 
# 453
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X1> () 
# 454
{ 
# 455
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized8X1); 
# 456
} 
# 458
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X2> () 
# 459
{ 
# 460
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedNormalized8X2); 
# 461
} 
# 463
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X4> () 
# 464
{ 
# 465
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedNormalized8X4); 
# 466
} 
# 469
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X1> () 
# 470
{ 
# 471
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindSignedNormalized16X1); 
# 472
} 
# 474
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X2> () 
# 475
{ 
# 476
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindSignedNormalized16X2); 
# 477
} 
# 479
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X4> () 
# 480
{ 
# 481
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindSignedNormalized16X4); 
# 482
} 
# 485
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X1> () 
# 486
{ 
# 487
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized16X1); 
# 488
} 
# 490
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X2> () 
# 491
{ 
# 492
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindUnsignedNormalized16X2); 
# 493
} 
# 495
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X4> () 
# 496
{ 
# 497
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindUnsignedNormalized16X4); 
# 498
} 
# 501
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindNV12> () 
# 502
{ 
# 503
return cudaCreateChannelDesc(8, 8, 8, 0, cudaChannelFormatKindNV12); 
# 504
} 
# 507
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1> () 
# 508
{ 
# 509
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1); 
# 510
} 
# 513
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1SRGB> () 
# 514
{ 
# 515
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1SRGB); 
# 516
} 
# 519
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2> () 
# 520
{ 
# 521
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2); 
# 522
} 
# 525
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2SRGB> () 
# 526
{ 
# 527
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2SRGB); 
# 528
} 
# 531
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3> () 
# 532
{ 
# 533
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3); 
# 534
} 
# 537
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3SRGB> () 
# 538
{ 
# 539
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3SRGB); 
# 540
} 
# 543
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed4> () 
# 544
{ 
# 545
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed4); 
# 546
} 
# 549
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed4> () 
# 550
{ 
# 551
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedBlockCompressed4); 
# 552
} 
# 555
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed5> () 
# 556
{ 
# 557
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed5); 
# 558
} 
# 561
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed5> () 
# 562
{ 
# 563
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedBlockCompressed5); 
# 564
} 
# 567
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed6H> () 
# 568
{ 
# 569
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindUnsignedBlockCompressed6H); 
# 570
} 
# 573
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed6H> () 
# 574
{ 
# 575
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindSignedBlockCompressed6H); 
# 576
} 
# 579
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7> () 
# 580
{ 
# 581
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7); 
# 582
} 
# 585
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7SRGB> () 
# 586
{ 
# 587
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7SRGB); 
# 588
} 
# 79 "/usr/include/driver_functions.h" 3
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/usr/include/driver_functions.h" 3
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/usr/include/driver_functions.h" 3
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 73 "/usr/include/vector_functions.h" 3
static inline char1 make_char1(signed char x); 
# 75
static inline uchar1 make_uchar1(unsigned char x); 
# 77
static inline char2 make_char2(signed char x, signed char y); 
# 79
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 81
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 83
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 85
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 87
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 89
static inline short1 make_short1(short x); 
# 91
static inline ushort1 make_ushort1(unsigned short x); 
# 93
static inline short2 make_short2(short x, short y); 
# 95
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 97
static inline short3 make_short3(short x, short y, short z); 
# 99
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 101
static inline short4 make_short4(short x, short y, short z, short w); 
# 103
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 105
static inline int1 make_int1(int x); 
# 107
static inline uint1 make_uint1(unsigned x); 
# 109
static inline int2 make_int2(int x, int y); 
# 111
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 113
static inline int3 make_int3(int x, int y, int z); 
# 115
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 117
static inline int4 make_int4(int x, int y, int z, int w); 
# 119
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 121
static inline long1 make_long1(long x); 
# 123
static inline ulong1 make_ulong1(unsigned long x); 
# 125
static inline long2 make_long2(long x, long y); 
# 127
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 129
static inline long3 make_long3(long x, long y, long z); 
# 131
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 133
static inline long4 make_long4(long x, long y, long z, long w); 
# 135
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 137
static inline float1 make_float1(float x); 
# 139
static inline float2 make_float2(float x, float y); 
# 141
static inline float3 make_float3(float x, float y, float z); 
# 143
static inline float4 make_float4(float x, float y, float z, float w); 
# 145
static inline longlong1 make_longlong1(long long x); 
# 147
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 149
static inline longlong2 make_longlong2(long long x, long long y); 
# 151
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 153
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 155
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 157
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 159
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 161
static inline double1 make_double1(double x); 
# 163
static inline double2 make_double2(double x, double y); 
# 165
static inline double3 make_double3(double x, double y, double z); 
# 167
static inline double4 make_double4(double x, double y, double z, double w); 
# 73 "/usr/include/vector_functions.hpp" 3
static inline char1 make_char1(signed char x) 
# 74
{ 
# 75
char1 t; (t.x) = x; return t; 
# 76
} 
# 78
static inline uchar1 make_uchar1(unsigned char x) 
# 79
{ 
# 80
uchar1 t; (t.x) = x; return t; 
# 81
} 
# 83
static inline char2 make_char2(signed char x, signed char y) 
# 84
{ 
# 85
char2 t; (t.x) = x; (t.y) = y; return t; 
# 86
} 
# 88
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 89
{ 
# 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 91
} 
# 93
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 94
{ 
# 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 96
} 
# 98
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 99
{ 
# 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 101
} 
# 103
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 104
{ 
# 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 106
} 
# 108
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 109
{ 
# 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 111
} 
# 113
static inline short1 make_short1(short x) 
# 114
{ 
# 115
short1 t; (t.x) = x; return t; 
# 116
} 
# 118
static inline ushort1 make_ushort1(unsigned short x) 
# 119
{ 
# 120
ushort1 t; (t.x) = x; return t; 
# 121
} 
# 123
static inline short2 make_short2(short x, short y) 
# 124
{ 
# 125
short2 t; (t.x) = x; (t.y) = y; return t; 
# 126
} 
# 128
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 129
{ 
# 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 131
} 
# 133
static inline short3 make_short3(short x, short y, short z) 
# 134
{ 
# 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 136
} 
# 138
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 139
{ 
# 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 141
} 
# 143
static inline short4 make_short4(short x, short y, short z, short w) 
# 144
{ 
# 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 146
} 
# 148
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 149
{ 
# 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 151
} 
# 153
static inline int1 make_int1(int x) 
# 154
{ 
# 155
int1 t; (t.x) = x; return t; 
# 156
} 
# 158
static inline uint1 make_uint1(unsigned x) 
# 159
{ 
# 160
uint1 t; (t.x) = x; return t; 
# 161
} 
# 163
static inline int2 make_int2(int x, int y) 
# 164
{ 
# 165
int2 t; (t.x) = x; (t.y) = y; return t; 
# 166
} 
# 168
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 169
{ 
# 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 171
} 
# 173
static inline int3 make_int3(int x, int y, int z) 
# 174
{ 
# 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 176
} 
# 178
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 179
{ 
# 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 181
} 
# 183
static inline int4 make_int4(int x, int y, int z, int w) 
# 184
{ 
# 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 186
} 
# 188
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 189
{ 
# 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 191
} 
# 193
static inline long1 make_long1(long x) 
# 194
{ 
# 195
long1 t; (t.x) = x; return t; 
# 196
} 
# 198
static inline ulong1 make_ulong1(unsigned long x) 
# 199
{ 
# 200
ulong1 t; (t.x) = x; return t; 
# 201
} 
# 203
static inline long2 make_long2(long x, long y) 
# 204
{ 
# 205
long2 t; (t.x) = x; (t.y) = y; return t; 
# 206
} 
# 208
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 209
{ 
# 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 211
} 
# 213
static inline long3 make_long3(long x, long y, long z) 
# 214
{ 
# 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 216
} 
# 218
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 219
{ 
# 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 221
} 
# 223
static inline long4 make_long4(long x, long y, long z, long w) 
# 224
{ 
# 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 226
} 
# 228
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 229
{ 
# 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 231
} 
# 233
static inline float1 make_float1(float x) 
# 234
{ 
# 235
float1 t; (t.x) = x; return t; 
# 236
} 
# 238
static inline float2 make_float2(float x, float y) 
# 239
{ 
# 240
float2 t; (t.x) = x; (t.y) = y; return t; 
# 241
} 
# 243
static inline float3 make_float3(float x, float y, float z) 
# 244
{ 
# 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 246
} 
# 248
static inline float4 make_float4(float x, float y, float z, float w) 
# 249
{ 
# 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 251
} 
# 253
static inline longlong1 make_longlong1(long long x) 
# 254
{ 
# 255
longlong1 t; (t.x) = x; return t; 
# 256
} 
# 258
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 259
{ 
# 260
ulonglong1 t; (t.x) = x; return t; 
# 261
} 
# 263
static inline longlong2 make_longlong2(long long x, long long y) 
# 264
{ 
# 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 266
} 
# 268
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 269
{ 
# 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 271
} 
# 273
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 274
{ 
# 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 276
} 
# 278
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 279
{ 
# 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 281
} 
# 283
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 284
{ 
# 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 286
} 
# 288
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 289
{ 
# 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 291
} 
# 293
static inline double1 make_double1(double x) 
# 294
{ 
# 295
double1 t; (t.x) = x; return t; 
# 296
} 
# 298
static inline double2 make_double2(double x, double y) 
# 299
{ 
# 300
double2 t; (t.x) = x; (t.y) = y; return t; 
# 301
} 
# 303
static inline double3 make_double3(double x, double y, double z) 
# 304
{ 
# 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 306
} 
# 308
static inline double4 make_double4(double x, double y, double z, double w) 
# 309
{ 
# 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 311
} 
# 28 "/usr/include/string.h" 3
extern "C" {
# 43 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) noexcept(true)
# 44
 __attribute((__nonnull__(1, 2))); 
# 47
extern void *memmove(void * __dest, const void * __src, size_t __n) noexcept(true)
# 48
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) noexcept(true)
# 56
 __attribute((__nonnull__(1, 2))) __attribute((__access__(__write_only__ , 1 , 4 ))); 
# 61
extern void *memset(void * __s, int __c, size_t __n) noexcept(true) __attribute((__nonnull__(1))); 
# 64
extern int memcmp(const void * __s1, const void * __s2, size_t __n) noexcept(true)
# 65
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 80 "/usr/include/string.h" 3
extern int __memcmpeq(const void * __s1, const void * __s2, size_t __n) noexcept(true)
# 81
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 85
extern "C++" {
# 87
extern void *memchr(void * __s, int __c, size_t __n) noexcept(true) __asm__("memchr")
# 88
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 89
extern const void *memchr(const void * __s, int __c, size_t __n) noexcept(true) __asm__("memchr")
# 90
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 105 "/usr/include/string.h" 3
}
# 115 "/usr/include/string.h" 3
extern "C++" void *rawmemchr(void * __s, int __c) noexcept(true) __asm__("rawmemchr")
# 116
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 117
extern "C++" const void *rawmemchr(const void * __s, int __c) noexcept(true) __asm__("rawmemchr")
# 118
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 126
extern "C++" void *memrchr(void * __s, int __c, size_t __n) noexcept(true) __asm__("memrchr")
# 127
 __attribute((__pure__)) __attribute((__nonnull__(1)))
# 128
 __attribute((__access__(__read_only__ , 1 , 3 ))); 
# 129
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) noexcept(true) __asm__("memrchr")
# 130
 __attribute((__pure__)) __attribute((__nonnull__(1)))
# 131
 __attribute((__access__(__read_only__ , 1 , 3 ))); 
# 141 "/usr/include/string.h" 3
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) noexcept(true)
# 142
 __attribute((__nonnull__(1, 2))); 
# 144
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) noexcept(true)
# 146
 __attribute((__nonnull__(1, 2))); 
# 149
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) noexcept(true)
# 150
 __attribute((__nonnull__(1, 2))); 
# 152
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) noexcept(true)
# 153
 __attribute((__nonnull__(1, 2))); 
# 156
extern int strcmp(const char * __s1, const char * __s2) noexcept(true)
# 157
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 159
extern int strncmp(const char * __s1, const char * __s2, size_t __n) noexcept(true)
# 160
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 163
extern int strcoll(const char * __s1, const char * __s2) noexcept(true)
# 164
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 166
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) noexcept(true)
# 168
 __attribute((__nonnull__(2))) __attribute((__access__(__write_only__ , 1 , 3 ))); 
# 27 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
}; 
# 41
typedef __locale_struct *__locale_t; 
# 24 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3
typedef __locale_t locale_t; 
# 175 "/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, locale_t __l) noexcept(true)
# 176
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 179
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, locale_t __l) noexcept(true)
# 180
 __attribute((__nonnull__(2, 4)))
# 181
 __attribute((__access__(__write_only__ , 1 , 3 ))); 
# 187
extern char *strdup(const char * __s) noexcept(true)
# 188
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 195
extern char *strndup(const char * __string, size_t __n) noexcept(true)
# 196
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 224 "/usr/include/string.h" 3
extern "C++" {
# 226
extern char *strchr(char * __s, int __c) noexcept(true) __asm__("strchr")
# 227
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 228
extern const char *strchr(const char * __s, int __c) noexcept(true) __asm__("strchr")
# 229
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 244 "/usr/include/string.h" 3
}
# 251
extern "C++" {
# 253
extern char *strrchr(char * __s, int __c) noexcept(true) __asm__("strrchr")
# 254
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 255
extern const char *strrchr(const char * __s, int __c) noexcept(true) __asm__("strrchr")
# 256
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 271 "/usr/include/string.h" 3
}
# 281 "/usr/include/string.h" 3
extern "C++" char *strchrnul(char * __s, int __c) noexcept(true) __asm__("strchrnul")
# 282
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 283
extern "C++" const char *strchrnul(const char * __s, int __c) noexcept(true) __asm__("strchrnul")
# 284
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 293 "/usr/include/string.h" 3
extern size_t strcspn(const char * __s, const char * __reject) noexcept(true)
# 294
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 297
extern size_t strspn(const char * __s, const char * __accept) noexcept(true)
# 298
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 301
extern "C++" {
# 303
extern char *strpbrk(char * __s, const char * __accept) noexcept(true) __asm__("strpbrk")
# 304
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 305
extern const char *strpbrk(const char * __s, const char * __accept) noexcept(true) __asm__("strpbrk")
# 306
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 321 "/usr/include/string.h" 3
}
# 328
extern "C++" {
# 330
extern char *strstr(char * __haystack, const char * __needle) noexcept(true) __asm__("strstr")
# 331
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 332
extern const char *strstr(const char * __haystack, const char * __needle) noexcept(true) __asm__("strstr")
# 333
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 348 "/usr/include/string.h" 3
}
# 356
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) noexcept(true)
# 357
 __attribute((__nonnull__(2))); 
# 361
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) noexcept(true)
# 364
 __attribute((__nonnull__(2, 3))); 
# 366
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) noexcept(true)
# 368
 __attribute((__nonnull__(2, 3))); 
# 374
extern "C++" char *strcasestr(char * __haystack, const char * __needle) noexcept(true) __asm__("strcasestr")
# 375
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 376
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) noexcept(true) __asm__("strcasestr")
# 378
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 389 "/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) noexcept(true)
# 391
 __attribute((__pure__)) __attribute((__nonnull__(1, 3)))
# 392
 __attribute((__access__(__read_only__ , 1 , 2 )))
# 393
 __attribute((__access__(__read_only__ , 3 , 4 ))); 
# 397
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) noexcept(true)
# 399
 __attribute((__nonnull__(1, 2))); 
# 400
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) noexcept(true)
# 402
 __attribute((__nonnull__(1, 2))); 
# 407
extern size_t strlen(const char * __s) noexcept(true)
# 408
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 413
extern size_t strnlen(const char * __string, size_t __maxlen) noexcept(true)
# 414
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 419
extern char *strerror(int __errnum) noexcept(true); 
# 444 "/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) noexcept(true)
# 445
 __attribute((__nonnull__(2))) __attribute((__access__(__write_only__ , 2 , 3 ))); 
# 450
extern const char *strerrordesc_np(int __err) noexcept(true); 
# 452
extern const char *strerrorname_np(int __err) noexcept(true); 
# 458
extern char *strerror_l(int __errnum, locale_t __l) noexcept(true); 
# 30 "/usr/include/strings.h" 3
extern "C" {
# 34
extern int bcmp(const void * __s1, const void * __s2, size_t __n) noexcept(true)
# 35
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 38
extern void bcopy(const void * __src, void * __dest, size_t __n) noexcept(true)
# 39
 __attribute((__nonnull__(1, 2))); 
# 42
extern void bzero(void * __s, size_t __n) noexcept(true) __attribute((__nonnull__(1))); 
# 46
extern "C++" {
# 48
extern char *index(char * __s, int __c) noexcept(true) __asm__("index")
# 49
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 50
extern const char *index(const char * __s, int __c) noexcept(true) __asm__("index")
# 51
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 66 "/usr/include/strings.h" 3
}
# 74
extern "C++" {
# 76
extern char *rindex(char * __s, int __c) noexcept(true) __asm__("rindex")
# 77
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 78
extern const char *rindex(const char * __s, int __c) noexcept(true) __asm__("rindex")
# 79
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 94 "/usr/include/strings.h" 3
}
# 104 "/usr/include/strings.h" 3
extern int ffs(int __i) noexcept(true) __attribute((const)); 
# 110
extern int ffsl(long __l) noexcept(true) __attribute((const)); 
# 111
__extension__ extern int ffsll(long long __ll) noexcept(true)
# 112
 __attribute((const)); 
# 116
extern int strcasecmp(const char * __s1, const char * __s2) noexcept(true)
# 117
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 120
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) noexcept(true)
# 121
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 128
extern int strcasecmp_l(const char * __s1, const char * __s2, locale_t __loc) noexcept(true)
# 129
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 133
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, locale_t __loc) noexcept(true)
# 135
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 138
}
# 466 "/usr/include/string.h" 3
extern void explicit_bzero(void * __s, size_t __n) noexcept(true) __attribute((__nonnull__(1)))
# 467
 __attribute((__access__(__write_only__ , 1 , 2 ))); 
# 471
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) noexcept(true)
# 473
 __attribute((__nonnull__(1, 2))); 
# 478
extern char *strsignal(int __sig) noexcept(true); 
# 482
extern const char *sigabbrev_np(int __sig) noexcept(true); 
# 485
extern const char *sigdescr_np(int __sig) noexcept(true); 
# 489
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) noexcept(true)
# 490
 __attribute((__nonnull__(1, 2))); 
# 491
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) noexcept(true)
# 492
 __attribute((__nonnull__(1, 2))); 
# 496
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) noexcept(true)
# 498
 __attribute((__nonnull__(1, 2))); 
# 499
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) noexcept(true)
# 501
 __attribute((__nonnull__(1, 2))); 
# 506
extern int strverscmp(const char * __s1, const char * __s2) noexcept(true)
# 507
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 510
extern char *strfry(char * __string) noexcept(true) __attribute((__nonnull__(1))); 
# 513
extern void *memfrob(void * __s, size_t __n) noexcept(true) __attribute((__nonnull__(1)))
# 514
 __attribute((__access__(__read_write__ , 1 , 2 ))); 
# 522
extern "C++" char *basename(char * __filename) noexcept(true) __asm__("basename")
# 523
 __attribute((__nonnull__(1))); 
# 524
extern "C++" const char *basename(const char * __filename) noexcept(true) __asm__("basename")
# 525
 __attribute((__nonnull__(1))); 
# 539 "/usr/include/string.h" 3
}
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char; 
# 32
typedef unsigned short __u_short; 
# 33
typedef unsigned __u_int; 
# 34
typedef unsigned long __u_long; 
# 37
typedef signed char __int8_t; 
# 38
typedef unsigned char __uint8_t; 
# 39
typedef signed short __int16_t; 
# 40
typedef unsigned short __uint16_t; 
# 41
typedef signed int __int32_t; 
# 42
typedef unsigned __uint32_t; 
# 44
typedef signed long __int64_t; 
# 45
typedef unsigned long __uint64_t; 
# 52
typedef __int8_t __int_least8_t; 
# 53
typedef __uint8_t __uint_least8_t; 
# 54
typedef __int16_t __int_least16_t; 
# 55
typedef __uint16_t __uint_least16_t; 
# 56
typedef __int32_t __int_least32_t; 
# 57
typedef __uint32_t __uint_least32_t; 
# 58
typedef __int64_t __int_least64_t; 
# 59
typedef __uint64_t __uint_least64_t; 
# 63
typedef long __quad_t; 
# 64
typedef unsigned long __u_quad_t; 
# 72
typedef long __intmax_t; 
# 73
typedef unsigned long __uintmax_t; 
# 145 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned long __dev_t; 
# 146
typedef unsigned __uid_t; 
# 147
typedef unsigned __gid_t; 
# 148
typedef unsigned long __ino_t; 
# 149
typedef unsigned long __ino64_t; 
# 150
typedef unsigned __mode_t; 
# 151
typedef unsigned long __nlink_t; 
# 152
typedef long __off_t; 
# 153
typedef long __off64_t; 
# 154
typedef int __pid_t; 
# 155
typedef struct { int __val[2]; } __fsid_t; 
# 156
typedef long __clock_t; 
# 157
typedef unsigned long __rlim_t; 
# 158
typedef unsigned long __rlim64_t; 
# 159
typedef unsigned __id_t; 
# 160
typedef long __time_t; 
# 161
typedef unsigned __useconds_t; 
# 162
typedef long __suseconds_t; 
# 163
typedef long __suseconds64_t; 
# 165
typedef int __daddr_t; 
# 166
typedef int __key_t; 
# 169
typedef int __clockid_t; 
# 172
typedef void *__timer_t; 
# 175
typedef long __blksize_t; 
# 180
typedef long __blkcnt_t; 
# 181
typedef long __blkcnt64_t; 
# 184
typedef unsigned long __fsblkcnt_t; 
# 185
typedef unsigned long __fsblkcnt64_t; 
# 188
typedef unsigned long __fsfilcnt_t; 
# 189
typedef unsigned long __fsfilcnt64_t; 
# 192
typedef long __fsword_t; 
# 194
typedef long __ssize_t; 
# 197
typedef long __syscall_slong_t; 
# 199
typedef unsigned long __syscall_ulong_t; 
# 203
typedef __off64_t __loff_t; 
# 204
typedef char *__caddr_t; 
# 207
typedef long __intptr_t; 
# 210
typedef unsigned __socklen_t; 
# 215
typedef int __sig_atomic_t; 
# 8 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 3
struct timeval { 
# 14
__time_t tv_sec; 
# 15
__suseconds_t tv_usec; 
# 17
}; 
# 26 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
struct timex { 
# 58 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
unsigned modes; 
# 59
__syscall_slong_t offset; 
# 60
__syscall_slong_t freq; 
# 61
__syscall_slong_t maxerror; 
# 62
__syscall_slong_t esterror; 
# 63
int status; 
# 64
__syscall_slong_t constant; 
# 65
__syscall_slong_t precision; 
# 66
__syscall_slong_t tolerance; 
# 67
timeval time; 
# 68
__syscall_slong_t tick; 
# 69
__syscall_slong_t ppsfreq; 
# 70
__syscall_slong_t jitter; 
# 71
int shift; 
# 72
__syscall_slong_t stabil; 
# 73
__syscall_slong_t jitcnt; 
# 74
__syscall_slong_t calcnt; 
# 75
__syscall_slong_t errcnt; 
# 76
__syscall_slong_t stbcnt; 
# 78
int tai; 
# 81
int:32; int:32; int:32; int:32; 
# 82
int:32; int:32; int:32; int:32; 
# 83
int:32; int:32; int:32; 
# 85
}; 
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" {
# 78
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) noexcept(true); 
# 90 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
}
# 7 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 3
typedef __clock_t clock_t; 
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3
typedef __time_t time_t; 
# 7 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 3
struct tm { 
# 9
int tm_sec; 
# 10
int tm_min; 
# 11
int tm_hour; 
# 12
int tm_mday; 
# 13
int tm_mon; 
# 14
int tm_year; 
# 15
int tm_wday; 
# 16
int tm_yday; 
# 17
int tm_isdst; 
# 20
long tm_gmtoff; 
# 21
const char *tm_zone; 
# 26
}; 
# 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3
struct timespec { 
# 16
__time_t tv_sec; 
# 21
__syscall_slong_t tv_nsec; 
# 31 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3
}; 
# 7 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 3
typedef __clockid_t clockid_t; 
# 7 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 3
typedef __timer_t timer_t; 
# 8 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 3
struct itimerspec { 
# 10
timespec it_interval; 
# 11
timespec it_value; 
# 12
}; 
# 49 "/usr/include/time.h" 3
struct sigevent; 
# 54
typedef __pid_t pid_t; 
# 68 "/usr/include/time.h" 3
extern "C" {
# 72
extern clock_t clock() noexcept(true); 
# 76
extern time_t time(time_t * __timer) noexcept(true); 
# 79
extern double difftime(time_t __time1, time_t __time0) noexcept(true)
# 80
 __attribute((const)); 
# 83
extern time_t mktime(tm * __tp) noexcept(true); 
# 100 "/usr/include/time.h" 3
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) noexcept(true); 
# 107
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) noexcept(true); 
# 116
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, locale_t __loc) noexcept(true); 
# 123
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, locale_t __loc) noexcept(true); 
# 132
extern tm *gmtime(const time_t * __timer) noexcept(true); 
# 136
extern tm *localtime(const time_t * __timer) noexcept(true); 
# 154 "/usr/include/time.h" 3
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) noexcept(true); 
# 159
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) noexcept(true); 
# 179 "/usr/include/time.h" 3
extern char *asctime(const tm * __tp) noexcept(true); 
# 183
extern char *ctime(const time_t * __timer) noexcept(true); 
# 197 "/usr/include/time.h" 3
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) noexcept(true); 
# 202
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) noexcept(true); 
# 217 "/usr/include/time.h" 3
extern char *__tzname[2]; 
# 218
extern int __daylight; 
# 219
extern long __timezone; 
# 224
extern char *tzname[2]; 
# 228
extern void tzset() noexcept(true); 
# 232
extern int daylight; 
# 233
extern long timezone; 
# 249 "/usr/include/time.h" 3
extern time_t timegm(tm * __tp) noexcept(true); 
# 251
extern time_t timelocal(tm * __tp) noexcept(true); 
# 262 "/usr/include/time.h" 3
extern int dysize(int __year) noexcept(true) __attribute((const)); 
# 272 "/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 276
extern int clock_getres(clockid_t __clock_id, timespec * __res) noexcept(true); 
# 279
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) noexcept(true); 
# 282
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) noexcept(true); 
# 311 "/usr/include/time.h" 3
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 326 "/usr/include/time.h" 3
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) noexcept(true); 
# 331
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) noexcept(true); 
# 336
extern int timer_delete(timer_t __timerid) noexcept(true); 
# 340
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) noexcept(true); 
# 345
extern int timer_gettime(timer_t __timerid, itimerspec * __value) noexcept(true); 
# 364 "/usr/include/time.h" 3
extern int timer_getoverrun(timer_t __timerid) noexcept(true); 
# 371
extern int timespec_get(timespec * __ts, int __base) noexcept(true)
# 372
 __attribute((__nonnull__(1))); 
# 387 "/usr/include/time.h" 3
extern int timespec_getres(timespec * __ts, int __base) noexcept(true); 
# 413 "/usr/include/time.h" 3
extern int getdate_err; 
# 422 "/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 436 "/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 440
}
# 88 "/usr/include/crt/common_functions.h" 3
extern "C" {
# 91
extern clock_t clock() noexcept(true); 
# 96
extern void *memset(void *, int, size_t) noexcept(true); 
# 97
extern void *memcpy(void *, const void *, size_t) noexcept(true); 
# 99
}
# 115 "/usr/include/crt/math_functions.h" 3
extern "C" {
# 213 "/usr/include/crt/math_functions.h" 3
extern int abs(int a) noexcept(true); 
# 221
extern long labs(long a) noexcept(true); 
# 229
extern long long llabs(long long a) noexcept(true); 
# 279 "/usr/include/crt/math_functions.h" 3
extern double fabs(double x) noexcept(true); 
# 320 "/usr/include/crt/math_functions.h" 3
extern float fabsf(float x) noexcept(true); 
# 330 "/usr/include/crt/math_functions.h" 3
extern inline int min(const int a, const int b); 
# 337
extern inline unsigned umin(const unsigned a, const unsigned b); 
# 344
extern inline long long llmin(const long long a, const long long b); 
# 351
extern inline unsigned long long ullmin(const unsigned long long a, const unsigned long long b); 
# 372 "/usr/include/crt/math_functions.h" 3
extern float fminf(float x, float y) noexcept(true); 
# 392 "/usr/include/crt/math_functions.h" 3
extern double fmin(double x, double y) noexcept(true); 
# 405 "/usr/include/crt/math_functions.h" 3
extern inline int max(const int a, const int b); 
# 413
extern inline unsigned umax(const unsigned a, const unsigned b); 
# 420
extern inline long long llmax(const long long a, const long long b); 
# 427
extern inline unsigned long long ullmax(const unsigned long long a, const unsigned long long b); 
# 448 "/usr/include/crt/math_functions.h" 3
extern float fmaxf(float x, float y) noexcept(true); 
# 468 "/usr/include/crt/math_functions.h" 3
extern double fmax(double, double) noexcept(true); 
# 512 "/usr/include/crt/math_functions.h" 3
extern double sin(double x) noexcept(true); 
# 545 "/usr/include/crt/math_functions.h" 3
extern double cos(double x) noexcept(true); 
# 564 "/usr/include/crt/math_functions.h" 3
extern void sincos(double x, double * sptr, double * cptr) noexcept(true); 
# 580 "/usr/include/crt/math_functions.h" 3
extern void sincosf(float x, float * sptr, float * cptr) noexcept(true); 
# 625 "/usr/include/crt/math_functions.h" 3
extern double tan(double x) noexcept(true); 
# 694 "/usr/include/crt/math_functions.h" 3
extern double sqrt(double x) noexcept(true); 
# 766 "/usr/include/crt/math_functions.h" 3
extern double rsqrt(double x); 
# 836 "/usr/include/crt/math_functions.h" 3
extern float rsqrtf(float x); 
# 892 "/usr/include/crt/math_functions.h" 3
extern double log2(double x) noexcept(true); 
# 917 "/usr/include/crt/math_functions.h" 3
extern double exp2(double x) noexcept(true); 
# 942 "/usr/include/crt/math_functions.h" 3
extern float exp2f(float x) noexcept(true); 
# 969 "/usr/include/crt/math_functions.h" 3
extern double exp10(double x) noexcept(true); 
# 992 "/usr/include/crt/math_functions.h" 3
extern float exp10f(float x) noexcept(true); 
# 1038 "/usr/include/crt/math_functions.h" 3
extern double expm1(double x) noexcept(true); 
# 1083 "/usr/include/crt/math_functions.h" 3
extern float expm1f(float x) noexcept(true); 
# 1139 "/usr/include/crt/math_functions.h" 3
extern float log2f(float x) noexcept(true); 
# 1193 "/usr/include/crt/math_functions.h" 3
extern double log10(double x) noexcept(true); 
# 1264 "/usr/include/crt/math_functions.h" 3
extern double log(double x) noexcept(true); 
# 1367 "/usr/include/crt/math_functions.h" 3
extern double log1p(double x) noexcept(true); 
# 1473 "/usr/include/crt/math_functions.h" 3
extern float log1pf(float x) noexcept(true); 
# 1537 "/usr/include/crt/math_functions.h" 3
extern double floor(double x) noexcept(true); 
# 1576 "/usr/include/crt/math_functions.h" 3
extern double exp(double x) noexcept(true); 
# 1607 "/usr/include/crt/math_functions.h" 3
extern double cosh(double x) noexcept(true); 
# 1657 "/usr/include/crt/math_functions.h" 3
extern double sinh(double x) noexcept(true); 
# 1687 "/usr/include/crt/math_functions.h" 3
extern double tanh(double x) noexcept(true); 
# 1722 "/usr/include/crt/math_functions.h" 3
extern double acosh(double x) noexcept(true); 
# 1760 "/usr/include/crt/math_functions.h" 3
extern float acoshf(float x) noexcept(true); 
# 1813 "/usr/include/crt/math_functions.h" 3
extern double asinh(double x) noexcept(true); 
# 1865 "/usr/include/crt/math_functions.h" 3
extern float asinhf(float x) noexcept(true); 
# 1919 "/usr/include/crt/math_functions.h" 3
extern double atanh(double x) noexcept(true); 
# 1973 "/usr/include/crt/math_functions.h" 3
extern float atanhf(float x) noexcept(true); 
# 2032 "/usr/include/crt/math_functions.h" 3
extern double ldexp(double x, int exp) noexcept(true); 
# 2088 "/usr/include/crt/math_functions.h" 3
extern float ldexpf(float x, int exp) noexcept(true); 
# 2140 "/usr/include/crt/math_functions.h" 3
extern double logb(double x) noexcept(true); 
# 2195 "/usr/include/crt/math_functions.h" 3
extern float logbf(float x) noexcept(true); 
# 2226 "/usr/include/crt/math_functions.h" 3
extern int ilogb(double x) noexcept(true); 
# 2257 "/usr/include/crt/math_functions.h" 3
extern int ilogbf(float x) noexcept(true); 
# 2333 "/usr/include/crt/math_functions.h" 3
extern double scalbn(double x, int n) noexcept(true); 
# 2409 "/usr/include/crt/math_functions.h" 3
extern float scalbnf(float x, int n) noexcept(true); 
# 2485 "/usr/include/crt/math_functions.h" 3
extern double scalbln(double x, long n) noexcept(true); 
# 2561 "/usr/include/crt/math_functions.h" 3
extern float scalblnf(float x, long n) noexcept(true); 
# 2639 "/usr/include/crt/math_functions.h" 3
extern double frexp(double x, int * nptr) noexcept(true); 
# 2714 "/usr/include/crt/math_functions.h" 3
extern float frexpf(float x, int * nptr) noexcept(true); 
# 2728 "/usr/include/crt/math_functions.h" 3
extern double round(double x) noexcept(true); 
# 2745 "/usr/include/crt/math_functions.h" 3
extern float roundf(float x) noexcept(true); 
# 2763 "/usr/include/crt/math_functions.h" 3
extern long lround(double x) noexcept(true); 
# 2781 "/usr/include/crt/math_functions.h" 3
extern long lroundf(float x) noexcept(true); 
# 2799 "/usr/include/crt/math_functions.h" 3
extern long long llround(double x) noexcept(true); 
# 2817 "/usr/include/crt/math_functions.h" 3
extern long long llroundf(float x) noexcept(true); 
# 2869 "/usr/include/crt/math_functions.h" 3
extern float rintf(float x) noexcept(true); 
# 2886 "/usr/include/crt/math_functions.h" 3
extern long lrint(double x) noexcept(true); 
# 2903 "/usr/include/crt/math_functions.h" 3
extern long lrintf(float x) noexcept(true); 
# 2920 "/usr/include/crt/math_functions.h" 3
extern long long llrint(double x) noexcept(true); 
# 2937 "/usr/include/crt/math_functions.h" 3
extern long long llrintf(float x) noexcept(true); 
# 2990 "/usr/include/crt/math_functions.h" 3
extern double nearbyint(double x) noexcept(true); 
# 3043 "/usr/include/crt/math_functions.h" 3
extern float nearbyintf(float x) noexcept(true); 
# 3105 "/usr/include/crt/math_functions.h" 3
extern double ceil(double x) noexcept(true); 
# 3117 "/usr/include/crt/math_functions.h" 3
extern double trunc(double x) noexcept(true); 
# 3132 "/usr/include/crt/math_functions.h" 3
extern float truncf(float x) noexcept(true); 
# 3158 "/usr/include/crt/math_functions.h" 3
extern double fdim(double x, double y) noexcept(true); 
# 3184 "/usr/include/crt/math_functions.h" 3
extern float fdimf(float x, float y) noexcept(true); 
# 3220 "/usr/include/crt/math_functions.h" 3
extern double atan2(double y, double x) noexcept(true); 
# 3251 "/usr/include/crt/math_functions.h" 3
extern double atan(double x) noexcept(true); 
# 3274 "/usr/include/crt/math_functions.h" 3
extern double acos(double x) noexcept(true); 
# 3306 "/usr/include/crt/math_functions.h" 3
extern double asin(double x) noexcept(true); 
# 3352 "/usr/include/crt/math_functions.h" 3
extern double hypot(double x, double y) noexcept(true); 
# 3450 "/usr/include/crt/math_functions.h" 3
extern float hypotf(float x, float y) noexcept(true); 
# 4182 "/usr/include/crt/math_functions.h" 3
extern double cbrt(double x) noexcept(true); 
# 4268 "/usr/include/crt/math_functions.h" 3
extern float cbrtf(float x) noexcept(true); 
# 4323 "/usr/include/crt/math_functions.h" 3
extern double rcbrt(double x); 
# 4373 "/usr/include/crt/math_functions.h" 3
extern float rcbrtf(float x); 
# 4433 "/usr/include/crt/math_functions.h" 3
extern double sinpi(double x); 
# 4493 "/usr/include/crt/math_functions.h" 3
extern float sinpif(float x); 
# 4545 "/usr/include/crt/math_functions.h" 3
extern double cospi(double x); 
# 4597 "/usr/include/crt/math_functions.h" 3
extern float cospif(float x); 
# 4627 "/usr/include/crt/math_functions.h" 3
extern void sincospi(double x, double * sptr, double * cptr); 
# 4657 "/usr/include/crt/math_functions.h" 3
extern void sincospif(float x, float * sptr, float * cptr); 
# 4990 "/usr/include/crt/math_functions.h" 3
extern double pow(double x, double y) noexcept(true); 
# 5046 "/usr/include/crt/math_functions.h" 3
extern double modf(double x, double * iptr) noexcept(true); 
# 5105 "/usr/include/crt/math_functions.h" 3
extern double fmod(double x, double y) noexcept(true); 
# 5191 "/usr/include/crt/math_functions.h" 3
extern double remainder(double x, double y) noexcept(true); 
# 5281 "/usr/include/crt/math_functions.h" 3
extern float remainderf(float x, float y) noexcept(true); 
# 5335 "/usr/include/crt/math_functions.h" 3
extern double remquo(double x, double y, int * quo) noexcept(true); 
# 5389 "/usr/include/crt/math_functions.h" 3
extern float remquof(float x, float y, int * quo) noexcept(true); 
# 5430 "/usr/include/crt/math_functions.h" 3
extern double j0(double x) noexcept(true); 
# 5472 "/usr/include/crt/math_functions.h" 3
extern float j0f(float x) noexcept(true); 
# 5541 "/usr/include/crt/math_functions.h" 3
extern double j1(double x) noexcept(true); 
# 5610 "/usr/include/crt/math_functions.h" 3
extern float j1f(float x) noexcept(true); 
# 5653 "/usr/include/crt/math_functions.h" 3
extern double jn(int n, double x) noexcept(true); 
# 5696 "/usr/include/crt/math_functions.h" 3
extern float jnf(int n, float x) noexcept(true); 
# 5748 "/usr/include/crt/math_functions.h" 3
extern double y0(double x) noexcept(true); 
# 5800 "/usr/include/crt/math_functions.h" 3
extern float y0f(float x) noexcept(true); 
# 5852 "/usr/include/crt/math_functions.h" 3
extern double y1(double x) noexcept(true); 
# 5904 "/usr/include/crt/math_functions.h" 3
extern float y1f(float x) noexcept(true); 
# 5957 "/usr/include/crt/math_functions.h" 3
extern double yn(int n, double x) noexcept(true); 
# 6010 "/usr/include/crt/math_functions.h" 3
extern float ynf(int n, float x) noexcept(true); 
# 6199 "/usr/include/crt/math_functions.h" 3
extern double erf(double x) noexcept(true); 
# 6281 "/usr/include/crt/math_functions.h" 3
extern float erff(float x) noexcept(true); 
# 6345 "/usr/include/crt/math_functions.h" 3
extern double erfinv(double y); 
# 6402 "/usr/include/crt/math_functions.h" 3
extern float erfinvf(float y); 
# 6441 "/usr/include/crt/math_functions.h" 3
extern double erfc(double x) noexcept(true); 
# 6479 "/usr/include/crt/math_functions.h" 3
extern float erfcf(float x) noexcept(true); 
# 6606 "/usr/include/crt/math_functions.h" 3
extern double lgamma(double x) noexcept(true); 
# 6669 "/usr/include/crt/math_functions.h" 3
extern double erfcinv(double y); 
# 6725 "/usr/include/crt/math_functions.h" 3
extern float erfcinvf(float y); 
# 6783 "/usr/include/crt/math_functions.h" 3
extern double normcdfinv(double y); 
# 6841 "/usr/include/crt/math_functions.h" 3
extern float normcdfinvf(float y); 
# 6884 "/usr/include/crt/math_functions.h" 3
extern double normcdf(double y); 
# 6927 "/usr/include/crt/math_functions.h" 3
extern float normcdff(float y); 
# 7002 "/usr/include/crt/math_functions.h" 3
extern double erfcx(double x); 
# 7077 "/usr/include/crt/math_functions.h" 3
extern float erfcxf(float x); 
# 7210 "/usr/include/crt/math_functions.h" 3
extern float lgammaf(float x) noexcept(true); 
# 7319 "/usr/include/crt/math_functions.h" 3
extern double tgamma(double x) noexcept(true); 
# 7428 "/usr/include/crt/math_functions.h" 3
extern float tgammaf(float x) noexcept(true); 
# 7441 "/usr/include/crt/math_functions.h" 3
extern double copysign(double x, double y) noexcept(true); 
# 7454 "/usr/include/crt/math_functions.h" 3
extern float copysignf(float x, float y) noexcept(true); 
# 7473 "/usr/include/crt/math_functions.h" 3
extern double nextafter(double x, double y) noexcept(true); 
# 7492 "/usr/include/crt/math_functions.h" 3
extern float nextafterf(float x, float y) noexcept(true); 
# 7508 "/usr/include/crt/math_functions.h" 3
extern double nan(const char * tagp) noexcept(true); 
# 7524 "/usr/include/crt/math_functions.h" 3
extern float nanf(const char * tagp) noexcept(true); 
# 7531
extern int __isinff(float) noexcept(true); 
# 7532
extern int __isnanf(float) noexcept(true); 
# 7542 "/usr/include/crt/math_functions.h" 3
extern int __finite(double) noexcept(true); 
# 7543
extern int __finitef(float) noexcept(true); 
# 7544
extern int __signbit(double) noexcept(true); 
# 7545
extern int __isnan(double) noexcept(true); 
# 7546
extern int __isinf(double) noexcept(true); 
# 7549
extern int __signbitf(float) noexcept(true); 
# 7708 "/usr/include/crt/math_functions.h" 3
extern double fma(double x, double y, double z) noexcept(true); 
# 7866 "/usr/include/crt/math_functions.h" 3
extern float fmaf(float x, float y, float z) noexcept(true); 
# 7877 "/usr/include/crt/math_functions.h" 3
extern int __signbitl(long double) noexcept(true); 
# 7883
extern int __finitel(long double) noexcept(true); 
# 7884
extern int __isinfl(long double) noexcept(true); 
# 7885
extern int __isnanl(long double) noexcept(true); 
# 7935 "/usr/include/crt/math_functions.h" 3
extern float acosf(float x) noexcept(true); 
# 7975 "/usr/include/crt/math_functions.h" 3
extern float asinf(float x) noexcept(true); 
# 8015 "/usr/include/crt/math_functions.h" 3
extern float atanf(float x) noexcept(true); 
# 8048 "/usr/include/crt/math_functions.h" 3
extern float atan2f(float y, float x) noexcept(true); 
# 8072 "/usr/include/crt/math_functions.h" 3
extern float cosf(float x) noexcept(true); 
# 8114 "/usr/include/crt/math_functions.h" 3
extern float sinf(float x) noexcept(true); 
# 8156 "/usr/include/crt/math_functions.h" 3
extern float tanf(float x) noexcept(true); 
# 8187 "/usr/include/crt/math_functions.h" 3
extern float coshf(float x) noexcept(true); 
# 8237 "/usr/include/crt/math_functions.h" 3
extern float sinhf(float x) noexcept(true); 
# 8267 "/usr/include/crt/math_functions.h" 3
extern float tanhf(float x) noexcept(true); 
# 8319 "/usr/include/crt/math_functions.h" 3
extern float logf(float x) noexcept(true); 
# 8369 "/usr/include/crt/math_functions.h" 3
extern float expf(float x) noexcept(true); 
# 8421 "/usr/include/crt/math_functions.h" 3
extern float log10f(float x) noexcept(true); 
# 8476 "/usr/include/crt/math_functions.h" 3
extern float modff(float x, float * iptr) noexcept(true); 
# 8806 "/usr/include/crt/math_functions.h" 3
extern float powf(float x, float y) noexcept(true); 
# 8875 "/usr/include/crt/math_functions.h" 3
extern float sqrtf(float x) noexcept(true); 
# 8934 "/usr/include/crt/math_functions.h" 3
extern float ceilf(float x) noexcept(true); 
# 8995 "/usr/include/crt/math_functions.h" 3
extern float floorf(float x) noexcept(true); 
# 9053 "/usr/include/crt/math_functions.h" 3
extern float fmodf(float x, float y) noexcept(true); 
# 9068 "/usr/include/crt/math_functions.h" 3
}
# 278 "/usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h" 3
namespace std { 
# 280
typedef unsigned long size_t; 
# 281
typedef long ptrdiff_t; 
# 284
typedef __decltype((nullptr)) nullptr_t; 
# 286
}
# 300 "/usr/include/x86_64-linux-gnu/c++/11/bits/c++config.h" 3
namespace std { 
# 302
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 303
}
# 304
namespace __gnu_cxx { 
# 306
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 307
}
# 67 "/usr/include/c++/11/bits/cpp_type_traits.h" 3
extern "C++" {
# 69
namespace std __attribute((__visibility__("default"))) { 
# 73
struct __true_type { }; 
# 74
struct __false_type { }; 
# 76
template< bool > 
# 77
struct __truth_type { 
# 78
typedef __false_type __type; }; 
# 81
template<> struct __truth_type< true>  { 
# 82
typedef __true_type __type; }; 
# 86
template< class _Sp, class _Tp> 
# 87
struct __traitor { 
# 89
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 90
typedef typename __truth_type< __value> ::__type __type; 
# 91
}; 
# 94
template< class , class > 
# 95
struct __are_same { 
# 97
enum { __value}; 
# 98
typedef __false_type __type; 
# 99
}; 
# 101
template< class _Tp> 
# 102
struct __are_same< _Tp, _Tp>  { 
# 104
enum { __value = 1}; 
# 105
typedef __true_type __type; 
# 106
}; 
# 109
template< class _Tp> 
# 110
struct __is_void { 
# 112
enum { __value}; 
# 113
typedef __false_type __type; 
# 114
}; 
# 117
template<> struct __is_void< void>  { 
# 119
enum { __value = 1}; 
# 120
typedef __true_type __type; 
# 121
}; 
# 126
template< class _Tp> 
# 127
struct __is_integer { 
# 129
enum { __value}; 
# 130
typedef __false_type __type; 
# 131
}; 
# 138
template<> struct __is_integer< bool>  { 
# 140
enum { __value = 1}; 
# 141
typedef __true_type __type; 
# 142
}; 
# 145
template<> struct __is_integer< char>  { 
# 147
enum { __value = 1}; 
# 148
typedef __true_type __type; 
# 149
}; 
# 152
template<> struct __is_integer< signed char>  { 
# 154
enum { __value = 1}; 
# 155
typedef __true_type __type; 
# 156
}; 
# 159
template<> struct __is_integer< unsigned char>  { 
# 161
enum { __value = 1}; 
# 162
typedef __true_type __type; 
# 163
}; 
# 167
template<> struct __is_integer< wchar_t>  { 
# 169
enum { __value = 1}; 
# 170
typedef __true_type __type; 
# 171
}; 
# 185 "/usr/include/c++/11/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char16_t>  { 
# 187
enum { __value = 1}; 
# 188
typedef __true_type __type; 
# 189
}; 
# 192
template<> struct __is_integer< char32_t>  { 
# 194
enum { __value = 1}; 
# 195
typedef __true_type __type; 
# 196
}; 
# 200
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 270 "/usr/include/c++/11/bits/cpp_type_traits.h" 3
template<> struct __is_integer< __int128>  { enum { __value = 1}; typedef __true_type __type; }; template<> struct __is_integer< unsigned __int128>  { enum { __value = 1}; typedef __true_type __type; }; 
# 287 "/usr/include/c++/11/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 288
struct __is_floating { 
# 290
enum { __value}; 
# 291
typedef __false_type __type; 
# 292
}; 
# 296
template<> struct __is_floating< float>  { 
# 298
enum { __value = 1}; 
# 299
typedef __true_type __type; 
# 300
}; 
# 303
template<> struct __is_floating< double>  { 
# 305
enum { __value = 1}; 
# 306
typedef __true_type __type; 
# 307
}; 
# 310
template<> struct __is_floating< long double>  { 
# 312
enum { __value = 1}; 
# 313
typedef __true_type __type; 
# 314
}; 
# 319
template< class _Tp> 
# 320
struct __is_pointer { 
# 322
enum { __value}; 
# 323
typedef __false_type __type; 
# 324
}; 
# 326
template< class _Tp> 
# 327
struct __is_pointer< _Tp *>  { 
# 329
enum { __value = 1}; 
# 330
typedef __true_type __type; 
# 331
}; 
# 336
template< class _Tp> 
# 337
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 339
}; 
# 344
template< class _Tp> 
# 345
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 347
}; 
# 352
template< class _Tp> 
# 353
struct __is_char { 
# 355
enum { __value}; 
# 356
typedef __false_type __type; 
# 357
}; 
# 360
template<> struct __is_char< char>  { 
# 362
enum { __value = 1}; 
# 363
typedef __true_type __type; 
# 364
}; 
# 368
template<> struct __is_char< wchar_t>  { 
# 370
enum { __value = 1}; 
# 371
typedef __true_type __type; 
# 372
}; 
# 375
template< class _Tp> 
# 376
struct __is_byte { 
# 378
enum { __value}; 
# 379
typedef __false_type __type; 
# 380
}; 
# 383
template<> struct __is_byte< char>  { 
# 385
enum { __value = 1}; 
# 386
typedef __true_type __type; 
# 387
}; 
# 390
template<> struct __is_byte< signed char>  { 
# 392
enum { __value = 1}; 
# 393
typedef __true_type __type; 
# 394
}; 
# 397
template<> struct __is_byte< unsigned char>  { 
# 399
enum { __value = 1}; 
# 400
typedef __true_type __type; 
# 401
}; 
# 404
enum class byte: unsigned char; 
# 407
template<> struct __is_byte< byte>  { 
# 409
enum { __value = 1}; 
# 410
typedef __true_type __type; 
# 411
}; 
# 423 "/usr/include/c++/11/bits/cpp_type_traits.h" 3
template< class > struct iterator_traits; 
# 426
template< class _Tp> 
# 427
struct __is_nonvolatile_trivially_copyable { 
# 429
enum { __value = __is_trivially_copyable(_Tp)}; 
# 430
}; 
# 435
template< class _Tp> 
# 436
struct __is_nonvolatile_trivially_copyable< volatile _Tp>  { 
# 438
enum { __value}; 
# 439
}; 
# 442
template< class _OutputIter, class _InputIter> 
# 443
struct __memcpyable { 
# 445
enum { __value}; 
# 446
}; 
# 448
template< class _Tp> 
# 449
struct __memcpyable< _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 451
}; 
# 453
template< class _Tp> 
# 454
struct __memcpyable< _Tp *, const _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 456
}; 
# 463
template< class _Iter1, class _Iter2> 
# 464
struct __memcmpable { 
# 466
enum { __value}; 
# 467
}; 
# 470
template< class _Tp> 
# 471
struct __memcmpable< _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 473
}; 
# 475
template< class _Tp> 
# 476
struct __memcmpable< const _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 478
}; 
# 480
template< class _Tp> 
# 481
struct __memcmpable< _Tp *, const _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 483
}; 
# 491
template< class _Tp, bool _TreatAsBytes = __is_byte< _Tp> ::__value> 
# 498
struct __is_memcmp_ordered { 
# 500
static const bool __value = (((_Tp)(-1)) > ((_Tp)1)); 
# 501
}; 
# 503
template< class _Tp> 
# 504
struct __is_memcmp_ordered< _Tp, false>  { 
# 506
static const bool __value = false; 
# 507
}; 
# 510
template< class _Tp, class _Up, bool  = sizeof(_Tp) == sizeof(_Up)> 
# 511
struct __is_memcmp_ordered_with { 
# 513
static const bool __value = (__is_memcmp_ordered< _Tp> ::__value && __is_memcmp_ordered< _Up> ::__value); 
# 515
}; 
# 517
template< class _Tp, class _Up> 
# 518
struct __is_memcmp_ordered_with< _Tp, _Up, false>  { 
# 520
static const bool __value = false; 
# 521
}; 
# 533 "/usr/include/c++/11/bits/cpp_type_traits.h" 3
template<> struct __is_memcmp_ordered_with< byte, byte, true>  { 
# 534
static constexpr inline bool __value = true; }; 
# 536
template< class _Tp, bool _SameSize> 
# 537
struct __is_memcmp_ordered_with< _Tp, byte, _SameSize>  { 
# 538
static constexpr inline bool __value = false; }; 
# 540
template< class _Up, bool _SameSize> 
# 541
struct __is_memcmp_ordered_with< byte, _Up, _SameSize>  { 
# 542
static constexpr inline bool __value = false; }; 
# 548
template< class _Tp> 
# 549
struct __is_move_iterator { 
# 551
enum { __value}; 
# 552
typedef __false_type __type; 
# 553
}; 
# 557
template< class _Iterator> inline _Iterator 
# 560
__miter_base(_Iterator __it) 
# 561
{ return __it; } 
# 564
}
# 565
}
# 37 "/usr/include/c++/11/ext/type_traits.h" 3
extern "C++" {
# 39
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 44
template< bool , class > 
# 45
struct __enable_if { 
# 46
}; 
# 48
template< class _Tp> 
# 49
struct __enable_if< true, _Tp>  { 
# 50
typedef _Tp __type; }; 
# 54
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 55
struct __conditional_type { 
# 56
typedef _Iftrue __type; }; 
# 58
template< class _Iftrue, class _Iffalse> 
# 59
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 60
typedef _Iffalse __type; }; 
# 64
template< class _Tp> 
# 65
struct __add_unsigned { 
# 68
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 71
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 72
}; 
# 75
template<> struct __add_unsigned< char>  { 
# 76
typedef unsigned char __type; }; 
# 79
template<> struct __add_unsigned< signed char>  { 
# 80
typedef unsigned char __type; }; 
# 83
template<> struct __add_unsigned< short>  { 
# 84
typedef unsigned short __type; }; 
# 87
template<> struct __add_unsigned< int>  { 
# 88
typedef unsigned __type; }; 
# 91
template<> struct __add_unsigned< long>  { 
# 92
typedef unsigned long __type; }; 
# 95
template<> struct __add_unsigned< long long>  { 
# 96
typedef unsigned long long __type; }; 
# 100
template<> struct __add_unsigned< bool> ; 
# 103
template<> struct __add_unsigned< wchar_t> ; 
# 107
template< class _Tp> 
# 108
struct __remove_unsigned { 
# 111
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 114
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 115
}; 
# 118
template<> struct __remove_unsigned< char>  { 
# 119
typedef signed char __type; }; 
# 122
template<> struct __remove_unsigned< unsigned char>  { 
# 123
typedef signed char __type; }; 
# 126
template<> struct __remove_unsigned< unsigned short>  { 
# 127
typedef short __type; }; 
# 130
template<> struct __remove_unsigned< unsigned>  { 
# 131
typedef int __type; }; 
# 134
template<> struct __remove_unsigned< unsigned long>  { 
# 135
typedef long __type; }; 
# 138
template<> struct __remove_unsigned< unsigned long long>  { 
# 139
typedef long long __type; }; 
# 143
template<> struct __remove_unsigned< bool> ; 
# 146
template<> struct __remove_unsigned< wchar_t> ; 
# 150
template< class _Type> inline bool 
# 152
__is_null_pointer(_Type *__ptr) 
# 153
{ return __ptr == 0; } 
# 155
template< class _Type> inline bool 
# 157
__is_null_pointer(_Type) 
# 158
{ return false; } 
# 162
inline bool __is_null_pointer(std::nullptr_t) 
# 163
{ return true; } 
# 168
template< class _Tp, bool  = std::template __is_integer< _Tp> ::__value> 
# 169
struct __promote { 
# 170
typedef double __type; }; 
# 175
template< class _Tp> 
# 176
struct __promote< _Tp, false>  { 
# 177
}; 
# 180
template<> struct __promote< long double>  { 
# 181
typedef long double __type; }; 
# 184
template<> struct __promote< double>  { 
# 185
typedef double __type; }; 
# 188
template<> struct __promote< float>  { 
# 189
typedef float __type; }; 
# 192
template< class ..._Tp> using __promoted_t = __decltype(((((typename __promote< _Tp> ::__type)0) + ... ))); 
# 196
template< class _Tp, class _Up, class 
# 197
_Tp2 = typename __promote< _Tp> ::__type, class 
# 198
_Up2 = typename __promote< _Up> ::__type> 
# 199
struct __promote_2 { 
# 201
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 202
}; 
# 204
template< class _Tp, class _Up, class _Vp, class 
# 205
_Tp2 = typename __promote< _Tp> ::__type, class 
# 206
_Up2 = typename __promote< _Up> ::__type, class 
# 207
_Vp2 = typename __promote< _Vp> ::__type> 
# 208
struct __promote_3 { 
# 210
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 211
}; 
# 213
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 214
_Tp2 = typename __promote< _Tp> ::__type, class 
# 215
_Up2 = typename __promote< _Up> ::__type, class 
# 216
_Vp2 = typename __promote< _Vp> ::__type, class 
# 217
_Wp2 = typename __promote< _Wp> ::__type> 
# 218
struct __promote_4 { 
# 220
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 221
}; 
# 224
}
# 225
}
# 34 "/usr/include/math.h" 3
extern "C" {
# 74 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3
typedef float __complex__ __cfloat128 __attribute((__mode__(__TC__))); 
# 86 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3
typedef __float128 _Float128; 
# 214 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3
typedef float _Float32; 
# 251 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3
typedef double _Float64; 
# 268 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3
typedef double _Float32x; 
# 285 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3
typedef long double _Float64x; 
# 163 "/usr/include/math.h" 3
typedef float float_t; 
# 164
typedef double double_t; 
# 252 "/usr/include/math.h" 3
enum { 
# 253
FP_INT_UPWARD, 
# 256
FP_INT_DOWNWARD, 
# 259
FP_INT_TOWARDZERO, 
# 262
FP_INT_TONEARESTFROMZERO, 
# 265
FP_INT_TONEAREST
# 268
}; 
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassify(double __value) noexcept(true)
# 21
 __attribute((const)); 
# 24
extern int __signbit(double __value) noexcept(true)
# 25
 __attribute((const)); 
# 29
extern int __isinf(double __value) noexcept(true)
# 30
 __attribute((const)); 
# 33
extern int __finite(double __value) noexcept(true)
# 34
 __attribute((const)); 
# 37
extern int __isnan(double __value) noexcept(true)
# 38
 __attribute((const)); 
# 41
extern int __iseqsig(double __x, double __y) noexcept(true); 
# 44
extern int __issignaling(double __value) noexcept(true)
# 45
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double acos(double __x) noexcept(true); extern double __acos(double __x) noexcept(true); 
# 55
extern double asin(double __x) noexcept(true); extern double __asin(double __x) noexcept(true); 
# 57
extern double atan(double __x) noexcept(true); extern double __atan(double __x) noexcept(true); 
# 59
extern double atan2(double __y, double __x) noexcept(true); extern double __atan2(double __y, double __x) noexcept(true); 
# 62
extern double cos(double __x) noexcept(true); extern double __cos(double __x) noexcept(true); 
# 64
extern double sin(double __x) noexcept(true); extern double __sin(double __x) noexcept(true); 
# 66
extern double tan(double __x) noexcept(true); extern double __tan(double __x) noexcept(true); 
# 71
extern double cosh(double __x) noexcept(true); extern double __cosh(double __x) noexcept(true); 
# 73
extern double sinh(double __x) noexcept(true); extern double __sinh(double __x) noexcept(true); 
# 75
extern double tanh(double __x) noexcept(true); extern double __tanh(double __x) noexcept(true); 
# 79
extern void sincos(double __x, double * __sinx, double * __cosx) noexcept(true); extern void __sincos(double __x, double * __sinx, double * __cosx) noexcept(true); 
# 85
extern double acosh(double __x) noexcept(true); extern double __acosh(double __x) noexcept(true); 
# 87
extern double asinh(double __x) noexcept(true); extern double __asinh(double __x) noexcept(true); 
# 89
extern double atanh(double __x) noexcept(true); extern double __atanh(double __x) noexcept(true); 
# 95
extern double exp(double __x) noexcept(true); extern double __exp(double __x) noexcept(true); 
# 98
extern double frexp(double __x, int * __exponent) noexcept(true); extern double __frexp(double __x, int * __exponent) noexcept(true); 
# 101
extern double ldexp(double __x, int __exponent) noexcept(true); extern double __ldexp(double __x, int __exponent) noexcept(true); 
# 104
extern double log(double __x) noexcept(true); extern double __log(double __x) noexcept(true); 
# 107
extern double log10(double __x) noexcept(true); extern double __log10(double __x) noexcept(true); 
# 110
extern double modf(double __x, double * __iptr) noexcept(true); extern double __modf(double __x, double * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern double exp10(double __x) noexcept(true); extern double __exp10(double __x) noexcept(true); 
# 119
extern double expm1(double __x) noexcept(true); extern double __expm1(double __x) noexcept(true); 
# 122
extern double log1p(double __x) noexcept(true); extern double __log1p(double __x) noexcept(true); 
# 125
extern double logb(double __x) noexcept(true); extern double __logb(double __x) noexcept(true); 
# 130
extern double exp2(double __x) noexcept(true); extern double __exp2(double __x) noexcept(true); 
# 133
extern double log2(double __x) noexcept(true); extern double __log2(double __x) noexcept(true); 
# 140
extern double pow(double __x, double __y) noexcept(true); extern double __pow(double __x, double __y) noexcept(true); 
# 143
extern double sqrt(double __x) noexcept(true); extern double __sqrt(double __x) noexcept(true); 
# 147
extern double hypot(double __x, double __y) noexcept(true); extern double __hypot(double __x, double __y) noexcept(true); 
# 152
extern double cbrt(double __x) noexcept(true); extern double __cbrt(double __x) noexcept(true); 
# 159
extern double ceil(double __x) noexcept(true) __attribute((const)); extern double __ceil(double __x) noexcept(true) __attribute((const)); 
# 162
extern double fabs(double __x) noexcept(true) __attribute((const)); extern double __fabs(double __x) noexcept(true) __attribute((const)); 
# 165
extern double floor(double __x) noexcept(true) __attribute((const)); extern double __floor(double __x) noexcept(true) __attribute((const)); 
# 168
extern double fmod(double __x, double __y) noexcept(true); extern double __fmod(double __x, double __y) noexcept(true); 
# 183 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern int finite(double __value) noexcept(true)
# 184
 __attribute((const)); 
# 187
extern double drem(double __x, double __y) noexcept(true); extern double __drem(double __x, double __y) noexcept(true); 
# 191
extern double significand(double __x) noexcept(true); extern double __significand(double __x) noexcept(true); 
# 198
extern double copysign(double __x, double __y) noexcept(true) __attribute((const)); extern double __copysign(double __x, double __y) noexcept(true) __attribute((const)); 
# 203
extern double nan(const char * __tagb) noexcept(true); extern double __nan(const char * __tagb) noexcept(true); 
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double j0(double) noexcept(true); extern double __j0(double) noexcept(true); 
# 221
extern double j1(double) noexcept(true); extern double __j1(double) noexcept(true); 
# 222
extern double jn(int, double) noexcept(true); extern double __jn(int, double) noexcept(true); 
# 223
extern double y0(double) noexcept(true); extern double __y0(double) noexcept(true); 
# 224
extern double y1(double) noexcept(true); extern double __y1(double) noexcept(true); 
# 225
extern double yn(int, double) noexcept(true); extern double __yn(int, double) noexcept(true); 
# 231
extern double erf(double) noexcept(true); extern double __erf(double) noexcept(true); 
# 232
extern double erfc(double) noexcept(true); extern double __erfc(double) noexcept(true); 
# 233
extern double lgamma(double) noexcept(true); extern double __lgamma(double) noexcept(true); 
# 238
extern double tgamma(double) noexcept(true); extern double __tgamma(double) noexcept(true); 
# 244
extern double gamma(double) noexcept(true); extern double __gamma(double) noexcept(true); 
# 252
extern double lgamma_r(double, int * __signgamp) noexcept(true); extern double __lgamma_r(double, int * __signgamp) noexcept(true); 
# 259
extern double rint(double __x) noexcept(true); extern double __rint(double __x) noexcept(true); 
# 262
extern double nextafter(double __x, double __y) noexcept(true); extern double __nextafter(double __x, double __y) noexcept(true); 
# 264
extern double nexttoward(double __x, long double __y) noexcept(true); extern double __nexttoward(double __x, long double __y) noexcept(true); 
# 269
extern double nextdown(double __x) noexcept(true); extern double __nextdown(double __x) noexcept(true); 
# 271
extern double nextup(double __x) noexcept(true); extern double __nextup(double __x) noexcept(true); 
# 275
extern double remainder(double __x, double __y) noexcept(true); extern double __remainder(double __x, double __y) noexcept(true); 
# 279
extern double scalbn(double __x, int __n) noexcept(true); extern double __scalbn(double __x, int __n) noexcept(true); 
# 283
extern int ilogb(double __x) noexcept(true); extern int __ilogb(double __x) noexcept(true); 
# 288
extern long llogb(double __x) noexcept(true); extern long __llogb(double __x) noexcept(true); 
# 293
extern double scalbln(double __x, long __n) noexcept(true); extern double __scalbln(double __x, long __n) noexcept(true); 
# 297
extern double nearbyint(double __x) noexcept(true); extern double __nearbyint(double __x) noexcept(true); 
# 301
extern double round(double __x) noexcept(true) __attribute((const)); extern double __round(double __x) noexcept(true) __attribute((const)); 
# 305
extern double trunc(double __x) noexcept(true) __attribute((const)); extern double __trunc(double __x) noexcept(true) __attribute((const)); 
# 310
extern double remquo(double __x, double __y, int * __quo) noexcept(true); extern double __remquo(double __x, double __y, int * __quo) noexcept(true); 
# 317
extern long lrint(double __x) noexcept(true); extern long __lrint(double __x) noexcept(true); 
# 319
__extension__ extern long long llrint(double __x) noexcept(true); extern long long __llrint(double __x) noexcept(true); 
# 323
extern long lround(double __x) noexcept(true); extern long __lround(double __x) noexcept(true); 
# 325
__extension__ extern long long llround(double __x) noexcept(true); extern long long __llround(double __x) noexcept(true); 
# 329
extern double fdim(double __x, double __y) noexcept(true); extern double __fdim(double __x, double __y) noexcept(true); 
# 333
extern double fmax(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmax(double __x, double __y) noexcept(true) __attribute((const)); 
# 336
extern double fmin(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmin(double __x, double __y) noexcept(true) __attribute((const)); 
# 340
extern double fma(double __x, double __y, double __z) noexcept(true); extern double __fma(double __x, double __y, double __z) noexcept(true); 
# 345
extern double roundeven(double __x) noexcept(true) __attribute((const)); extern double __roundeven(double __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfp(double __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfp(double __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfp(double __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfp(double __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpx(double __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpx(double __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpx(double __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpx(double __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalize(double * __cx, const double * __x) noexcept(true); 
# 377
extern double fmaxmag(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmaxmag(double __x, double __y) noexcept(true) __attribute((const)); 
# 380
extern double fminmag(double __x, double __y) noexcept(true) __attribute((const)); extern double __fminmag(double __x, double __y) noexcept(true) __attribute((const)); 
# 385
extern double fmaximum(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmaximum(double __x, double __y) noexcept(true) __attribute((const)); 
# 388
extern double fminimum(double __x, double __y) noexcept(true) __attribute((const)); extern double __fminimum(double __x, double __y) noexcept(true) __attribute((const)); 
# 391
extern double fmaximum_num(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmaximum_num(double __x, double __y) noexcept(true) __attribute((const)); 
# 394
extern double fminimum_num(double __x, double __y) noexcept(true) __attribute((const)); extern double __fminimum_num(double __x, double __y) noexcept(true) __attribute((const)); 
# 397
extern double fmaximum_mag(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmaximum_mag(double __x, double __y) noexcept(true) __attribute((const)); 
# 400
extern double fminimum_mag(double __x, double __y) noexcept(true) __attribute((const)); extern double __fminimum_mag(double __x, double __y) noexcept(true) __attribute((const)); 
# 403
extern double fmaximum_mag_num(double __x, double __y) noexcept(true) __attribute((const)); extern double __fmaximum_mag_num(double __x, double __y) noexcept(true) __attribute((const)); 
# 406
extern double fminimum_mag_num(double __x, double __y) noexcept(true) __attribute((const)); extern double __fminimum_mag_num(double __x, double __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorder(const double * __x, const double * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermag(const double * __x, const double * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern double getpayload(const double * __x) noexcept(true); extern double __getpayload(const double * __x) noexcept(true); 
# 424
extern int setpayload(double * __x, double __payload) noexcept(true); 
# 427
extern int setpayloadsig(double * __x, double __payload) noexcept(true); 
# 435
extern double scalb(double __x, double __n) noexcept(true); extern double __scalb(double __x, double __n) noexcept(true); 
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyf(float __value) noexcept(true)
# 21
 __attribute((const)); 
# 24
extern int __signbitf(float __value) noexcept(true)
# 25
 __attribute((const)); 
# 29
extern int __isinff(float __value) noexcept(true)
# 30
 __attribute((const)); 
# 33
extern int __finitef(float __value) noexcept(true)
# 34
 __attribute((const)); 
# 37
extern int __isnanf(float __value) noexcept(true)
# 38
 __attribute((const)); 
# 41
extern int __iseqsigf(float __x, float __y) noexcept(true); 
# 44
extern int __issignalingf(float __value) noexcept(true)
# 45
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float acosf(float __x) noexcept(true); extern float __acosf(float __x) noexcept(true); 
# 55
extern float asinf(float __x) noexcept(true); extern float __asinf(float __x) noexcept(true); 
# 57
extern float atanf(float __x) noexcept(true); extern float __atanf(float __x) noexcept(true); 
# 59
extern float atan2f(float __y, float __x) noexcept(true); extern float __atan2f(float __y, float __x) noexcept(true); 
# 62
extern float cosf(float __x) noexcept(true); 
# 64
extern float sinf(float __x) noexcept(true); 
# 66
extern float tanf(float __x) noexcept(true); 
# 71
extern float coshf(float __x) noexcept(true); extern float __coshf(float __x) noexcept(true); 
# 73
extern float sinhf(float __x) noexcept(true); extern float __sinhf(float __x) noexcept(true); 
# 75
extern float tanhf(float __x) noexcept(true); extern float __tanhf(float __x) noexcept(true); 
# 79
extern void sincosf(float __x, float * __sinx, float * __cosx) noexcept(true); 
# 85
extern float acoshf(float __x) noexcept(true); extern float __acoshf(float __x) noexcept(true); 
# 87
extern float asinhf(float __x) noexcept(true); extern float __asinhf(float __x) noexcept(true); 
# 89
extern float atanhf(float __x) noexcept(true); extern float __atanhf(float __x) noexcept(true); 
# 95
extern float expf(float __x) noexcept(true); 
# 98
extern float frexpf(float __x, int * __exponent) noexcept(true); extern float __frexpf(float __x, int * __exponent) noexcept(true); 
# 101
extern float ldexpf(float __x, int __exponent) noexcept(true); extern float __ldexpf(float __x, int __exponent) noexcept(true); 
# 104
extern float logf(float __x) noexcept(true); 
# 107
extern float log10f(float __x) noexcept(true); 
# 110
extern float modff(float __x, float * __iptr) noexcept(true); extern float __modff(float __x, float * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern float exp10f(float __x) noexcept(true); 
# 119
extern float expm1f(float __x) noexcept(true); extern float __expm1f(float __x) noexcept(true); 
# 122
extern float log1pf(float __x) noexcept(true); extern float __log1pf(float __x) noexcept(true); 
# 125
extern float logbf(float __x) noexcept(true); extern float __logbf(float __x) noexcept(true); 
# 130
extern float exp2f(float __x) noexcept(true); extern float __exp2f(float __x) noexcept(true); 
# 133
extern float log2f(float __x) noexcept(true); 
# 140
extern float powf(float __x, float __y) noexcept(true); 
# 143
extern float sqrtf(float __x) noexcept(true); extern float __sqrtf(float __x) noexcept(true); 
# 147
extern float hypotf(float __x, float __y) noexcept(true); extern float __hypotf(float __x, float __y) noexcept(true); 
# 152
extern float cbrtf(float __x) noexcept(true); extern float __cbrtf(float __x) noexcept(true); 
# 159
extern float ceilf(float __x) noexcept(true) __attribute((const)); extern float __ceilf(float __x) noexcept(true) __attribute((const)); 
# 162
extern float fabsf(float __x) noexcept(true) __attribute((const)); extern float __fabsf(float __x) noexcept(true) __attribute((const)); 
# 165
extern float floorf(float __x) noexcept(true) __attribute((const)); extern float __floorf(float __x) noexcept(true) __attribute((const)); 
# 168
extern float fmodf(float __x, float __y) noexcept(true); extern float __fmodf(float __x, float __y) noexcept(true); 
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern int isinff(float __value) noexcept(true)
# 178
 __attribute((const)); 
# 183
extern int finitef(float __value) noexcept(true)
# 184
 __attribute((const)); 
# 187
extern float dremf(float __x, float __y) noexcept(true); extern float __dremf(float __x, float __y) noexcept(true); 
# 191
extern float significandf(float __x) noexcept(true); extern float __significandf(float __x) noexcept(true); 
# 198
extern float copysignf(float __x, float __y) noexcept(true) __attribute((const)); extern float __copysignf(float __x, float __y) noexcept(true) __attribute((const)); 
# 203
extern float nanf(const char * __tagb) noexcept(true); extern float __nanf(const char * __tagb) noexcept(true); 
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern int isnanf(float __value) noexcept(true)
# 214
 __attribute((const)); 
# 220
extern float j0f(float) noexcept(true); extern float __j0f(float) noexcept(true); 
# 221
extern float j1f(float) noexcept(true); extern float __j1f(float) noexcept(true); 
# 222
extern float jnf(int, float) noexcept(true); extern float __jnf(int, float) noexcept(true); 
# 223
extern float y0f(float) noexcept(true); extern float __y0f(float) noexcept(true); 
# 224
extern float y1f(float) noexcept(true); extern float __y1f(float) noexcept(true); 
# 225
extern float ynf(int, float) noexcept(true); extern float __ynf(int, float) noexcept(true); 
# 231
extern float erff(float) noexcept(true); extern float __erff(float) noexcept(true); 
# 232
extern float erfcf(float) noexcept(true); extern float __erfcf(float) noexcept(true); 
# 233
extern float lgammaf(float) noexcept(true); extern float __lgammaf(float) noexcept(true); 
# 238
extern float tgammaf(float) noexcept(true); extern float __tgammaf(float) noexcept(true); 
# 244
extern float gammaf(float) noexcept(true); extern float __gammaf(float) noexcept(true); 
# 252
extern float lgammaf_r(float, int * __signgamp) noexcept(true); extern float __lgammaf_r(float, int * __signgamp) noexcept(true); 
# 259
extern float rintf(float __x) noexcept(true); extern float __rintf(float __x) noexcept(true); 
# 262
extern float nextafterf(float __x, float __y) noexcept(true); extern float __nextafterf(float __x, float __y) noexcept(true); 
# 264
extern float nexttowardf(float __x, long double __y) noexcept(true); extern float __nexttowardf(float __x, long double __y) noexcept(true); 
# 269
extern float nextdownf(float __x) noexcept(true); extern float __nextdownf(float __x) noexcept(true); 
# 271
extern float nextupf(float __x) noexcept(true); extern float __nextupf(float __x) noexcept(true); 
# 275
extern float remainderf(float __x, float __y) noexcept(true); extern float __remainderf(float __x, float __y) noexcept(true); 
# 279
extern float scalbnf(float __x, int __n) noexcept(true); extern float __scalbnf(float __x, int __n) noexcept(true); 
# 283
extern int ilogbf(float __x) noexcept(true); extern int __ilogbf(float __x) noexcept(true); 
# 288
extern long llogbf(float __x) noexcept(true); extern long __llogbf(float __x) noexcept(true); 
# 293
extern float scalblnf(float __x, long __n) noexcept(true); extern float __scalblnf(float __x, long __n) noexcept(true); 
# 297
extern float nearbyintf(float __x) noexcept(true); extern float __nearbyintf(float __x) noexcept(true); 
# 301
extern float roundf(float __x) noexcept(true) __attribute((const)); extern float __roundf(float __x) noexcept(true) __attribute((const)); 
# 305
extern float truncf(float __x) noexcept(true) __attribute((const)); extern float __truncf(float __x) noexcept(true) __attribute((const)); 
# 310
extern float remquof(float __x, float __y, int * __quo) noexcept(true); extern float __remquof(float __x, float __y, int * __quo) noexcept(true); 
# 317
extern long lrintf(float __x) noexcept(true); extern long __lrintf(float __x) noexcept(true); 
# 319
__extension__ extern long long llrintf(float __x) noexcept(true); extern long long __llrintf(float __x) noexcept(true); 
# 323
extern long lroundf(float __x) noexcept(true); extern long __lroundf(float __x) noexcept(true); 
# 325
__extension__ extern long long llroundf(float __x) noexcept(true); extern long long __llroundf(float __x) noexcept(true); 
# 329
extern float fdimf(float __x, float __y) noexcept(true); extern float __fdimf(float __x, float __y) noexcept(true); 
# 333
extern float fmaxf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fmaxf(float __x, float __y) noexcept(true) __attribute((const)); 
# 336
extern float fminf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fminf(float __x, float __y) noexcept(true) __attribute((const)); 
# 340
extern float fmaf(float __x, float __y, float __z) noexcept(true); extern float __fmaf(float __x, float __y, float __z) noexcept(true); 
# 345
extern float roundevenf(float __x) noexcept(true) __attribute((const)); extern float __roundevenf(float __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpf(float __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpf(float __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpf(float __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpf(float __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxf(float __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxf(float __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxf(float __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxf(float __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizef(float * __cx, const float * __x) noexcept(true); 
# 377
extern float fmaxmagf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fmaxmagf(float __x, float __y) noexcept(true) __attribute((const)); 
# 380
extern float fminmagf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fminmagf(float __x, float __y) noexcept(true) __attribute((const)); 
# 385
extern float fmaximumf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fmaximumf(float __x, float __y) noexcept(true) __attribute((const)); 
# 388
extern float fminimumf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fminimumf(float __x, float __y) noexcept(true) __attribute((const)); 
# 391
extern float fmaximum_numf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fmaximum_numf(float __x, float __y) noexcept(true) __attribute((const)); 
# 394
extern float fminimum_numf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fminimum_numf(float __x, float __y) noexcept(true) __attribute((const)); 
# 397
extern float fmaximum_magf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fmaximum_magf(float __x, float __y) noexcept(true) __attribute((const)); 
# 400
extern float fminimum_magf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fminimum_magf(float __x, float __y) noexcept(true) __attribute((const)); 
# 403
extern float fmaximum_mag_numf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fmaximum_mag_numf(float __x, float __y) noexcept(true) __attribute((const)); 
# 406
extern float fminimum_mag_numf(float __x, float __y) noexcept(true) __attribute((const)); extern float __fminimum_mag_numf(float __x, float __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderf(const float * __x, const float * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagf(const float * __x, const float * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern float getpayloadf(const float * __x) noexcept(true); extern float __getpayloadf(const float * __x) noexcept(true); 
# 424
extern int setpayloadf(float * __x, float __payload) noexcept(true); 
# 427
extern int setpayloadsigf(float * __x, float __payload) noexcept(true); 
# 435
extern float scalbf(float __x, float __n) noexcept(true); extern float __scalbf(float __x, float __n) noexcept(true); 
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyl(long double __value) noexcept(true)
# 21
 __attribute((const)); 
# 24
extern int __signbitl(long double __value) noexcept(true)
# 25
 __attribute((const)); 
# 29
extern int __isinfl(long double __value) noexcept(true)
# 30
 __attribute((const)); 
# 33
extern int __finitel(long double __value) noexcept(true)
# 34
 __attribute((const)); 
# 37
extern int __isnanl(long double __value) noexcept(true)
# 38
 __attribute((const)); 
# 41
extern int __iseqsigl(long double __x, long double __y) noexcept(true); 
# 44
extern int __issignalingl(long double __value) noexcept(true)
# 45
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double acosl(long double __x) noexcept(true); extern long double __acosl(long double __x) noexcept(true); 
# 55
extern long double asinl(long double __x) noexcept(true); extern long double __asinl(long double __x) noexcept(true); 
# 57
extern long double atanl(long double __x) noexcept(true); extern long double __atanl(long double __x) noexcept(true); 
# 59
extern long double atan2l(long double __y, long double __x) noexcept(true); extern long double __atan2l(long double __y, long double __x) noexcept(true); 
# 62
extern long double cosl(long double __x) noexcept(true); extern long double __cosl(long double __x) noexcept(true); 
# 64
extern long double sinl(long double __x) noexcept(true); extern long double __sinl(long double __x) noexcept(true); 
# 66
extern long double tanl(long double __x) noexcept(true); extern long double __tanl(long double __x) noexcept(true); 
# 71
extern long double coshl(long double __x) noexcept(true); extern long double __coshl(long double __x) noexcept(true); 
# 73
extern long double sinhl(long double __x) noexcept(true); extern long double __sinhl(long double __x) noexcept(true); 
# 75
extern long double tanhl(long double __x) noexcept(true); extern long double __tanhl(long double __x) noexcept(true); 
# 79
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) noexcept(true); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) noexcept(true); 
# 85
extern long double acoshl(long double __x) noexcept(true); extern long double __acoshl(long double __x) noexcept(true); 
# 87
extern long double asinhl(long double __x) noexcept(true); extern long double __asinhl(long double __x) noexcept(true); 
# 89
extern long double atanhl(long double __x) noexcept(true); extern long double __atanhl(long double __x) noexcept(true); 
# 95
extern long double expl(long double __x) noexcept(true); extern long double __expl(long double __x) noexcept(true); 
# 98
extern long double frexpl(long double __x, int * __exponent) noexcept(true); extern long double __frexpl(long double __x, int * __exponent) noexcept(true); 
# 101
extern long double ldexpl(long double __x, int __exponent) noexcept(true); extern long double __ldexpl(long double __x, int __exponent) noexcept(true); 
# 104
extern long double logl(long double __x) noexcept(true); extern long double __logl(long double __x) noexcept(true); 
# 107
extern long double log10l(long double __x) noexcept(true); extern long double __log10l(long double __x) noexcept(true); 
# 110
extern long double modfl(long double __x, long double * __iptr) noexcept(true); extern long double __modfl(long double __x, long double * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern long double exp10l(long double __x) noexcept(true); extern long double __exp10l(long double __x) noexcept(true); 
# 119
extern long double expm1l(long double __x) noexcept(true); extern long double __expm1l(long double __x) noexcept(true); 
# 122
extern long double log1pl(long double __x) noexcept(true); extern long double __log1pl(long double __x) noexcept(true); 
# 125
extern long double logbl(long double __x) noexcept(true); extern long double __logbl(long double __x) noexcept(true); 
# 130
extern long double exp2l(long double __x) noexcept(true); extern long double __exp2l(long double __x) noexcept(true); 
# 133
extern long double log2l(long double __x) noexcept(true); extern long double __log2l(long double __x) noexcept(true); 
# 140
extern long double powl(long double __x, long double __y) noexcept(true); extern long double __powl(long double __x, long double __y) noexcept(true); 
# 143
extern long double sqrtl(long double __x) noexcept(true); extern long double __sqrtl(long double __x) noexcept(true); 
# 147
extern long double hypotl(long double __x, long double __y) noexcept(true); extern long double __hypotl(long double __x, long double __y) noexcept(true); 
# 152
extern long double cbrtl(long double __x) noexcept(true); extern long double __cbrtl(long double __x) noexcept(true); 
# 159
extern long double ceill(long double __x) noexcept(true) __attribute((const)); extern long double __ceill(long double __x) noexcept(true) __attribute((const)); 
# 162
extern long double fabsl(long double __x) noexcept(true) __attribute((const)); extern long double __fabsl(long double __x) noexcept(true) __attribute((const)); 
# 165
extern long double floorl(long double __x) noexcept(true) __attribute((const)); extern long double __floorl(long double __x) noexcept(true) __attribute((const)); 
# 168
extern long double fmodl(long double __x, long double __y) noexcept(true); extern long double __fmodl(long double __x, long double __y) noexcept(true); 
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern int isinfl(long double __value) noexcept(true)
# 178
 __attribute((const)); 
# 183
extern int finitel(long double __value) noexcept(true)
# 184
 __attribute((const)); 
# 187
extern long double dreml(long double __x, long double __y) noexcept(true); extern long double __dreml(long double __x, long double __y) noexcept(true); 
# 191
extern long double significandl(long double __x) noexcept(true); extern long double __significandl(long double __x) noexcept(true); 
# 198
extern long double copysignl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __copysignl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 203
extern long double nanl(const char * __tagb) noexcept(true); extern long double __nanl(const char * __tagb) noexcept(true); 
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern int isnanl(long double __value) noexcept(true)
# 214
 __attribute((const)); 
# 220
extern long double j0l(long double) noexcept(true); extern long double __j0l(long double) noexcept(true); 
# 221
extern long double j1l(long double) noexcept(true); extern long double __j1l(long double) noexcept(true); 
# 222
extern long double jnl(int, long double) noexcept(true); extern long double __jnl(int, long double) noexcept(true); 
# 223
extern long double y0l(long double) noexcept(true); extern long double __y0l(long double) noexcept(true); 
# 224
extern long double y1l(long double) noexcept(true); extern long double __y1l(long double) noexcept(true); 
# 225
extern long double ynl(int, long double) noexcept(true); extern long double __ynl(int, long double) noexcept(true); 
# 231
extern long double erfl(long double) noexcept(true); extern long double __erfl(long double) noexcept(true); 
# 232
extern long double erfcl(long double) noexcept(true); extern long double __erfcl(long double) noexcept(true); 
# 233
extern long double lgammal(long double) noexcept(true); extern long double __lgammal(long double) noexcept(true); 
# 238
extern long double tgammal(long double) noexcept(true); extern long double __tgammal(long double) noexcept(true); 
# 244
extern long double gammal(long double) noexcept(true); extern long double __gammal(long double) noexcept(true); 
# 252
extern long double lgammal_r(long double, int * __signgamp) noexcept(true); extern long double __lgammal_r(long double, int * __signgamp) noexcept(true); 
# 259
extern long double rintl(long double __x) noexcept(true); extern long double __rintl(long double __x) noexcept(true); 
# 262
extern long double nextafterl(long double __x, long double __y) noexcept(true); extern long double __nextafterl(long double __x, long double __y) noexcept(true); 
# 264
extern long double nexttowardl(long double __x, long double __y) noexcept(true); extern long double __nexttowardl(long double __x, long double __y) noexcept(true); 
# 269
extern long double nextdownl(long double __x) noexcept(true); extern long double __nextdownl(long double __x) noexcept(true); 
# 271
extern long double nextupl(long double __x) noexcept(true); extern long double __nextupl(long double __x) noexcept(true); 
# 275
extern long double remainderl(long double __x, long double __y) noexcept(true); extern long double __remainderl(long double __x, long double __y) noexcept(true); 
# 279
extern long double scalbnl(long double __x, int __n) noexcept(true); extern long double __scalbnl(long double __x, int __n) noexcept(true); 
# 283
extern int ilogbl(long double __x) noexcept(true); extern int __ilogbl(long double __x) noexcept(true); 
# 288
extern long llogbl(long double __x) noexcept(true); extern long __llogbl(long double __x) noexcept(true); 
# 293
extern long double scalblnl(long double __x, long __n) noexcept(true); extern long double __scalblnl(long double __x, long __n) noexcept(true); 
# 297
extern long double nearbyintl(long double __x) noexcept(true); extern long double __nearbyintl(long double __x) noexcept(true); 
# 301
extern long double roundl(long double __x) noexcept(true) __attribute((const)); extern long double __roundl(long double __x) noexcept(true) __attribute((const)); 
# 305
extern long double truncl(long double __x) noexcept(true) __attribute((const)); extern long double __truncl(long double __x) noexcept(true) __attribute((const)); 
# 310
extern long double remquol(long double __x, long double __y, int * __quo) noexcept(true); extern long double __remquol(long double __x, long double __y, int * __quo) noexcept(true); 
# 317
extern long lrintl(long double __x) noexcept(true); extern long __lrintl(long double __x) noexcept(true); 
# 319
__extension__ extern long long llrintl(long double __x) noexcept(true); extern long long __llrintl(long double __x) noexcept(true); 
# 323
extern long lroundl(long double __x) noexcept(true); extern long __lroundl(long double __x) noexcept(true); 
# 325
__extension__ extern long long llroundl(long double __x) noexcept(true); extern long long __llroundl(long double __x) noexcept(true); 
# 329
extern long double fdiml(long double __x, long double __y) noexcept(true); extern long double __fdiml(long double __x, long double __y) noexcept(true); 
# 333
extern long double fmaxl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fmaxl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 336
extern long double fminl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fminl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 340
extern long double fmal(long double __x, long double __y, long double __z) noexcept(true); extern long double __fmal(long double __x, long double __y, long double __z) noexcept(true); 
# 345
extern long double roundevenl(long double __x) noexcept(true) __attribute((const)); extern long double __roundevenl(long double __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpl(long double __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpl(long double __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpl(long double __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpl(long double __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxl(long double __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxl(long double __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxl(long double __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxl(long double __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizel(long double * __cx, const long double * __x) noexcept(true); 
# 377
extern long double fmaxmagl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fmaxmagl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 380
extern long double fminmagl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fminmagl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 385
extern long double fmaximuml(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fmaximuml(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 388
extern long double fminimuml(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fminimuml(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 391
extern long double fmaximum_numl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fmaximum_numl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 394
extern long double fminimum_numl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fminimum_numl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 397
extern long double fmaximum_magl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fmaximum_magl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 400
extern long double fminimum_magl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fminimum_magl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 403
extern long double fmaximum_mag_numl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fmaximum_mag_numl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 406
extern long double fminimum_mag_numl(long double __x, long double __y) noexcept(true) __attribute((const)); extern long double __fminimum_mag_numl(long double __x, long double __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderl(const long double * __x, const long double * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagl(const long double * __x, const long double * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern long double getpayloadl(const long double * __x) noexcept(true); extern long double __getpayloadl(const long double * __x) noexcept(true); 
# 424
extern int setpayloadl(long double * __x, long double __payload) noexcept(true); 
# 427
extern int setpayloadsigl(long double * __x, long double __payload) noexcept(true); 
# 435
extern long double scalbl(long double __x, long double __n) noexcept(true); extern long double __scalbl(long double __x, long double __n) noexcept(true); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32 acosf32(_Float32 __x) noexcept(true); extern _Float32 __acosf32(_Float32 __x) noexcept(true); 
# 55
extern _Float32 asinf32(_Float32 __x) noexcept(true); extern _Float32 __asinf32(_Float32 __x) noexcept(true); 
# 57
extern _Float32 atanf32(_Float32 __x) noexcept(true); extern _Float32 __atanf32(_Float32 __x) noexcept(true); 
# 59
extern _Float32 atan2f32(_Float32 __y, _Float32 __x) noexcept(true); extern _Float32 __atan2f32(_Float32 __y, _Float32 __x) noexcept(true); 
# 62
extern _Float32 cosf32(_Float32 __x) noexcept(true); extern _Float32 __cosf32(_Float32 __x) noexcept(true); 
# 64
extern _Float32 sinf32(_Float32 __x) noexcept(true); extern _Float32 __sinf32(_Float32 __x) noexcept(true); 
# 66
extern _Float32 tanf32(_Float32 __x) noexcept(true); extern _Float32 __tanf32(_Float32 __x) noexcept(true); 
# 71
extern _Float32 coshf32(_Float32 __x) noexcept(true); extern _Float32 __coshf32(_Float32 __x) noexcept(true); 
# 73
extern _Float32 sinhf32(_Float32 __x) noexcept(true); extern _Float32 __sinhf32(_Float32 __x) noexcept(true); 
# 75
extern _Float32 tanhf32(_Float32 __x) noexcept(true); extern _Float32 __tanhf32(_Float32 __x) noexcept(true); 
# 79
extern void sincosf32(_Float32 __x, _Float32 * __sinx, _Float32 * __cosx) noexcept(true); extern void __sincosf32(_Float32 __x, _Float32 * __sinx, _Float32 * __cosx) noexcept(true); 
# 85
extern _Float32 acoshf32(_Float32 __x) noexcept(true); extern _Float32 __acoshf32(_Float32 __x) noexcept(true); 
# 87
extern _Float32 asinhf32(_Float32 __x) noexcept(true); extern _Float32 __asinhf32(_Float32 __x) noexcept(true); 
# 89
extern _Float32 atanhf32(_Float32 __x) noexcept(true); extern _Float32 __atanhf32(_Float32 __x) noexcept(true); 
# 95
extern _Float32 expf32(_Float32 __x) noexcept(true); extern _Float32 __expf32(_Float32 __x) noexcept(true); 
# 98
extern _Float32 frexpf32(_Float32 __x, int * __exponent) noexcept(true); extern _Float32 __frexpf32(_Float32 __x, int * __exponent) noexcept(true); 
# 101
extern _Float32 ldexpf32(_Float32 __x, int __exponent) noexcept(true); extern _Float32 __ldexpf32(_Float32 __x, int __exponent) noexcept(true); 
# 104
extern _Float32 logf32(_Float32 __x) noexcept(true); extern _Float32 __logf32(_Float32 __x) noexcept(true); 
# 107
extern _Float32 log10f32(_Float32 __x) noexcept(true); extern _Float32 __log10f32(_Float32 __x) noexcept(true); 
# 110
extern _Float32 modff32(_Float32 __x, _Float32 * __iptr) noexcept(true); extern _Float32 __modff32(_Float32 __x, _Float32 * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern _Float32 exp10f32(_Float32 __x) noexcept(true); extern _Float32 __exp10f32(_Float32 __x) noexcept(true); 
# 119
extern _Float32 expm1f32(_Float32 __x) noexcept(true); extern _Float32 __expm1f32(_Float32 __x) noexcept(true); 
# 122
extern _Float32 log1pf32(_Float32 __x) noexcept(true); extern _Float32 __log1pf32(_Float32 __x) noexcept(true); 
# 125
extern _Float32 logbf32(_Float32 __x) noexcept(true); extern _Float32 __logbf32(_Float32 __x) noexcept(true); 
# 130
extern _Float32 exp2f32(_Float32 __x) noexcept(true); extern _Float32 __exp2f32(_Float32 __x) noexcept(true); 
# 133
extern _Float32 log2f32(_Float32 __x) noexcept(true); extern _Float32 __log2f32(_Float32 __x) noexcept(true); 
# 140
extern _Float32 powf32(_Float32 __x, _Float32 __y) noexcept(true); extern _Float32 __powf32(_Float32 __x, _Float32 __y) noexcept(true); 
# 143
extern _Float32 sqrtf32(_Float32 __x) noexcept(true); extern _Float32 __sqrtf32(_Float32 __x) noexcept(true); 
# 147
extern _Float32 hypotf32(_Float32 __x, _Float32 __y) noexcept(true); extern _Float32 __hypotf32(_Float32 __x, _Float32 __y) noexcept(true); 
# 152
extern _Float32 cbrtf32(_Float32 __x) noexcept(true); extern _Float32 __cbrtf32(_Float32 __x) noexcept(true); 
# 159
extern _Float32 ceilf32(_Float32 __x) noexcept(true) __attribute((const)); extern _Float32 __ceilf32(_Float32 __x) noexcept(true) __attribute((const)); 
# 162
extern _Float32 fabsf32(_Float32 __x) noexcept(true) __attribute((const)); extern _Float32 __fabsf32(_Float32 __x) noexcept(true) __attribute((const)); 
# 165
extern _Float32 floorf32(_Float32 __x) noexcept(true) __attribute((const)); extern _Float32 __floorf32(_Float32 __x) noexcept(true) __attribute((const)); 
# 168
extern _Float32 fmodf32(_Float32 __x, _Float32 __y) noexcept(true); extern _Float32 __fmodf32(_Float32 __x, _Float32 __y) noexcept(true); 
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32 copysignf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __copysignf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 203
extern _Float32 nanf32(const char * __tagb) noexcept(true); extern _Float32 __nanf32(const char * __tagb) noexcept(true); 
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32 j0f32(_Float32) noexcept(true); extern _Float32 __j0f32(_Float32) noexcept(true); 
# 221
extern _Float32 j1f32(_Float32) noexcept(true); extern _Float32 __j1f32(_Float32) noexcept(true); 
# 222
extern _Float32 jnf32(int, _Float32) noexcept(true); extern _Float32 __jnf32(int, _Float32) noexcept(true); 
# 223
extern _Float32 y0f32(_Float32) noexcept(true); extern _Float32 __y0f32(_Float32) noexcept(true); 
# 224
extern _Float32 y1f32(_Float32) noexcept(true); extern _Float32 __y1f32(_Float32) noexcept(true); 
# 225
extern _Float32 ynf32(int, _Float32) noexcept(true); extern _Float32 __ynf32(int, _Float32) noexcept(true); 
# 231
extern _Float32 erff32(_Float32) noexcept(true); extern _Float32 __erff32(_Float32) noexcept(true); 
# 232
extern _Float32 erfcf32(_Float32) noexcept(true); extern _Float32 __erfcf32(_Float32) noexcept(true); 
# 233
extern _Float32 lgammaf32(_Float32) noexcept(true); extern _Float32 __lgammaf32(_Float32) noexcept(true); 
# 238
extern _Float32 tgammaf32(_Float32) noexcept(true); extern _Float32 __tgammaf32(_Float32) noexcept(true); 
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32 lgammaf32_r(_Float32, int * __signgamp) noexcept(true); extern _Float32 __lgammaf32_r(_Float32, int * __signgamp) noexcept(true); 
# 259
extern _Float32 rintf32(_Float32 __x) noexcept(true); extern _Float32 __rintf32(_Float32 __x) noexcept(true); 
# 262
extern _Float32 nextafterf32(_Float32 __x, _Float32 __y) noexcept(true); extern _Float32 __nextafterf32(_Float32 __x, _Float32 __y) noexcept(true); 
# 269
extern _Float32 nextdownf32(_Float32 __x) noexcept(true); extern _Float32 __nextdownf32(_Float32 __x) noexcept(true); 
# 271
extern _Float32 nextupf32(_Float32 __x) noexcept(true); extern _Float32 __nextupf32(_Float32 __x) noexcept(true); 
# 275
extern _Float32 remainderf32(_Float32 __x, _Float32 __y) noexcept(true); extern _Float32 __remainderf32(_Float32 __x, _Float32 __y) noexcept(true); 
# 279
extern _Float32 scalbnf32(_Float32 __x, int __n) noexcept(true); extern _Float32 __scalbnf32(_Float32 __x, int __n) noexcept(true); 
# 283
extern int ilogbf32(_Float32 __x) noexcept(true); extern int __ilogbf32(_Float32 __x) noexcept(true); 
# 288
extern long llogbf32(_Float32 __x) noexcept(true); extern long __llogbf32(_Float32 __x) noexcept(true); 
# 293
extern _Float32 scalblnf32(_Float32 __x, long __n) noexcept(true); extern _Float32 __scalblnf32(_Float32 __x, long __n) noexcept(true); 
# 297
extern _Float32 nearbyintf32(_Float32 __x) noexcept(true); extern _Float32 __nearbyintf32(_Float32 __x) noexcept(true); 
# 301
extern _Float32 roundf32(_Float32 __x) noexcept(true) __attribute((const)); extern _Float32 __roundf32(_Float32 __x) noexcept(true) __attribute((const)); 
# 305
extern _Float32 truncf32(_Float32 __x) noexcept(true) __attribute((const)); extern _Float32 __truncf32(_Float32 __x) noexcept(true) __attribute((const)); 
# 310
extern _Float32 remquof32(_Float32 __x, _Float32 __y, int * __quo) noexcept(true); extern _Float32 __remquof32(_Float32 __x, _Float32 __y, int * __quo) noexcept(true); 
# 317
extern long lrintf32(_Float32 __x) noexcept(true); extern long __lrintf32(_Float32 __x) noexcept(true); 
# 319
__extension__ extern long long llrintf32(_Float32 __x) noexcept(true); extern long long __llrintf32(_Float32 __x) noexcept(true); 
# 323
extern long lroundf32(_Float32 __x) noexcept(true); extern long __lroundf32(_Float32 __x) noexcept(true); 
# 325
__extension__ extern long long llroundf32(_Float32 __x) noexcept(true); extern long long __llroundf32(_Float32 __x) noexcept(true); 
# 329
extern _Float32 fdimf32(_Float32 __x, _Float32 __y) noexcept(true); extern _Float32 __fdimf32(_Float32 __x, _Float32 __y) noexcept(true); 
# 333
extern _Float32 fmaxf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fmaxf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 336
extern _Float32 fminf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fminf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 340
extern _Float32 fmaf32(_Float32 __x, _Float32 __y, _Float32 __z) noexcept(true); extern _Float32 __fmaf32(_Float32 __x, _Float32 __y, _Float32 __z) noexcept(true); 
# 345
extern _Float32 roundevenf32(_Float32 __x) noexcept(true) __attribute((const)); extern _Float32 __roundevenf32(_Float32 __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpf32(_Float32 __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpf32(_Float32 __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpf32(_Float32 __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpf32(_Float32 __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxf32(_Float32 __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxf32(_Float32 __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxf32(_Float32 __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxf32(_Float32 __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizef32(_Float32 * __cx, const _Float32 * __x) noexcept(true); 
# 377
extern _Float32 fmaxmagf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fmaxmagf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 380
extern _Float32 fminmagf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fminmagf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 385
extern _Float32 fmaximumf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fmaximumf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 388
extern _Float32 fminimumf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fminimumf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 391
extern _Float32 fmaximum_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fmaximum_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 394
extern _Float32 fminimum_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fminimum_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 397
extern _Float32 fmaximum_magf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fmaximum_magf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 400
extern _Float32 fminimum_magf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fminimum_magf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 403
extern _Float32 fmaximum_mag_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fmaximum_mag_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 406
extern _Float32 fminimum_mag_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); extern _Float32 __fminimum_mag_numf32(_Float32 __x, _Float32 __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderf32(const _Float32 * __x, const _Float32 * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagf32(const _Float32 * __x, const _Float32 * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern _Float32 getpayloadf32(const _Float32 * __x) noexcept(true); extern _Float32 __getpayloadf32(const _Float32 * __x) noexcept(true); 
# 424
extern int setpayloadf32(_Float32 * __x, _Float32 __payload) noexcept(true); 
# 427
extern int setpayloadsigf32(_Float32 * __x, _Float32 __payload) noexcept(true); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64 acosf64(_Float64 __x) noexcept(true); extern _Float64 __acosf64(_Float64 __x) noexcept(true); 
# 55
extern _Float64 asinf64(_Float64 __x) noexcept(true); extern _Float64 __asinf64(_Float64 __x) noexcept(true); 
# 57
extern _Float64 atanf64(_Float64 __x) noexcept(true); extern _Float64 __atanf64(_Float64 __x) noexcept(true); 
# 59
extern _Float64 atan2f64(_Float64 __y, _Float64 __x) noexcept(true); extern _Float64 __atan2f64(_Float64 __y, _Float64 __x) noexcept(true); 
# 62
extern _Float64 cosf64(_Float64 __x) noexcept(true); extern _Float64 __cosf64(_Float64 __x) noexcept(true); 
# 64
extern _Float64 sinf64(_Float64 __x) noexcept(true); extern _Float64 __sinf64(_Float64 __x) noexcept(true); 
# 66
extern _Float64 tanf64(_Float64 __x) noexcept(true); extern _Float64 __tanf64(_Float64 __x) noexcept(true); 
# 71
extern _Float64 coshf64(_Float64 __x) noexcept(true); extern _Float64 __coshf64(_Float64 __x) noexcept(true); 
# 73
extern _Float64 sinhf64(_Float64 __x) noexcept(true); extern _Float64 __sinhf64(_Float64 __x) noexcept(true); 
# 75
extern _Float64 tanhf64(_Float64 __x) noexcept(true); extern _Float64 __tanhf64(_Float64 __x) noexcept(true); 
# 79
extern void sincosf64(_Float64 __x, _Float64 * __sinx, _Float64 * __cosx) noexcept(true); extern void __sincosf64(_Float64 __x, _Float64 * __sinx, _Float64 * __cosx) noexcept(true); 
# 85
extern _Float64 acoshf64(_Float64 __x) noexcept(true); extern _Float64 __acoshf64(_Float64 __x) noexcept(true); 
# 87
extern _Float64 asinhf64(_Float64 __x) noexcept(true); extern _Float64 __asinhf64(_Float64 __x) noexcept(true); 
# 89
extern _Float64 atanhf64(_Float64 __x) noexcept(true); extern _Float64 __atanhf64(_Float64 __x) noexcept(true); 
# 95
extern _Float64 expf64(_Float64 __x) noexcept(true); extern _Float64 __expf64(_Float64 __x) noexcept(true); 
# 98
extern _Float64 frexpf64(_Float64 __x, int * __exponent) noexcept(true); extern _Float64 __frexpf64(_Float64 __x, int * __exponent) noexcept(true); 
# 101
extern _Float64 ldexpf64(_Float64 __x, int __exponent) noexcept(true); extern _Float64 __ldexpf64(_Float64 __x, int __exponent) noexcept(true); 
# 104
extern _Float64 logf64(_Float64 __x) noexcept(true); extern _Float64 __logf64(_Float64 __x) noexcept(true); 
# 107
extern _Float64 log10f64(_Float64 __x) noexcept(true); extern _Float64 __log10f64(_Float64 __x) noexcept(true); 
# 110
extern _Float64 modff64(_Float64 __x, _Float64 * __iptr) noexcept(true); extern _Float64 __modff64(_Float64 __x, _Float64 * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern _Float64 exp10f64(_Float64 __x) noexcept(true); extern _Float64 __exp10f64(_Float64 __x) noexcept(true); 
# 119
extern _Float64 expm1f64(_Float64 __x) noexcept(true); extern _Float64 __expm1f64(_Float64 __x) noexcept(true); 
# 122
extern _Float64 log1pf64(_Float64 __x) noexcept(true); extern _Float64 __log1pf64(_Float64 __x) noexcept(true); 
# 125
extern _Float64 logbf64(_Float64 __x) noexcept(true); extern _Float64 __logbf64(_Float64 __x) noexcept(true); 
# 130
extern _Float64 exp2f64(_Float64 __x) noexcept(true); extern _Float64 __exp2f64(_Float64 __x) noexcept(true); 
# 133
extern _Float64 log2f64(_Float64 __x) noexcept(true); extern _Float64 __log2f64(_Float64 __x) noexcept(true); 
# 140
extern _Float64 powf64(_Float64 __x, _Float64 __y) noexcept(true); extern _Float64 __powf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 143
extern _Float64 sqrtf64(_Float64 __x) noexcept(true); extern _Float64 __sqrtf64(_Float64 __x) noexcept(true); 
# 147
extern _Float64 hypotf64(_Float64 __x, _Float64 __y) noexcept(true); extern _Float64 __hypotf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 152
extern _Float64 cbrtf64(_Float64 __x) noexcept(true); extern _Float64 __cbrtf64(_Float64 __x) noexcept(true); 
# 159
extern _Float64 ceilf64(_Float64 __x) noexcept(true) __attribute((const)); extern _Float64 __ceilf64(_Float64 __x) noexcept(true) __attribute((const)); 
# 162
extern _Float64 fabsf64(_Float64 __x) noexcept(true) __attribute((const)); extern _Float64 __fabsf64(_Float64 __x) noexcept(true) __attribute((const)); 
# 165
extern _Float64 floorf64(_Float64 __x) noexcept(true) __attribute((const)); extern _Float64 __floorf64(_Float64 __x) noexcept(true) __attribute((const)); 
# 168
extern _Float64 fmodf64(_Float64 __x, _Float64 __y) noexcept(true); extern _Float64 __fmodf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64 copysignf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __copysignf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 203
extern _Float64 nanf64(const char * __tagb) noexcept(true); extern _Float64 __nanf64(const char * __tagb) noexcept(true); 
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64 j0f64(_Float64) noexcept(true); extern _Float64 __j0f64(_Float64) noexcept(true); 
# 221
extern _Float64 j1f64(_Float64) noexcept(true); extern _Float64 __j1f64(_Float64) noexcept(true); 
# 222
extern _Float64 jnf64(int, _Float64) noexcept(true); extern _Float64 __jnf64(int, _Float64) noexcept(true); 
# 223
extern _Float64 y0f64(_Float64) noexcept(true); extern _Float64 __y0f64(_Float64) noexcept(true); 
# 224
extern _Float64 y1f64(_Float64) noexcept(true); extern _Float64 __y1f64(_Float64) noexcept(true); 
# 225
extern _Float64 ynf64(int, _Float64) noexcept(true); extern _Float64 __ynf64(int, _Float64) noexcept(true); 
# 231
extern _Float64 erff64(_Float64) noexcept(true); extern _Float64 __erff64(_Float64) noexcept(true); 
# 232
extern _Float64 erfcf64(_Float64) noexcept(true); extern _Float64 __erfcf64(_Float64) noexcept(true); 
# 233
extern _Float64 lgammaf64(_Float64) noexcept(true); extern _Float64 __lgammaf64(_Float64) noexcept(true); 
# 238
extern _Float64 tgammaf64(_Float64) noexcept(true); extern _Float64 __tgammaf64(_Float64) noexcept(true); 
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64 lgammaf64_r(_Float64, int * __signgamp) noexcept(true); extern _Float64 __lgammaf64_r(_Float64, int * __signgamp) noexcept(true); 
# 259
extern _Float64 rintf64(_Float64 __x) noexcept(true); extern _Float64 __rintf64(_Float64 __x) noexcept(true); 
# 262
extern _Float64 nextafterf64(_Float64 __x, _Float64 __y) noexcept(true); extern _Float64 __nextafterf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 269
extern _Float64 nextdownf64(_Float64 __x) noexcept(true); extern _Float64 __nextdownf64(_Float64 __x) noexcept(true); 
# 271
extern _Float64 nextupf64(_Float64 __x) noexcept(true); extern _Float64 __nextupf64(_Float64 __x) noexcept(true); 
# 275
extern _Float64 remainderf64(_Float64 __x, _Float64 __y) noexcept(true); extern _Float64 __remainderf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 279
extern _Float64 scalbnf64(_Float64 __x, int __n) noexcept(true); extern _Float64 __scalbnf64(_Float64 __x, int __n) noexcept(true); 
# 283
extern int ilogbf64(_Float64 __x) noexcept(true); extern int __ilogbf64(_Float64 __x) noexcept(true); 
# 288
extern long llogbf64(_Float64 __x) noexcept(true); extern long __llogbf64(_Float64 __x) noexcept(true); 
# 293
extern _Float64 scalblnf64(_Float64 __x, long __n) noexcept(true); extern _Float64 __scalblnf64(_Float64 __x, long __n) noexcept(true); 
# 297
extern _Float64 nearbyintf64(_Float64 __x) noexcept(true); extern _Float64 __nearbyintf64(_Float64 __x) noexcept(true); 
# 301
extern _Float64 roundf64(_Float64 __x) noexcept(true) __attribute((const)); extern _Float64 __roundf64(_Float64 __x) noexcept(true) __attribute((const)); 
# 305
extern _Float64 truncf64(_Float64 __x) noexcept(true) __attribute((const)); extern _Float64 __truncf64(_Float64 __x) noexcept(true) __attribute((const)); 
# 310
extern _Float64 remquof64(_Float64 __x, _Float64 __y, int * __quo) noexcept(true); extern _Float64 __remquof64(_Float64 __x, _Float64 __y, int * __quo) noexcept(true); 
# 317
extern long lrintf64(_Float64 __x) noexcept(true); extern long __lrintf64(_Float64 __x) noexcept(true); 
# 319
__extension__ extern long long llrintf64(_Float64 __x) noexcept(true); extern long long __llrintf64(_Float64 __x) noexcept(true); 
# 323
extern long lroundf64(_Float64 __x) noexcept(true); extern long __lroundf64(_Float64 __x) noexcept(true); 
# 325
__extension__ extern long long llroundf64(_Float64 __x) noexcept(true); extern long long __llroundf64(_Float64 __x) noexcept(true); 
# 329
extern _Float64 fdimf64(_Float64 __x, _Float64 __y) noexcept(true); extern _Float64 __fdimf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 333
extern _Float64 fmaxf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fmaxf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 336
extern _Float64 fminf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fminf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 340
extern _Float64 fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) noexcept(true); extern _Float64 __fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) noexcept(true); 
# 345
extern _Float64 roundevenf64(_Float64 __x) noexcept(true) __attribute((const)); extern _Float64 __roundevenf64(_Float64 __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpf64(_Float64 __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpf64(_Float64 __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpf64(_Float64 __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpf64(_Float64 __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxf64(_Float64 __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxf64(_Float64 __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxf64(_Float64 __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxf64(_Float64 __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizef64(_Float64 * __cx, const _Float64 * __x) noexcept(true); 
# 377
extern _Float64 fmaxmagf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fmaxmagf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 380
extern _Float64 fminmagf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fminmagf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 385
extern _Float64 fmaximumf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fmaximumf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 388
extern _Float64 fminimumf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fminimumf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 391
extern _Float64 fmaximum_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fmaximum_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 394
extern _Float64 fminimum_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fminimum_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 397
extern _Float64 fmaximum_magf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fmaximum_magf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 400
extern _Float64 fminimum_magf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fminimum_magf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 403
extern _Float64 fmaximum_mag_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fmaximum_mag_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 406
extern _Float64 fminimum_mag_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); extern _Float64 __fminimum_mag_numf64(_Float64 __x, _Float64 __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderf64(const _Float64 * __x, const _Float64 * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagf64(const _Float64 * __x, const _Float64 * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern _Float64 getpayloadf64(const _Float64 * __x) noexcept(true); extern _Float64 __getpayloadf64(const _Float64 * __x) noexcept(true); 
# 424
extern int setpayloadf64(_Float64 * __x, _Float64 __payload) noexcept(true); 
# 427
extern int setpayloadsigf64(_Float64 * __x, _Float64 __payload) noexcept(true); 
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyf128(_Float128 __value) noexcept(true)
# 21
 __attribute((const)); 
# 24
extern int __signbitf128(_Float128 __value) noexcept(true)
# 25
 __attribute((const)); 
# 29
extern int __isinff128(_Float128 __value) noexcept(true)
# 30
 __attribute((const)); 
# 33
extern int __finitef128(_Float128 __value) noexcept(true)
# 34
 __attribute((const)); 
# 37
extern int __isnanf128(_Float128 __value) noexcept(true)
# 38
 __attribute((const)); 
# 41
extern int __iseqsigf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 44
extern int __issignalingf128(_Float128 __value) noexcept(true)
# 45
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float128 acosf128(_Float128 __x) noexcept(true); extern _Float128 __acosf128(_Float128 __x) noexcept(true); 
# 55
extern _Float128 asinf128(_Float128 __x) noexcept(true); extern _Float128 __asinf128(_Float128 __x) noexcept(true); 
# 57
extern _Float128 atanf128(_Float128 __x) noexcept(true); extern _Float128 __atanf128(_Float128 __x) noexcept(true); 
# 59
extern _Float128 atan2f128(_Float128 __y, _Float128 __x) noexcept(true); extern _Float128 __atan2f128(_Float128 __y, _Float128 __x) noexcept(true); 
# 62
extern _Float128 cosf128(_Float128 __x) noexcept(true); extern _Float128 __cosf128(_Float128 __x) noexcept(true); 
# 64
extern _Float128 sinf128(_Float128 __x) noexcept(true); extern _Float128 __sinf128(_Float128 __x) noexcept(true); 
# 66
extern _Float128 tanf128(_Float128 __x) noexcept(true); extern _Float128 __tanf128(_Float128 __x) noexcept(true); 
# 71
extern _Float128 coshf128(_Float128 __x) noexcept(true); extern _Float128 __coshf128(_Float128 __x) noexcept(true); 
# 73
extern _Float128 sinhf128(_Float128 __x) noexcept(true); extern _Float128 __sinhf128(_Float128 __x) noexcept(true); 
# 75
extern _Float128 tanhf128(_Float128 __x) noexcept(true); extern _Float128 __tanhf128(_Float128 __x) noexcept(true); 
# 79
extern void sincosf128(_Float128 __x, _Float128 * __sinx, _Float128 * __cosx) noexcept(true); extern void __sincosf128(_Float128 __x, _Float128 * __sinx, _Float128 * __cosx) noexcept(true); 
# 85
extern _Float128 acoshf128(_Float128 __x) noexcept(true); extern _Float128 __acoshf128(_Float128 __x) noexcept(true); 
# 87
extern _Float128 asinhf128(_Float128 __x) noexcept(true); extern _Float128 __asinhf128(_Float128 __x) noexcept(true); 
# 89
extern _Float128 atanhf128(_Float128 __x) noexcept(true); extern _Float128 __atanhf128(_Float128 __x) noexcept(true); 
# 95
extern _Float128 expf128(_Float128 __x) noexcept(true); extern _Float128 __expf128(_Float128 __x) noexcept(true); 
# 98
extern _Float128 frexpf128(_Float128 __x, int * __exponent) noexcept(true); extern _Float128 __frexpf128(_Float128 __x, int * __exponent) noexcept(true); 
# 101
extern _Float128 ldexpf128(_Float128 __x, int __exponent) noexcept(true); extern _Float128 __ldexpf128(_Float128 __x, int __exponent) noexcept(true); 
# 104
extern _Float128 logf128(_Float128 __x) noexcept(true); extern _Float128 __logf128(_Float128 __x) noexcept(true); 
# 107
extern _Float128 log10f128(_Float128 __x) noexcept(true); extern _Float128 __log10f128(_Float128 __x) noexcept(true); 
# 110
extern _Float128 modff128(_Float128 __x, _Float128 * __iptr) noexcept(true); extern _Float128 __modff128(_Float128 __x, _Float128 * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern _Float128 exp10f128(_Float128 __x) noexcept(true); extern _Float128 __exp10f128(_Float128 __x) noexcept(true); 
# 119
extern _Float128 expm1f128(_Float128 __x) noexcept(true); extern _Float128 __expm1f128(_Float128 __x) noexcept(true); 
# 122
extern _Float128 log1pf128(_Float128 __x) noexcept(true); extern _Float128 __log1pf128(_Float128 __x) noexcept(true); 
# 125
extern _Float128 logbf128(_Float128 __x) noexcept(true); extern _Float128 __logbf128(_Float128 __x) noexcept(true); 
# 130
extern _Float128 exp2f128(_Float128 __x) noexcept(true); extern _Float128 __exp2f128(_Float128 __x) noexcept(true); 
# 133
extern _Float128 log2f128(_Float128 __x) noexcept(true); extern _Float128 __log2f128(_Float128 __x) noexcept(true); 
# 140
extern _Float128 powf128(_Float128 __x, _Float128 __y) noexcept(true); extern _Float128 __powf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 143
extern _Float128 sqrtf128(_Float128 __x) noexcept(true); extern _Float128 __sqrtf128(_Float128 __x) noexcept(true); 
# 147
extern _Float128 hypotf128(_Float128 __x, _Float128 __y) noexcept(true); extern _Float128 __hypotf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 152
extern _Float128 cbrtf128(_Float128 __x) noexcept(true); extern _Float128 __cbrtf128(_Float128 __x) noexcept(true); 
# 159
extern _Float128 ceilf128(_Float128 __x) noexcept(true) __attribute((const)); extern _Float128 __ceilf128(_Float128 __x) noexcept(true) __attribute((const)); 
# 162
extern _Float128 fabsf128(_Float128 __x) noexcept(true) __attribute((const)); extern _Float128 __fabsf128(_Float128 __x) noexcept(true) __attribute((const)); 
# 165
extern _Float128 floorf128(_Float128 __x) noexcept(true) __attribute((const)); extern _Float128 __floorf128(_Float128 __x) noexcept(true) __attribute((const)); 
# 168
extern _Float128 fmodf128(_Float128 __x, _Float128 __y) noexcept(true); extern _Float128 __fmodf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float128 copysignf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __copysignf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 203
extern _Float128 nanf128(const char * __tagb) noexcept(true); extern _Float128 __nanf128(const char * __tagb) noexcept(true); 
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float128 j0f128(_Float128) noexcept(true); extern _Float128 __j0f128(_Float128) noexcept(true); 
# 221
extern _Float128 j1f128(_Float128) noexcept(true); extern _Float128 __j1f128(_Float128) noexcept(true); 
# 222
extern _Float128 jnf128(int, _Float128) noexcept(true); extern _Float128 __jnf128(int, _Float128) noexcept(true); 
# 223
extern _Float128 y0f128(_Float128) noexcept(true); extern _Float128 __y0f128(_Float128) noexcept(true); 
# 224
extern _Float128 y1f128(_Float128) noexcept(true); extern _Float128 __y1f128(_Float128) noexcept(true); 
# 225
extern _Float128 ynf128(int, _Float128) noexcept(true); extern _Float128 __ynf128(int, _Float128) noexcept(true); 
# 231
extern _Float128 erff128(_Float128) noexcept(true); extern _Float128 __erff128(_Float128) noexcept(true); 
# 232
extern _Float128 erfcf128(_Float128) noexcept(true); extern _Float128 __erfcf128(_Float128) noexcept(true); 
# 233
extern _Float128 lgammaf128(_Float128) noexcept(true); extern _Float128 __lgammaf128(_Float128) noexcept(true); 
# 238
extern _Float128 tgammaf128(_Float128) noexcept(true); extern _Float128 __tgammaf128(_Float128) noexcept(true); 
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float128 lgammaf128_r(_Float128, int * __signgamp) noexcept(true); extern _Float128 __lgammaf128_r(_Float128, int * __signgamp) noexcept(true); 
# 259
extern _Float128 rintf128(_Float128 __x) noexcept(true); extern _Float128 __rintf128(_Float128 __x) noexcept(true); 
# 262
extern _Float128 nextafterf128(_Float128 __x, _Float128 __y) noexcept(true); extern _Float128 __nextafterf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 269
extern _Float128 nextdownf128(_Float128 __x) noexcept(true); extern _Float128 __nextdownf128(_Float128 __x) noexcept(true); 
# 271
extern _Float128 nextupf128(_Float128 __x) noexcept(true); extern _Float128 __nextupf128(_Float128 __x) noexcept(true); 
# 275
extern _Float128 remainderf128(_Float128 __x, _Float128 __y) noexcept(true); extern _Float128 __remainderf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 279
extern _Float128 scalbnf128(_Float128 __x, int __n) noexcept(true); extern _Float128 __scalbnf128(_Float128 __x, int __n) noexcept(true); 
# 283
extern int ilogbf128(_Float128 __x) noexcept(true); extern int __ilogbf128(_Float128 __x) noexcept(true); 
# 288
extern long llogbf128(_Float128 __x) noexcept(true); extern long __llogbf128(_Float128 __x) noexcept(true); 
# 293
extern _Float128 scalblnf128(_Float128 __x, long __n) noexcept(true); extern _Float128 __scalblnf128(_Float128 __x, long __n) noexcept(true); 
# 297
extern _Float128 nearbyintf128(_Float128 __x) noexcept(true); extern _Float128 __nearbyintf128(_Float128 __x) noexcept(true); 
# 301
extern _Float128 roundf128(_Float128 __x) noexcept(true) __attribute((const)); extern _Float128 __roundf128(_Float128 __x) noexcept(true) __attribute((const)); 
# 305
extern _Float128 truncf128(_Float128 __x) noexcept(true) __attribute((const)); extern _Float128 __truncf128(_Float128 __x) noexcept(true) __attribute((const)); 
# 310
extern _Float128 remquof128(_Float128 __x, _Float128 __y, int * __quo) noexcept(true); extern _Float128 __remquof128(_Float128 __x, _Float128 __y, int * __quo) noexcept(true); 
# 317
extern long lrintf128(_Float128 __x) noexcept(true); extern long __lrintf128(_Float128 __x) noexcept(true); 
# 319
__extension__ extern long long llrintf128(_Float128 __x) noexcept(true); extern long long __llrintf128(_Float128 __x) noexcept(true); 
# 323
extern long lroundf128(_Float128 __x) noexcept(true); extern long __lroundf128(_Float128 __x) noexcept(true); 
# 325
__extension__ extern long long llroundf128(_Float128 __x) noexcept(true); extern long long __llroundf128(_Float128 __x) noexcept(true); 
# 329
extern _Float128 fdimf128(_Float128 __x, _Float128 __y) noexcept(true); extern _Float128 __fdimf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 333
extern _Float128 fmaxf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fmaxf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 336
extern _Float128 fminf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fminf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 340
extern _Float128 fmaf128(_Float128 __x, _Float128 __y, _Float128 __z) noexcept(true); extern _Float128 __fmaf128(_Float128 __x, _Float128 __y, _Float128 __z) noexcept(true); 
# 345
extern _Float128 roundevenf128(_Float128 __x) noexcept(true) __attribute((const)); extern _Float128 __roundevenf128(_Float128 __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpf128(_Float128 __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpf128(_Float128 __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpf128(_Float128 __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpf128(_Float128 __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxf128(_Float128 __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxf128(_Float128 __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxf128(_Float128 __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxf128(_Float128 __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizef128(_Float128 * __cx, const _Float128 * __x) noexcept(true); 
# 377
extern _Float128 fmaxmagf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fmaxmagf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 380
extern _Float128 fminmagf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fminmagf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 385
extern _Float128 fmaximumf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fmaximumf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 388
extern _Float128 fminimumf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fminimumf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 391
extern _Float128 fmaximum_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fmaximum_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 394
extern _Float128 fminimum_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fminimum_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 397
extern _Float128 fmaximum_magf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fmaximum_magf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 400
extern _Float128 fminimum_magf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fminimum_magf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 403
extern _Float128 fmaximum_mag_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fmaximum_mag_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 406
extern _Float128 fminimum_mag_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); extern _Float128 __fminimum_mag_numf128(_Float128 __x, _Float128 __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderf128(const _Float128 * __x, const _Float128 * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagf128(const _Float128 * __x, const _Float128 * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern _Float128 getpayloadf128(const _Float128 * __x) noexcept(true); extern _Float128 __getpayloadf128(const _Float128 * __x) noexcept(true); 
# 424
extern int setpayloadf128(_Float128 * __x, _Float128 __payload) noexcept(true); 
# 427
extern int setpayloadsigf128(_Float128 * __x, _Float128 __payload) noexcept(true); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32x acosf32x(_Float32x __x) noexcept(true); extern _Float32x __acosf32x(_Float32x __x) noexcept(true); 
# 55
extern _Float32x asinf32x(_Float32x __x) noexcept(true); extern _Float32x __asinf32x(_Float32x __x) noexcept(true); 
# 57
extern _Float32x atanf32x(_Float32x __x) noexcept(true); extern _Float32x __atanf32x(_Float32x __x) noexcept(true); 
# 59
extern _Float32x atan2f32x(_Float32x __y, _Float32x __x) noexcept(true); extern _Float32x __atan2f32x(_Float32x __y, _Float32x __x) noexcept(true); 
# 62
extern _Float32x cosf32x(_Float32x __x) noexcept(true); extern _Float32x __cosf32x(_Float32x __x) noexcept(true); 
# 64
extern _Float32x sinf32x(_Float32x __x) noexcept(true); extern _Float32x __sinf32x(_Float32x __x) noexcept(true); 
# 66
extern _Float32x tanf32x(_Float32x __x) noexcept(true); extern _Float32x __tanf32x(_Float32x __x) noexcept(true); 
# 71
extern _Float32x coshf32x(_Float32x __x) noexcept(true); extern _Float32x __coshf32x(_Float32x __x) noexcept(true); 
# 73
extern _Float32x sinhf32x(_Float32x __x) noexcept(true); extern _Float32x __sinhf32x(_Float32x __x) noexcept(true); 
# 75
extern _Float32x tanhf32x(_Float32x __x) noexcept(true); extern _Float32x __tanhf32x(_Float32x __x) noexcept(true); 
# 79
extern void sincosf32x(_Float32x __x, _Float32x * __sinx, _Float32x * __cosx) noexcept(true); extern void __sincosf32x(_Float32x __x, _Float32x * __sinx, _Float32x * __cosx) noexcept(true); 
# 85
extern _Float32x acoshf32x(_Float32x __x) noexcept(true); extern _Float32x __acoshf32x(_Float32x __x) noexcept(true); 
# 87
extern _Float32x asinhf32x(_Float32x __x) noexcept(true); extern _Float32x __asinhf32x(_Float32x __x) noexcept(true); 
# 89
extern _Float32x atanhf32x(_Float32x __x) noexcept(true); extern _Float32x __atanhf32x(_Float32x __x) noexcept(true); 
# 95
extern _Float32x expf32x(_Float32x __x) noexcept(true); extern _Float32x __expf32x(_Float32x __x) noexcept(true); 
# 98
extern _Float32x frexpf32x(_Float32x __x, int * __exponent) noexcept(true); extern _Float32x __frexpf32x(_Float32x __x, int * __exponent) noexcept(true); 
# 101
extern _Float32x ldexpf32x(_Float32x __x, int __exponent) noexcept(true); extern _Float32x __ldexpf32x(_Float32x __x, int __exponent) noexcept(true); 
# 104
extern _Float32x logf32x(_Float32x __x) noexcept(true); extern _Float32x __logf32x(_Float32x __x) noexcept(true); 
# 107
extern _Float32x log10f32x(_Float32x __x) noexcept(true); extern _Float32x __log10f32x(_Float32x __x) noexcept(true); 
# 110
extern _Float32x modff32x(_Float32x __x, _Float32x * __iptr) noexcept(true); extern _Float32x __modff32x(_Float32x __x, _Float32x * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern _Float32x exp10f32x(_Float32x __x) noexcept(true); extern _Float32x __exp10f32x(_Float32x __x) noexcept(true); 
# 119
extern _Float32x expm1f32x(_Float32x __x) noexcept(true); extern _Float32x __expm1f32x(_Float32x __x) noexcept(true); 
# 122
extern _Float32x log1pf32x(_Float32x __x) noexcept(true); extern _Float32x __log1pf32x(_Float32x __x) noexcept(true); 
# 125
extern _Float32x logbf32x(_Float32x __x) noexcept(true); extern _Float32x __logbf32x(_Float32x __x) noexcept(true); 
# 130
extern _Float32x exp2f32x(_Float32x __x) noexcept(true); extern _Float32x __exp2f32x(_Float32x __x) noexcept(true); 
# 133
extern _Float32x log2f32x(_Float32x __x) noexcept(true); extern _Float32x __log2f32x(_Float32x __x) noexcept(true); 
# 140
extern _Float32x powf32x(_Float32x __x, _Float32x __y) noexcept(true); extern _Float32x __powf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 143
extern _Float32x sqrtf32x(_Float32x __x) noexcept(true); extern _Float32x __sqrtf32x(_Float32x __x) noexcept(true); 
# 147
extern _Float32x hypotf32x(_Float32x __x, _Float32x __y) noexcept(true); extern _Float32x __hypotf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 152
extern _Float32x cbrtf32x(_Float32x __x) noexcept(true); extern _Float32x __cbrtf32x(_Float32x __x) noexcept(true); 
# 159
extern _Float32x ceilf32x(_Float32x __x) noexcept(true) __attribute((const)); extern _Float32x __ceilf32x(_Float32x __x) noexcept(true) __attribute((const)); 
# 162
extern _Float32x fabsf32x(_Float32x __x) noexcept(true) __attribute((const)); extern _Float32x __fabsf32x(_Float32x __x) noexcept(true) __attribute((const)); 
# 165
extern _Float32x floorf32x(_Float32x __x) noexcept(true) __attribute((const)); extern _Float32x __floorf32x(_Float32x __x) noexcept(true) __attribute((const)); 
# 168
extern _Float32x fmodf32x(_Float32x __x, _Float32x __y) noexcept(true); extern _Float32x __fmodf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32x copysignf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __copysignf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 203
extern _Float32x nanf32x(const char * __tagb) noexcept(true); extern _Float32x __nanf32x(const char * __tagb) noexcept(true); 
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32x j0f32x(_Float32x) noexcept(true); extern _Float32x __j0f32x(_Float32x) noexcept(true); 
# 221
extern _Float32x j1f32x(_Float32x) noexcept(true); extern _Float32x __j1f32x(_Float32x) noexcept(true); 
# 222
extern _Float32x jnf32x(int, _Float32x) noexcept(true); extern _Float32x __jnf32x(int, _Float32x) noexcept(true); 
# 223
extern _Float32x y0f32x(_Float32x) noexcept(true); extern _Float32x __y0f32x(_Float32x) noexcept(true); 
# 224
extern _Float32x y1f32x(_Float32x) noexcept(true); extern _Float32x __y1f32x(_Float32x) noexcept(true); 
# 225
extern _Float32x ynf32x(int, _Float32x) noexcept(true); extern _Float32x __ynf32x(int, _Float32x) noexcept(true); 
# 231
extern _Float32x erff32x(_Float32x) noexcept(true); extern _Float32x __erff32x(_Float32x) noexcept(true); 
# 232
extern _Float32x erfcf32x(_Float32x) noexcept(true); extern _Float32x __erfcf32x(_Float32x) noexcept(true); 
# 233
extern _Float32x lgammaf32x(_Float32x) noexcept(true); extern _Float32x __lgammaf32x(_Float32x) noexcept(true); 
# 238
extern _Float32x tgammaf32x(_Float32x) noexcept(true); extern _Float32x __tgammaf32x(_Float32x) noexcept(true); 
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float32x lgammaf32x_r(_Float32x, int * __signgamp) noexcept(true); extern _Float32x __lgammaf32x_r(_Float32x, int * __signgamp) noexcept(true); 
# 259
extern _Float32x rintf32x(_Float32x __x) noexcept(true); extern _Float32x __rintf32x(_Float32x __x) noexcept(true); 
# 262
extern _Float32x nextafterf32x(_Float32x __x, _Float32x __y) noexcept(true); extern _Float32x __nextafterf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 269
extern _Float32x nextdownf32x(_Float32x __x) noexcept(true); extern _Float32x __nextdownf32x(_Float32x __x) noexcept(true); 
# 271
extern _Float32x nextupf32x(_Float32x __x) noexcept(true); extern _Float32x __nextupf32x(_Float32x __x) noexcept(true); 
# 275
extern _Float32x remainderf32x(_Float32x __x, _Float32x __y) noexcept(true); extern _Float32x __remainderf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 279
extern _Float32x scalbnf32x(_Float32x __x, int __n) noexcept(true); extern _Float32x __scalbnf32x(_Float32x __x, int __n) noexcept(true); 
# 283
extern int ilogbf32x(_Float32x __x) noexcept(true); extern int __ilogbf32x(_Float32x __x) noexcept(true); 
# 288
extern long llogbf32x(_Float32x __x) noexcept(true); extern long __llogbf32x(_Float32x __x) noexcept(true); 
# 293
extern _Float32x scalblnf32x(_Float32x __x, long __n) noexcept(true); extern _Float32x __scalblnf32x(_Float32x __x, long __n) noexcept(true); 
# 297
extern _Float32x nearbyintf32x(_Float32x __x) noexcept(true); extern _Float32x __nearbyintf32x(_Float32x __x) noexcept(true); 
# 301
extern _Float32x roundf32x(_Float32x __x) noexcept(true) __attribute((const)); extern _Float32x __roundf32x(_Float32x __x) noexcept(true) __attribute((const)); 
# 305
extern _Float32x truncf32x(_Float32x __x) noexcept(true) __attribute((const)); extern _Float32x __truncf32x(_Float32x __x) noexcept(true) __attribute((const)); 
# 310
extern _Float32x remquof32x(_Float32x __x, _Float32x __y, int * __quo) noexcept(true); extern _Float32x __remquof32x(_Float32x __x, _Float32x __y, int * __quo) noexcept(true); 
# 317
extern long lrintf32x(_Float32x __x) noexcept(true); extern long __lrintf32x(_Float32x __x) noexcept(true); 
# 319
__extension__ extern long long llrintf32x(_Float32x __x) noexcept(true); extern long long __llrintf32x(_Float32x __x) noexcept(true); 
# 323
extern long lroundf32x(_Float32x __x) noexcept(true); extern long __lroundf32x(_Float32x __x) noexcept(true); 
# 325
__extension__ extern long long llroundf32x(_Float32x __x) noexcept(true); extern long long __llroundf32x(_Float32x __x) noexcept(true); 
# 329
extern _Float32x fdimf32x(_Float32x __x, _Float32x __y) noexcept(true); extern _Float32x __fdimf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 333
extern _Float32x fmaxf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fmaxf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 336
extern _Float32x fminf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fminf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 340
extern _Float32x fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) noexcept(true); extern _Float32x __fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) noexcept(true); 
# 345
extern _Float32x roundevenf32x(_Float32x __x) noexcept(true) __attribute((const)); extern _Float32x __roundevenf32x(_Float32x __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxf32x(_Float32x __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizef32x(_Float32x * __cx, const _Float32x * __x) noexcept(true); 
# 377
extern _Float32x fmaxmagf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fmaxmagf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 380
extern _Float32x fminmagf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fminmagf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 385
extern _Float32x fmaximumf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fmaximumf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 388
extern _Float32x fminimumf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fminimumf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 391
extern _Float32x fmaximum_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fmaximum_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 394
extern _Float32x fminimum_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fminimum_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 397
extern _Float32x fmaximum_magf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fmaximum_magf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 400
extern _Float32x fminimum_magf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fminimum_magf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 403
extern _Float32x fmaximum_mag_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fmaximum_mag_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 406
extern _Float32x fminimum_mag_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); extern _Float32x __fminimum_mag_numf32x(_Float32x __x, _Float32x __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderf32x(const _Float32x * __x, const _Float32x * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagf32x(const _Float32x * __x, const _Float32x * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern _Float32x getpayloadf32x(const _Float32x * __x) noexcept(true); extern _Float32x __getpayloadf32x(const _Float32x * __x) noexcept(true); 
# 424
extern int setpayloadf32x(_Float32x * __x, _Float32x __payload) noexcept(true); 
# 427
extern int setpayloadsigf32x(_Float32x * __x, _Float32x __payload) noexcept(true); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64x acosf64x(_Float64x __x) noexcept(true); extern _Float64x __acosf64x(_Float64x __x) noexcept(true); 
# 55
extern _Float64x asinf64x(_Float64x __x) noexcept(true); extern _Float64x __asinf64x(_Float64x __x) noexcept(true); 
# 57
extern _Float64x atanf64x(_Float64x __x) noexcept(true); extern _Float64x __atanf64x(_Float64x __x) noexcept(true); 
# 59
extern _Float64x atan2f64x(_Float64x __y, _Float64x __x) noexcept(true); extern _Float64x __atan2f64x(_Float64x __y, _Float64x __x) noexcept(true); 
# 62
extern _Float64x cosf64x(_Float64x __x) noexcept(true); extern _Float64x __cosf64x(_Float64x __x) noexcept(true); 
# 64
extern _Float64x sinf64x(_Float64x __x) noexcept(true); extern _Float64x __sinf64x(_Float64x __x) noexcept(true); 
# 66
extern _Float64x tanf64x(_Float64x __x) noexcept(true); extern _Float64x __tanf64x(_Float64x __x) noexcept(true); 
# 71
extern _Float64x coshf64x(_Float64x __x) noexcept(true); extern _Float64x __coshf64x(_Float64x __x) noexcept(true); 
# 73
extern _Float64x sinhf64x(_Float64x __x) noexcept(true); extern _Float64x __sinhf64x(_Float64x __x) noexcept(true); 
# 75
extern _Float64x tanhf64x(_Float64x __x) noexcept(true); extern _Float64x __tanhf64x(_Float64x __x) noexcept(true); 
# 79
extern void sincosf64x(_Float64x __x, _Float64x * __sinx, _Float64x * __cosx) noexcept(true); extern void __sincosf64x(_Float64x __x, _Float64x * __sinx, _Float64x * __cosx) noexcept(true); 
# 85
extern _Float64x acoshf64x(_Float64x __x) noexcept(true); extern _Float64x __acoshf64x(_Float64x __x) noexcept(true); 
# 87
extern _Float64x asinhf64x(_Float64x __x) noexcept(true); extern _Float64x __asinhf64x(_Float64x __x) noexcept(true); 
# 89
extern _Float64x atanhf64x(_Float64x __x) noexcept(true); extern _Float64x __atanhf64x(_Float64x __x) noexcept(true); 
# 95
extern _Float64x expf64x(_Float64x __x) noexcept(true); extern _Float64x __expf64x(_Float64x __x) noexcept(true); 
# 98
extern _Float64x frexpf64x(_Float64x __x, int * __exponent) noexcept(true); extern _Float64x __frexpf64x(_Float64x __x, int * __exponent) noexcept(true); 
# 101
extern _Float64x ldexpf64x(_Float64x __x, int __exponent) noexcept(true); extern _Float64x __ldexpf64x(_Float64x __x, int __exponent) noexcept(true); 
# 104
extern _Float64x logf64x(_Float64x __x) noexcept(true); extern _Float64x __logf64x(_Float64x __x) noexcept(true); 
# 107
extern _Float64x log10f64x(_Float64x __x) noexcept(true); extern _Float64x __log10f64x(_Float64x __x) noexcept(true); 
# 110
extern _Float64x modff64x(_Float64x __x, _Float64x * __iptr) noexcept(true); extern _Float64x __modff64x(_Float64x __x, _Float64x * __iptr) noexcept(true) __attribute((__nonnull__(2))); 
# 114
extern _Float64x exp10f64x(_Float64x __x) noexcept(true); extern _Float64x __exp10f64x(_Float64x __x) noexcept(true); 
# 119
extern _Float64x expm1f64x(_Float64x __x) noexcept(true); extern _Float64x __expm1f64x(_Float64x __x) noexcept(true); 
# 122
extern _Float64x log1pf64x(_Float64x __x) noexcept(true); extern _Float64x __log1pf64x(_Float64x __x) noexcept(true); 
# 125
extern _Float64x logbf64x(_Float64x __x) noexcept(true); extern _Float64x __logbf64x(_Float64x __x) noexcept(true); 
# 130
extern _Float64x exp2f64x(_Float64x __x) noexcept(true); extern _Float64x __exp2f64x(_Float64x __x) noexcept(true); 
# 133
extern _Float64x log2f64x(_Float64x __x) noexcept(true); extern _Float64x __log2f64x(_Float64x __x) noexcept(true); 
# 140
extern _Float64x powf64x(_Float64x __x, _Float64x __y) noexcept(true); extern _Float64x __powf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 143
extern _Float64x sqrtf64x(_Float64x __x) noexcept(true); extern _Float64x __sqrtf64x(_Float64x __x) noexcept(true); 
# 147
extern _Float64x hypotf64x(_Float64x __x, _Float64x __y) noexcept(true); extern _Float64x __hypotf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 152
extern _Float64x cbrtf64x(_Float64x __x) noexcept(true); extern _Float64x __cbrtf64x(_Float64x __x) noexcept(true); 
# 159
extern _Float64x ceilf64x(_Float64x __x) noexcept(true) __attribute((const)); extern _Float64x __ceilf64x(_Float64x __x) noexcept(true) __attribute((const)); 
# 162
extern _Float64x fabsf64x(_Float64x __x) noexcept(true) __attribute((const)); extern _Float64x __fabsf64x(_Float64x __x) noexcept(true) __attribute((const)); 
# 165
extern _Float64x floorf64x(_Float64x __x) noexcept(true) __attribute((const)); extern _Float64x __floorf64x(_Float64x __x) noexcept(true) __attribute((const)); 
# 168
extern _Float64x fmodf64x(_Float64x __x, _Float64x __y) noexcept(true); extern _Float64x __fmodf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64x copysignf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __copysignf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 203
extern _Float64x nanf64x(const char * __tagb) noexcept(true); extern _Float64x __nanf64x(const char * __tagb) noexcept(true); 
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64x j0f64x(_Float64x) noexcept(true); extern _Float64x __j0f64x(_Float64x) noexcept(true); 
# 221
extern _Float64x j1f64x(_Float64x) noexcept(true); extern _Float64x __j1f64x(_Float64x) noexcept(true); 
# 222
extern _Float64x jnf64x(int, _Float64x) noexcept(true); extern _Float64x __jnf64x(int, _Float64x) noexcept(true); 
# 223
extern _Float64x y0f64x(_Float64x) noexcept(true); extern _Float64x __y0f64x(_Float64x) noexcept(true); 
# 224
extern _Float64x y1f64x(_Float64x) noexcept(true); extern _Float64x __y1f64x(_Float64x) noexcept(true); 
# 225
extern _Float64x ynf64x(int, _Float64x) noexcept(true); extern _Float64x __ynf64x(int, _Float64x) noexcept(true); 
# 231
extern _Float64x erff64x(_Float64x) noexcept(true); extern _Float64x __erff64x(_Float64x) noexcept(true); 
# 232
extern _Float64x erfcf64x(_Float64x) noexcept(true); extern _Float64x __erfcf64x(_Float64x) noexcept(true); 
# 233
extern _Float64x lgammaf64x(_Float64x) noexcept(true); extern _Float64x __lgammaf64x(_Float64x) noexcept(true); 
# 238
extern _Float64x tgammaf64x(_Float64x) noexcept(true); extern _Float64x __tgammaf64x(_Float64x) noexcept(true); 
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern _Float64x lgammaf64x_r(_Float64x, int * __signgamp) noexcept(true); extern _Float64x __lgammaf64x_r(_Float64x, int * __signgamp) noexcept(true); 
# 259
extern _Float64x rintf64x(_Float64x __x) noexcept(true); extern _Float64x __rintf64x(_Float64x __x) noexcept(true); 
# 262
extern _Float64x nextafterf64x(_Float64x __x, _Float64x __y) noexcept(true); extern _Float64x __nextafterf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 269
extern _Float64x nextdownf64x(_Float64x __x) noexcept(true); extern _Float64x __nextdownf64x(_Float64x __x) noexcept(true); 
# 271
extern _Float64x nextupf64x(_Float64x __x) noexcept(true); extern _Float64x __nextupf64x(_Float64x __x) noexcept(true); 
# 275
extern _Float64x remainderf64x(_Float64x __x, _Float64x __y) noexcept(true); extern _Float64x __remainderf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 279
extern _Float64x scalbnf64x(_Float64x __x, int __n) noexcept(true); extern _Float64x __scalbnf64x(_Float64x __x, int __n) noexcept(true); 
# 283
extern int ilogbf64x(_Float64x __x) noexcept(true); extern int __ilogbf64x(_Float64x __x) noexcept(true); 
# 288
extern long llogbf64x(_Float64x __x) noexcept(true); extern long __llogbf64x(_Float64x __x) noexcept(true); 
# 293
extern _Float64x scalblnf64x(_Float64x __x, long __n) noexcept(true); extern _Float64x __scalblnf64x(_Float64x __x, long __n) noexcept(true); 
# 297
extern _Float64x nearbyintf64x(_Float64x __x) noexcept(true); extern _Float64x __nearbyintf64x(_Float64x __x) noexcept(true); 
# 301
extern _Float64x roundf64x(_Float64x __x) noexcept(true) __attribute((const)); extern _Float64x __roundf64x(_Float64x __x) noexcept(true) __attribute((const)); 
# 305
extern _Float64x truncf64x(_Float64x __x) noexcept(true) __attribute((const)); extern _Float64x __truncf64x(_Float64x __x) noexcept(true) __attribute((const)); 
# 310
extern _Float64x remquof64x(_Float64x __x, _Float64x __y, int * __quo) noexcept(true); extern _Float64x __remquof64x(_Float64x __x, _Float64x __y, int * __quo) noexcept(true); 
# 317
extern long lrintf64x(_Float64x __x) noexcept(true); extern long __lrintf64x(_Float64x __x) noexcept(true); 
# 319
__extension__ extern long long llrintf64x(_Float64x __x) noexcept(true); extern long long __llrintf64x(_Float64x __x) noexcept(true); 
# 323
extern long lroundf64x(_Float64x __x) noexcept(true); extern long __lroundf64x(_Float64x __x) noexcept(true); 
# 325
__extension__ extern long long llroundf64x(_Float64x __x) noexcept(true); extern long long __llroundf64x(_Float64x __x) noexcept(true); 
# 329
extern _Float64x fdimf64x(_Float64x __x, _Float64x __y) noexcept(true); extern _Float64x __fdimf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 333
extern _Float64x fmaxf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fmaxf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 336
extern _Float64x fminf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fminf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 340
extern _Float64x fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) noexcept(true); extern _Float64x __fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) noexcept(true); 
# 345
extern _Float64x roundevenf64x(_Float64x __x) noexcept(true) __attribute((const)); extern _Float64x __roundevenf64x(_Float64x __x) noexcept(true) __attribute((const)); 
# 349
extern __intmax_t fromfpf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); 
# 354
extern __uintmax_t ufromfpf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); 
# 360
extern __intmax_t fromfpxf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); extern __intmax_t __fromfpxf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); 
# 366
extern __uintmax_t ufromfpxf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); extern __uintmax_t __ufromfpxf64x(_Float64x __x, int __round, unsigned __width) noexcept(true); 
# 370
extern int canonicalizef64x(_Float64x * __cx, const _Float64x * __x) noexcept(true); 
# 377
extern _Float64x fmaxmagf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fmaxmagf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 380
extern _Float64x fminmagf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fminmagf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 385
extern _Float64x fmaximumf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fmaximumf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 388
extern _Float64x fminimumf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fminimumf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 391
extern _Float64x fmaximum_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fmaximum_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 394
extern _Float64x fminimum_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fminimum_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 397
extern _Float64x fmaximum_magf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fmaximum_magf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 400
extern _Float64x fminimum_magf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fminimum_magf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 403
extern _Float64x fmaximum_mag_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fmaximum_mag_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 406
extern _Float64x fminimum_mag_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); extern _Float64x __fminimum_mag_numf64x(_Float64x __x, _Float64x __y) noexcept(true) __attribute((const)); 
# 411
extern int totalorderf64x(const _Float64x * __x, const _Float64x * __y) noexcept(true)
# 413
 __attribute((__pure__)); 
# 416
extern int totalordermagf64x(const _Float64x * __x, const _Float64x * __y) noexcept(true)
# 418
 __attribute((__pure__)); 
# 421
extern _Float64x getpayloadf64x(const _Float64x * __x) noexcept(true); extern _Float64x __getpayloadf64x(const _Float64x * __x) noexcept(true); 
# 424
extern int setpayloadf64x(_Float64x * __x, _Float64x __payload) noexcept(true); 
# 427
extern int setpayloadsigf64x(_Float64x * __x, _Float64x __payload) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern float fadd(double __x, double __y) noexcept(true); 
# 27
extern float fdiv(double __x, double __y) noexcept(true); 
# 30
extern float ffma(double __x, double __y, double __z) noexcept(true); 
# 33
extern float fmul(double __x, double __y) noexcept(true); 
# 36
extern float fsqrt(double __x) noexcept(true); 
# 39
extern float fsub(double __x, double __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern float faddl(long double __x, long double __y) noexcept(true); 
# 27
extern float fdivl(long double __x, long double __y) noexcept(true); 
# 30
extern float ffmal(long double __x, long double __y, long double __z) noexcept(true); 
# 33
extern float fmull(long double __x, long double __y) noexcept(true); 
# 36
extern float fsqrtl(long double __x) noexcept(true); 
# 39
extern float fsubl(long double __x, long double __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern double daddl(long double __x, long double __y) noexcept(true); 
# 27
extern double ddivl(long double __x, long double __y) noexcept(true); 
# 30
extern double dfmal(long double __x, long double __y, long double __z) noexcept(true); 
# 33
extern double dmull(long double __x, long double __y) noexcept(true); 
# 36
extern double dsqrtl(long double __x) noexcept(true); 
# 39
extern double dsubl(long double __x, long double __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 27
extern _Float32 f32divf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 30
extern _Float32 f32fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) noexcept(true); 
# 33
extern _Float32 f32mulf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 36
extern _Float32 f32sqrtf32x(_Float32x __x) noexcept(true); 
# 39
extern _Float32 f32subf32x(_Float32x __x, _Float32x __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 27
extern _Float32 f32divf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 30
extern _Float32 f32fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) noexcept(true); 
# 33
extern _Float32 f32mulf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 36
extern _Float32 f32sqrtf64(_Float64 __x) noexcept(true); 
# 39
extern _Float32 f32subf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 27
extern _Float32 f32divf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 30
extern _Float32 f32fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) noexcept(true); 
# 33
extern _Float32 f32mulf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 36
extern _Float32 f32sqrtf64x(_Float64x __x) noexcept(true); 
# 39
extern _Float32 f32subf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 27
extern _Float32 f32divf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 30
extern _Float32 f32fmaf128(_Float128 __x, _Float128 __y, _Float128 __z) noexcept(true); 
# 33
extern _Float32 f32mulf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 36
extern _Float32 f32sqrtf128(_Float128 __x) noexcept(true); 
# 39
extern _Float32 f32subf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32x f32xaddf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 27
extern _Float32x f32xdivf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 30
extern _Float32x f32xfmaf64(_Float64 __x, _Float64 __y, _Float64 __z) noexcept(true); 
# 33
extern _Float32x f32xmulf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 36
extern _Float32x f32xsqrtf64(_Float64 __x) noexcept(true); 
# 39
extern _Float32x f32xsubf64(_Float64 __x, _Float64 __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32x f32xaddf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 27
extern _Float32x f32xdivf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 30
extern _Float32x f32xfmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) noexcept(true); 
# 33
extern _Float32x f32xmulf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 36
extern _Float32x f32xsqrtf64x(_Float64x __x) noexcept(true); 
# 39
extern _Float32x f32xsubf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float32x f32xaddf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 27
extern _Float32x f32xdivf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 30
extern _Float32x f32xfmaf128(_Float128 __x, _Float128 __y, _Float128 __z) noexcept(true); 
# 33
extern _Float32x f32xmulf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 36
extern _Float32x f32xsqrtf128(_Float128 __x) noexcept(true); 
# 39
extern _Float32x f32xsubf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float64 f64addf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 27
extern _Float64 f64divf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 30
extern _Float64 f64fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) noexcept(true); 
# 33
extern _Float64 f64mulf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 36
extern _Float64 f64sqrtf64x(_Float64x __x) noexcept(true); 
# 39
extern _Float64 f64subf64x(_Float64x __x, _Float64x __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float64 f64addf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 27
extern _Float64 f64divf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 30
extern _Float64 f64fmaf128(_Float128 __x, _Float128 __y, _Float128 __z) noexcept(true); 
# 33
extern _Float64 f64mulf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 36
extern _Float64 f64sqrtf128(_Float128 __x) noexcept(true); 
# 39
extern _Float64 f64subf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3
extern _Float64x f64xaddf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 27
extern _Float64x f64xdivf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 30
extern _Float64x f64xfmaf128(_Float128 __x, _Float128 __y, _Float128 __z) noexcept(true); 
# 33
extern _Float64x f64xmulf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 36
extern _Float64x f64xsqrtf128(_Float128 __x) noexcept(true); 
# 39
extern _Float64x f64xsubf128(_Float128 __x, _Float128 __y) noexcept(true); 
# 854 "/usr/include/math.h" 3
extern int signgam; 
# 935 "/usr/include/math.h" 3
enum { 
# 936
FP_NAN, 
# 939
FP_INFINITE, 
# 942
FP_ZERO, 
# 945
FP_SUBNORMAL, 
# 948
FP_NORMAL
# 951
}; 
# 23 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3
extern int __iscanonicall(long double __x) noexcept(true)
# 24
 __attribute((const)); 
# 46 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3
extern "C++" {
# 47
inline int iscanonical(float __val) { return (((void)((__typeof__(__val))__val)), 1); } 
# 48
inline int iscanonical(double __val) { return (((void)((__typeof__(__val))__val)), 1); } 
# 49
inline int iscanonical(long double __val) { return __iscanonicall(__val); } 
# 51
inline int iscanonical(_Float128 __val) { return (((void)((__typeof__(__val))__val)), 1); } 
# 53
}
# 1066 "/usr/include/math.h" 3
extern "C++" {
# 1067
inline int issignaling(float __val) { return __issignalingf(__val); } 
# 1068
inline int issignaling(double __val) { return __issignaling(__val); } 
# 1070
inline int issignaling(long double __val) 
# 1071
{ 
# 1075
return __issignalingl(__val); 
# 1077
} 
# 1081
inline int issignaling(_Float128 __val) { return __issignalingf128(__val); } 
# 1083
}
# 1097 "/usr/include/math.h" 3
extern "C++" {
# 1128 "/usr/include/math.h" 3
template< class __T> inline bool 
# 1129
iszero(__T __val) 
# 1130
{ 
# 1131
return __val == 0; 
# 1132
} 
# 1134
}
# 1363 "/usr/include/math.h" 3
extern "C++" {
# 1364
template< class > struct __iseqsig_type; 
# 1366
template<> struct __iseqsig_type< float>  { 
# 1368
static int __call(float __x, float __y) throw() 
# 1369
{ 
# 1370
return __iseqsigf(__x, __y); 
# 1371
} 
# 1372
}; 
# 1374
template<> struct __iseqsig_type< double>  { 
# 1376
static int __call(double __x, double __y) throw() 
# 1377
{ 
# 1378
return __iseqsig(__x, __y); 
# 1379
} 
# 1380
}; 
# 1382
template<> struct __iseqsig_type< long double>  { 
# 1384
static int __call(long double __x, long double __y) throw() 
# 1385
{ 
# 1387
return __iseqsigl(__x, __y); 
# 1391
} 
# 1392
}; 
# 1397
template<> struct __iseqsig_type< __float128>  { 
# 1399
static int __call(_Float128 __x, _Float128 __y) throw() 
# 1400
{ 
# 1401
return __iseqsigf128(__x, __y); 
# 1402
} 
# 1403
}; 
# 1406
template< class _T1, class _T2> inline int 
# 1408
iseqsig(_T1 __x, _T2 __y) throw() 
# 1409
{ 
# 1411
typedef __decltype(((__x + __y) + (0.0F))) _T3; 
# 1415
return __iseqsig_type< __decltype(((__x + __y) + (0.0F)))> ::__call(__x, __y); 
# 1416
} 
# 1418
}
# 1423
}
# 34 "/usr/include/stdlib.h" 3
extern "C" {
# 63 "/usr/include/stdlib.h" 3
typedef 
# 60
struct { 
# 61
int quot; 
# 62
int rem; 
# 63
} div_t; 
# 71
typedef 
# 68
struct { 
# 69
long quot; 
# 70
long rem; 
# 71
} ldiv_t; 
# 81
__extension__ typedef 
# 78
struct { 
# 79
long long quot; 
# 80
long long rem; 
# 81
} lldiv_t; 
# 98 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() noexcept(true); 
# 102
extern double atof(const char * __nptr) noexcept(true)
# 103
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 105
extern int atoi(const char * __nptr) noexcept(true)
# 106
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 108
extern long atol(const char * __nptr) noexcept(true)
# 109
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 113
__extension__ extern long long atoll(const char * __nptr) noexcept(true)
# 114
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 118
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 120
 __attribute((__nonnull__(1))); 
# 124
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 125
 __attribute((__nonnull__(1))); 
# 127
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 129
 __attribute((__nonnull__(1))); 
# 141 "/usr/include/stdlib.h" 3
extern _Float32 strtof32(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 143
 __attribute((__nonnull__(1))); 
# 147
extern _Float64 strtof64(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 149
 __attribute((__nonnull__(1))); 
# 153
extern _Float128 strtof128(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 155
 __attribute((__nonnull__(1))); 
# 159
extern _Float32x strtof32x(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 161
 __attribute((__nonnull__(1))); 
# 165
extern _Float64x strtof64x(const char *__restrict__ __nptr, char **__restrict__ __endptr) noexcept(true)
# 167
 __attribute((__nonnull__(1))); 
# 177 "/usr/include/stdlib.h" 3
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) noexcept(true)
# 179
 __attribute((__nonnull__(1))); 
# 181
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) noexcept(true)
# 183
 __attribute((__nonnull__(1))); 
# 188
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) noexcept(true)
# 190
 __attribute((__nonnull__(1))); 
# 193
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) noexcept(true)
# 195
 __attribute((__nonnull__(1))); 
# 201
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) noexcept(true)
# 203
 __attribute((__nonnull__(1))); 
# 206
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) noexcept(true)
# 208
 __attribute((__nonnull__(1))); 
# 213
extern int strfromd(char * __dest, size_t __size, const char * __format, double __f) noexcept(true)
# 215
 __attribute((__nonnull__(3))); 
# 217
extern int strfromf(char * __dest, size_t __size, const char * __format, float __f) noexcept(true)
# 219
 __attribute((__nonnull__(3))); 
# 221
extern int strfroml(char * __dest, size_t __size, const char * __format, long double __f) noexcept(true)
# 223
 __attribute((__nonnull__(3))); 
# 233 "/usr/include/stdlib.h" 3
extern int strfromf32(char * __dest, size_t __size, const char * __format, _Float32 __f) noexcept(true)
# 235
 __attribute((__nonnull__(3))); 
# 239
extern int strfromf64(char * __dest, size_t __size, const char * __format, _Float64 __f) noexcept(true)
# 241
 __attribute((__nonnull__(3))); 
# 245
extern int strfromf128(char * __dest, size_t __size, const char * __format, _Float128 __f) noexcept(true)
# 247
 __attribute((__nonnull__(3))); 
# 251
extern int strfromf32x(char * __dest, size_t __size, const char * __format, _Float32x __f) noexcept(true)
# 253
 __attribute((__nonnull__(3))); 
# 257
extern int strfromf64x(char * __dest, size_t __size, const char * __format, _Float64x __f) noexcept(true)
# 259
 __attribute((__nonnull__(3))); 
# 275 "/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) noexcept(true)
# 277
 __attribute((__nonnull__(1, 4))); 
# 279
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) noexcept(true)
# 282
 __attribute((__nonnull__(1, 4))); 
# 285
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) noexcept(true)
# 288
 __attribute((__nonnull__(1, 4))); 
# 291
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) noexcept(true)
# 294
 __attribute((__nonnull__(1, 4))); 
# 296
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 298
 __attribute((__nonnull__(1, 3))); 
# 300
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 302
 __attribute((__nonnull__(1, 3))); 
# 304
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 307
 __attribute((__nonnull__(1, 3))); 
# 317 "/usr/include/stdlib.h" 3
extern _Float32 strtof32_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 320
 __attribute((__nonnull__(1, 3))); 
# 324
extern _Float64 strtof64_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 327
 __attribute((__nonnull__(1, 3))); 
# 331
extern _Float128 strtof128_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 334
 __attribute((__nonnull__(1, 3))); 
# 338
extern _Float32x strtof32x_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 341
 __attribute((__nonnull__(1, 3))); 
# 345
extern _Float64x strtof64x_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) noexcept(true)
# 348
 __attribute((__nonnull__(1, 3))); 
# 386 "/usr/include/stdlib.h" 3
extern char *l64a(long __n) noexcept(true); 
# 389
extern long a64l(const char * __s) noexcept(true)
# 390
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 42
typedef __loff_t loff_t; 
# 47
typedef __ino_t ino_t; 
# 54
typedef __ino64_t ino64_t; 
# 59
typedef __dev_t dev_t; 
# 64
typedef __gid_t gid_t; 
# 69
typedef __mode_t mode_t; 
# 74
typedef __nlink_t nlink_t; 
# 79
typedef __uid_t uid_t; 
# 85
typedef __off_t off_t; 
# 92
typedef __off64_t off64_t; 
# 103 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __id_t id_t; 
# 108
typedef __ssize_t ssize_t; 
# 114
typedef __daddr_t daddr_t; 
# 115
typedef __caddr_t caddr_t; 
# 121
typedef __key_t key_t; 
# 134 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 138
typedef __suseconds_t suseconds_t; 
# 148 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long ulong; 
# 149
typedef unsigned short ushort; 
# 150
typedef unsigned uint; 
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3
typedef __int8_t int8_t; 
# 25
typedef __int16_t int16_t; 
# 26
typedef __int32_t int32_t; 
# 27
typedef __int64_t int64_t; 
# 158 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __uint8_t u_int8_t; 
# 159
typedef __uint16_t u_int16_t; 
# 160
typedef __uint32_t u_int32_t; 
# 161
typedef __uint64_t u_int64_t; 
# 164
typedef long register_t __attribute((__mode__(__word__))); 
# 34 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
static inline __uint16_t __bswap_16(__uint16_t __bsx) 
# 35
{ 
# 37
return __builtin_bswap16(__bsx); 
# 41
} 
# 49
static inline __uint32_t __bswap_32(__uint32_t __bsx) 
# 50
{ 
# 52
return __builtin_bswap32(__bsx); 
# 56
} 
# 70 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
__extension__ static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 71
{ 
# 73
return __builtin_bswap64(__bsx); 
# 77
} 
# 33 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3
static inline __uint16_t __uint16_identity(__uint16_t __x) 
# 34
{ 
# 35
return __x; 
# 36
} 
# 39
static inline __uint32_t __uint32_identity(__uint32_t __x) 
# 40
{ 
# 41
return __x; 
# 42
} 
# 45
static inline __uint64_t __uint64_identity(__uint64_t __x) 
# 46
{ 
# 47
return __x; 
# 48
} 
# 8 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 3
typedef 
# 6
struct { 
# 7
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 8
} __sigset_t; 
# 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 3
typedef __sigset_t sigset_t; 
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef long __fd_mask; 
# 70 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef 
# 60
struct { 
# 64
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 70
} fd_set; 
# 77
typedef __fd_mask fd_mask; 
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" {
# 102 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 127 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 153 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
}
# 185 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 192
typedef __blkcnt_t blkcnt_t; 
# 196
typedef __fsblkcnt_t fsblkcnt_t; 
# 200
typedef __fsfilcnt_t fsfilcnt_t; 
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 220
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 221
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 33 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 3
typedef 
# 26
union { 
# 27
__extension__ unsigned long long __value64; 
# 29
struct { 
# 30
unsigned __low; 
# 31
unsigned __high; 
# 32
} __value32; 
# 33
} __atomic_wide_counter; 
# 55 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3
typedef 
# 51
struct __pthread_internal_list { 
# 53
__pthread_internal_list *__prev; 
# 54
__pthread_internal_list *__next; 
# 55
} __pthread_list_t; 
# 60
typedef 
# 57
struct __pthread_internal_slist { 
# 59
__pthread_internal_slist *__next; 
# 60
} __pthread_slist_t; 
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3
struct __pthread_mutex_s { 
# 24
int __lock; 
# 25
unsigned __count; 
# 26
int __owner; 
# 28
unsigned __nusers; 
# 32
int __kind; 
# 34
short __spins; 
# 35
short __elision; 
# 36
__pthread_list_t __list; 
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3
}; 
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3
struct __pthread_rwlock_arch_t { 
# 25
unsigned __readers; 
# 26
unsigned __writers; 
# 27
unsigned __wrphase_futex; 
# 28
unsigned __writers_futex; 
# 29
unsigned __pad3; 
# 30
unsigned __pad4; 
# 32
int __cur_writer; 
# 33
int __shared; 
# 34
signed char __rwelision; 
# 39
unsigned char __pad1[7]; 
# 42
unsigned long __pad2; 
# 45
unsigned __flags; 
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3
}; 
# 94 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3
struct __pthread_cond_s { 
# 96
__atomic_wide_counter __wseq; 
# 97
__atomic_wide_counter __g1_start; 
# 98
unsigned __g_refs[2]; 
# 99
unsigned __g_size[2]; 
# 100
unsigned __g1_orig_size; 
# 101
unsigned __wrefs; 
# 102
unsigned __g_signals[2]; 
# 103
}; 
# 105
typedef unsigned __tss_t; 
# 106
typedef unsigned long __thrd_t; 
# 111
typedef 
# 109
struct { 
# 110
int __data; 
# 111
} __once_flag; 
# 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 36
typedef 
# 33
union { 
# 34
char __size[4]; 
# 35
int __align; 
# 36
} pthread_mutexattr_t; 
# 45
typedef 
# 42
union { 
# 43
char __size[4]; 
# 44
int __align; 
# 45
} pthread_condattr_t; 
# 49
typedef unsigned pthread_key_t; 
# 53
typedef int pthread_once_t; 
# 56
union pthread_attr_t { 
# 58
char __size[56]; 
# 59
long __align; 
# 60
}; 
# 62
typedef pthread_attr_t pthread_attr_t; 
# 72
typedef 
# 68
union { 
# 69
__pthread_mutex_s __data; 
# 70
char __size[40]; 
# 71
long __align; 
# 72
} pthread_mutex_t; 
# 80
typedef 
# 76
union { 
# 77
__pthread_cond_s __data; 
# 78
char __size[48]; 
# 79
__extension__ long long __align; 
# 80
} pthread_cond_t; 
# 91
typedef 
# 87
union { 
# 88
__pthread_rwlock_arch_t __data; 
# 89
char __size[56]; 
# 90
long __align; 
# 91
} pthread_rwlock_t; 
# 97
typedef 
# 94
union { 
# 95
char __size[8]; 
# 96
long __align; 
# 97
} pthread_rwlockattr_t; 
# 103
typedef volatile int pthread_spinlock_t; 
# 112
typedef 
# 109
union { 
# 110
char __size[32]; 
# 111
long __align; 
# 112
} pthread_barrier_t; 
# 118
typedef 
# 115
union { 
# 116
char __size[4]; 
# 117
int __align; 
# 118
} pthread_barrierattr_t; 
# 230 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
}
# 402 "/usr/include/stdlib.h" 3
extern long random() noexcept(true); 
# 405
extern void srandom(unsigned __seed) noexcept(true); 
# 411
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) noexcept(true)
# 412
 __attribute((__nonnull__(2))); 
# 416
extern char *setstate(char * __statebuf) noexcept(true) __attribute((__nonnull__(1))); 
# 424
struct random_data { 
# 426
int32_t *fptr; 
# 427
int32_t *rptr; 
# 428
int32_t *state; 
# 429
int rand_type; 
# 430
int rand_deg; 
# 431
int rand_sep; 
# 432
int32_t *end_ptr; 
# 433
}; 
# 435
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) noexcept(true)
# 436
 __attribute((__nonnull__(1, 2))); 
# 438
extern int srandom_r(unsigned __seed, random_data * __buf) noexcept(true)
# 439
 __attribute((__nonnull__(2))); 
# 441
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) noexcept(true)
# 444
 __attribute((__nonnull__(2, 4))); 
# 446
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) noexcept(true)
# 448
 __attribute((__nonnull__(1, 2))); 
# 454
extern int rand() noexcept(true); 
# 456
extern void srand(unsigned __seed) noexcept(true); 
# 460
extern int rand_r(unsigned * __seed) noexcept(true); 
# 468
extern double drand48() noexcept(true); 
# 469
extern double erand48(unsigned short  __xsubi[3]) noexcept(true) __attribute((__nonnull__(1))); 
# 472
extern long lrand48() noexcept(true); 
# 473
extern long nrand48(unsigned short  __xsubi[3]) noexcept(true)
# 474
 __attribute((__nonnull__(1))); 
# 477
extern long mrand48() noexcept(true); 
# 478
extern long jrand48(unsigned short  __xsubi[3]) noexcept(true)
# 479
 __attribute((__nonnull__(1))); 
# 482
extern void srand48(long __seedval) noexcept(true); 
# 483
extern unsigned short *seed48(unsigned short  __seed16v[3]) noexcept(true)
# 484
 __attribute((__nonnull__(1))); 
# 485
extern void lcong48(unsigned short  __param[7]) noexcept(true) __attribute((__nonnull__(1))); 
# 491
struct drand48_data { 
# 493
unsigned short __x[3]; 
# 494
unsigned short __old_x[3]; 
# 495
unsigned short __c; 
# 496
unsigned short __init; 
# 497
__extension__ unsigned long long __a; 
# 499
}; 
# 502
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) noexcept(true)
# 503
 __attribute((__nonnull__(1, 2))); 
# 504
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) noexcept(true)
# 506
 __attribute((__nonnull__(1, 2))); 
# 509
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) noexcept(true)
# 511
 __attribute((__nonnull__(1, 2))); 
# 512
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) noexcept(true)
# 515
 __attribute((__nonnull__(1, 2))); 
# 518
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) noexcept(true)
# 520
 __attribute((__nonnull__(1, 2))); 
# 521
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) noexcept(true)
# 524
 __attribute((__nonnull__(1, 2))); 
# 527
extern int srand48_r(long __seedval, drand48_data * __buffer) noexcept(true)
# 528
 __attribute((__nonnull__(2))); 
# 530
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) noexcept(true)
# 531
 __attribute((__nonnull__(1, 2))); 
# 533
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) noexcept(true)
# 535
 __attribute((__nonnull__(1, 2))); 
# 540
extern void *malloc(size_t __size) noexcept(true) __attribute((__malloc__))
# 541
 __attribute((__alloc_size__(1))); 
# 543
extern void *calloc(size_t __nmemb, size_t __size) noexcept(true)
# 544
 __attribute((__malloc__)) __attribute((__alloc_size__(1, 2))); 
# 551
extern void *realloc(void * __ptr, size_t __size) noexcept(true)
# 552
 __attribute((__warn_unused_result__)) __attribute((__alloc_size__(2))); 
# 555
extern void free(void * __ptr) noexcept(true); 
# 563
extern void *reallocarray(void * __ptr, size_t __nmemb, size_t __size) noexcept(true)
# 564
 __attribute((__warn_unused_result__))
# 565
 __attribute((__alloc_size__(2, 3)))
# 566
 __attribute((__malloc__(__builtin_free, 1))); 
# 569
extern void *reallocarray(void * __ptr, size_t __nmemb, size_t __size) noexcept(true)
# 570
 __attribute((__malloc__(reallocarray, 1))); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) noexcept(true); 
# 38
}
# 580 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) noexcept(true) __attribute((__malloc__))
# 581
 __attribute((__alloc_size__(1))); 
# 586
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) noexcept(true)
# 587
 __attribute((__nonnull__(1))); 
# 592
extern void *aligned_alloc(size_t __alignment, size_t __size) noexcept(true)
# 593
 __attribute((__malloc__)) __attribute((__alloc_align__(1 )))
# 594
 __attribute((__alloc_size__(2))); 
# 598
extern void abort() noexcept(true) __attribute((__noreturn__)); 
# 602
extern int atexit(void (* __func)(void)) noexcept(true) __attribute((__nonnull__(1))); 
# 607
extern "C++" int at_quick_exit(void (* __func)(void)) noexcept(true) __asm__("at_quick_exit")
# 608
 __attribute((__nonnull__(1))); 
# 617 "/usr/include/stdlib.h" 3
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) noexcept(true)
# 618
 __attribute((__nonnull__(1))); 
# 624
extern void exit(int __status) noexcept(true) __attribute((__noreturn__)); 
# 630
extern void quick_exit(int __status) noexcept(true) __attribute((__noreturn__)); 
# 636
extern void _Exit(int __status) noexcept(true) __attribute((__noreturn__)); 
# 641
extern char *getenv(const char * __name) noexcept(true) __attribute((__nonnull__(1))); 
# 646
extern char *secure_getenv(const char * __name) noexcept(true)
# 647
 __attribute((__nonnull__(1))); 
# 654
extern int putenv(char * __string) noexcept(true) __attribute((__nonnull__(1))); 
# 660
extern int setenv(const char * __name, const char * __value, int __replace) noexcept(true)
# 661
 __attribute((__nonnull__(2))); 
# 664
extern int unsetenv(const char * __name) noexcept(true) __attribute((__nonnull__(1))); 
# 671
extern int clearenv() noexcept(true); 
# 682 "/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) noexcept(true) __attribute((__nonnull__(1))); 
# 695 "/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 705 "/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 717 "/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 727 "/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 728
 __attribute((__nonnull__(1))); 
# 738 "/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) noexcept(true) __attribute((__nonnull__(1))); 
# 749 "/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 759 "/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 769 "/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 770
 __attribute((__nonnull__(1))); 
# 781 "/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 782
 __attribute((__nonnull__(1))); 
# 791 "/usr/include/stdlib.h" 3
extern int system(const char * __command); 
# 797
extern char *canonicalize_file_name(const char * __name) noexcept(true)
# 798
 __attribute((__nonnull__(1))) __attribute((__malloc__))
# 799
 __attribute((__malloc__(__builtin_free, 1))); 
# 808 "/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) noexcept(true); 
# 816
typedef int (*__compar_fn_t)(const void *, const void *); 
# 819
typedef __compar_fn_t comparison_fn_t; 
# 823
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 828
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 830
 __attribute((__nonnull__(1, 2, 5))); 
# 838
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 839
 __attribute((__nonnull__(1, 4))); 
# 841
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 843
 __attribute((__nonnull__(1, 4))); 
# 848
extern int abs(int __x) noexcept(true) __attribute((const)); 
# 849
extern long labs(long __x) noexcept(true) __attribute((const)); 
# 852
__extension__ extern long long llabs(long long __x) noexcept(true)
# 853
 __attribute((const)); 
# 860
extern div_t div(int __numer, int __denom) noexcept(true)
# 861
 __attribute((const)); 
# 862
extern ldiv_t ldiv(long __numer, long __denom) noexcept(true)
# 863
 __attribute((const)); 
# 866
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) noexcept(true)
# 868
 __attribute((const)); 
# 880 "/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) noexcept(true)
# 881
 __attribute((__nonnull__(3, 4))); 
# 886
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) noexcept(true)
# 887
 __attribute((__nonnull__(3, 4))); 
# 892
extern char *gcvt(double __value, int __ndigit, char * __buf) noexcept(true)
# 893
 __attribute((__nonnull__(3))); 
# 898
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) noexcept(true)
# 900
 __attribute((__nonnull__(3, 4))); 
# 901
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) noexcept(true)
# 903
 __attribute((__nonnull__(3, 4))); 
# 904
extern char *qgcvt(long double __value, int __ndigit, char * __buf) noexcept(true)
# 905
 __attribute((__nonnull__(3))); 
# 910
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) noexcept(true)
# 912
 __attribute((__nonnull__(3, 4, 5))); 
# 913
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) noexcept(true)
# 915
 __attribute((__nonnull__(3, 4, 5))); 
# 917
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) noexcept(true)
# 920
 __attribute((__nonnull__(3, 4, 5))); 
# 921
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) noexcept(true)
# 924
 __attribute((__nonnull__(3, 4, 5))); 
# 930
extern int mblen(const char * __s, size_t __n) noexcept(true); 
# 933
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) noexcept(true); 
# 937
extern int wctomb(char * __s, wchar_t __wchar) noexcept(true); 
# 941
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) noexcept(true)
# 943
 __attribute((__access__(__read_only__ , 2 ))); 
# 945
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) noexcept(true)
# 948
 __attribute((__access__(__write_only__ , 1 , 3 )))
# 949
 __attribute((__access__(__read_only__ , 2 ))); 
# 956
extern int rpmatch(const char * __response) noexcept(true) __attribute((__nonnull__(1))); 
# 967 "/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) noexcept(true)
# 970
 __attribute((__nonnull__(1, 2, 3))); 
# 978
extern int posix_openpt(int __oflag); 
# 986
extern int grantpt(int __fd) noexcept(true); 
# 990
extern int unlockpt(int __fd) noexcept(true); 
# 995
extern char *ptsname(int __fd) noexcept(true); 
# 1002
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) noexcept(true)
# 1003
 __attribute((__nonnull__(2))) __attribute((__access__(__write_only__ , 2 , 3 ))); 
# 1006
extern int getpt(); 
# 1013
extern int getloadavg(double  __loadavg[], int __nelem) noexcept(true)
# 1014
 __attribute((__nonnull__(1))); 
# 1035 "/usr/include/stdlib.h" 3
}
# 46 "/usr/include/c++/11/bits/std_abs.h" 3
extern "C++" {
# 48
namespace std __attribute((__visibility__("default"))) { 
# 52
using ::abs;
# 56
inline long abs(long __i) { return __builtin_labs(__i); } 
# 61
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 71 "/usr/include/c++/11/bits/std_abs.h" 3
constexpr double abs(double __x) 
# 72
{ return __builtin_fabs(__x); } 
# 75
constexpr float abs(float __x) 
# 76
{ return __builtin_fabsf(__x); } 
# 79
constexpr long double abs(long double __x) 
# 80
{ return __builtin_fabsl(__x); } 
# 85
constexpr __int128 abs(__int128 __x) { return (__x >= (0)) ? __x : (-__x); } 
# 108 "/usr/include/c++/11/bits/std_abs.h" 3
}
# 109
}
# 77 "/usr/include/c++/11/cmath" 3
extern "C++" {
# 79
namespace std __attribute((__visibility__("default"))) { 
# 83
using ::acos;
# 87
constexpr float acos(float __x) 
# 88
{ return __builtin_acosf(__x); } 
# 91
constexpr long double acos(long double __x) 
# 92
{ return __builtin_acosl(__x); } 
# 95
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
acos(_Tp __x) 
# 100
{ return __builtin_acos(__x); } 
# 102
using ::asin;
# 106
constexpr float asin(float __x) 
# 107
{ return __builtin_asinf(__x); } 
# 110
constexpr long double asin(long double __x) 
# 111
{ return __builtin_asinl(__x); } 
# 114
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
asin(_Tp __x) 
# 119
{ return __builtin_asin(__x); } 
# 121
using ::atan;
# 125
constexpr float atan(float __x) 
# 126
{ return __builtin_atanf(__x); } 
# 129
constexpr long double atan(long double __x) 
# 130
{ return __builtin_atanl(__x); } 
# 133
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
atan(_Tp __x) 
# 138
{ return __builtin_atan(__x); } 
# 140
using ::atan2;
# 144
constexpr float atan2(float __y, float __x) 
# 145
{ return __builtin_atan2f(__y, __x); } 
# 148
constexpr long double atan2(long double __y, long double __x) 
# 149
{ return __builtin_atan2l(__y, __x); } 
# 152
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 155
atan2(_Tp __y, _Up __x) 
# 156
{ 
# 157
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 158
return atan2((__type)__y, (__type)__x); 
# 159
} 
# 161
using ::ceil;
# 165
constexpr float ceil(float __x) 
# 166
{ return __builtin_ceilf(__x); } 
# 169
constexpr long double ceil(long double __x) 
# 170
{ return __builtin_ceill(__x); } 
# 173
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 177
ceil(_Tp __x) 
# 178
{ return __builtin_ceil(__x); } 
# 180
using ::cos;
# 184
constexpr float cos(float __x) 
# 185
{ return __builtin_cosf(__x); } 
# 188
constexpr long double cos(long double __x) 
# 189
{ return __builtin_cosl(__x); } 
# 192
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
cos(_Tp __x) 
# 197
{ return __builtin_cos(__x); } 
# 199
using ::cosh;
# 203
constexpr float cosh(float __x) 
# 204
{ return __builtin_coshf(__x); } 
# 207
constexpr long double cosh(long double __x) 
# 208
{ return __builtin_coshl(__x); } 
# 211
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cosh(_Tp __x) 
# 216
{ return __builtin_cosh(__x); } 
# 218
using ::exp;
# 222
constexpr float exp(float __x) 
# 223
{ return __builtin_expf(__x); } 
# 226
constexpr long double exp(long double __x) 
# 227
{ return __builtin_expl(__x); } 
# 230
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
exp(_Tp __x) 
# 235
{ return __builtin_exp(__x); } 
# 237
using ::fabs;
# 241
constexpr float fabs(float __x) 
# 242
{ return __builtin_fabsf(__x); } 
# 245
constexpr long double fabs(long double __x) 
# 246
{ return __builtin_fabsl(__x); } 
# 249
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
fabs(_Tp __x) 
# 254
{ return __builtin_fabs(__x); } 
# 256
using ::floor;
# 260
constexpr float floor(float __x) 
# 261
{ return __builtin_floorf(__x); } 
# 264
constexpr long double floor(long double __x) 
# 265
{ return __builtin_floorl(__x); } 
# 268
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
floor(_Tp __x) 
# 273
{ return __builtin_floor(__x); } 
# 275
using ::fmod;
# 279
constexpr float fmod(float __x, float __y) 
# 280
{ return __builtin_fmodf(__x, __y); } 
# 283
constexpr long double fmod(long double __x, long double __y) 
# 284
{ return __builtin_fmodl(__x, __y); } 
# 287
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 290
fmod(_Tp __x, _Up __y) 
# 291
{ 
# 292
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 293
return fmod((__type)__x, (__type)__y); 
# 294
} 
# 296
using ::frexp;
# 300
inline float frexp(float __x, int *__exp) 
# 301
{ return __builtin_frexpf(__x, __exp); } 
# 304
inline long double frexp(long double __x, int *__exp) 
# 305
{ return __builtin_frexpl(__x, __exp); } 
# 308
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 312
frexp(_Tp __x, int *__exp) 
# 313
{ return __builtin_frexp(__x, __exp); } 
# 315
using ::ldexp;
# 319
constexpr float ldexp(float __x, int __exp) 
# 320
{ return __builtin_ldexpf(__x, __exp); } 
# 323
constexpr long double ldexp(long double __x, int __exp) 
# 324
{ return __builtin_ldexpl(__x, __exp); } 
# 327
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
ldexp(_Tp __x, int __exp) 
# 332
{ return __builtin_ldexp(__x, __exp); } 
# 334
using ::log;
# 338
constexpr float log(float __x) 
# 339
{ return __builtin_logf(__x); } 
# 342
constexpr long double log(long double __x) 
# 343
{ return __builtin_logl(__x); } 
# 346
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
log(_Tp __x) 
# 351
{ return __builtin_log(__x); } 
# 353
using ::log10;
# 357
constexpr float log10(float __x) 
# 358
{ return __builtin_log10f(__x); } 
# 361
constexpr long double log10(long double __x) 
# 362
{ return __builtin_log10l(__x); } 
# 365
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log10(_Tp __x) 
# 370
{ return __builtin_log10(__x); } 
# 372
using ::modf;
# 376
inline float modf(float __x, float *__iptr) 
# 377
{ return __builtin_modff(__x, __iptr); } 
# 380
inline long double modf(long double __x, long double *__iptr) 
# 381
{ return __builtin_modfl(__x, __iptr); } 
# 384
using ::pow;
# 388
constexpr float pow(float __x, float __y) 
# 389
{ return __builtin_powf(__x, __y); } 
# 392
constexpr long double pow(long double __x, long double __y) 
# 393
{ return __builtin_powl(__x, __y); } 
# 412 "/usr/include/c++/11/cmath" 3
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 415
pow(_Tp __x, _Up __y) 
# 416
{ 
# 417
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 418
return pow((__type)__x, (__type)__y); 
# 419
} 
# 421
using ::sin;
# 425
constexpr float sin(float __x) 
# 426
{ return __builtin_sinf(__x); } 
# 429
constexpr long double sin(long double __x) 
# 430
{ return __builtin_sinl(__x); } 
# 433
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 437
sin(_Tp __x) 
# 438
{ return __builtin_sin(__x); } 
# 440
using ::sinh;
# 444
constexpr float sinh(float __x) 
# 445
{ return __builtin_sinhf(__x); } 
# 448
constexpr long double sinh(long double __x) 
# 449
{ return __builtin_sinhl(__x); } 
# 452
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sinh(_Tp __x) 
# 457
{ return __builtin_sinh(__x); } 
# 459
using ::sqrt;
# 463
constexpr float sqrt(float __x) 
# 464
{ return __builtin_sqrtf(__x); } 
# 467
constexpr long double sqrt(long double __x) 
# 468
{ return __builtin_sqrtl(__x); } 
# 471
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sqrt(_Tp __x) 
# 476
{ return __builtin_sqrt(__x); } 
# 478
using ::tan;
# 482
constexpr float tan(float __x) 
# 483
{ return __builtin_tanf(__x); } 
# 486
constexpr long double tan(long double __x) 
# 487
{ return __builtin_tanl(__x); } 
# 490
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
tan(_Tp __x) 
# 495
{ return __builtin_tan(__x); } 
# 497
using ::tanh;
# 501
constexpr float tanh(float __x) 
# 502
{ return __builtin_tanhf(__x); } 
# 505
constexpr long double tanh(long double __x) 
# 506
{ return __builtin_tanhl(__x); } 
# 509
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tanh(_Tp __x) 
# 514
{ return __builtin_tanh(__x); } 
# 537 "/usr/include/c++/11/cmath" 3
constexpr int fpclassify(float __x) 
# 538
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 539
} 
# 542
constexpr int fpclassify(double __x) 
# 543
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 544
} 
# 547
constexpr int fpclassify(long double __x) 
# 548
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 549
} 
# 553
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 556
fpclassify(_Tp __x) 
# 557
{ return (__x != 0) ? 4 : 2; } 
# 562
constexpr bool isfinite(float __x) 
# 563
{ return __builtin_isfinite(__x); } 
# 566
constexpr bool isfinite(double __x) 
# 567
{ return __builtin_isfinite(__x); } 
# 570
constexpr bool isfinite(long double __x) 
# 571
{ return __builtin_isfinite(__x); } 
# 575
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 578
isfinite(_Tp __x) 
# 579
{ return true; } 
# 584
constexpr bool isinf(float __x) 
# 585
{ return __builtin_isinf(__x); } 
# 592
constexpr bool isinf(double __x) 
# 593
{ return __builtin_isinf(__x); } 
# 597
constexpr bool isinf(long double __x) 
# 598
{ return __builtin_isinf(__x); } 
# 602
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 605
isinf(_Tp __x) 
# 606
{ return false; } 
# 611
constexpr bool isnan(float __x) 
# 612
{ return __builtin_isnan(__x); } 
# 619
constexpr bool isnan(double __x) 
# 620
{ return __builtin_isnan(__x); } 
# 624
constexpr bool isnan(long double __x) 
# 625
{ return __builtin_isnan(__x); } 
# 629
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 632
isnan(_Tp __x) 
# 633
{ return false; } 
# 638
constexpr bool isnormal(float __x) 
# 639
{ return __builtin_isnormal(__x); } 
# 642
constexpr bool isnormal(double __x) 
# 643
{ return __builtin_isnormal(__x); } 
# 646
constexpr bool isnormal(long double __x) 
# 647
{ return __builtin_isnormal(__x); } 
# 651
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 654
isnormal(_Tp __x) 
# 655
{ return (__x != 0) ? true : false; } 
# 661
constexpr bool signbit(float __x) 
# 662
{ return __builtin_signbit(__x); } 
# 665
constexpr bool signbit(double __x) 
# 666
{ return __builtin_signbit(__x); } 
# 669
constexpr bool signbit(long double __x) 
# 670
{ return __builtin_signbit(__x); } 
# 674
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 677
signbit(_Tp __x) 
# 678
{ return (__x < 0) ? true : false; } 
# 683
constexpr bool isgreater(float __x, float __y) 
# 684
{ return __builtin_isgreater(__x, __y); } 
# 687
constexpr bool isgreater(double __x, double __y) 
# 688
{ return __builtin_isgreater(__x, __y); } 
# 691
constexpr bool isgreater(long double __x, long double __y) 
# 692
{ return __builtin_isgreater(__x, __y); } 
# 696
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 700
isgreater(_Tp __x, _Up __y) 
# 701
{ 
# 702
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 703
return __builtin_isgreater((__type)__x, (__type)__y); 
# 704
} 
# 709
constexpr bool isgreaterequal(float __x, float __y) 
# 710
{ return __builtin_isgreaterequal(__x, __y); } 
# 713
constexpr bool isgreaterequal(double __x, double __y) 
# 714
{ return __builtin_isgreaterequal(__x, __y); } 
# 717
constexpr bool isgreaterequal(long double __x, long double __y) 
# 718
{ return __builtin_isgreaterequal(__x, __y); } 
# 722
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 726
isgreaterequal(_Tp __x, _Up __y) 
# 727
{ 
# 728
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 729
return __builtin_isgreaterequal((__type)__x, (__type)__y); 
# 730
} 
# 735
constexpr bool isless(float __x, float __y) 
# 736
{ return __builtin_isless(__x, __y); } 
# 739
constexpr bool isless(double __x, double __y) 
# 740
{ return __builtin_isless(__x, __y); } 
# 743
constexpr bool isless(long double __x, long double __y) 
# 744
{ return __builtin_isless(__x, __y); } 
# 748
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 752
isless(_Tp __x, _Up __y) 
# 753
{ 
# 754
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 755
return __builtin_isless((__type)__x, (__type)__y); 
# 756
} 
# 761
constexpr bool islessequal(float __x, float __y) 
# 762
{ return __builtin_islessequal(__x, __y); } 
# 765
constexpr bool islessequal(double __x, double __y) 
# 766
{ return __builtin_islessequal(__x, __y); } 
# 769
constexpr bool islessequal(long double __x, long double __y) 
# 770
{ return __builtin_islessequal(__x, __y); } 
# 774
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 778
islessequal(_Tp __x, _Up __y) 
# 779
{ 
# 780
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 781
return __builtin_islessequal((__type)__x, (__type)__y); 
# 782
} 
# 787
constexpr bool islessgreater(float __x, float __y) 
# 788
{ return __builtin_islessgreater(__x, __y); } 
# 791
constexpr bool islessgreater(double __x, double __y) 
# 792
{ return __builtin_islessgreater(__x, __y); } 
# 795
constexpr bool islessgreater(long double __x, long double __y) 
# 796
{ return __builtin_islessgreater(__x, __y); } 
# 800
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 804
islessgreater(_Tp __x, _Up __y) 
# 805
{ 
# 806
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 807
return __builtin_islessgreater((__type)__x, (__type)__y); 
# 808
} 
# 813
constexpr bool isunordered(float __x, float __y) 
# 814
{ return __builtin_isunordered(__x, __y); } 
# 817
constexpr bool isunordered(double __x, double __y) 
# 818
{ return __builtin_isunordered(__x, __y); } 
# 821
constexpr bool isunordered(long double __x, long double __y) 
# 822
{ return __builtin_isunordered(__x, __y); } 
# 826
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 830
isunordered(_Tp __x, _Up __y) 
# 831
{ 
# 832
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 833
return __builtin_isunordered((__type)__x, (__type)__y); 
# 834
} 
# 1065 "/usr/include/c++/11/cmath" 3
using ::double_t;
# 1066
using ::float_t;
# 1069
using ::acosh;
# 1070
using ::acoshf;
# 1071
using ::acoshl;
# 1073
using ::asinh;
# 1074
using ::asinhf;
# 1075
using ::asinhl;
# 1077
using ::atanh;
# 1078
using ::atanhf;
# 1079
using ::atanhl;
# 1081
using ::cbrt;
# 1082
using ::cbrtf;
# 1083
using ::cbrtl;
# 1085
using ::copysign;
# 1086
using ::copysignf;
# 1087
using ::copysignl;
# 1089
using ::erf;
# 1090
using ::erff;
# 1091
using ::erfl;
# 1093
using ::erfc;
# 1094
using ::erfcf;
# 1095
using ::erfcl;
# 1097
using ::exp2;
# 1098
using ::exp2f;
# 1099
using ::exp2l;
# 1101
using ::expm1;
# 1102
using ::expm1f;
# 1103
using ::expm1l;
# 1105
using ::fdim;
# 1106
using ::fdimf;
# 1107
using ::fdiml;
# 1109
using ::fma;
# 1110
using ::fmaf;
# 1111
using ::fmal;
# 1113
using ::fmax;
# 1114
using ::fmaxf;
# 1115
using ::fmaxl;
# 1117
using ::fmin;
# 1118
using ::fminf;
# 1119
using ::fminl;
# 1121
using ::hypot;
# 1122
using ::hypotf;
# 1123
using ::hypotl;
# 1125
using ::ilogb;
# 1126
using ::ilogbf;
# 1127
using ::ilogbl;
# 1129
using ::lgamma;
# 1130
using ::lgammaf;
# 1131
using ::lgammal;
# 1134
using ::llrint;
# 1135
using ::llrintf;
# 1136
using ::llrintl;
# 1138
using ::llround;
# 1139
using ::llroundf;
# 1140
using ::llroundl;
# 1143
using ::log1p;
# 1144
using ::log1pf;
# 1145
using ::log1pl;
# 1147
using ::log2;
# 1148
using ::log2f;
# 1149
using ::log2l;
# 1151
using ::logb;
# 1152
using ::logbf;
# 1153
using ::logbl;
# 1155
using ::lrint;
# 1156
using ::lrintf;
# 1157
using ::lrintl;
# 1159
using ::lround;
# 1160
using ::lroundf;
# 1161
using ::lroundl;
# 1163
using ::nan;
# 1164
using ::nanf;
# 1165
using ::nanl;
# 1167
using ::nearbyint;
# 1168
using ::nearbyintf;
# 1169
using ::nearbyintl;
# 1171
using ::nextafter;
# 1172
using ::nextafterf;
# 1173
using ::nextafterl;
# 1175
using ::nexttoward;
# 1176
using ::nexttowardf;
# 1177
using ::nexttowardl;
# 1179
using ::remainder;
# 1180
using ::remainderf;
# 1181
using ::remainderl;
# 1183
using ::remquo;
# 1184
using ::remquof;
# 1185
using ::remquol;
# 1187
using ::rint;
# 1188
using ::rintf;
# 1189
using ::rintl;
# 1191
using ::round;
# 1192
using ::roundf;
# 1193
using ::roundl;
# 1195
using ::scalbln;
# 1196
using ::scalblnf;
# 1197
using ::scalblnl;
# 1199
using ::scalbn;
# 1200
using ::scalbnf;
# 1201
using ::scalbnl;
# 1203
using ::tgamma;
# 1204
using ::tgammaf;
# 1205
using ::tgammal;
# 1207
using ::trunc;
# 1208
using ::truncf;
# 1209
using ::truncl;
# 1214
constexpr float acosh(float __x) 
# 1215
{ return __builtin_acoshf(__x); } 
# 1218
constexpr long double acosh(long double __x) 
# 1219
{ return __builtin_acoshl(__x); } 
# 1223
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1226
acosh(_Tp __x) 
# 1227
{ return __builtin_acosh(__x); } 
# 1232
constexpr float asinh(float __x) 
# 1233
{ return __builtin_asinhf(__x); } 
# 1236
constexpr long double asinh(long double __x) 
# 1237
{ return __builtin_asinhl(__x); } 
# 1241
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1244
asinh(_Tp __x) 
# 1245
{ return __builtin_asinh(__x); } 
# 1250
constexpr float atanh(float __x) 
# 1251
{ return __builtin_atanhf(__x); } 
# 1254
constexpr long double atanh(long double __x) 
# 1255
{ return __builtin_atanhl(__x); } 
# 1259
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1262
atanh(_Tp __x) 
# 1263
{ return __builtin_atanh(__x); } 
# 1268
constexpr float cbrt(float __x) 
# 1269
{ return __builtin_cbrtf(__x); } 
# 1272
constexpr long double cbrt(long double __x) 
# 1273
{ return __builtin_cbrtl(__x); } 
# 1277
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1280
cbrt(_Tp __x) 
# 1281
{ return __builtin_cbrt(__x); } 
# 1286
constexpr float copysign(float __x, float __y) 
# 1287
{ return __builtin_copysignf(__x, __y); } 
# 1290
constexpr long double copysign(long double __x, long double __y) 
# 1291
{ return __builtin_copysignl(__x, __y); } 
# 1295
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1297
copysign(_Tp __x, _Up __y) 
# 1298
{ 
# 1299
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1300
return copysign((__type)__x, (__type)__y); 
# 1301
} 
# 1306
constexpr float erf(float __x) 
# 1307
{ return __builtin_erff(__x); } 
# 1310
constexpr long double erf(long double __x) 
# 1311
{ return __builtin_erfl(__x); } 
# 1315
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1318
erf(_Tp __x) 
# 1319
{ return __builtin_erf(__x); } 
# 1324
constexpr float erfc(float __x) 
# 1325
{ return __builtin_erfcf(__x); } 
# 1328
constexpr long double erfc(long double __x) 
# 1329
{ return __builtin_erfcl(__x); } 
# 1333
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1336
erfc(_Tp __x) 
# 1337
{ return __builtin_erfc(__x); } 
# 1342
constexpr float exp2(float __x) 
# 1343
{ return __builtin_exp2f(__x); } 
# 1346
constexpr long double exp2(long double __x) 
# 1347
{ return __builtin_exp2l(__x); } 
# 1351
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1354
exp2(_Tp __x) 
# 1355
{ return __builtin_exp2(__x); } 
# 1360
constexpr float expm1(float __x) 
# 1361
{ return __builtin_expm1f(__x); } 
# 1364
constexpr long double expm1(long double __x) 
# 1365
{ return __builtin_expm1l(__x); } 
# 1369
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1372
expm1(_Tp __x) 
# 1373
{ return __builtin_expm1(__x); } 
# 1378
constexpr float fdim(float __x, float __y) 
# 1379
{ return __builtin_fdimf(__x, __y); } 
# 1382
constexpr long double fdim(long double __x, long double __y) 
# 1383
{ return __builtin_fdiml(__x, __y); } 
# 1387
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1389
fdim(_Tp __x, _Up __y) 
# 1390
{ 
# 1391
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1392
return fdim((__type)__x, (__type)__y); 
# 1393
} 
# 1398
constexpr float fma(float __x, float __y, float __z) 
# 1399
{ return __builtin_fmaf(__x, __y, __z); } 
# 1402
constexpr long double fma(long double __x, long double __y, long double __z) 
# 1403
{ return __builtin_fmal(__x, __y, __z); } 
# 1407
template< class _Tp, class _Up, class _Vp> constexpr typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type 
# 1409
fma(_Tp __x, _Up __y, _Vp __z) 
# 1410
{ 
# 1411
typedef typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type __type; 
# 1412
return fma((__type)__x, (__type)__y, (__type)__z); 
# 1413
} 
# 1418
constexpr float fmax(float __x, float __y) 
# 1419
{ return __builtin_fmaxf(__x, __y); } 
# 1422
constexpr long double fmax(long double __x, long double __y) 
# 1423
{ return __builtin_fmaxl(__x, __y); } 
# 1427
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1429
fmax(_Tp __x, _Up __y) 
# 1430
{ 
# 1431
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1432
return fmax((__type)__x, (__type)__y); 
# 1433
} 
# 1438
constexpr float fmin(float __x, float __y) 
# 1439
{ return __builtin_fminf(__x, __y); } 
# 1442
constexpr long double fmin(long double __x, long double __y) 
# 1443
{ return __builtin_fminl(__x, __y); } 
# 1447
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1449
fmin(_Tp __x, _Up __y) 
# 1450
{ 
# 1451
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1452
return fmin((__type)__x, (__type)__y); 
# 1453
} 
# 1458
constexpr float hypot(float __x, float __y) 
# 1459
{ return __builtin_hypotf(__x, __y); } 
# 1462
constexpr long double hypot(long double __x, long double __y) 
# 1463
{ return __builtin_hypotl(__x, __y); } 
# 1467
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1469
hypot(_Tp __x, _Up __y) 
# 1470
{ 
# 1471
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1472
return hypot((__type)__x, (__type)__y); 
# 1473
} 
# 1478
constexpr int ilogb(float __x) 
# 1479
{ return __builtin_ilogbf(__x); } 
# 1482
constexpr int ilogb(long double __x) 
# 1483
{ return __builtin_ilogbl(__x); } 
# 1487
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 1491
ilogb(_Tp __x) 
# 1492
{ return __builtin_ilogb(__x); } 
# 1497
constexpr float lgamma(float __x) 
# 1498
{ return __builtin_lgammaf(__x); } 
# 1501
constexpr long double lgamma(long double __x) 
# 1502
{ return __builtin_lgammal(__x); } 
# 1506
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1509
lgamma(_Tp __x) 
# 1510
{ return __builtin_lgamma(__x); } 
# 1515
constexpr long long llrint(float __x) 
# 1516
{ return __builtin_llrintf(__x); } 
# 1519
constexpr long long llrint(long double __x) 
# 1520
{ return __builtin_llrintl(__x); } 
# 1524
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1527
llrint(_Tp __x) 
# 1528
{ return __builtin_llrint(__x); } 
# 1533
constexpr long long llround(float __x) 
# 1534
{ return __builtin_llroundf(__x); } 
# 1537
constexpr long long llround(long double __x) 
# 1538
{ return __builtin_llroundl(__x); } 
# 1542
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1545
llround(_Tp __x) 
# 1546
{ return __builtin_llround(__x); } 
# 1551
constexpr float log1p(float __x) 
# 1552
{ return __builtin_log1pf(__x); } 
# 1555
constexpr long double log1p(long double __x) 
# 1556
{ return __builtin_log1pl(__x); } 
# 1560
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1563
log1p(_Tp __x) 
# 1564
{ return __builtin_log1p(__x); } 
# 1570
constexpr float log2(float __x) 
# 1571
{ return __builtin_log2f(__x); } 
# 1574
constexpr long double log2(long double __x) 
# 1575
{ return __builtin_log2l(__x); } 
# 1579
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1582
log2(_Tp __x) 
# 1583
{ return __builtin_log2(__x); } 
# 1588
constexpr float logb(float __x) 
# 1589
{ return __builtin_logbf(__x); } 
# 1592
constexpr long double logb(long double __x) 
# 1593
{ return __builtin_logbl(__x); } 
# 1597
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1600
logb(_Tp __x) 
# 1601
{ return __builtin_logb(__x); } 
# 1606
constexpr long lrint(float __x) 
# 1607
{ return __builtin_lrintf(__x); } 
# 1610
constexpr long lrint(long double __x) 
# 1611
{ return __builtin_lrintl(__x); } 
# 1615
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1618
lrint(_Tp __x) 
# 1619
{ return __builtin_lrint(__x); } 
# 1624
constexpr long lround(float __x) 
# 1625
{ return __builtin_lroundf(__x); } 
# 1628
constexpr long lround(long double __x) 
# 1629
{ return __builtin_lroundl(__x); } 
# 1633
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1636
lround(_Tp __x) 
# 1637
{ return __builtin_lround(__x); } 
# 1642
constexpr float nearbyint(float __x) 
# 1643
{ return __builtin_nearbyintf(__x); } 
# 1646
constexpr long double nearbyint(long double __x) 
# 1647
{ return __builtin_nearbyintl(__x); } 
# 1651
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1654
nearbyint(_Tp __x) 
# 1655
{ return __builtin_nearbyint(__x); } 
# 1660
constexpr float nextafter(float __x, float __y) 
# 1661
{ return __builtin_nextafterf(__x, __y); } 
# 1664
constexpr long double nextafter(long double __x, long double __y) 
# 1665
{ return __builtin_nextafterl(__x, __y); } 
# 1669
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1671
nextafter(_Tp __x, _Up __y) 
# 1672
{ 
# 1673
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1674
return nextafter((__type)__x, (__type)__y); 
# 1675
} 
# 1680
constexpr float nexttoward(float __x, long double __y) 
# 1681
{ return __builtin_nexttowardf(__x, __y); } 
# 1684
constexpr long double nexttoward(long double __x, long double __y) 
# 1685
{ return __builtin_nexttowardl(__x, __y); } 
# 1689
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1692
nexttoward(_Tp __x, long double __y) 
# 1693
{ return __builtin_nexttoward(__x, __y); } 
# 1698
constexpr float remainder(float __x, float __y) 
# 1699
{ return __builtin_remainderf(__x, __y); } 
# 1702
constexpr long double remainder(long double __x, long double __y) 
# 1703
{ return __builtin_remainderl(__x, __y); } 
# 1707
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1709
remainder(_Tp __x, _Up __y) 
# 1710
{ 
# 1711
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1712
return remainder((__type)__x, (__type)__y); 
# 1713
} 
# 1718
inline float remquo(float __x, float __y, int *__pquo) 
# 1719
{ return __builtin_remquof(__x, __y, __pquo); } 
# 1722
inline long double remquo(long double __x, long double __y, int *__pquo) 
# 1723
{ return __builtin_remquol(__x, __y, __pquo); } 
# 1727
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1729
remquo(_Tp __x, _Up __y, int *__pquo) 
# 1730
{ 
# 1731
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1732
return remquo((__type)__x, (__type)__y, __pquo); 
# 1733
} 
# 1738
constexpr float rint(float __x) 
# 1739
{ return __builtin_rintf(__x); } 
# 1742
constexpr long double rint(long double __x) 
# 1743
{ return __builtin_rintl(__x); } 
# 1747
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1750
rint(_Tp __x) 
# 1751
{ return __builtin_rint(__x); } 
# 1756
constexpr float round(float __x) 
# 1757
{ return __builtin_roundf(__x); } 
# 1760
constexpr long double round(long double __x) 
# 1761
{ return __builtin_roundl(__x); } 
# 1765
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1768
round(_Tp __x) 
# 1769
{ return __builtin_round(__x); } 
# 1774
constexpr float scalbln(float __x, long __ex) 
# 1775
{ return __builtin_scalblnf(__x, __ex); } 
# 1778
constexpr long double scalbln(long double __x, long __ex) 
# 1779
{ return __builtin_scalblnl(__x, __ex); } 
# 1783
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1786
scalbln(_Tp __x, long __ex) 
# 1787
{ return __builtin_scalbln(__x, __ex); } 
# 1792
constexpr float scalbn(float __x, int __ex) 
# 1793
{ return __builtin_scalbnf(__x, __ex); } 
# 1796
constexpr long double scalbn(long double __x, int __ex) 
# 1797
{ return __builtin_scalbnl(__x, __ex); } 
# 1801
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1804
scalbn(_Tp __x, int __ex) 
# 1805
{ return __builtin_scalbn(__x, __ex); } 
# 1810
constexpr float tgamma(float __x) 
# 1811
{ return __builtin_tgammaf(__x); } 
# 1814
constexpr long double tgamma(long double __x) 
# 1815
{ return __builtin_tgammal(__x); } 
# 1819
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1822
tgamma(_Tp __x) 
# 1823
{ return __builtin_tgamma(__x); } 
# 1828
constexpr float trunc(float __x) 
# 1829
{ return __builtin_truncf(__x); } 
# 1832
constexpr long double trunc(long double __x) 
# 1833
{ return __builtin_truncl(__x); } 
# 1837
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1840
trunc(_Tp __x) 
# 1841
{ return __builtin_trunc(__x); } 
# 1852 "/usr/include/c++/11/cmath" 3
template< class _Tp> inline _Tp 
# 1854
__hypot3(_Tp __x, _Tp __y, _Tp __z) 
# 1855
{ 
# 1856
__x = std::abs(__x); 
# 1857
__y = std::abs(__y); 
# 1858
__z = std::abs(__z); 
# 1859
if (_Tp __a = (__x < __y) ? (__y < __z) ? __z : __y : ((__x < __z) ? __z : __x)) { 
# 1860
return __a * std::sqrt((((__x / __a) * (__x / __a)) + ((__y / __a) * (__y / __a))) + ((__z / __a) * (__z / __a))); } else { 
# 1864
return {}; }  
# 1865
} 
# 1868
inline float hypot(float __x, float __y, float __z) 
# 1869
{ return std::__hypot3< float> (__x, __y, __z); } 
# 1872
inline double hypot(double __x, double __y, double __z) 
# 1873
{ return std::__hypot3< double> (__x, __y, __z); } 
# 1876
inline long double hypot(long double __x, long double __y, long double __z) 
# 1877
{ return std::__hypot3< long double> (__x, __y, __z); } 
# 1879
template< class _Tp, class _Up, class _Vp> __gnu_cxx::__promoted_t< _Tp, _Up, _Vp>  
# 1881
hypot(_Tp __x, _Up __y, _Vp __z) 
# 1882
{ 
# 1883
using __type = __gnu_cxx::__promoted_t< _Tp, _Up, _Vp> ; 
# 1884
return std::__hypot3< __gnu_cxx::__promoted_t< _Tp, _Up, _Vp> > (__x, __y, __z); 
# 1885
} 
# 1932 "/usr/include/c++/11/cmath" 3
}
# 33 "/usr/include/c++/11/bits/specfun.h" 3
#pragma GCC visibility push ( default )
# 42 "/usr/include/c++/11/bits/functexcept.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 48
void __throw_bad_exception() __attribute((__noreturn__)); 
# 52
void __throw_bad_alloc() __attribute((__noreturn__)); 
# 55
void __throw_bad_array_new_length() __attribute((__noreturn__)); 
# 59
void __throw_bad_cast() __attribute((__noreturn__)); 
# 62
void __throw_bad_typeid() __attribute((__noreturn__)); 
# 66
void __throw_logic_error(const char *) __attribute((__noreturn__)); 
# 69
void __throw_domain_error(const char *) __attribute((__noreturn__)); 
# 72
void __throw_invalid_argument(const char *) __attribute((__noreturn__)); 
# 75
void __throw_length_error(const char *) __attribute((__noreturn__)); 
# 78
void __throw_out_of_range(const char *) __attribute((__noreturn__)); 
# 81
void __throw_out_of_range_fmt(const char *, ...) __attribute((__noreturn__))
# 82
 __attribute((__format__(__gnu_printf__, 1, 2))); 
# 85
void __throw_runtime_error(const char *) __attribute((__noreturn__)); 
# 88
void __throw_range_error(const char *) __attribute((__noreturn__)); 
# 91
void __throw_overflow_error(const char *) __attribute((__noreturn__)); 
# 94
void __throw_underflow_error(const char *) __attribute((__noreturn__)); 
# 98
void __throw_ios_failure(const char *) __attribute((__noreturn__)); 
# 101
void __throw_ios_failure(const char *, int) __attribute((__noreturn__)); 
# 105
void __throw_system_error(int) __attribute((__noreturn__)); 
# 109
void __throw_future_error(int) __attribute((__noreturn__)); 
# 113
void __throw_bad_function_call() __attribute((__noreturn__)); 
# 116
}
# 37 "/usr/include/c++/11/ext/numeric_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 50 "/usr/include/c++/11/ext/numeric_traits.h" 3
template< class _Tp> 
# 51
struct __is_integer_nonstrict : public std::__is_integer< _Tp>  { 
# 54
using std::__is_integer< _Tp> ::__value;
# 57
enum { __width = (__value) ? sizeof(_Tp) * (8) : (0)}; 
# 58
}; 
# 60
template< class _Value> 
# 61
struct __numeric_traits_integer { 
# 64
static_assert((__is_integer_nonstrict< _Value> ::__value), "invalid specialization");
# 70
static const bool __is_signed = (((_Value)(-1)) < 0); 
# 71
static const int __digits = (__is_integer_nonstrict< _Value> ::__width - __is_signed); 
# 75
static const _Value __max = (__is_signed ? (((((_Value)1) << (__digits - 1)) - 1) << 1) + 1 : (~((_Value)0))); 
# 78
static const _Value __min = (__is_signed ? (-__max) - 1 : ((_Value)0)); 
# 79
}; 
# 81
template< class _Value> const _Value __numeric_traits_integer< _Value> ::__min; 
# 84
template< class _Value> const _Value __numeric_traits_integer< _Value> ::__max; 
# 87
template< class _Value> const bool __numeric_traits_integer< _Value> ::__is_signed; 
# 90
template< class _Value> const int __numeric_traits_integer< _Value> ::__digits; 
# 135 "/usr/include/c++/11/ext/numeric_traits.h" 3
template< class _Tp> using __int_traits = __numeric_traits_integer< _Tp> ; 
# 155 "/usr/include/c++/11/ext/numeric_traits.h" 3
template< class _Value> 
# 156
struct __numeric_traits_floating { 
# 159
static const int __max_digits10 = ((2) + ((((std::template __are_same< _Value, float> ::__value) ? 24 : ((std::template __are_same< _Value, double> ::__value) ? 53 : 64)) * 643L) / (2136))); 
# 162
static const bool __is_signed = true; 
# 163
static const int __digits10 = ((std::template __are_same< _Value, float> ::__value) ? 6 : ((std::template __are_same< _Value, double> ::__value) ? 15 : 18)); 
# 164
static const int __max_exponent10 = ((std::template __are_same< _Value, float> ::__value) ? 38 : ((std::template __are_same< _Value, double> ::__value) ? 308 : 4932)); 
# 165
}; 
# 167
template< class _Value> const int __numeric_traits_floating< _Value> ::__max_digits10; 
# 170
template< class _Value> const bool __numeric_traits_floating< _Value> ::__is_signed; 
# 173
template< class _Value> const int __numeric_traits_floating< _Value> ::__digits10; 
# 176
template< class _Value> const int __numeric_traits_floating< _Value> ::__max_exponent10; 
# 184
template< class _Value> 
# 185
struct __numeric_traits : public __numeric_traits_integer< _Value>  { 
# 187
}; 
# 190
template<> struct __numeric_traits< float>  : public __numeric_traits_floating< float>  { 
# 192
}; 
# 195
template<> struct __numeric_traits< double>  : public __numeric_traits_floating< double>  { 
# 197
}; 
# 200
template<> struct __numeric_traits< long double>  : public __numeric_traits_floating< long double>  { 
# 202
}; 
# 237 "/usr/include/c++/11/ext/numeric_traits.h" 3
}
# 38 "/usr/include/c++/11/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 47
template< class _Tp> constexpr _Tp *
# 49
__addressof(_Tp &__r) noexcept 
# 50
{ return __builtin_addressof(__r); } 
# 55
}
# 40 "/usr/include/c++/11/type_traits" 3
namespace std __attribute((__visibility__("default"))) { 
# 44
template< class ..._Elements> class tuple; 
# 47
template< class _Tp> class reference_wrapper; 
# 64 "/usr/include/c++/11/type_traits" 3
template< class _Tp, _Tp __v> 
# 65
struct integral_constant { 
# 67
static constexpr inline _Tp value = (__v); 
# 68
typedef _Tp value_type; 
# 69
typedef integral_constant type; 
# 70
constexpr operator value_type() const noexcept { return value; } 
# 75
constexpr value_type operator()() const noexcept { return value; } 
# 77
}; 
# 79
template< class _Tp, _Tp __v> constexpr inline _Tp integral_constant< _Tp, __v> ::value; 
# 83
using true_type = integral_constant< bool, true> ; 
# 86
using false_type = integral_constant< bool, false> ; 
# 90
template< bool __v> using __bool_constant = integral_constant< bool, __v> ; 
# 98
template< bool __v> using bool_constant = integral_constant< bool, __v> ; 
# 104
template< bool , class , class > struct conditional; 
# 108
template< class _Type> 
# 109
struct __type_identity { 
# 110
using type = _Type; }; 
# 112
template< class _Tp> using __type_identity_t = typename __type_identity< _Tp> ::type; 
# 115
template< class ...> struct __or_; 
# 119
template<> struct __or_< >  : public false_type { 
# 121
}; 
# 123
template< class _B1> 
# 124
struct __or_< _B1>  : public _B1 { 
# 126
}; 
# 128
template< class _B1, class _B2> 
# 129
struct __or_< _B1, _B2>  : public conditional< _B1::value, _B1, _B2> ::type { 
# 131
}; 
# 133
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 134
struct __or_< _B1, _B2, _B3, _Bn...>  : public conditional< _B1::value, _B1, std::__or_< _B2, _B3, _Bn...> > ::type { 
# 136
}; 
# 138
template< class ...> struct __and_; 
# 142
template<> struct __and_< >  : public true_type { 
# 144
}; 
# 146
template< class _B1> 
# 147
struct __and_< _B1>  : public _B1 { 
# 149
}; 
# 151
template< class _B1, class _B2> 
# 152
struct __and_< _B1, _B2>  : public conditional< _B1::value, _B2, _B1> ::type { 
# 154
}; 
# 156
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 157
struct __and_< _B1, _B2, _B3, _Bn...>  : public conditional< _B1::value, std::__and_< _B2, _B3, _Bn...> , _B1> ::type { 
# 159
}; 
# 161
template< class _Pp> 
# 162
struct __not_ : public __bool_constant< !((bool)_Pp::value)>  { 
# 164
}; 
# 170
template< class ..._Bn> constexpr bool 
# 171
__or_v = (__or_< _Bn...> ::value); 
# 172
template< class ..._Bn> constexpr bool 
# 173
__and_v = (__and_< _Bn...> ::value); 
# 178
template< class ..._Bn> 
# 179
struct conjunction : public __and_< _Bn...>  { 
# 181
}; 
# 183
template< class ..._Bn> 
# 184
struct disjunction : public __or_< _Bn...>  { 
# 186
}; 
# 188
template< class _Pp> 
# 189
struct negation : public __not_< _Pp>  { 
# 191
}; 
# 196
template< class ..._Bn> constexpr bool 
# 197
conjunction_v = (conjunction< _Bn...> ::value); 
# 199
template< class ..._Bn> constexpr bool 
# 200
disjunction_v = (disjunction< _Bn...> ::value); 
# 202
template< class _Pp> constexpr bool 
# 203
negation_v = (negation< _Pp> ::value); 
# 209
template< class > struct is_reference; 
# 211
template< class > struct is_function; 
# 213
template< class > struct is_void; 
# 215
template< class > struct remove_cv; 
# 217
template< class > struct is_const; 
# 221
template< class > struct __is_array_unknown_bounds; 
# 227
template< class _Tp, size_t  = sizeof(_Tp)> constexpr true_type 
# 228
__is_complete_or_unbounded(__type_identity< _Tp> ) 
# 229
{ return {}; } 
# 231
template< class _TypeIdentity, class 
# 232
_NestedType = typename _TypeIdentity::type> constexpr typename __or_< is_reference< _NestedType> , is_function< _NestedType> , is_void< _NestedType> , __is_array_unknown_bounds< _NestedType> > ::type 
# 238
__is_complete_or_unbounded(_TypeIdentity) 
# 239
{ return {}; } 
# 246
template< class _Tp> 
# 247
struct __success_type { 
# 248
typedef _Tp type; }; 
# 250
struct __failure_type { 
# 251
}; 
# 254
template< class _Tp> using __remove_cv_t = typename remove_cv< _Tp> ::type; 
# 259
template< class > 
# 260
struct __is_void_helper : public false_type { 
# 261
}; 
# 264
template<> struct __is_void_helper< void>  : public true_type { 
# 265
}; 
# 269
template< class _Tp> 
# 270
struct is_void : public __is_void_helper< __remove_cv_t< _Tp> > ::type { 
# 272
}; 
# 275
template< class > 
# 276
struct __is_integral_helper : public false_type { 
# 277
}; 
# 280
template<> struct __is_integral_helper< bool>  : public true_type { 
# 281
}; 
# 284
template<> struct __is_integral_helper< char>  : public true_type { 
# 285
}; 
# 288
template<> struct __is_integral_helper< signed char>  : public true_type { 
# 289
}; 
# 292
template<> struct __is_integral_helper< unsigned char>  : public true_type { 
# 293
}; 
# 300
template<> struct __is_integral_helper< wchar_t>  : public true_type { 
# 301
}; 
# 311 "/usr/include/c++/11/type_traits" 3
template<> struct __is_integral_helper< char16_t>  : public true_type { 
# 312
}; 
# 315
template<> struct __is_integral_helper< char32_t>  : public true_type { 
# 316
}; 
# 319
template<> struct __is_integral_helper< short>  : public true_type { 
# 320
}; 
# 323
template<> struct __is_integral_helper< unsigned short>  : public true_type { 
# 324
}; 
# 327
template<> struct __is_integral_helper< int>  : public true_type { 
# 328
}; 
# 331
template<> struct __is_integral_helper< unsigned>  : public true_type { 
# 332
}; 
# 335
template<> struct __is_integral_helper< long>  : public true_type { 
# 336
}; 
# 339
template<> struct __is_integral_helper< unsigned long>  : public true_type { 
# 340
}; 
# 343
template<> struct __is_integral_helper< long long>  : public true_type { 
# 344
}; 
# 347
template<> struct __is_integral_helper< unsigned long long>  : public true_type { 
# 348
}; 
# 354
template<> struct __is_integral_helper< __int128>  : public true_type { 
# 355
}; 
# 358
template<> struct __is_integral_helper< unsigned __int128>  : public true_type { 
# 359
}; 
# 391 "/usr/include/c++/11/type_traits" 3
template< class _Tp> 
# 392
struct is_integral : public __is_integral_helper< __remove_cv_t< _Tp> > ::type { 
# 394
}; 
# 397
template< class > 
# 398
struct __is_floating_point_helper : public false_type { 
# 399
}; 
# 402
template<> struct __is_floating_point_helper< float>  : public true_type { 
# 403
}; 
# 406
template<> struct __is_floating_point_helper< double>  : public true_type { 
# 407
}; 
# 410
template<> struct __is_floating_point_helper< long double>  : public true_type { 
# 411
}; 
# 421 "/usr/include/c++/11/type_traits" 3
template< class _Tp> 
# 422
struct is_floating_point : public __is_floating_point_helper< __remove_cv_t< _Tp> > ::type { 
# 424
}; 
# 427
template< class > 
# 428
struct is_array : public false_type { 
# 429
}; 
# 431
template< class _Tp, size_t _Size> 
# 432
struct is_array< _Tp [_Size]>  : public true_type { 
# 433
}; 
# 435
template< class _Tp> 
# 436
struct is_array< _Tp []>  : public true_type { 
# 437
}; 
# 439
template< class > 
# 440
struct __is_pointer_helper : public false_type { 
# 441
}; 
# 443
template< class _Tp> 
# 444
struct __is_pointer_helper< _Tp *>  : public true_type { 
# 445
}; 
# 448
template< class _Tp> 
# 449
struct is_pointer : public __is_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 451
}; 
# 454
template< class > 
# 455
struct is_lvalue_reference : public false_type { 
# 456
}; 
# 458
template< class _Tp> 
# 459
struct is_lvalue_reference< _Tp &>  : public true_type { 
# 460
}; 
# 463
template< class > 
# 464
struct is_rvalue_reference : public false_type { 
# 465
}; 
# 467
template< class _Tp> 
# 468
struct is_rvalue_reference< _Tp &&>  : public true_type { 
# 469
}; 
# 471
template< class > 
# 472
struct __is_member_object_pointer_helper : public false_type { 
# 473
}; 
# 475
template< class _Tp, class _Cp> 
# 476
struct __is_member_object_pointer_helper< _Tp (_Cp::*)>  : public __not_< is_function< _Tp> > ::type { 
# 477
}; 
# 480
template< class _Tp> 
# 481
struct is_member_object_pointer : public __is_member_object_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 483
}; 
# 485
template< class > 
# 486
struct __is_member_function_pointer_helper : public false_type { 
# 487
}; 
# 489
template< class _Tp, class _Cp> 
# 490
struct __is_member_function_pointer_helper< _Tp (_Cp::*)>  : public is_function< _Tp> ::type { 
# 491
}; 
# 494
template< class _Tp> 
# 495
struct is_member_function_pointer : public __is_member_function_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 497
}; 
# 500
template< class _Tp> 
# 501
struct is_enum : public integral_constant< bool, __is_enum(_Tp)>  { 
# 503
}; 
# 506
template< class _Tp> 
# 507
struct is_union : public integral_constant< bool, __is_union(_Tp)>  { 
# 509
}; 
# 512
template< class _Tp> 
# 513
struct is_class : public integral_constant< bool, __is_class(_Tp)>  { 
# 515
}; 
# 518
template< class _Tp> 
# 519
struct is_function : public __bool_constant< !is_const< const _Tp> ::value>  { 
# 520
}; 
# 522
template< class _Tp> 
# 523
struct is_function< _Tp &>  : public false_type { 
# 524
}; 
# 526
template< class _Tp> 
# 527
struct is_function< _Tp &&>  : public false_type { 
# 528
}; 
# 532
template< class > 
# 533
struct __is_null_pointer_helper : public false_type { 
# 534
}; 
# 537
template<> struct __is_null_pointer_helper< __decltype((nullptr))>  : public true_type { 
# 538
}; 
# 541
template< class _Tp> 
# 542
struct is_null_pointer : public __is_null_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 544
}; 
# 548
template< class _Tp> 
# 549
struct __is_nullptr_t : public is_null_pointer< _Tp>  { 
# 551
} __attribute((__deprecated__("use \'std::is_null_pointer\' instead"))); 
# 556
template< class _Tp> 
# 557
struct is_reference : public __or_< is_lvalue_reference< _Tp> , is_rvalue_reference< _Tp> > ::type { 
# 560
}; 
# 563
template< class _Tp> 
# 564
struct is_arithmetic : public __or_< is_integral< _Tp> , is_floating_point< _Tp> > ::type { 
# 566
}; 
# 569
template< class _Tp> 
# 570
struct is_fundamental : public __or_< is_arithmetic< _Tp> , is_void< _Tp> , is_null_pointer< _Tp> > ::type { 
# 573
}; 
# 576
template< class _Tp> 
# 577
struct is_object : public __not_< __or_< is_function< _Tp> , is_reference< _Tp> , is_void< _Tp> > > ::type { 
# 580
}; 
# 582
template< class > struct is_member_pointer; 
# 586
template< class _Tp> 
# 587
struct is_scalar : public __or_< is_arithmetic< _Tp> , is_enum< _Tp> , is_pointer< _Tp> , is_member_pointer< _Tp> , is_null_pointer< _Tp> > ::type { 
# 590
}; 
# 593
template< class _Tp> 
# 594
struct is_compound : public __not_< is_fundamental< _Tp> > ::type { 
# 595
}; 
# 598
template< class _Tp> 
# 599
struct __is_member_pointer_helper : public false_type { 
# 600
}; 
# 602
template< class _Tp, class _Cp> 
# 603
struct __is_member_pointer_helper< _Tp (_Cp::*)>  : public true_type { 
# 604
}; 
# 608
template< class _Tp> 
# 609
struct is_member_pointer : public __is_member_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 611
}; 
# 613
template< class , class > struct is_same; 
# 617
template< class _Tp, class ..._Types> using __is_one_of = __or_< is_same< _Tp, _Types> ...> ; 
# 621
template< class _Tp> using __is_signed_integer = __is_one_of< __remove_cv_t< _Tp> , signed char, signed short, signed int, signed long, signed long long, signed __int128> ; 
# 640 "/usr/include/c++/11/type_traits" 3
template< class _Tp> using __is_unsigned_integer = __is_one_of< __remove_cv_t< _Tp> , unsigned char, unsigned short, unsigned, unsigned long, unsigned long long, unsigned __int128> ; 
# 659 "/usr/include/c++/11/type_traits" 3
template< class _Tp> using __is_standard_integer = __or_< __is_signed_integer< _Tp> , __is_unsigned_integer< _Tp> > ; 
# 664
template< class ...> using __void_t = void; 
# 668
template< class _Tp, class  = void> 
# 669
struct __is_referenceable : public false_type { 
# 671
}; 
# 673
template< class _Tp> 
# 674
struct __is_referenceable< _Tp, __void_t< _Tp &> >  : public true_type { 
# 676
}; 
# 682
template< class > 
# 683
struct is_const : public false_type { 
# 684
}; 
# 686
template< class _Tp> 
# 687
struct is_const< const _Tp>  : public true_type { 
# 688
}; 
# 691
template< class > 
# 692
struct is_volatile : public false_type { 
# 693
}; 
# 695
template< class _Tp> 
# 696
struct is_volatile< volatile _Tp>  : public true_type { 
# 697
}; 
# 700
template< class _Tp> 
# 701
struct is_trivial : public integral_constant< bool, __is_trivial(_Tp)>  { 
# 704
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 706
}; 
# 709
template< class _Tp> 
# 710
struct is_trivially_copyable : public integral_constant< bool, __is_trivially_copyable(_Tp)>  { 
# 713
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 715
}; 
# 718
template< class _Tp> 
# 719
struct is_standard_layout : public integral_constant< bool, __is_standard_layout(_Tp)>  { 
# 722
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 724
}; 
# 730
template< class _Tp> 
# 733
struct is_pod : public integral_constant< bool, __is_pod(_Tp)>  { 
# 736
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 738
}; 
# 743
template< class _Tp> 
# 746
struct
# 745
 [[__deprecated__]] is_literal_type : public integral_constant< bool, __is_literal_type(_Tp)>  { 
# 749
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 751
}; 
# 754
template< class _Tp> 
# 755
struct is_empty : public integral_constant< bool, __is_empty(_Tp)>  { 
# 757
}; 
# 760
template< class _Tp> 
# 761
struct is_polymorphic : public integral_constant< bool, __is_polymorphic(_Tp)>  { 
# 763
}; 
# 769
template< class _Tp> 
# 770
struct is_final : public integral_constant< bool, __is_final(_Tp)>  { 
# 772
}; 
# 776
template< class _Tp> 
# 777
struct is_abstract : public integral_constant< bool, __is_abstract(_Tp)>  { 
# 779
}; 
# 782
template< class _Tp, bool 
# 783
 = is_arithmetic< _Tp> ::value> 
# 784
struct __is_signed_helper : public false_type { 
# 785
}; 
# 787
template< class _Tp> 
# 788
struct __is_signed_helper< _Tp, true>  : public integral_constant< bool, ((_Tp)(-1)) < ((_Tp)0)>  { 
# 790
}; 
# 794
template< class _Tp> 
# 795
struct is_signed : public __is_signed_helper< _Tp> ::type { 
# 797
}; 
# 800
template< class _Tp> 
# 801
struct is_unsigned : public __and_< is_arithmetic< _Tp> , __not_< is_signed< _Tp> > >  { 
# 803
}; 
# 806
template< class _Tp, class _Up = _Tp &&> _Up __declval(int); 
# 810
template< class _Tp> _Tp __declval(long); 
# 815
template< class _Tp> auto declval() noexcept->__decltype((__declval< _Tp> (0))); 
# 818
template< class , unsigned  = 0U> struct extent; 
# 821
template< class > struct remove_all_extents; 
# 825
template< class _Tp> 
# 826
struct __is_array_known_bounds : public integral_constant< bool, (extent< _Tp> ::value > 0)>  { 
# 828
}; 
# 830
template< class _Tp> 
# 831
struct __is_array_unknown_bounds : public __and_< is_array< _Tp> , __not_< extent< _Tp> > >  { 
# 833
}; 
# 842 "/usr/include/c++/11/type_traits" 3
struct __do_is_destructible_impl { 
# 844
template< class _Tp, class  = __decltype((declval< _Tp &> ().~_Tp()))> static true_type __test(int); 
# 847
template< class > static false_type __test(...); 
# 849
}; 
# 851
template< class _Tp> 
# 852
struct __is_destructible_impl : public __do_is_destructible_impl { 
# 855
typedef __decltype((__test< _Tp> (0))) type; 
# 856
}; 
# 858
template< class _Tp, bool 
# 859
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 862
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_destructible_safe; 
# 865
template< class _Tp> 
# 866
struct __is_destructible_safe< _Tp, false, false>  : public __is_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 869
}; 
# 871
template< class _Tp> 
# 872
struct __is_destructible_safe< _Tp, true, false>  : public false_type { 
# 873
}; 
# 875
template< class _Tp> 
# 876
struct __is_destructible_safe< _Tp, false, true>  : public true_type { 
# 877
}; 
# 881
template< class _Tp> 
# 882
struct is_destructible : public __is_destructible_safe< _Tp> ::type { 
# 885
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 887
}; 
# 895
struct __do_is_nt_destructible_impl { 
# 897
template< class _Tp> static __bool_constant< noexcept(declval< _Tp &> ().~_Tp())>  __test(int); 
# 901
template< class > static false_type __test(...); 
# 903
}; 
# 905
template< class _Tp> 
# 906
struct __is_nt_destructible_impl : public __do_is_nt_destructible_impl { 
# 909
typedef __decltype((__test< _Tp> (0))) type; 
# 910
}; 
# 912
template< class _Tp, bool 
# 913
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 916
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_nt_destructible_safe; 
# 919
template< class _Tp> 
# 920
struct __is_nt_destructible_safe< _Tp, false, false>  : public __is_nt_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 923
}; 
# 925
template< class _Tp> 
# 926
struct __is_nt_destructible_safe< _Tp, true, false>  : public false_type { 
# 927
}; 
# 929
template< class _Tp> 
# 930
struct __is_nt_destructible_safe< _Tp, false, true>  : public true_type { 
# 931
}; 
# 935
template< class _Tp> 
# 936
struct is_nothrow_destructible : public __is_nt_destructible_safe< _Tp> ::type { 
# 939
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 941
}; 
# 944
template< class _Tp, class ..._Args> 
# 945
struct __is_constructible_impl : public __bool_constant< __is_constructible(_Tp, _Args...)>  { 
# 947
}; 
# 951
template< class _Tp, class ..._Args> 
# 952
struct is_constructible : public __is_constructible_impl< _Tp, _Args...>  { 
# 955
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 957
}; 
# 960
template< class _Tp> 
# 961
struct is_default_constructible : public __is_constructible_impl< _Tp> ::type { 
# 964
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 966
}; 
# 969
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_constructible_impl; 
# 972
template< class _Tp> 
# 973
struct __is_copy_constructible_impl< _Tp, false>  : public false_type { 
# 974
}; 
# 976
template< class _Tp> 
# 977
struct __is_copy_constructible_impl< _Tp, true>  : public __is_constructible_impl< _Tp, const _Tp &>  { 
# 979
}; 
# 983
template< class _Tp> 
# 984
struct is_copy_constructible : public __is_copy_constructible_impl< _Tp>  { 
# 987
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 989
}; 
# 992
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_constructible_impl; 
# 995
template< class _Tp> 
# 996
struct __is_move_constructible_impl< _Tp, false>  : public false_type { 
# 997
}; 
# 999
template< class _Tp> 
# 1000
struct __is_move_constructible_impl< _Tp, true>  : public __is_constructible_impl< _Tp, _Tp &&>  { 
# 1002
}; 
# 1006
template< class _Tp> 
# 1007
struct is_move_constructible : public __is_move_constructible_impl< _Tp>  { 
# 1010
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1012
}; 
# 1015
template< class _Tp, class ..._Args> using __is_nothrow_constructible_impl = __bool_constant< __is_nothrow_constructible(_Tp, _Args...)> ; 
# 1021
template< class _Tp, class ..._Args> 
# 1022
struct is_nothrow_constructible : public __is_nothrow_constructible_impl< _Tp, _Args...> ::type { 
# 1025
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1027
}; 
# 1030
template< class _Tp> 
# 1031
struct is_nothrow_default_constructible : public __bool_constant< __is_nothrow_constructible(_Tp)>  { 
# 1034
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1036
}; 
# 1039
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_copy_constructible_impl; 
# 1042
template< class _Tp> 
# 1043
struct __is_nothrow_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1044
}; 
# 1046
template< class _Tp> 
# 1047
struct __is_nothrow_copy_constructible_impl< _Tp, true>  : public __is_nothrow_constructible_impl< _Tp, const _Tp &>  { 
# 1049
}; 
# 1053
template< class _Tp> 
# 1054
struct is_nothrow_copy_constructible : public __is_nothrow_copy_constructible_impl< _Tp> ::type { 
# 1057
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1059
}; 
# 1062
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_move_constructible_impl; 
# 1065
template< class _Tp> 
# 1066
struct __is_nothrow_move_constructible_impl< _Tp, false>  : public false_type { 
# 1067
}; 
# 1069
template< class _Tp> 
# 1070
struct __is_nothrow_move_constructible_impl< _Tp, true>  : public __is_nothrow_constructible_impl< _Tp, _Tp &&>  { 
# 1072
}; 
# 1076
template< class _Tp> 
# 1077
struct is_nothrow_move_constructible : public __is_nothrow_move_constructible_impl< _Tp> ::type { 
# 1080
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1082
}; 
# 1085
template< class _Tp, class _Up> 
# 1086
struct is_assignable : public __bool_constant< __is_assignable(_Tp, _Up)>  { 
# 1089
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1091
}; 
# 1093
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_assignable_impl; 
# 1096
template< class _Tp> 
# 1097
struct __is_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1098
}; 
# 1100
template< class _Tp> 
# 1101
struct __is_copy_assignable_impl< _Tp, true>  : public __bool_constant< __is_assignable(_Tp &, const _Tp &)>  { 
# 1103
}; 
# 1106
template< class _Tp> 
# 1107
struct is_copy_assignable : public __is_copy_assignable_impl< _Tp> ::type { 
# 1110
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1112
}; 
# 1114
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_assignable_impl; 
# 1117
template< class _Tp> 
# 1118
struct __is_move_assignable_impl< _Tp, false>  : public false_type { 
# 1119
}; 
# 1121
template< class _Tp> 
# 1122
struct __is_move_assignable_impl< _Tp, true>  : public __bool_constant< __is_assignable(_Tp &, _Tp &&)>  { 
# 1124
}; 
# 1127
template< class _Tp> 
# 1128
struct is_move_assignable : public __is_move_assignable_impl< _Tp> ::type { 
# 1131
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1133
}; 
# 1135
template< class _Tp, class _Up> using __is_nothrow_assignable_impl = __bool_constant< __is_nothrow_assignable(_Tp, _Up)> ; 
# 1140
template< class _Tp, class _Up> 
# 1141
struct is_nothrow_assignable : public __is_nothrow_assignable_impl< _Tp, _Up>  { 
# 1144
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1146
}; 
# 1148
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_copy_assignable_impl; 
# 1151
template< class _Tp> 
# 1152
struct __is_nt_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1153
}; 
# 1155
template< class _Tp> 
# 1156
struct __is_nt_copy_assignable_impl< _Tp, true>  : public __is_nothrow_assignable_impl< _Tp &, const _Tp &>  { 
# 1158
}; 
# 1161
template< class _Tp> 
# 1162
struct is_nothrow_copy_assignable : public __is_nt_copy_assignable_impl< _Tp>  { 
# 1165
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1167
}; 
# 1169
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_move_assignable_impl; 
# 1172
template< class _Tp> 
# 1173
struct __is_nt_move_assignable_impl< _Tp, false>  : public false_type { 
# 1174
}; 
# 1176
template< class _Tp> 
# 1177
struct __is_nt_move_assignable_impl< _Tp, true>  : public __is_nothrow_assignable_impl< _Tp &, _Tp &&>  { 
# 1179
}; 
# 1182
template< class _Tp> 
# 1183
struct is_nothrow_move_assignable : public __is_nt_move_assignable_impl< _Tp>  { 
# 1186
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1188
}; 
# 1191
template< class _Tp, class ..._Args> 
# 1192
struct is_trivially_constructible : public __bool_constant< __is_trivially_constructible(_Tp, _Args...)>  { 
# 1195
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1197
}; 
# 1200
template< class _Tp> 
# 1201
struct is_trivially_default_constructible : public __bool_constant< __is_trivially_constructible(_Tp)>  { 
# 1204
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1206
}; 
# 1208
struct __do_is_implicitly_default_constructible_impl { 
# 1210
template< class _Tp> static void __helper(const _Tp &); 
# 1213
template< class _Tp> static true_type __test(const _Tp &, __decltype((__helper< const _Tp &> ({}))) * = 0); 
# 1217
static false_type __test(...); 
# 1218
}; 
# 1220
template< class _Tp> 
# 1221
struct __is_implicitly_default_constructible_impl : public __do_is_implicitly_default_constructible_impl { 
# 1224
typedef __decltype((__test(declval< _Tp> ()))) type; 
# 1225
}; 
# 1227
template< class _Tp> 
# 1228
struct __is_implicitly_default_constructible_safe : public __is_implicitly_default_constructible_impl< _Tp> ::type { 
# 1230
}; 
# 1232
template< class _Tp> 
# 1233
struct __is_implicitly_default_constructible : public __and_< __is_constructible_impl< _Tp> , __is_implicitly_default_constructible_safe< _Tp> >  { 
# 1236
}; 
# 1238
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_copy_constructible_impl; 
# 1241
template< class _Tp> 
# 1242
struct __is_trivially_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1243
}; 
# 1245
template< class _Tp> 
# 1246
struct __is_trivially_copy_constructible_impl< _Tp, true>  : public __and_< __is_copy_constructible_impl< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, const _Tp &)> >  { 
# 1250
}; 
# 1253
template< class _Tp> 
# 1254
struct is_trivially_copy_constructible : public __is_trivially_copy_constructible_impl< _Tp>  { 
# 1257
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1259
}; 
# 1261
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_move_constructible_impl; 
# 1264
template< class _Tp> 
# 1265
struct __is_trivially_move_constructible_impl< _Tp, false>  : public false_type { 
# 1266
}; 
# 1268
template< class _Tp> 
# 1269
struct __is_trivially_move_constructible_impl< _Tp, true>  : public __and_< __is_move_constructible_impl< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, _Tp &&)> >  { 
# 1273
}; 
# 1276
template< class _Tp> 
# 1277
struct is_trivially_move_constructible : public __is_trivially_move_constructible_impl< _Tp>  { 
# 1280
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1282
}; 
# 1285
template< class _Tp, class _Up> 
# 1286
struct is_trivially_assignable : public __bool_constant< __is_trivially_assignable(_Tp, _Up)>  { 
# 1289
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1291
}; 
# 1293
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_copy_assignable_impl; 
# 1296
template< class _Tp> 
# 1297
struct __is_trivially_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1298
}; 
# 1300
template< class _Tp> 
# 1301
struct __is_trivially_copy_assignable_impl< _Tp, true>  : public __bool_constant< __is_trivially_assignable(_Tp &, const _Tp &)>  { 
# 1303
}; 
# 1306
template< class _Tp> 
# 1307
struct is_trivially_copy_assignable : public __is_trivially_copy_assignable_impl< _Tp>  { 
# 1310
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1312
}; 
# 1314
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_move_assignable_impl; 
# 1317
template< class _Tp> 
# 1318
struct __is_trivially_move_assignable_impl< _Tp, false>  : public false_type { 
# 1319
}; 
# 1321
template< class _Tp> 
# 1322
struct __is_trivially_move_assignable_impl< _Tp, true>  : public __bool_constant< __is_trivially_assignable(_Tp &, _Tp &&)>  { 
# 1324
}; 
# 1327
template< class _Tp> 
# 1328
struct is_trivially_move_assignable : public __is_trivially_move_assignable_impl< _Tp>  { 
# 1331
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1333
}; 
# 1336
template< class _Tp> 
# 1337
struct is_trivially_destructible : public __and_< __is_destructible_safe< _Tp> , __bool_constant< __has_trivial_destructor(_Tp)> >  { 
# 1341
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1343
}; 
# 1347
template< class _Tp> 
# 1348
struct has_virtual_destructor : public integral_constant< bool, __has_virtual_destructor(_Tp)>  { 
# 1351
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1353
}; 
# 1359
template< class _Tp> 
# 1360
struct alignment_of : public integral_constant< unsigned long, __alignof__(_Tp)>  { 
# 1363
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1365
}; 
# 1368
template< class > 
# 1369
struct rank : public integral_constant< unsigned long, 0UL>  { 
# 1370
}; 
# 1372
template< class _Tp, size_t _Size> 
# 1373
struct rank< _Tp [_Size]>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1374
}; 
# 1376
template< class _Tp> 
# 1377
struct rank< _Tp []>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1378
}; 
# 1381
template< class , unsigned _Uint> 
# 1382
struct extent : public integral_constant< unsigned long, 0UL>  { 
# 1383
}; 
# 1385
template< class _Tp, unsigned _Uint, size_t _Size> 
# 1386
struct extent< _Tp [_Size], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? _Size : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1390
}; 
# 1392
template< class _Tp, unsigned _Uint> 
# 1393
struct extent< _Tp [], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? 0 : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1397
}; 
# 1403
template< class _Tp, class _Up> 
# 1404
struct is_same : public integral_constant< bool, __is_same(_Tp, _Up)>  { 
# 1410
}; 
# 1420 "/usr/include/c++/11/type_traits" 3
template< class _Base, class _Derived> 
# 1421
struct is_base_of : public integral_constant< bool, __is_base_of(_Base, _Derived)>  { 
# 1423
}; 
# 1425
template< class _From, class _To, bool 
# 1426
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1428
struct __is_convertible_helper { 
# 1430
typedef typename is_void< _To> ::type type; 
# 1431
}; 
# 1433
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
template< class _From, class _To> 
# 1436
class __is_convertible_helper< _From, _To, false>  { 
# 1438
template< class _To1> static void __test_aux(_To1) noexcept; 
# 1441
template< class _From1, class _To1, class 
# 1442
 = __decltype((__test_aux< _To1> (std::declval< _From1> ())))> static true_type 
# 1441
__test(int); 
# 1446
template< class , class > static false_type __test(...); 
# 1451
public: typedef __decltype((__test< _From, _To> (0))) type; 
# 1452
}; 
#pragma GCC diagnostic pop
# 1456
template< class _From, class _To> 
# 1457
struct is_convertible : public __is_convertible_helper< _From, _To> ::type { 
# 1459
}; 
# 1462
template< class _ToElementType, class _FromElementType> using __is_array_convertible = is_convertible< _FromElementType (*)[], _ToElementType (*)[]> ; 
# 1466
template< class _From, class _To, bool 
# 1467
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1469
struct __is_nt_convertible_helper : public is_void< _To>  { 
# 1471
}; 
# 1473
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
template< class _From, class _To> 
# 1476
class __is_nt_convertible_helper< _From, _To, false>  { 
# 1478
template< class _To1> static void __test_aux(_To1) noexcept; 
# 1481
template< class _From1, class _To1> static __bool_constant< noexcept(__test_aux< _To1> (std::declval< _From1> ()))>  __test(int); 
# 1486
template< class , class > static false_type __test(...); 
# 1491
public: using type = __decltype((__test< _From, _To> (0))); 
# 1492
}; 
#pragma GCC diagnostic pop
# 1512 "/usr/include/c++/11/type_traits" 3
template< class _Tp> 
# 1513
struct remove_const { 
# 1514
typedef _Tp type; }; 
# 1516
template< class _Tp> 
# 1517
struct remove_const< const _Tp>  { 
# 1518
typedef _Tp type; }; 
# 1521
template< class _Tp> 
# 1522
struct remove_volatile { 
# 1523
typedef _Tp type; }; 
# 1525
template< class _Tp> 
# 1526
struct remove_volatile< volatile _Tp>  { 
# 1527
typedef _Tp type; }; 
# 1530
template< class _Tp> 
# 1531
struct remove_cv { 
# 1532
using type = _Tp; }; 
# 1534
template< class _Tp> 
# 1535
struct remove_cv< const _Tp>  { 
# 1536
using type = _Tp; }; 
# 1538
template< class _Tp> 
# 1539
struct remove_cv< volatile _Tp>  { 
# 1540
using type = _Tp; }; 
# 1542
template< class _Tp> 
# 1543
struct remove_cv< const volatile _Tp>  { 
# 1544
using type = _Tp; }; 
# 1547
template< class _Tp> 
# 1548
struct add_const { 
# 1549
typedef const _Tp type; }; 
# 1552
template< class _Tp> 
# 1553
struct add_volatile { 
# 1554
typedef volatile _Tp type; }; 
# 1557
template< class _Tp> 
# 1558
struct add_cv { 
# 1561
typedef typename add_const< typename add_volatile< _Tp> ::type> ::type type; 
# 1562
}; 
# 1569
template< class _Tp> using remove_const_t = typename remove_const< _Tp> ::type; 
# 1573
template< class _Tp> using remove_volatile_t = typename remove_volatile< _Tp> ::type; 
# 1577
template< class _Tp> using remove_cv_t = typename remove_cv< _Tp> ::type; 
# 1581
template< class _Tp> using add_const_t = typename add_const< _Tp> ::type; 
# 1585
template< class _Tp> using add_volatile_t = typename add_volatile< _Tp> ::type; 
# 1589
template< class _Tp> using add_cv_t = typename add_cv< _Tp> ::type; 
# 1596
template< class _Tp> 
# 1597
struct remove_reference { 
# 1598
typedef _Tp type; }; 
# 1600
template< class _Tp> 
# 1601
struct remove_reference< _Tp &>  { 
# 1602
typedef _Tp type; }; 
# 1604
template< class _Tp> 
# 1605
struct remove_reference< _Tp &&>  { 
# 1606
typedef _Tp type; }; 
# 1608
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1609
struct __add_lvalue_reference_helper { 
# 1610
typedef _Tp type; }; 
# 1612
template< class _Tp> 
# 1613
struct __add_lvalue_reference_helper< _Tp, true>  { 
# 1614
typedef _Tp &type; }; 
# 1617
template< class _Tp> 
# 1618
struct add_lvalue_reference : public __add_lvalue_reference_helper< _Tp>  { 
# 1620
}; 
# 1622
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1623
struct __add_rvalue_reference_helper { 
# 1624
typedef _Tp type; }; 
# 1626
template< class _Tp> 
# 1627
struct __add_rvalue_reference_helper< _Tp, true>  { 
# 1628
typedef _Tp &&type; }; 
# 1631
template< class _Tp> 
# 1632
struct add_rvalue_reference : public __add_rvalue_reference_helper< _Tp>  { 
# 1634
}; 
# 1638
template< class _Tp> using remove_reference_t = typename remove_reference< _Tp> ::type; 
# 1642
template< class _Tp> using add_lvalue_reference_t = typename add_lvalue_reference< _Tp> ::type; 
# 1646
template< class _Tp> using add_rvalue_reference_t = typename add_rvalue_reference< _Tp> ::type; 
# 1655
template< class _Unqualified, bool _IsConst, bool _IsVol> struct __cv_selector; 
# 1658
template< class _Unqualified> 
# 1659
struct __cv_selector< _Unqualified, false, false>  { 
# 1660
typedef _Unqualified __type; }; 
# 1662
template< class _Unqualified> 
# 1663
struct __cv_selector< _Unqualified, false, true>  { 
# 1664
typedef volatile _Unqualified __type; }; 
# 1666
template< class _Unqualified> 
# 1667
struct __cv_selector< _Unqualified, true, false>  { 
# 1668
typedef const _Unqualified __type; }; 
# 1670
template< class _Unqualified> 
# 1671
struct __cv_selector< _Unqualified, true, true>  { 
# 1672
typedef const volatile _Unqualified __type; }; 
# 1674
template< class _Qualified, class _Unqualified, bool 
# 1675
_IsConst = is_const< _Qualified> ::value, bool 
# 1676
_IsVol = is_volatile< _Qualified> ::value> 
# 1677
class __match_cv_qualifiers { 
# 1679
typedef __cv_selector< _Unqualified, _IsConst, _IsVol>  __match; 
# 1682
public: typedef typename __cv_selector< _Unqualified, _IsConst, _IsVol> ::__type __type; 
# 1683
}; 
# 1686
template< class _Tp> 
# 1687
struct __make_unsigned { 
# 1688
typedef _Tp __type; }; 
# 1691
template<> struct __make_unsigned< char>  { 
# 1692
typedef unsigned char __type; }; 
# 1695
template<> struct __make_unsigned< signed char>  { 
# 1696
typedef unsigned char __type; }; 
# 1699
template<> struct __make_unsigned< short>  { 
# 1700
typedef unsigned short __type; }; 
# 1703
template<> struct __make_unsigned< int>  { 
# 1704
typedef unsigned __type; }; 
# 1707
template<> struct __make_unsigned< long>  { 
# 1708
typedef unsigned long __type; }; 
# 1711
template<> struct __make_unsigned< long long>  { 
# 1712
typedef unsigned long long __type; }; 
# 1716
template<> struct __make_unsigned< __int128>  { 
# 1717
typedef unsigned __int128 __type; }; 
# 1736 "/usr/include/c++/11/type_traits" 3
template< class _Tp, bool 
# 1737
_IsInt = is_integral< _Tp> ::value, bool 
# 1738
_IsEnum = is_enum< _Tp> ::value> class __make_unsigned_selector; 
# 1741
template< class _Tp> 
# 1742
class __make_unsigned_selector< _Tp, true, false>  { 
# 1744
using __unsigned_type = typename __make_unsigned< __remove_cv_t< _Tp> > ::__type; 
# 1748
public: using __type = typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type; 
# 1750
}; 
# 1752
class __make_unsigned_selector_base { 
# 1755
protected: template< class ...> struct _List { }; 
# 1757
template< class _Tp, class ..._Up> 
# 1758
struct _List< _Tp, _Up...>  : public __make_unsigned_selector_base::_List< _Up...>  { 
# 1759
static constexpr inline std::size_t __size = sizeof(_Tp); }; 
# 1761
template< size_t _Sz, class _Tp, bool  = _Sz <= _Tp::__size> struct __select; 
# 1764
template< size_t _Sz, class _Uint, class ..._UInts> 
# 1765
struct __select< _Sz, _List< _Uint, _UInts...> , true>  { 
# 1766
using __type = _Uint; }; 
# 1768
template< size_t _Sz, class _Uint, class ..._UInts> 
# 1769
struct __select< _Sz, _List< _Uint, _UInts...> , false>  : public __make_unsigned_selector_base::__select< _Sz, _List< _UInts...> >  { 
# 1771
}; 
# 1772
}; 
# 1775
template< class _Tp> 
# 1776
class __make_unsigned_selector< _Tp, false, true>  : private __make_unsigned_selector_base { 
# 1780
using _UInts = _List< unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> ; 
# 1783
using __unsigned_type = typename __select< sizeof(_Tp), _List< unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> > ::__type; 
# 1786
public: using __type = typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type; 
# 1788
}; 
# 1796
template<> struct __make_unsigned< wchar_t>  { 
# 1798
using __type = __make_unsigned_selector< wchar_t, false, true> ::__type; 
# 1800
}; 
# 1813 "/usr/include/c++/11/type_traits" 3
template<> struct __make_unsigned< char16_t>  { 
# 1815
using __type = __make_unsigned_selector< char16_t, false, true> ::__type; 
# 1817
}; 
# 1820
template<> struct __make_unsigned< char32_t>  { 
# 1822
using __type = __make_unsigned_selector< char32_t, false, true> ::__type; 
# 1824
}; 
# 1831
template< class _Tp> 
# 1832
struct make_unsigned { 
# 1833
typedef typename __make_unsigned_selector< _Tp> ::__type type; }; 
# 1837
template<> struct make_unsigned< bool> ; 
# 1842
template< class _Tp> 
# 1843
struct __make_signed { 
# 1844
typedef _Tp __type; }; 
# 1847
template<> struct __make_signed< char>  { 
# 1848
typedef signed char __type; }; 
# 1851
template<> struct __make_signed< unsigned char>  { 
# 1852
typedef signed char __type; }; 
# 1855
template<> struct __make_signed< unsigned short>  { 
# 1856
typedef signed short __type; }; 
# 1859
template<> struct __make_signed< unsigned>  { 
# 1860
typedef signed int __type; }; 
# 1863
template<> struct __make_signed< unsigned long>  { 
# 1864
typedef signed long __type; }; 
# 1867
template<> struct __make_signed< unsigned long long>  { 
# 1868
typedef signed long long __type; }; 
# 1872
template<> struct __make_signed< unsigned __int128>  { 
# 1873
typedef __int128 __type; }; 
# 1892 "/usr/include/c++/11/type_traits" 3
template< class _Tp, bool 
# 1893
_IsInt = is_integral< _Tp> ::value, bool 
# 1894
_IsEnum = is_enum< _Tp> ::value> class __make_signed_selector; 
# 1897
template< class _Tp> 
# 1898
class __make_signed_selector< _Tp, true, false>  { 
# 1900
using __signed_type = typename __make_signed< __remove_cv_t< _Tp> > ::__type; 
# 1904
public: using __type = typename __match_cv_qualifiers< _Tp, __signed_type> ::__type; 
# 1906
}; 
# 1909
template< class _Tp> 
# 1910
class __make_signed_selector< _Tp, false, true>  { 
# 1912
typedef typename __make_unsigned_selector< _Tp> ::__type __unsigned_type; 
# 1915
public: typedef typename std::__make_signed_selector< __unsigned_type> ::__type __type; 
# 1916
}; 
# 1924
template<> struct __make_signed< wchar_t>  { 
# 1926
using __type = __make_signed_selector< wchar_t, false, true> ::__type; 
# 1928
}; 
# 1941 "/usr/include/c++/11/type_traits" 3
template<> struct __make_signed< char16_t>  { 
# 1943
using __type = __make_signed_selector< char16_t, false, true> ::__type; 
# 1945
}; 
# 1948
template<> struct __make_signed< char32_t>  { 
# 1950
using __type = __make_signed_selector< char32_t, false, true> ::__type; 
# 1952
}; 
# 1959
template< class _Tp> 
# 1960
struct make_signed { 
# 1961
typedef typename __make_signed_selector< _Tp> ::__type type; }; 
# 1965
template<> struct make_signed< bool> ; 
# 1969
template< class _Tp> using make_signed_t = typename make_signed< _Tp> ::type; 
# 1973
template< class _Tp> using make_unsigned_t = typename make_unsigned< _Tp> ::type; 
# 1980
template< class _Tp> 
# 1981
struct remove_extent { 
# 1982
typedef _Tp type; }; 
# 1984
template< class _Tp, size_t _Size> 
# 1985
struct remove_extent< _Tp [_Size]>  { 
# 1986
typedef _Tp type; }; 
# 1988
template< class _Tp> 
# 1989
struct remove_extent< _Tp []>  { 
# 1990
typedef _Tp type; }; 
# 1993
template< class _Tp> 
# 1994
struct remove_all_extents { 
# 1995
typedef _Tp type; }; 
# 1997
template< class _Tp, size_t _Size> 
# 1998
struct remove_all_extents< _Tp [_Size]>  { 
# 1999
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 2001
template< class _Tp> 
# 2002
struct remove_all_extents< _Tp []>  { 
# 2003
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 2007
template< class _Tp> using remove_extent_t = typename remove_extent< _Tp> ::type; 
# 2011
template< class _Tp> using remove_all_extents_t = typename remove_all_extents< _Tp> ::type; 
# 2017
template< class _Tp, class > 
# 2018
struct __remove_pointer_helper { 
# 2019
typedef _Tp type; }; 
# 2021
template< class _Tp, class _Up> 
# 2022
struct __remove_pointer_helper< _Tp, _Up *>  { 
# 2023
typedef _Up type; }; 
# 2026
template< class _Tp> 
# 2027
struct remove_pointer : public __remove_pointer_helper< _Tp, __remove_cv_t< _Tp> >  { 
# 2029
}; 
# 2031
template< class _Tp, bool  = __or_< __is_referenceable< _Tp> , is_void< _Tp> > ::value> 
# 2033
struct __add_pointer_helper { 
# 2034
typedef _Tp type; }; 
# 2036
template< class _Tp> 
# 2037
struct __add_pointer_helper< _Tp, true>  { 
# 2038
typedef typename remove_reference< _Tp> ::type *type; }; 
# 2041
template< class _Tp> 
# 2042
struct add_pointer : public __add_pointer_helper< _Tp>  { 
# 2044
}; 
# 2048
template< class _Tp> using remove_pointer_t = typename remove_pointer< _Tp> ::type; 
# 2052
template< class _Tp> using add_pointer_t = typename add_pointer< _Tp> ::type; 
# 2056
template< size_t _Len> 
# 2057
struct __aligned_storage_msa { 
# 2059
union __type { 
# 2061
unsigned char __data[_Len]; 
# 2062
struct __attribute((__aligned__)) { } __align; 
# 2063
}; 
# 2064
}; 
# 2076 "/usr/include/c++/11/type_traits" 3
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> 
# 2078
struct aligned_storage { 
# 2080
union type { 
# 2082
unsigned char __data[_Len]; 
# 2083
struct __attribute((__aligned__(_Align))) { } __align; 
# 2084
}; 
# 2085
}; 
# 2087
template< class ..._Types> 
# 2088
struct __strictest_alignment { 
# 2090
static const size_t _S_alignment = (0); 
# 2091
static const size_t _S_size = (0); 
# 2092
}; 
# 2094
template< class _Tp, class ..._Types> 
# 2095
struct __strictest_alignment< _Tp, _Types...>  { 
# 2097
static const size_t _S_alignment = ((__alignof__(_Tp) > __strictest_alignment< _Types...> ::_S_alignment) ? __alignof__(_Tp) : __strictest_alignment< _Types...> ::_S_alignment); 
# 2100
static const size_t _S_size = ((sizeof(_Tp) > __strictest_alignment< _Types...> ::_S_size) ? sizeof(_Tp) : __strictest_alignment< _Types...> ::_S_size); 
# 2103
}; 
# 2115 "/usr/include/c++/11/type_traits" 3
template< size_t _Len, class ..._Types> 
# 2116
struct aligned_union { 
# 2119
static_assert((sizeof...(_Types) != (0)), "At least one type is required");
# 2121
private: using __strictest = __strictest_alignment< _Types...> ; 
# 2122
static const size_t _S_len = ((_Len > __strictest::_S_size) ? _Len : __strictest::_S_size); 
# 2126
public: static const size_t alignment_value = (__strictest::_S_alignment); 
# 2128
typedef typename aligned_storage< _S_len, alignment_value> ::type type; 
# 2129
}; 
# 2131
template< size_t _Len, class ..._Types> const size_t aligned_union< _Len, _Types...> ::alignment_value; 
# 2138
template< class _Up, bool 
# 2139
_IsArray = is_array< _Up> ::value, bool 
# 2140
_IsFunction = is_function< _Up> ::value> struct __decay_selector; 
# 2144
template< class _Up> 
# 2145
struct __decay_selector< _Up, false, false>  { 
# 2146
typedef __remove_cv_t< _Up>  __type; }; 
# 2148
template< class _Up> 
# 2149
struct __decay_selector< _Up, true, false>  { 
# 2150
typedef typename remove_extent< _Up> ::type *__type; }; 
# 2152
template< class _Up> 
# 2153
struct __decay_selector< _Up, false, true>  { 
# 2154
typedef typename add_pointer< _Up> ::type __type; }; 
# 2158
template< class _Tp> 
# 2159
class decay { 
# 2161
typedef typename remove_reference< _Tp> ::type __remove_type; 
# 2164
public: typedef typename __decay_selector< __remove_type> ::__type type; 
# 2165
}; 
# 2170
template< class _Tp> 
# 2171
struct __strip_reference_wrapper { 
# 2173
typedef _Tp __type; 
# 2174
}; 
# 2176
template< class _Tp> 
# 2177
struct __strip_reference_wrapper< reference_wrapper< _Tp> >  { 
# 2179
typedef _Tp &__type; 
# 2180
}; 
# 2183
template< class _Tp> using __decay_t = typename decay< _Tp> ::type; 
# 2186
template< class _Tp> using __decay_and_strip = __strip_reference_wrapper< __decay_t< _Tp> > ; 
# 2192
template< bool , class _Tp = void> 
# 2193
struct enable_if { 
# 2194
}; 
# 2197
template< class _Tp> 
# 2198
struct enable_if< true, _Tp>  { 
# 2199
typedef _Tp type; }; 
# 2204
template< bool _Cond, class _Tp = void> using __enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2208
template< class ..._Cond> using _Require = __enable_if_t< __and_< _Cond...> ::value> ; 
# 2212
template< class _Tp> using __remove_cvref_t = typename remove_cv< typename remove_reference< _Tp> ::type> ::type; 
# 2219
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 2220
struct conditional { 
# 2221
typedef _Iftrue type; }; 
# 2224
template< class _Iftrue, class _Iffalse> 
# 2225
struct conditional< false, _Iftrue, _Iffalse>  { 
# 2226
typedef _Iffalse type; }; 
# 2229
template< class ..._Tp> struct common_type; 
# 2235
struct __do_common_type_impl { 
# 2237
template< class _Tp, class _Up> using __cond_t = __decltype((true ? std::declval< _Tp> () : std::declval< _Up> ())); 
# 2243
template< class _Tp, class _Up> static __success_type< __decay_t< __cond_t< _Tp, _Up> > >  _S_test(int); 
# 2255 "/usr/include/c++/11/type_traits" 3
template< class , class > static __failure_type _S_test_2(...); 
# 2259
template< class _Tp, class _Up> static __decltype((_S_test_2< _Tp, _Up> (0))) _S_test(...); 
# 2262
}; 
# 2266
template<> struct common_type< >  { 
# 2267
}; 
# 2270
template< class _Tp0> 
# 2271
struct common_type< _Tp0>  : public std::common_type< _Tp0, _Tp0>  { 
# 2273
}; 
# 2276
template< class _Tp1, class _Tp2, class 
# 2277
_Dp1 = __decay_t< _Tp1> , class _Dp2 = __decay_t< _Tp2> > 
# 2278
struct __common_type_impl { 
# 2282
using type = common_type< _Dp1, _Dp2> ; 
# 2283
}; 
# 2285
template< class _Tp1, class _Tp2> 
# 2286
struct __common_type_impl< _Tp1, _Tp2, _Tp1, _Tp2>  : private __do_common_type_impl { 
# 2291
using type = __decltype((_S_test< _Tp1, _Tp2> (0))); 
# 2292
}; 
# 2295
template< class _Tp1, class _Tp2> 
# 2296
struct common_type< _Tp1, _Tp2>  : public __common_type_impl< _Tp1, _Tp2> ::type { 
# 2298
}; 
# 2300
template< class ...> 
# 2301
struct __common_type_pack { 
# 2302
}; 
# 2304
template< class , class , class  = void> struct __common_type_fold; 
# 2308
template< class _Tp1, class _Tp2, class ..._Rp> 
# 2309
struct common_type< _Tp1, _Tp2, _Rp...>  : public __common_type_fold< std::common_type< _Tp1, _Tp2> , __common_type_pack< _Rp...> >  { 
# 2312
}; 
# 2317
template< class _CTp, class ..._Rp> 
# 2318
struct __common_type_fold< _CTp, __common_type_pack< _Rp...> , __void_t< typename _CTp::type> >  : public common_type< typename _CTp::type, _Rp...>  { 
# 2321
}; 
# 2324
template< class _CTp, class _Rp> 
# 2325
struct __common_type_fold< _CTp, _Rp, void>  { 
# 2326
}; 
# 2328
template< class _Tp, bool  = is_enum< _Tp> ::value> 
# 2329
struct __underlying_type_impl { 
# 2331
using type = __underlying_type(_Tp); 
# 2332
}; 
# 2334
template< class _Tp> 
# 2335
struct __underlying_type_impl< _Tp, false>  { 
# 2336
}; 
# 2340
template< class _Tp> 
# 2341
struct underlying_type : public __underlying_type_impl< _Tp>  { 
# 2343
}; 
# 2346
template< class _Tp> 
# 2347
struct __declval_protector { 
# 2349
static const bool __stop = false; 
# 2350
}; 
# 2357
template< class _Tp> auto 
# 2358
declval() noexcept->__decltype((__declval< _Tp> (0))) 
# 2359
{ 
# 2360
static_assert((__declval_protector< _Tp> ::__stop), "declval() must not be used!");
# 2362
return __declval< _Tp> (0); 
# 2363
} 
# 2366
template< class _Signature> struct result_of; 
# 2374
struct __invoke_memfun_ref { }; 
# 2375
struct __invoke_memfun_deref { }; 
# 2376
struct __invoke_memobj_ref { }; 
# 2377
struct __invoke_memobj_deref { }; 
# 2378
struct __invoke_other { }; 
# 2381
template< class _Tp, class _Tag> 
# 2382
struct __result_of_success : public __success_type< _Tp>  { 
# 2383
using __invoke_type = _Tag; }; 
# 2386
struct __result_of_memfun_ref_impl { 
# 2388
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype(((std::declval< _Tp1> ().*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_ref>  _S_test(int); 
# 2393
template< class ...> static __failure_type _S_test(...); 
# 2395
}; 
# 2397
template< class _MemPtr, class _Arg, class ..._Args> 
# 2398
struct __result_of_memfun_ref : private __result_of_memfun_ref_impl { 
# 2401
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2402
}; 
# 2405
struct __result_of_memfun_deref_impl { 
# 2407
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype((((*std::declval< _Tp1> ()).*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_deref>  _S_test(int); 
# 2412
template< class ...> static __failure_type _S_test(...); 
# 2414
}; 
# 2416
template< class _MemPtr, class _Arg, class ..._Args> 
# 2417
struct __result_of_memfun_deref : private __result_of_memfun_deref_impl { 
# 2420
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2421
}; 
# 2424
struct __result_of_memobj_ref_impl { 
# 2426
template< class _Fp, class _Tp1> static __result_of_success< __decltype((std::declval< _Tp1> ().*std::declval< _Fp> ())), __invoke_memobj_ref>  _S_test(int); 
# 2431
template< class , class > static __failure_type _S_test(...); 
# 2433
}; 
# 2435
template< class _MemPtr, class _Arg> 
# 2436
struct __result_of_memobj_ref : private __result_of_memobj_ref_impl { 
# 2439
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2440
}; 
# 2443
struct __result_of_memobj_deref_impl { 
# 2445
template< class _Fp, class _Tp1> static __result_of_success< __decltype(((*std::declval< _Tp1> ()).*std::declval< _Fp> ())), __invoke_memobj_deref>  _S_test(int); 
# 2450
template< class , class > static __failure_type _S_test(...); 
# 2452
}; 
# 2454
template< class _MemPtr, class _Arg> 
# 2455
struct __result_of_memobj_deref : private __result_of_memobj_deref_impl { 
# 2458
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2459
}; 
# 2461
template< class _MemPtr, class _Arg> struct __result_of_memobj; 
# 2464
template< class _Res, class _Class, class _Arg> 
# 2465
struct __result_of_memobj< _Res (_Class::*), _Arg>  { 
# 2467
typedef __remove_cvref_t< _Arg>  _Argval; 
# 2468
typedef _Res (_Class::*_MemPtr); 
# 2473
typedef typename conditional< __or_< is_same< _Argval, _Class> , is_base_of< _Class, _Argval> > ::value, __result_of_memobj_ref< _MemPtr, _Arg> , __result_of_memobj_deref< _MemPtr, _Arg> > ::type::type type; 
# 2474
}; 
# 2476
template< class _MemPtr, class _Arg, class ..._Args> struct __result_of_memfun; 
# 2479
template< class _Res, class _Class, class _Arg, class ..._Args> 
# 2480
struct __result_of_memfun< _Res (_Class::*), _Arg, _Args...>  { 
# 2482
typedef typename remove_reference< _Arg> ::type _Argval; 
# 2483
typedef _Res (_Class::*_MemPtr); 
# 2487
typedef typename conditional< is_base_of< _Class, _Argval> ::value, __result_of_memfun_ref< _MemPtr, _Arg, _Args...> , __result_of_memfun_deref< _MemPtr, _Arg, _Args...> > ::type::type type; 
# 2488
}; 
# 2495
template< class _Tp, class _Up = __remove_cvref_t< _Tp> > 
# 2496
struct __inv_unwrap { 
# 2498
using type = _Tp; 
# 2499
}; 
# 2501
template< class _Tp, class _Up> 
# 2502
struct __inv_unwrap< _Tp, reference_wrapper< _Up> >  { 
# 2504
using type = _Up &; 
# 2505
}; 
# 2507
template< bool , bool , class _Functor, class ..._ArgTypes> 
# 2508
struct __result_of_impl { 
# 2510
typedef __failure_type type; 
# 2511
}; 
# 2513
template< class _MemPtr, class _Arg> 
# 2514
struct __result_of_impl< true, false, _MemPtr, _Arg>  : public __result_of_memobj< __decay_t< _MemPtr> , typename __inv_unwrap< _Arg> ::type>  { 
# 2517
}; 
# 2519
template< class _MemPtr, class _Arg, class ..._Args> 
# 2520
struct __result_of_impl< false, true, _MemPtr, _Arg, _Args...>  : public __result_of_memfun< __decay_t< _MemPtr> , typename __inv_unwrap< _Arg> ::type, _Args...>  { 
# 2523
}; 
# 2526
struct __result_of_other_impl { 
# 2528
template< class _Fn, class ..._Args> static __result_of_success< __decltype((std::declval< _Fn> ()(std::declval< _Args> ()...))), __invoke_other>  _S_test(int); 
# 2533
template< class ...> static __failure_type _S_test(...); 
# 2535
}; 
# 2537
template< class _Functor, class ..._ArgTypes> 
# 2538
struct __result_of_impl< false, false, _Functor, _ArgTypes...>  : private __result_of_other_impl { 
# 2541
typedef __decltype((_S_test< _Functor, _ArgTypes...> (0))) type; 
# 2542
}; 
# 2545
template< class _Functor, class ..._ArgTypes> 
# 2546
struct __invoke_result : public __result_of_impl< is_member_object_pointer< typename remove_reference< _Functor> ::type> ::value, is_member_function_pointer< typename remove_reference< _Functor> ::type> ::value, _Functor, _ArgTypes...> ::type { 
# 2556
}; 
# 2559
template< class _Functor, class ..._ArgTypes> 
# 2560
struct result_of< _Functor (_ArgTypes ...)>  : public __invoke_result< _Functor, _ArgTypes...>  { 
# 2562
}; 
# 2566
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> using aligned_storage_t = typename aligned_storage< _Len, _Align> ::type; 
# 2570
template< size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union< _Len, _Types...> ::type; 
# 2574
template< class _Tp> using decay_t = typename decay< _Tp> ::type; 
# 2578
template< bool _Cond, class _Tp = void> using enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2582
template< bool _Cond, class _Iftrue, class _Iffalse> using conditional_t = typename conditional< _Cond, _Iftrue, _Iffalse> ::type; 
# 2586
template< class ..._Tp> using common_type_t = typename common_type< _Tp...> ::type; 
# 2590
template< class _Tp> using underlying_type_t = typename underlying_type< _Tp> ::type; 
# 2594
template< class _Tp> using result_of_t = typename result_of< _Tp> ::type; 
# 2601
template< class ...> using void_t = void; 
# 2607
template< class _Default, class _AlwaysVoid, 
# 2608
template< class ...>  class _Op, class ..._Args> 
# 2609
struct __detector { 
# 2611
using value_t = false_type; 
# 2612
using type = _Default; 
# 2613
}; 
# 2616
template< class _Default, template< class ...>  class _Op, class ...
# 2617
_Args> 
# 2618
struct __detector< _Default, __void_t< _Op< _Args...> > , _Op, _Args...>  { 
# 2620
using value_t = true_type; 
# 2621
using type = _Op< _Args...> ; 
# 2622
}; 
# 2625
template< class _Default, template< class ...>  class _Op, class ...
# 2626
_Args> using __detected_or = __detector< _Default, void, _Op, _Args...> ; 
# 2630
template< class _Default, template< class ...>  class _Op, class ...
# 2631
_Args> using __detected_or_t = typename __detected_or< _Default, _Op, _Args...> ::type; 
# 2649 "/usr/include/c++/11/type_traits" 3
template< class _Tp> struct __is_swappable; 
# 2652
template< class _Tp> struct __is_nothrow_swappable; 
# 2655
template< class > 
# 2656
struct __is_tuple_like_impl : public false_type { 
# 2657
}; 
# 2659
template< class ..._Tps> 
# 2660
struct __is_tuple_like_impl< tuple< _Tps...> >  : public true_type { 
# 2661
}; 
# 2664
template< class _Tp> 
# 2665
struct __is_tuple_like : public __is_tuple_like_impl< __remove_cvref_t< _Tp> > ::type { 
# 2667
}; 
# 2670
template< class _Tp> inline _Require< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> >  swap(_Tp &, _Tp &) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value); 
# 2680
template< class _Tp, size_t _Nm> inline __enable_if_t< __is_swappable< _Tp> ::value>  swap(_Tp (& __a)[_Nm], _Tp (& __b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value); 
# 2688
namespace __swappable_details { 
# 2689
using std::swap;
# 2691
struct __do_is_swappable_impl { 
# 2693
template< class _Tp, class 
# 2694
 = __decltype((swap(std::declval< _Tp &> (), std::declval< _Tp &> ())))> static true_type 
# 2693
__test(int); 
# 2697
template< class > static false_type __test(...); 
# 2699
}; 
# 2701
struct __do_is_nothrow_swappable_impl { 
# 2703
template< class _Tp> static __bool_constant< noexcept(swap(std::declval< _Tp &> (), std::declval< _Tp &> ()))>  __test(int); 
# 2708
template< class > static false_type __test(...); 
# 2710
}; 
# 2712
}
# 2714
template< class _Tp> 
# 2715
struct __is_swappable_impl : public __swappable_details::__do_is_swappable_impl { 
# 2718
typedef __decltype((__test< _Tp> (0))) type; 
# 2719
}; 
# 2721
template< class _Tp> 
# 2722
struct __is_nothrow_swappable_impl : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2725
typedef __decltype((__test< _Tp> (0))) type; 
# 2726
}; 
# 2728
template< class _Tp> 
# 2729
struct __is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2731
}; 
# 2733
template< class _Tp> 
# 2734
struct __is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2736
}; 
# 2744
template< class _Tp> 
# 2745
struct is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2748
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 2750
}; 
# 2753
template< class _Tp> 
# 2754
struct is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2757
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 2759
}; 
# 2763
template< class _Tp> constexpr bool 
# 2764
is_swappable_v = (is_swappable< _Tp> ::value); 
# 2768
template< class _Tp> constexpr bool 
# 2769
is_nothrow_swappable_v = (is_nothrow_swappable< _Tp> ::value); 
# 2774
namespace __swappable_with_details { 
# 2775
using std::swap;
# 2777
struct __do_is_swappable_with_impl { 
# 2779
template< class _Tp, class _Up, class 
# 2780
 = __decltype((swap(std::declval< _Tp> (), std::declval< _Up> ()))), class 
# 2782
 = __decltype((swap(std::declval< _Up> (), std::declval< _Tp> ())))> static true_type 
# 2779
__test(int); 
# 2785
template< class , class > static false_type __test(...); 
# 2787
}; 
# 2789
struct __do_is_nothrow_swappable_with_impl { 
# 2791
template< class _Tp, class _Up> static __bool_constant< noexcept(swap(std::declval< _Tp> (), std::declval< _Up> ())) && noexcept(swap(std::declval< _Up> (), std::declval< _Tp> ()))>  __test(int); 
# 2798
template< class , class > static false_type __test(...); 
# 2800
}; 
# 2802
}
# 2804
template< class _Tp, class _Up> 
# 2805
struct __is_swappable_with_impl : public __swappable_with_details::__do_is_swappable_with_impl { 
# 2808
typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 2809
}; 
# 2812
template< class _Tp> 
# 2813
struct __is_swappable_with_impl< _Tp &, _Tp &>  : public __swappable_details::__do_is_swappable_impl { 
# 2816
typedef __decltype((__test< _Tp &> (0))) type; 
# 2817
}; 
# 2819
template< class _Tp, class _Up> 
# 2820
struct __is_nothrow_swappable_with_impl : public __swappable_with_details::__do_is_nothrow_swappable_with_impl { 
# 2823
typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 2824
}; 
# 2827
template< class _Tp> 
# 2828
struct __is_nothrow_swappable_with_impl< _Tp &, _Tp &>  : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2831
typedef __decltype((__test< _Tp &> (0))) type; 
# 2832
}; 
# 2836
template< class _Tp, class _Up> 
# 2837
struct is_swappable_with : public __is_swappable_with_impl< _Tp, _Up> ::type { 
# 2840
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "first template argument must be a complete class or an unbounded array");
# 2842
static_assert((std::__is_complete_or_unbounded(__type_identity< _Up> {})), "second template argument must be a complete class or an unbounded array");
# 2844
}; 
# 2847
template< class _Tp, class _Up> 
# 2848
struct is_nothrow_swappable_with : public __is_nothrow_swappable_with_impl< _Tp, _Up> ::type { 
# 2851
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "first template argument must be a complete class or an unbounded array");
# 2853
static_assert((std::__is_complete_or_unbounded(__type_identity< _Up> {})), "second template argument must be a complete class or an unbounded array");
# 2855
}; 
# 2859
template< class _Tp, class _Up> constexpr bool 
# 2860
is_swappable_with_v = (is_swappable_with< _Tp, _Up> ::value); 
# 2864
template< class _Tp, class _Up> constexpr bool 
# 2865
is_nothrow_swappable_with_v = (is_nothrow_swappable_with< _Tp, _Up> ::value); 
# 2876 "/usr/include/c++/11/type_traits" 3
template< class _Result, class _Ret, bool 
# 2877
 = is_void< _Ret> ::value, class  = void> 
# 2878
struct __is_invocable_impl : public false_type { 
# 2881
using __nothrow_type = false_type; 
# 2882
}; 
# 2885
template< class _Result, class _Ret> 
# 2886
struct __is_invocable_impl< _Result, _Ret, true, __void_t< typename _Result::type> >  : public true_type { 
# 2891
using __nothrow_type = true_type; 
# 2892
}; 
# 2894
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
# 2897
template< class _Result, class _Ret> 
# 2898
struct __is_invocable_impl< _Result, _Ret, false, __void_t< typename _Result::type> >  { 
# 2906
private: static typename _Result::type _S_get() noexcept; 
# 2908
template< class _Tp> static void _S_conv(_Tp) noexcept; 
# 2912
template< class _Tp, bool _Check_Noex = false, class 
# 2913
 = __decltype((_S_conv< _Tp> ((_S_get)()))), bool 
# 2914
_Noex = noexcept(_S_conv< _Tp> ((_S_get)()))> static __bool_constant< _Check_Noex ? _Noex : true>  
# 2912
_S_test(int); 
# 2918
template< class _Tp, bool  = false> static false_type _S_test(...); 
# 2924
public: using type = __decltype((_S_test< _Ret> (1))); 
# 2927
using __nothrow_type = __decltype((_S_test< _Ret, true> (1))); 
# 2928
}; 
#pragma GCC diagnostic pop
# 2931
template< class _Fn, class ..._ArgTypes> 
# 2932
struct __is_invocable : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> ::type { 
# 2934
}; 
# 2936
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2937
__call_is_nt(__invoke_memfun_ref) 
# 2938
{ 
# 2939
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2940
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2942
} 
# 2944
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2945
__call_is_nt(__invoke_memfun_deref) 
# 2946
{ 
# 2947
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2949
} 
# 2951
template< class _Fn, class _Tp> constexpr bool 
# 2952
__call_is_nt(__invoke_memobj_ref) 
# 2953
{ 
# 2954
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2955
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())); 
# 2956
} 
# 2958
template< class _Fn, class _Tp> constexpr bool 
# 2959
__call_is_nt(__invoke_memobj_deref) 
# 2960
{ 
# 2961
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())); 
# 2962
} 
# 2964
template< class _Fn, class ..._Args> constexpr bool 
# 2965
__call_is_nt(__invoke_other) 
# 2966
{ 
# 2967
return noexcept(std::declval< _Fn> ()(std::declval< _Args> ()...)); 
# 2968
} 
# 2970
template< class _Result, class _Fn, class ..._Args> 
# 2971
struct __call_is_nothrow : public __bool_constant< std::__call_is_nt< _Fn, _Args...> (typename _Result::__invoke_type{})>  { 
# 2975
}; 
# 2977
template< class _Fn, class ..._Args> using __call_is_nothrow_ = __call_is_nothrow< __invoke_result< _Fn, _Args...> , _Fn, _Args...> ; 
# 2982
template< class _Fn, class ..._Args> 
# 2983
struct __is_nothrow_invocable : public __and_< __is_invocable< _Fn, _Args...> , __call_is_nothrow_< _Fn, _Args...> > ::type { 
# 2986
}; 
# 2988
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
struct __nonesuchbase { }; 
# 2991
struct __nonesuch : private __nonesuchbase { 
# 2992
~__nonesuch() = delete;
# 2993
__nonesuch(const __nonesuch &) = delete;
# 2994
void operator=(const __nonesuch &) = delete;
# 2995
}; 
#pragma GCC diagnostic pop
# 3003
template< class _Functor, class ..._ArgTypes> 
# 3004
struct invoke_result : public __invoke_result< _Functor, _ArgTypes...>  { 
# 3007
static_assert((std::__is_complete_or_unbounded(__type_identity< _Functor> {})), "_Functor must be a complete class or an unbounded array");
# 3009
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3012
}; 
# 3015
template< class _Fn, class ..._Args> using invoke_result_t = typename invoke_result< _Fn, _Args...> ::type; 
# 3019
template< class _Fn, class ..._ArgTypes> 
# 3020
struct is_invocable : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> ::type { 
# 3023
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3025
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3028
}; 
# 3031
template< class _Ret, class _Fn, class ..._ArgTypes> 
# 3032
struct is_invocable_r : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , _Ret> ::type { 
# 3035
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3037
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3040
static_assert((std::__is_complete_or_unbounded(__type_identity< _Ret> {})), "_Ret must be a complete class or an unbounded array");
# 3042
}; 
# 3045
template< class _Fn, class ..._ArgTypes> 
# 3046
struct is_nothrow_invocable : public __and_< __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> , __call_is_nothrow_< _Fn, _ArgTypes...> > ::type { 
# 3050
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3052
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3055
}; 
# 3058
template< class _Result, class _Ret> using __is_nt_invocable_impl = typename __is_invocable_impl< _Result, _Ret> ::__nothrow_type; 
# 3064
template< class _Ret, class _Fn, class ..._ArgTypes> 
# 3065
struct is_nothrow_invocable_r : public __and_< __is_nt_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , _Ret> , __call_is_nothrow_< _Fn, _ArgTypes...> > ::type { 
# 3069
static_assert((std::__is_complete_or_unbounded(__type_identity< _Fn> {})), "_Fn must be a complete class or an unbounded array");
# 3071
static_assert(((std::__is_complete_or_unbounded(__type_identity< _ArgTypes> {}) && ... )), "each argument type must be a complete class or an unbounded array");
# 3074
static_assert((std::__is_complete_or_unbounded(__type_identity< _Ret> {})), "_Ret must be a complete class or an unbounded array");
# 3076
}; 
# 3094 "/usr/include/c++/11/type_traits" 3
template< class _Tp> constexpr bool 
# 3095
is_void_v = (is_void< _Tp> ::value); 
# 3096
template< class _Tp> constexpr bool 
# 3097
is_null_pointer_v = (is_null_pointer< _Tp> ::value); 
# 3098
template< class _Tp> constexpr bool 
# 3099
is_integral_v = (is_integral< _Tp> ::value); 
# 3100
template< class _Tp> constexpr bool 
# 3101
is_floating_point_v = (is_floating_point< _Tp> ::value); 
# 3102
template< class _Tp> constexpr bool 
# 3103
is_array_v = (is_array< _Tp> ::value); 
# 3104
template< class _Tp> constexpr bool 
# 3105
is_pointer_v = (is_pointer< _Tp> ::value); 
# 3106
template< class _Tp> constexpr bool 
# 3107
is_lvalue_reference_v = (is_lvalue_reference< _Tp> ::value); 
# 3109
template< class _Tp> constexpr bool 
# 3110
is_rvalue_reference_v = (is_rvalue_reference< _Tp> ::value); 
# 3112
template< class _Tp> constexpr bool 
# 3113
is_member_object_pointer_v = (is_member_object_pointer< _Tp> ::value); 
# 3115
template< class _Tp> constexpr bool 
# 3116
is_member_function_pointer_v = (is_member_function_pointer< _Tp> ::value); 
# 3118
template< class _Tp> constexpr bool 
# 3119
is_enum_v = (is_enum< _Tp> ::value); 
# 3120
template< class _Tp> constexpr bool 
# 3121
is_union_v = (is_union< _Tp> ::value); 
# 3122
template< class _Tp> constexpr bool 
# 3123
is_class_v = (is_class< _Tp> ::value); 
# 3124
template< class _Tp> constexpr bool 
# 3125
is_function_v = (is_function< _Tp> ::value); 
# 3126
template< class _Tp> constexpr bool 
# 3127
is_reference_v = (is_reference< _Tp> ::value); 
# 3128
template< class _Tp> constexpr bool 
# 3129
is_arithmetic_v = (is_arithmetic< _Tp> ::value); 
# 3130
template< class _Tp> constexpr bool 
# 3131
is_fundamental_v = (is_fundamental< _Tp> ::value); 
# 3132
template< class _Tp> constexpr bool 
# 3133
is_object_v = (is_object< _Tp> ::value); 
# 3134
template< class _Tp> constexpr bool 
# 3135
is_scalar_v = (is_scalar< _Tp> ::value); 
# 3136
template< class _Tp> constexpr bool 
# 3137
is_compound_v = (is_compound< _Tp> ::value); 
# 3138
template< class _Tp> constexpr bool 
# 3139
is_member_pointer_v = (is_member_pointer< _Tp> ::value); 
# 3140
template< class _Tp> constexpr bool 
# 3141
is_const_v = (is_const< _Tp> ::value); 
# 3142
template< class _Tp> constexpr bool 
# 3143
is_volatile_v = (is_volatile< _Tp> ::value); 
# 3144
template< class _Tp> constexpr bool 
# 3145
is_trivial_v = (is_trivial< _Tp> ::value); 
# 3146
template< class _Tp> constexpr bool 
# 3147
is_trivially_copyable_v = (is_trivially_copyable< _Tp> ::value); 
# 3149
template< class _Tp> constexpr bool 
# 3150
is_standard_layout_v = (is_standard_layout< _Tp> ::value); 
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template< class _Tp> constexpr bool 
# 3155
is_pod_v = (is_pod< _Tp> ::value); 
# 3156
template< class _Tp> 
# 3157
[[__deprecated__]] constexpr bool 
# 3158
is_literal_type_v = (is_literal_type< _Tp> ::value); 
#pragma GCC diagnostic pop
template< class _Tp> constexpr bool 
# 3161
is_empty_v = (is_empty< _Tp> ::value); 
# 3162
template< class _Tp> constexpr bool 
# 3163
is_polymorphic_v = (is_polymorphic< _Tp> ::value); 
# 3164
template< class _Tp> constexpr bool 
# 3165
is_abstract_v = (is_abstract< _Tp> ::value); 
# 3166
template< class _Tp> constexpr bool 
# 3167
is_final_v = (is_final< _Tp> ::value); 
# 3168
template< class _Tp> constexpr bool 
# 3169
is_signed_v = (is_signed< _Tp> ::value); 
# 3170
template< class _Tp> constexpr bool 
# 3171
is_unsigned_v = (is_unsigned< _Tp> ::value); 
# 3172
template< class _Tp, class ..._Args> constexpr bool 
# 3173
is_constructible_v = (is_constructible< _Tp, _Args...> ::value); 
# 3175
template< class _Tp> constexpr bool 
# 3176
is_default_constructible_v = (is_default_constructible< _Tp> ::value); 
# 3178
template< class _Tp> constexpr bool 
# 3179
is_copy_constructible_v = (is_copy_constructible< _Tp> ::value); 
# 3181
template< class _Tp> constexpr bool 
# 3182
is_move_constructible_v = (is_move_constructible< _Tp> ::value); 
# 3184
template< class _Tp, class _Up> constexpr bool 
# 3185
is_assignable_v = (is_assignable< _Tp, _Up> ::value); 
# 3186
template< class _Tp> constexpr bool 
# 3187
is_copy_assignable_v = (is_copy_assignable< _Tp> ::value); 
# 3188
template< class _Tp> constexpr bool 
# 3189
is_move_assignable_v = (is_move_assignable< _Tp> ::value); 
# 3190
template< class _Tp> constexpr bool 
# 3191
is_destructible_v = (is_destructible< _Tp> ::value); 
# 3192
template< class _Tp, class ..._Args> constexpr bool 
# 3193
is_trivially_constructible_v = (is_trivially_constructible< _Tp, _Args...> ::value); 
# 3195
template< class _Tp> constexpr bool 
# 3196
is_trivially_default_constructible_v = (is_trivially_default_constructible< _Tp> ::value); 
# 3198
template< class _Tp> constexpr bool 
# 3199
is_trivially_copy_constructible_v = (is_trivially_copy_constructible< _Tp> ::value); 
# 3201
template< class _Tp> constexpr bool 
# 3202
is_trivially_move_constructible_v = (is_trivially_move_constructible< _Tp> ::value); 
# 3204
template< class _Tp, class _Up> constexpr bool 
# 3205
is_trivially_assignable_v = (is_trivially_assignable< _Tp, _Up> ::value); 
# 3207
template< class _Tp> constexpr bool 
# 3208
is_trivially_copy_assignable_v = (is_trivially_copy_assignable< _Tp> ::value); 
# 3210
template< class _Tp> constexpr bool 
# 3211
is_trivially_move_assignable_v = (is_trivially_move_assignable< _Tp> ::value); 
# 3213
template< class _Tp> constexpr bool 
# 3214
is_trivially_destructible_v = (is_trivially_destructible< _Tp> ::value); 
# 3216
template< class _Tp, class ..._Args> constexpr bool 
# 3217
is_nothrow_constructible_v = (is_nothrow_constructible< _Tp, _Args...> ::value); 
# 3219
template< class _Tp> constexpr bool 
# 3220
is_nothrow_default_constructible_v = (is_nothrow_default_constructible< _Tp> ::value); 
# 3222
template< class _Tp> constexpr bool 
# 3223
is_nothrow_copy_constructible_v = (is_nothrow_copy_constructible< _Tp> ::value); 
# 3225
template< class _Tp> constexpr bool 
# 3226
is_nothrow_move_constructible_v = (is_nothrow_move_constructible< _Tp> ::value); 
# 3228
template< class _Tp, class _Up> constexpr bool 
# 3229
is_nothrow_assignable_v = (is_nothrow_assignable< _Tp, _Up> ::value); 
# 3231
template< class _Tp> constexpr bool 
# 3232
is_nothrow_copy_assignable_v = (is_nothrow_copy_assignable< _Tp> ::value); 
# 3234
template< class _Tp> constexpr bool 
# 3235
is_nothrow_move_assignable_v = (is_nothrow_move_assignable< _Tp> ::value); 
# 3237
template< class _Tp> constexpr bool 
# 3238
is_nothrow_destructible_v = (is_nothrow_destructible< _Tp> ::value); 
# 3240
template< class _Tp> constexpr bool 
# 3241
has_virtual_destructor_v = (has_virtual_destructor< _Tp> ::value); 
# 3243
template< class _Tp> constexpr size_t 
# 3244
alignment_of_v = (alignment_of< _Tp> ::value); 
# 3245
template< class _Tp> constexpr size_t 
# 3246
rank_v = (rank< _Tp> ::value); 
# 3247
template< class _Tp, unsigned _Idx = 0U> constexpr size_t 
# 3248
extent_v = (extent< _Tp, _Idx> ::value); 
# 3250
template< class _Tp, class _Up> constexpr bool 
# 3251
is_same_v = __is_same(_Tp, _Up); 
# 3256
template< class _Base, class _Derived> constexpr bool 
# 3257
is_base_of_v = (is_base_of< _Base, _Derived> ::value); 
# 3258
template< class _From, class _To> constexpr bool 
# 3259
is_convertible_v = (is_convertible< _From, _To> ::value); 
# 3260
template< class _Fn, class ..._Args> constexpr bool 
# 3261
is_invocable_v = (is_invocable< _Fn, _Args...> ::value); 
# 3262
template< class _Fn, class ..._Args> constexpr bool 
# 3263
is_nothrow_invocable_v = (is_nothrow_invocable< _Fn, _Args...> ::value); 
# 3265
template< class _Ret, class _Fn, class ..._Args> constexpr bool 
# 3266
is_invocable_r_v = (is_invocable_r< _Ret, _Fn, _Args...> ::value); 
# 3268
template< class _Ret, class _Fn, class ..._Args> constexpr bool 
# 3269
is_nothrow_invocable_r_v = (is_nothrow_invocable_r< _Ret, _Fn, _Args...> ::value); 
# 3276
template< class _Tp> 
# 3277
struct has_unique_object_representations : public bool_constant< __has_unique_object_representations(remove_cv_t< remove_all_extents_t< _Tp> > )>  { 
# 3282
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 3284
}; 
# 3287
template< class _Tp> constexpr bool 
# 3288
has_unique_object_representations_v = (has_unique_object_representations< _Tp> ::value); 
# 3295
template< class _Tp> 
# 3296
struct is_aggregate : public bool_constant< __is_aggregate(remove_cv_t< _Tp> )>  { 
# 3298
}; 
# 3301
template< class _Tp> constexpr bool 
# 3302
is_aggregate_v = (is_aggregate< _Tp> ::value); 
# 3599 "/usr/include/c++/11/type_traits" 3
}
# 59 "/usr/include/c++/11/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 74 "/usr/include/c++/11/bits/move.h" 3
template< class _Tp> 
# 75
[[__nodiscard__]] constexpr _Tp &&
# 77
forward(typename remove_reference< _Tp> ::type &__t) noexcept 
# 78
{ return static_cast< _Tp &&>(__t); } 
# 86
template< class _Tp> 
# 87
[[__nodiscard__]] constexpr _Tp &&
# 89
forward(typename remove_reference< _Tp> ::type &&__t) noexcept 
# 90
{ 
# 91
static_assert((!std::template is_lvalue_reference< _Tp> ::value), "std::forward must not be used to convert an rvalue to an lvalue");
# 93
return static_cast< _Tp &&>(__t); 
# 94
} 
# 101
template< class _Tp> 
# 102
[[__nodiscard__]] constexpr typename remove_reference< _Tp> ::type &&
# 104
move(_Tp &&__t) noexcept 
# 105
{ return static_cast< typename remove_reference< _Tp> ::type &&>(__t); } 
# 108
template< class _Tp> 
# 109
struct __move_if_noexcept_cond : public __and_< __not_< is_nothrow_move_constructible< _Tp> > , is_copy_constructible< _Tp> > ::type { 
# 111
}; 
# 121 "/usr/include/c++/11/bits/move.h" 3
template< class _Tp> 
# 122
[[__nodiscard__]] constexpr typename conditional< __move_if_noexcept_cond< _Tp> ::value, const _Tp &, _Tp &&> ::type 
# 125
move_if_noexcept(_Tp &__x) noexcept 
# 126
{ return std::move(__x); } 
# 142 "/usr/include/c++/11/bits/move.h" 3
template< class _Tp> 
# 143
[[__nodiscard__]] constexpr _Tp *
# 145
addressof(_Tp &__r) noexcept 
# 146
{ return std::__addressof(__r); } 
# 150
template < typename _Tp >
    const _Tp * addressof ( const _Tp && ) = delete;
# 154
template< class _Tp, class _Up = _Tp> inline _Tp 
# 157
__exchange(_Tp &__obj, _Up &&__new_val) 
# 158
{ 
# 159
_Tp __old_val = std::move(__obj); 
# 160
__obj = std::forward< _Up> (__new_val); 
# 161
return __old_val; 
# 162
} 
# 186 "/usr/include/c++/11/bits/move.h" 3
template< class _Tp> inline typename enable_if< __and_< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> > ::value> ::type 
# 196
swap(_Tp &__a, _Tp &__b) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value) 
# 199
{ 
# 204
_Tp __tmp = std::move(__a); 
# 205
__a = std::move(__b); 
# 206
__b = std::move(__tmp); 
# 207
} 
# 212
template< class _Tp, size_t _Nm> inline typename enable_if< __is_swappable< _Tp> ::value> ::type 
# 220
swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value) 
# 222
{ 
# 223
for (size_t __n = (0); __n < _Nm; ++__n) { 
# 224
swap(__a[__n], __b[__n]); }  
# 225
} 
# 229
}
# 69 "/usr/include/c++/11/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 80 "/usr/include/c++/11/bits/stl_pair.h" 3
struct piecewise_construct_t { explicit piecewise_construct_t() = default;}; 
# 83
constexpr inline piecewise_construct_t piecewise_construct = piecewise_construct_t(); 
# 89
template< class ...> class tuple; 
# 92
template< size_t ...> struct _Index_tuple; 
# 100
template< bool , class _T1, class _T2> 
# 101
struct _PCC { 
# 103
template< class _U1, class _U2> static constexpr bool 
# 104
_ConstructiblePair() 
# 105
{ 
# 106
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, const _U2 &> > ::value; 
# 108
} 
# 110
template< class _U1, class _U2> static constexpr bool 
# 111
_ImplicitlyConvertiblePair() 
# 112
{ 
# 113
return __and_< is_convertible< const _U1 &, _T1> , is_convertible< const _U2 &, _T2> > ::value; 
# 115
} 
# 117
template< class _U1, class _U2> static constexpr bool 
# 118
_MoveConstructiblePair() 
# 119
{ 
# 120
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, _U2 &&> > ::value; 
# 122
} 
# 124
template< class _U1, class _U2> static constexpr bool 
# 125
_ImplicitlyMoveConvertiblePair() 
# 126
{ 
# 127
return __and_< is_convertible< _U1 &&, _T1> , is_convertible< _U2 &&, _T2> > ::value; 
# 129
} 
# 131
template< bool __implicit, class _U1, class _U2> static constexpr bool 
# 132
_CopyMovePair() 
# 133
{ 
# 134
using __do_converts = __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > ; 
# 136
using __converts = typename conditional< __implicit, __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > , __not_< __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > > > ::type; 
# 139
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, _U2 &&> , typename conditional< __implicit, __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > , __not_< __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > > > ::type> ::value; 
# 143
} 
# 145
template< bool __implicit, class _U1, class _U2> static constexpr bool 
# 146
_MoveCopyPair() 
# 147
{ 
# 148
using __do_converts = __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > ; 
# 150
using __converts = typename conditional< __implicit, __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > , __not_< __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > > > ::type; 
# 153
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, const _U2 &&> , typename conditional< __implicit, __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > , __not_< __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > > > ::type> ::value; 
# 157
} 
# 158
}; 
# 160
template< class _T1, class _T2> 
# 161
struct _PCC< false, _T1, _T2>  { 
# 163
template< class _U1, class _U2> static constexpr bool 
# 164
_ConstructiblePair() 
# 165
{ 
# 166
return false; 
# 167
} 
# 169
template< class _U1, class _U2> static constexpr bool 
# 170
_ImplicitlyConvertiblePair() 
# 171
{ 
# 172
return false; 
# 173
} 
# 175
template< class _U1, class _U2> static constexpr bool 
# 176
_MoveConstructiblePair() 
# 177
{ 
# 178
return false; 
# 179
} 
# 181
template< class _U1, class _U2> static constexpr bool 
# 182
_ImplicitlyMoveConvertiblePair() 
# 183
{ 
# 184
return false; 
# 185
} 
# 186
}; 
# 189
template< class _U1, class _U2> class __pair_base { 
# 192
template< class _T1, class _T2> friend struct pair; 
# 193
__pair_base() = default;
# 194
~__pair_base() = default;
# 195
__pair_base(const __pair_base &) = default;
# 196
__pair_base &operator=(const __pair_base &) = delete;
# 198
}; 
# 210 "/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> 
# 211
struct pair : private __pair_base< _T1, _T2>  { 
# 214
typedef _T1 first_type; 
# 215
typedef _T2 second_type; 
# 217
_T1 first; 
# 218
_T2 second; 
# 225
template< class _U1 = _T1, class 
# 226
_U2 = _T2, typename enable_if< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > ::value, bool> ::type 
# 230
 = true> constexpr 
# 232
pair() : first(), second() 
# 233
{ } 
# 236
template< class _U1 = _T1, class 
# 237
_U2 = _T2, typename enable_if< __and_< is_default_constructible< _U1> , is_default_constructible< _U2> , __not_< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > > > ::value, bool> ::type 
# 244
 = false> constexpr explicit 
# 245
pair() : first(), second() 
# 246
{ } 
# 256 "/usr/include/c++/11/bits/stl_pair.h" 3
using _PCCP = _PCC< true, _T1, _T2> ; 
# 260
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 265
 = true> constexpr 
# 266
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 267
{ } 
# 270
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 275
 = false> constexpr explicit 
# 276
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 277
{ } 
# 288 "/usr/include/c++/11/bits/stl_pair.h" 3
template< class _U1, class _U2> using _PCCFP = _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ; 
# 294
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 299
 = true> constexpr 
# 300
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 301
{ } 
# 303
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 308
 = false> constexpr explicit 
# 309
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 310
{ } 
# 314
constexpr pair(const pair &) = default;
# 315
constexpr pair(pair &&) = default;
# 318
template< class _U1, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveCopyPair< true, _U1, _T2> (), bool> ::type 
# 321
 = true> constexpr 
# 322
pair(_U1 &&__x, const _T2 &__y) : first(std::forward< _U1> (__x)), second(__y) 
# 323
{ } 
# 325
template< class _U1, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveCopyPair< false, _U1, _T2> (), bool> ::type 
# 328
 = false> constexpr explicit 
# 329
pair(_U1 &&__x, const _T2 &__y) : first(std::forward< _U1> (__x)), second(__y) 
# 330
{ } 
# 332
template< class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _CopyMovePair< true, _T1, _U2> (), bool> ::type 
# 335
 = true> constexpr 
# 336
pair(const _T1 &__x, _U2 &&__y) : first(__x), second(std::forward< _U2> (__y)) 
# 337
{ } 
# 339
template< class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _CopyMovePair< false, _T1, _U2> (), bool> ::type 
# 342
 = false> explicit 
# 343
pair(const _T1 &__x, _U2 &&__y) : first(__x), second(std::forward< _U2> (__y)) 
# 344
{ } 
# 346
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 351
 = true> constexpr 
# 352
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 353
{ } 
# 355
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 360
 = false> constexpr explicit 
# 361
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 362
{ } 
# 365
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 370
 = true> constexpr 
# 371
pair(std::pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 373
{ } 
# 375
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 380
 = false> constexpr explicit 
# 381
pair(std::pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 383
{ } 
# 385
template< class ..._Args1, class ..._Args2> pair(std::piecewise_construct_t, tuple< _Args1...> , tuple< _Args2...> ); 
# 390
pair &operator=(typename conditional< __and_< is_copy_assignable< _T1> , is_copy_assignable< _T2> > ::value, const pair &, const std::__nonesuch &> ::type 
# 393
__p) 
# 394
{ 
# 395
(first) = (__p.first); 
# 396
(second) = (__p.second); 
# 397
return *this; 
# 398
} 
# 401
pair &operator=(typename conditional< __and_< is_move_assignable< _T1> , is_move_assignable< _T2> > ::value, pair &&, std::__nonesuch &&> ::type 
# 404
__p) noexcept(__and_< is_nothrow_move_assignable< _T1> , is_nothrow_move_assignable< _T2> > ::value) 
# 407
{ 
# 408
(first) = std::forward< first_type> ((__p.first)); 
# 409
(second) = std::forward< second_type> ((__p.second)); 
# 410
return *this; 
# 411
} 
# 413
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, const _U1 &> , is_assignable< _T2 &, const _U2 &> > ::value, pair &> ::type 
# 418
operator=(const std::pair< _U1, _U2>  &__p) 
# 419
{ 
# 420
(first) = (__p.first); 
# 421
(second) = (__p.second); 
# 422
return *this; 
# 423
} 
# 425
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, _U1 &&> , is_assignable< _T2 &, _U2 &&> > ::value, pair &> ::type 
# 430
operator=(std::pair< _U1, _U2>  &&__p) 
# 431
{ 
# 432
(first) = std::forward< _U1> ((__p.first)); 
# 433
(second) = std::forward< _U2> ((__p.second)); 
# 434
return *this; 
# 435
} 
# 439
void swap(pair &__p) noexcept(__and_< __is_nothrow_swappable< _T1> , __is_nothrow_swappable< _T2> > ::value) 
# 442
{ 
# 443
using std::swap;
# 444
swap(first, __p.first); 
# 445
swap(second, __p.second); 
# 446
} 
# 449
private: template< class ..._Args1, std::size_t ..._Indexes1, class ...
# 450
_Args2, std::size_t ..._Indexes2> 
# 449
pair(tuple< _Args1...>  &, tuple< _Args2...>  &, _Index_tuple< _Indexes1...> , _Index_tuple< _Indexes2...> ); 
# 455
}; 
# 460
template< class _T1, class _T2> pair(_T1, _T2)->pair< _T1, _T2> ; 
# 464
template< class _T1, class _T2> constexpr bool 
# 466
operator==(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 467
{ return ((__x.first) == (__y.first)) && ((__x.second) == (__y.second)); } 
# 487 "/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr bool 
# 489
operator<(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 490
{ return ((__x.first) < (__y.first)) || ((!((__y.first) < (__x.first))) && ((__x.second) < (__y.second))); 
# 491
} 
# 494
template< class _T1, class _T2> constexpr bool 
# 496
operator!=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 497
{ return !(__x == __y); } 
# 500
template< class _T1, class _T2> constexpr bool 
# 502
operator>(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 503
{ return __y < __x; } 
# 506
template< class _T1, class _T2> constexpr bool 
# 508
operator<=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 509
{ return !(__y < __x); } 
# 512
template< class _T1, class _T2> constexpr bool 
# 514
operator>=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 515
{ return !(__x < __y); } 
# 524 "/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> inline typename enable_if< __and_< __is_swappable< _T1> , __is_swappable< _T2> > ::value> ::type 
# 533
swap(pair< _T1, _T2>  &__x, pair< _T1, _T2>  &__y) noexcept(noexcept(__x.swap(__y))) 
# 535
{ __x.swap(__y); } 
# 538
template < typename _T1, typename _T2 >
    typename enable_if < ! __and_ < __is_swappable < _T1 >,
          __is_swappable < _T2 > > :: value > :: type
    swap ( pair < _T1, _T2 > &, pair < _T1, _T2 > & ) = delete;
# 564 "/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr pair< typename __decay_and_strip< _T1> ::__type, typename __decay_and_strip< _T2> ::__type>  
# 567
make_pair(_T1 &&__x, _T2 &&__y) 
# 568
{ 
# 569
typedef typename __decay_and_strip< _T1> ::__type __ds_type1; 
# 570
typedef typename __decay_and_strip< _T2> ::__type __ds_type2; 
# 571
typedef pair< typename __decay_and_strip< _T1> ::__type, typename __decay_and_strip< _T2> ::__type>  __pair_type; 
# 572
return __pair_type(std::forward< _T1> (__x), std::forward< _T2> (__y)); 
# 573
} 
# 584 "/usr/include/c++/11/bits/stl_pair.h" 3
}
# 74 "/usr/include/c++/11/bits/stl_iterator_base_types.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 93 "/usr/include/c++/11/bits/stl_iterator_base_types.h" 3
struct input_iterator_tag { }; 
# 96
struct output_iterator_tag { }; 
# 99
struct forward_iterator_tag : public input_iterator_tag { }; 
# 103
struct bidirectional_iterator_tag : public forward_iterator_tag { }; 
# 107
struct random_access_iterator_tag : public bidirectional_iterator_tag { }; 
# 125 "/usr/include/c++/11/bits/stl_iterator_base_types.h" 3
template< class _Category, class _Tp, class _Distance = ptrdiff_t, class 
# 126
_Pointer = _Tp *, class _Reference = _Tp &> 
# 127
struct iterator { 
# 130
typedef _Category iterator_category; 
# 132
typedef _Tp value_type; 
# 134
typedef _Distance difference_type; 
# 136
typedef _Pointer pointer; 
# 138
typedef _Reference reference; 
# 139
}; 
# 149 "/usr/include/c++/11/bits/stl_iterator_base_types.h" 3
template< class _Iterator> struct iterator_traits; 
# 155
template< class _Iterator, class  = __void_t< > > 
# 156
struct __iterator_traits { }; 
# 160
template< class _Iterator> 
# 161
struct __iterator_traits< _Iterator, __void_t< typename _Iterator::iterator_category, typename _Iterator::value_type, typename _Iterator::difference_type, typename _Iterator::pointer, typename _Iterator::reference> >  { 
# 168
typedef typename _Iterator::iterator_category iterator_category; 
# 169
typedef typename _Iterator::value_type value_type; 
# 170
typedef typename _Iterator::difference_type difference_type; 
# 171
typedef typename _Iterator::pointer pointer; 
# 172
typedef typename _Iterator::reference reference; 
# 173
}; 
# 176
template< class _Iterator> 
# 177
struct iterator_traits : public __iterator_traits< _Iterator>  { 
# 178
}; 
# 209 "/usr/include/c++/11/bits/stl_iterator_base_types.h" 3
template< class _Tp> 
# 210
struct iterator_traits< _Tp *>  { 
# 212
typedef random_access_iterator_tag iterator_category; 
# 213
typedef _Tp value_type; 
# 214
typedef ptrdiff_t difference_type; 
# 215
typedef _Tp *pointer; 
# 216
typedef _Tp &reference; 
# 217
}; 
# 220
template< class _Tp> 
# 221
struct iterator_traits< const _Tp *>  { 
# 223
typedef random_access_iterator_tag iterator_category; 
# 224
typedef _Tp value_type; 
# 225
typedef ptrdiff_t difference_type; 
# 226
typedef const _Tp *pointer; 
# 227
typedef const _Tp &reference; 
# 228
}; 
# 235
template< class _Iter> constexpr typename iterator_traits< _Iter> ::iterator_category 
# 238
__iterator_category(const _Iter &) 
# 239
{ return typename iterator_traits< _Iter> ::iterator_category(); } 
# 244
template< class _Iter> using __iterator_category_t = typename iterator_traits< _Iter> ::iterator_category; 
# 248
template< class _InIter> using _RequireInputIter = __enable_if_t< is_convertible< __iterator_category_t< _InIter> , input_iterator_tag> ::value> ; 
# 253
template< class _It, class 
# 254
_Cat = __iterator_category_t< _It> > 
# 255
struct __is_random_access_iter : public is_base_of< random_access_iterator_tag, _Cat>  { 
# 258
typedef is_base_of< std::random_access_iterator_tag, _Cat>  _Base; 
# 259
enum { __value = is_base_of< std::random_access_iterator_tag, _Cat> ::value}; 
# 260
}; 
# 269
}
# 67 "/usr/include/c++/11/bits/stl_iterator_base_funcs.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 73
template< class > struct _List_iterator; 
# 74
template< class > struct _List_const_iterator; 
# 77
template< class _InputIterator> constexpr typename iterator_traits< _InputIterator> ::difference_type 
# 80
__distance(_InputIterator __first, _InputIterator __last, input_iterator_tag) 
# 82
{ 
# 86
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 87
while (__first != __last) 
# 88
{ 
# 89
++__first; 
# 90
++__n; 
# 91
}  
# 92
return __n; 
# 93
} 
# 95
template< class _RandomAccessIterator> constexpr typename iterator_traits< _RandomAccessIterator> ::difference_type 
# 98
__distance(_RandomAccessIterator __first, _RandomAccessIterator __last, random_access_iterator_tag) 
# 100
{ 
# 104
return __last - __first; 
# 105
} 
# 109
template< class _Tp> ptrdiff_t __distance(_List_iterator< _Tp> , _List_iterator< _Tp> , input_iterator_tag); 
# 115
template< class _Tp> ptrdiff_t __distance(_List_const_iterator< _Tp> , _List_const_iterator< _Tp> , input_iterator_tag); 
# 135 "/usr/include/c++/11/bits/stl_iterator_base_funcs.h" 3
template< class _InputIterator> constexpr typename iterator_traits< _InputIterator> ::difference_type 
# 138
distance(_InputIterator __first, _InputIterator __last) 
# 139
{ 
# 141
return std::__distance(__first, __last, std::__iterator_category(__first)); 
# 143
} 
# 145
template< class _InputIterator, class _Distance> constexpr void 
# 147
__advance(_InputIterator &__i, _Distance __n, input_iterator_tag) 
# 148
{ 
# 151
do { if (__builtin_is_constant_evaluated() && (!((bool)(__n >= 0)))) { __builtin_unreachable(); }  } while (false); 
# 152
while (__n--) { 
# 153
++__i; }  
# 154
} 
# 156
template< class _BidirectionalIterator, class _Distance> constexpr void 
# 158
__advance(_BidirectionalIterator &__i, _Distance __n, bidirectional_iterator_tag) 
# 160
{ 
# 164
if (__n > 0) { 
# 165
while (__n--) { 
# 166
++__i; }  } else { 
# 168
while (__n++) { 
# 169
--__i; }  }  
# 170
} 
# 172
template< class _RandomAccessIterator, class _Distance> constexpr void 
# 174
__advance(_RandomAccessIterator &__i, _Distance __n, random_access_iterator_tag) 
# 176
{ 
# 180
if (__builtin_constant_p(__n) && (__n == 1)) { 
# 181
++__i; } else { 
# 182
if (__builtin_constant_p(__n) && (__n == (-1))) { 
# 183
--__i; } else { 
# 185
__i += __n; }  }  
# 186
} 
# 200 "/usr/include/c++/11/bits/stl_iterator_base_funcs.h" 3
template< class _InputIterator, class _Distance> constexpr void 
# 202
advance(_InputIterator &__i, _Distance __n) 
# 203
{ 
# 205
typename iterator_traits< _InputIterator> ::difference_type __d = __n; 
# 206
std::__advance(__i, __d, std::__iterator_category(__i)); 
# 207
} 
# 211
template< class _InputIterator> constexpr _InputIterator 
# 213
next(_InputIterator __x, typename iterator_traits< _InputIterator> ::difference_type 
# 214
__n = 1) 
# 215
{ 
# 218
std::advance(__x, __n); 
# 219
return __x; 
# 220
} 
# 222
template< class _BidirectionalIterator> constexpr _BidirectionalIterator 
# 224
prev(_BidirectionalIterator __x, typename iterator_traits< _BidirectionalIterator> ::difference_type 
# 225
__n = 1) 
# 226
{ 
# 230
std::advance(__x, -__n); 
# 231
return __x; 
# 232
} 
# 237
}
# 42 "/usr/include/c++/11/bits/ptr_traits.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 46
class __undefined; 
# 49
template< class _Tp, class _Up> 
# 50
struct __replace_first_arg { 
# 51
}; 
# 53
template< template< class , class ...>  class _Template, class _Up, class 
# 54
_Tp, class ..._Types> 
# 55
struct __replace_first_arg< _Template< _Tp, _Types...> , _Up>  { 
# 56
using type = _Template< _Up, _Types...> ; }; 
# 58
template< class _Tp, class _Up> using __replace_first_arg_t = typename __replace_first_arg< _Tp, _Up> ::type; 
# 61
template< class _Tp> using __make_not_void = typename conditional< is_void< _Tp> ::value, __undefined, _Tp> ::type; 
# 65
template< class _Ptr> 
# 66
struct __ptr_traits_elem_1 { 
# 67
}; 
# 69
template< template< class , class ...>  class _SomePointer, class _Tp, class ...
# 70
_Args> 
# 71
struct __ptr_traits_elem_1< _SomePointer< _Tp, _Args...> >  { 
# 73
using element_type = _Tp; 
# 74
using pointer = _SomePointer< _Tp, _Args...> ; 
# 77
static pointer pointer_to(__make_not_void< element_type>  &__e) 
# 78
{ return pointer::pointer_to(__e); } 
# 79
}; 
# 81
template< class _Ptr, class  = void> 
# 82
struct __ptr_traits_elem : public __ptr_traits_elem_1< _Ptr>  { 
# 83
}; 
# 85
template< class _Ptr> 
# 86
struct __ptr_traits_elem< _Ptr, __void_t< typename _Ptr::element_type> >  { 
# 88
using element_type = typename _Ptr::element_type; 
# 91
static _Ptr pointer_to(__make_not_void< element_type>  &__e) 
# 92
{ return _Ptr::pointer_to(__e); } 
# 93
}; 
# 99
template< class _Ptr> 
# 100
struct pointer_traits : public __ptr_traits_elem< _Ptr>  { 
# 104
private: 
# 103
template< class _Tp> using __difference_type = typename _Tp::difference_type; 
# 106
template< class _Tp, class _Up, class  = void> 
# 107
struct __rebind : public __replace_first_arg< _Tp, _Up>  { }; 
# 109
template< class _Tp, class _Up> 
# 110
struct __rebind< _Tp, _Up, std::__void_t< typename _Tp::template rebind< _Up> > >  { 
# 111
using type = typename _Tp::template rebind< _Up> ; }; 
# 115
public: using pointer = _Ptr; 
# 118
using difference_type = std::__detected_or_t< std::ptrdiff_t, __difference_type, _Ptr> ; 
# 122
template< class _Up> using rebind = typename __rebind< _Ptr, _Up> ::type; 
# 124
}; 
# 130
template< class _Tp> 
# 131
struct pointer_traits< _Tp *>  { 
# 134
typedef _Tp *pointer; 
# 136
typedef _Tp element_type; 
# 138
typedef ptrdiff_t difference_type; 
# 140
template< class _Up> using rebind = _Up *; 
# 149
static pointer pointer_to(__make_not_void< element_type>  &__r) noexcept 
# 150
{ return std::addressof(__r); } 
# 151
}; 
# 154
template< class _Ptr, class _Tp> using __ptr_rebind = typename pointer_traits< _Ptr> ::template rebind< _Tp> ; 
# 157
template< class _Tp> constexpr _Tp *
# 159
__to_address(_Tp *__ptr) noexcept 
# 160
{ 
# 161
static_assert((!std::template is_function< _Tp> ::value), "not a function pointer");
# 162
return __ptr; 
# 163
} 
# 166
template< class _Ptr> constexpr typename pointer_traits< _Ptr> ::element_type *
# 168
__to_address(const _Ptr &__ptr) 
# 169
{ return std::__to_address(__ptr.operator->()); } 
# 215 "/usr/include/c++/11/bits/ptr_traits.h" 3
}
# 88 "/usr/include/c++/11/bits/stl_iterator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 127 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator> 
# 128
class reverse_iterator : public iterator< typename iterator_traits< _Iterator> ::iterator_category, typename iterator_traits< _Iterator> ::value_type, typename iterator_traits< _Iterator> ::difference_type, typename iterator_traits< _Iterator> ::pointer, typename iterator_traits< _Iterator> ::reference>  { 
# 135
template< class _Iter> friend class reverse_iterator; 
# 147 "/usr/include/c++/11/bits/stl_iterator.h" 3
protected: _Iterator current; 
# 149
typedef iterator_traits< _Iterator>  __traits_type; 
# 152
public: typedef _Iterator iterator_type; 
# 153
typedef typename iterator_traits< _Iterator> ::pointer pointer; 
# 155
typedef typename iterator_traits< _Iterator> ::difference_type difference_type; 
# 156
typedef typename iterator_traits< _Iterator> ::reference reference; 
# 178 "/usr/include/c++/11/bits/stl_iterator.h" 3
constexpr reverse_iterator() : current() { } 
# 184
constexpr explicit reverse_iterator(iterator_type __x) : current(__x) { } 
# 190
constexpr reverse_iterator(const reverse_iterator &__x) : current(__x.current) 
# 191
{ } 
# 194
reverse_iterator &operator=(const reverse_iterator &) = default;
# 201
template< class _Iter> constexpr 
# 206
reverse_iterator(const reverse_iterator< _Iter>  &__x) : current((__x.current)) 
# 207
{ } 
# 210
template< class _Iter> constexpr reverse_iterator &
# 217
operator=(const reverse_iterator< _Iter>  &__x) 
# 218
{ 
# 219
(current) = (__x.current); 
# 220
return *this; 
# 221
} 
# 228
constexpr iterator_type base() const 
# 229
{ return current; } 
# 242 "/usr/include/c++/11/bits/stl_iterator.h" 3
constexpr reference operator*() const 
# 243
{ 
# 244
_Iterator __tmp = current; 
# 245
return *(--__tmp); 
# 246
} 
# 254
constexpr pointer operator->() const 
# 259
{ 
# 262
_Iterator __tmp = current; 
# 263
--__tmp; 
# 264
return _S_to_pointer(__tmp); 
# 265
} 
# 273
constexpr reverse_iterator &operator++() 
# 274
{ 
# 275
--(current); 
# 276
return *this; 
# 277
} 
# 285
constexpr reverse_iterator operator++(int) 
# 286
{ 
# 287
reverse_iterator __tmp = *this; 
# 288
--(current); 
# 289
return __tmp; 
# 290
} 
# 298
constexpr reverse_iterator &operator--() 
# 299
{ 
# 300
++(current); 
# 301
return *this; 
# 302
} 
# 310
constexpr reverse_iterator operator--(int) 
# 311
{ 
# 312
reverse_iterator __tmp = *this; 
# 313
++(current); 
# 314
return __tmp; 
# 315
} 
# 323
constexpr reverse_iterator operator+(difference_type __n) const 
# 324
{ return ((reverse_iterator)((current) - __n)); } 
# 333
constexpr reverse_iterator &operator+=(difference_type __n) 
# 334
{ 
# 335
(current) -= __n; 
# 336
return *this; 
# 337
} 
# 345
constexpr reverse_iterator operator-(difference_type __n) const 
# 346
{ return ((reverse_iterator)((current) + __n)); } 
# 355
constexpr reverse_iterator &operator-=(difference_type __n) 
# 356
{ 
# 357
(current) += __n; 
# 358
return *this; 
# 359
} 
# 367
constexpr reference operator[](difference_type __n) const 
# 368
{ return *((*this) + __n); } 
# 398 "/usr/include/c++/11/bits/stl_iterator.h" 3
private: 
# 396
template< class _Tp> static constexpr _Tp *
# 398
_S_to_pointer(_Tp *__p) 
# 399
{ return __p; } 
# 401
template< class _Tp> static constexpr pointer 
# 403
_S_to_pointer(_Tp __t) 
# 404
{ return __t.operator->(); } 
# 405
}; 
# 418 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator> constexpr bool 
# 420
operator==(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 421
__y) 
# 422
{ return __x.base() == __y.base(); } 
# 424
template< class _Iterator> constexpr bool 
# 426
operator<(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 427
__y) 
# 428
{ return __y.base() < __x.base(); } 
# 430
template< class _Iterator> constexpr bool 
# 432
operator!=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 433
__y) 
# 434
{ return !(__x == __y); } 
# 436
template< class _Iterator> constexpr bool 
# 438
operator>(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 439
__y) 
# 440
{ return __y < __x; } 
# 442
template< class _Iterator> constexpr bool 
# 444
operator<=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 445
__y) 
# 446
{ return !(__y < __x); } 
# 448
template< class _Iterator> constexpr bool 
# 450
operator>=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 451
__y) 
# 452
{ return !(__x < __y); } 
# 457
template< class _IteratorL, class _IteratorR> constexpr bool 
# 459
operator==(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 460
__y) 
# 461
{ return __x.base() == __y.base(); } 
# 463
template< class _IteratorL, class _IteratorR> constexpr bool 
# 465
operator<(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 466
__y) 
# 467
{ return __x.base() > __y.base(); } 
# 469
template< class _IteratorL, class _IteratorR> constexpr bool 
# 471
operator!=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 472
__y) 
# 473
{ return __x.base() != __y.base(); } 
# 475
template< class _IteratorL, class _IteratorR> constexpr bool 
# 477
operator>(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 478
__y) 
# 479
{ return __x.base() < __y.base(); } 
# 481
template< class _IteratorL, class _IteratorR> constexpr bool 
# 483
operator<=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 484
__y) 
# 485
{ return __x.base() >= __y.base(); } 
# 487
template< class _IteratorL, class _IteratorR> constexpr bool 
# 489
operator>=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 490
__y) 
# 491
{ return __x.base() <= __y.base(); } 
# 575 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR> constexpr auto 
# 577
operator-(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 578
__y)->__decltype((__y.base() - __x.base())) 
# 580
{ return __y.base() - __x.base(); } 
# 583
template< class _Iterator> constexpr reverse_iterator< _Iterator>  
# 585
operator+(typename reverse_iterator< _Iterator> ::difference_type __n, const reverse_iterator< _Iterator>  &
# 586
__x) 
# 587
{ return ((reverse_iterator< _Iterator> )(__x.base() - __n)); } 
# 591
template< class _Iterator> constexpr reverse_iterator< _Iterator>  
# 593
__make_reverse_iterator(_Iterator __i) 
# 594
{ return ((reverse_iterator< _Iterator> )(__i)); } 
# 602
template< class _Iterator> constexpr reverse_iterator< _Iterator>  
# 604
make_reverse_iterator(_Iterator __i) 
# 605
{ return ((reverse_iterator< _Iterator> )(__i)); } 
# 616 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator> auto 
# 619
__niter_base(reverse_iterator< _Iterator>  __it)->__decltype((__make_reverse_iterator(__niter_base(__it.base())))) 
# 621
{ return __make_reverse_iterator(__niter_base(__it.base())); } 
# 623
template< class _Iterator> 
# 624
struct __is_move_iterator< reverse_iterator< _Iterator> >  : public std::__is_move_iterator< _Iterator>  { 
# 626
}; 
# 628
template< class _Iterator> auto 
# 631
__miter_base(reverse_iterator< _Iterator>  __it)->__decltype((__make_reverse_iterator(__miter_base(__it.base())))) 
# 633
{ return __make_reverse_iterator(__miter_base(__it.base())); } 
# 647 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Container> 
# 648
class back_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 652
protected: _Container *container; 
# 656
public: typedef _Container container_type; 
# 665
explicit back_insert_iterator(_Container &__x) : container(std::__addressof(__x)) 
# 666
{ } 
# 689 "/usr/include/c++/11/bits/stl_iterator.h" 3
back_insert_iterator &operator=(const typename _Container::value_type &__value) 
# 690
{ 
# 691
(container)->push_back(__value); 
# 692
return *this; 
# 693
} 
# 697
back_insert_iterator &operator=(typename _Container::value_type &&__value) 
# 698
{ 
# 699
(container)->push_back(std::move(__value)); 
# 700
return *this; 
# 701
} 
# 707
back_insert_iterator &operator*() 
# 708
{ return *this; } 
# 713
back_insert_iterator &operator++() 
# 714
{ return *this; } 
# 719
back_insert_iterator operator++(int) 
# 720
{ return *this; } 
# 721
}; 
# 734 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Container> inline back_insert_iterator< _Container>  
# 737
back_inserter(_Container &__x) 
# 738
{ return ((back_insert_iterator< _Container> )(__x)); } 
# 750 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Container> 
# 751
class front_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 755
protected: _Container *container; 
# 759
public: typedef _Container container_type; 
# 768
explicit front_insert_iterator(_Container &__x) : container(std::__addressof(__x)) 
# 769
{ } 
# 792 "/usr/include/c++/11/bits/stl_iterator.h" 3
front_insert_iterator &operator=(const typename _Container::value_type &__value) 
# 793
{ 
# 794
(container)->push_front(__value); 
# 795
return *this; 
# 796
} 
# 800
front_insert_iterator &operator=(typename _Container::value_type &&__value) 
# 801
{ 
# 802
(container)->push_front(std::move(__value)); 
# 803
return *this; 
# 804
} 
# 810
front_insert_iterator &operator*() 
# 811
{ return *this; } 
# 816
front_insert_iterator &operator++() 
# 817
{ return *this; } 
# 822
front_insert_iterator operator++(int) 
# 823
{ return *this; } 
# 824
}; 
# 837 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Container> inline front_insert_iterator< _Container>  
# 840
front_inserter(_Container &__x) 
# 841
{ return ((front_insert_iterator< _Container> )(__x)); } 
# 857 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Container> 
# 858
class insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 868
typedef typename _Container::iterator _Iter; 
# 871
protected: _Container *container; 
# 872
_Iter iter; 
# 877
public: typedef _Container container_type; 
# 890 "/usr/include/c++/11/bits/stl_iterator.h" 3
insert_iterator(_Container &__x, _Iter __i) : container(std::__addressof(__x)), iter(__i) 
# 891
{ } 
# 927 "/usr/include/c++/11/bits/stl_iterator.h" 3
insert_iterator &operator=(const typename _Container::value_type &__value) 
# 928
{ 
# 929
(iter) = (container)->insert(iter, __value); 
# 930
++(iter); 
# 931
return *this; 
# 932
} 
# 936
insert_iterator &operator=(typename _Container::value_type &&__value) 
# 937
{ 
# 938
(iter) = (container)->insert(iter, std::move(__value)); 
# 939
++(iter); 
# 940
return *this; 
# 941
} 
# 947
insert_iterator &operator*() 
# 948
{ return *this; } 
# 953
insert_iterator &operator++() 
# 954
{ return *this; } 
# 959
insert_iterator &operator++(int) 
# 960
{ return *this; } 
# 961
}; 
# 981 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Container> inline insert_iterator< _Container>  
# 983
inserter(_Container &__x, typename _Container::iterator __i) 
# 984
{ return insert_iterator< _Container> (__x, __i); } 
# 990
}
# 992
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 1003 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator, class _Container> 
# 1004
class __normal_iterator { 
# 1007
protected: _Iterator _M_current; 
# 1009
typedef std::iterator_traits< _Iterator>  __traits_type; 
# 1012
public: typedef _Iterator iterator_type; 
# 1013
typedef typename std::iterator_traits< _Iterator> ::iterator_category iterator_category; 
# 1014
typedef typename std::iterator_traits< _Iterator> ::value_type value_type; 
# 1015
typedef typename std::iterator_traits< _Iterator> ::difference_type difference_type; 
# 1016
typedef typename std::iterator_traits< _Iterator> ::reference reference; 
# 1017
typedef typename std::iterator_traits< _Iterator> ::pointer pointer; 
# 1023
constexpr __normal_iterator() noexcept : _M_current(_Iterator()) 
# 1024
{ } 
# 1027
explicit __normal_iterator(const _Iterator &__i) noexcept : _M_current(__i) 
# 1028
{ } 
# 1031
template< class _Iter> 
# 1033
__normal_iterator(const __normal_iterator< _Iter, typename __enable_if< std::__are_same< _Iter, typename _Container::pointer> ::__value, _Container> ::__type>  &
# 1036
__i) noexcept : _M_current(__i.base()) 
# 1037
{ } 
# 1042
reference operator*() const noexcept 
# 1043
{ return *(_M_current); } 
# 1047
pointer operator->() const noexcept 
# 1048
{ return _M_current; } 
# 1052
__normal_iterator &operator++() noexcept 
# 1053
{ 
# 1054
++(_M_current); 
# 1055
return *this; 
# 1056
} 
# 1060
__normal_iterator operator++(int) noexcept 
# 1061
{ return ((__normal_iterator)((_M_current)++)); } 
# 1066
__normal_iterator &operator--() noexcept 
# 1067
{ 
# 1068
--(_M_current); 
# 1069
return *this; 
# 1070
} 
# 1074
__normal_iterator operator--(int) noexcept 
# 1075
{ return ((__normal_iterator)((_M_current)--)); } 
# 1080
reference operator[](difference_type __n) const noexcept 
# 1081
{ return (_M_current)[__n]; } 
# 1085
__normal_iterator &operator+=(difference_type __n) noexcept 
# 1086
{ (_M_current) += __n; return *this; } 
# 1090
__normal_iterator operator+(difference_type __n) const noexcept 
# 1091
{ return ((__normal_iterator)((_M_current) + __n)); } 
# 1095
__normal_iterator &operator-=(difference_type __n) noexcept 
# 1096
{ (_M_current) -= __n; return *this; } 
# 1100
__normal_iterator operator-(difference_type __n) const noexcept 
# 1101
{ return ((__normal_iterator)((_M_current) - __n)); } 
# 1105
const _Iterator &base() const noexcept 
# 1106
{ return _M_current; } 
# 1107
}; 
# 1152 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 1155
operator==(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1156
__rhs) noexcept 
# 1158
{ return __lhs.base() == __rhs.base(); } 
# 1160
template< class _Iterator, class _Container> inline bool 
# 1163
operator==(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1164
__rhs) noexcept 
# 1166
{ return __lhs.base() == __rhs.base(); } 
# 1168
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 1171
operator!=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1172
__rhs) noexcept 
# 1174
{ return __lhs.base() != __rhs.base(); } 
# 1176
template< class _Iterator, class _Container> inline bool 
# 1179
operator!=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1180
__rhs) noexcept 
# 1182
{ return __lhs.base() != __rhs.base(); } 
# 1185
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 1187
operator<(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1188
__rhs) noexcept 
# 1190
{ return __lhs.base() < __rhs.base(); } 
# 1192
template< class _Iterator, class _Container> inline bool 
# 1195
operator<(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1196
__rhs) noexcept 
# 1198
{ return __lhs.base() < __rhs.base(); } 
# 1200
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 1202
operator>(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1203
__rhs) noexcept 
# 1205
{ return __lhs.base() > __rhs.base(); } 
# 1207
template< class _Iterator, class _Container> inline bool 
# 1210
operator>(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1211
__rhs) noexcept 
# 1213
{ return __lhs.base() > __rhs.base(); } 
# 1215
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 1217
operator<=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1218
__rhs) noexcept 
# 1220
{ return __lhs.base() <= __rhs.base(); } 
# 1222
template< class _Iterator, class _Container> inline bool 
# 1225
operator<=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1226
__rhs) noexcept 
# 1228
{ return __lhs.base() <= __rhs.base(); } 
# 1230
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 1232
operator>=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1233
__rhs) noexcept 
# 1235
{ return __lhs.base() >= __rhs.base(); } 
# 1237
template< class _Iterator, class _Container> inline bool 
# 1240
operator>=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1241
__rhs) noexcept 
# 1243
{ return __lhs.base() >= __rhs.base(); } 
# 1250
template< class _IteratorL, class _IteratorR, class _Container> inline auto 
# 1255
operator-(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 1256
__rhs) noexcept->__decltype((__lhs.base() - __rhs.base())) 
# 1263
{ return __lhs.base() - __rhs.base(); } 
# 1265
template< class _Iterator, class _Container> inline typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 1268
operator-(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 1269
__rhs) noexcept 
# 1271
{ return __lhs.base() - __rhs.base(); } 
# 1273
template< class _Iterator, class _Container> inline __normal_iterator< _Iterator, _Container>  
# 1276
operator+(typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 1277
__n, const __normal_iterator< _Iterator, _Container>  &__i) noexcept 
# 1279
{ return ((__normal_iterator< _Iterator, _Container> )(__i.base() + __n)); } 
# 1282
}
# 1284
namespace std __attribute((__visibility__("default"))) { 
# 1288
template< class _Iterator, class _Container> _Iterator 
# 1291
__niter_base(__gnu_cxx::__normal_iterator< _Iterator, _Container>  __it) noexcept(std::template is_nothrow_copy_constructible< _Iterator> ::value) 
# 1293
{ return __it.base(); } 
# 1342 "/usr/include/c++/11/bits/stl_iterator.h" 3
namespace __detail { 
# 1358 "/usr/include/c++/11/bits/stl_iterator.h" 3
}
# 1369 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator> 
# 1370
class move_iterator { 
# 1375
_Iterator _M_current; 
# 1377
using __traits_type = iterator_traits< _Iterator> ; 
# 1379
using __base_ref = typename iterator_traits< _Iterator> ::reference; 
# 1382
template< class _Iter2> friend class move_iterator; 
# 1409 "/usr/include/c++/11/bits/stl_iterator.h" 3
public: using iterator_type = _Iterator; 
# 1422 "/usr/include/c++/11/bits/stl_iterator.h" 3
typedef typename iterator_traits< _Iterator> ::iterator_category iterator_category; 
# 1423
typedef typename iterator_traits< _Iterator> ::value_type value_type; 
# 1424
typedef typename iterator_traits< _Iterator> ::difference_type difference_type; 
# 1426
typedef _Iterator pointer; 
# 1431
typedef typename conditional< is_reference< __base_ref> ::value, typename remove_reference< __base_ref> ::type &&, __base_ref> ::type reference; 
# 1435
constexpr move_iterator() : _M_current() 
# 1436
{ } 
# 1439
constexpr explicit move_iterator(iterator_type __i) : _M_current(std::move(__i)) 
# 1440
{ } 
# 1442
template< class _Iter> constexpr 
# 1447
move_iterator(const move_iterator< _Iter>  &__i) : _M_current((__i._M_current)) 
# 1448
{ } 
# 1450
template< class _Iter> constexpr move_iterator &
# 1456
operator=(const move_iterator< _Iter>  &__i) 
# 1457
{ 
# 1458
(_M_current) = (__i._M_current); 
# 1459
return *this; 
# 1460
} 
# 1464
constexpr iterator_type base() const 
# 1465
{ return _M_current; } 
# 1477 "/usr/include/c++/11/bits/stl_iterator.h" 3
constexpr reference operator*() const 
# 1481
{ return static_cast< reference>(*(_M_current)); } 
# 1485
constexpr pointer operator->() const 
# 1486
{ return _M_current; } 
# 1489
constexpr move_iterator &operator++() 
# 1490
{ 
# 1491
++(_M_current); 
# 1492
return *this; 
# 1493
} 
# 1496
constexpr move_iterator operator++(int) 
# 1497
{ 
# 1498
move_iterator __tmp = *this; 
# 1499
++(_M_current); 
# 1500
return __tmp; 
# 1501
} 
# 1510
constexpr move_iterator &operator--() 
# 1511
{ 
# 1512
--(_M_current); 
# 1513
return *this; 
# 1514
} 
# 1517
constexpr move_iterator operator--(int) 
# 1518
{ 
# 1519
move_iterator __tmp = *this; 
# 1520
--(_M_current); 
# 1521
return __tmp; 
# 1522
} 
# 1525
constexpr move_iterator operator+(difference_type __n) const 
# 1526
{ return ((move_iterator)((_M_current) + __n)); } 
# 1529
constexpr move_iterator &operator+=(difference_type __n) 
# 1530
{ 
# 1531
(_M_current) += __n; 
# 1532
return *this; 
# 1533
} 
# 1536
constexpr move_iterator operator-(difference_type __n) const 
# 1537
{ return ((move_iterator)((_M_current) - __n)); } 
# 1540
constexpr move_iterator &operator-=(difference_type __n) 
# 1541
{ 
# 1542
(_M_current) -= __n; 
# 1543
return *this; 
# 1544
} 
# 1547
constexpr reference operator[](difference_type __n) const 
# 1551
{ return std::move((_M_current)[__n]); } 
# 1581 "/usr/include/c++/11/bits/stl_iterator.h" 3
}; 
# 1583
template< class _IteratorL, class _IteratorR> constexpr bool 
# 1585
operator==(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1586
__y) 
# 1590
{ return __x.base() == __y.base(); } 
# 1600 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR> constexpr bool 
# 1602
operator!=(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1603
__y) 
# 1604
{ return !(__x == __y); } 
# 1607
template< class _IteratorL, class _IteratorR> constexpr bool 
# 1609
operator<(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1610
__y) 
# 1614
{ return __x.base() < __y.base(); } 
# 1616
template< class _IteratorL, class _IteratorR> constexpr bool 
# 1618
operator<=(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1619
__y) 
# 1623
{ return !(__y < __x); } 
# 1625
template< class _IteratorL, class _IteratorR> constexpr bool 
# 1627
operator>(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1628
__y) 
# 1632
{ return __y < __x; } 
# 1634
template< class _IteratorL, class _IteratorR> constexpr bool 
# 1636
operator>=(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1637
__y) 
# 1641
{ return !(__x < __y); } 
# 1646
template< class _Iterator> constexpr bool 
# 1648
operator==(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1649
__y) 
# 1650
{ return __x.base() == __y.base(); } 
# 1659 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator> constexpr bool 
# 1661
operator!=(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1662
__y) 
# 1663
{ return !(__x == __y); } 
# 1665
template< class _Iterator> constexpr bool 
# 1667
operator<(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1668
__y) 
# 1669
{ return __x.base() < __y.base(); } 
# 1671
template< class _Iterator> constexpr bool 
# 1673
operator<=(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1674
__y) 
# 1675
{ return !(__y < __x); } 
# 1677
template< class _Iterator> constexpr bool 
# 1679
operator>(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1680
__y) 
# 1681
{ return __y < __x; } 
# 1683
template< class _Iterator> constexpr bool 
# 1685
operator>=(const move_iterator< _Iterator>  &__x, const move_iterator< _Iterator>  &
# 1686
__y) 
# 1687
{ return !(__x < __y); } 
# 1691
template< class _IteratorL, class _IteratorR> constexpr auto 
# 1693
operator-(const move_iterator< _IteratorL>  &__x, const move_iterator< _IteratorR>  &
# 1694
__y)->__decltype((__x.base() - __y.base())) 
# 1696
{ return __x.base() - __y.base(); } 
# 1698
template< class _Iterator> constexpr move_iterator< _Iterator>  
# 1700
operator+(typename move_iterator< _Iterator> ::difference_type __n, const move_iterator< _Iterator>  &
# 1701
__x) 
# 1702
{ return __x + __n; } 
# 1704
template< class _Iterator> constexpr move_iterator< _Iterator>  
# 1706
make_move_iterator(_Iterator __i) 
# 1707
{ return ((move_iterator< _Iterator> )(std::move(__i))); } 
# 1709
template< class _Iterator, class _ReturnType = typename conditional< __move_if_noexcept_cond< typename iterator_traits< _Iterator> ::value_type> ::value, _Iterator, move_iterator< _Iterator> > ::type> constexpr _ReturnType 
# 1714
__make_move_if_noexcept_iterator(_Iterator __i) 
# 1715
{ return (_ReturnType)__i; } 
# 1719
template< class _Tp, class _ReturnType = typename conditional< __move_if_noexcept_cond< _Tp> ::value, const _Tp *, move_iterator< _Tp *> > ::type> constexpr _ReturnType 
# 1723
__make_move_if_noexcept_iterator(_Tp *__i) 
# 1724
{ return (_ReturnType)__i; } 
# 2447 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _Iterator> auto 
# 2450
__niter_base(move_iterator< _Iterator>  __it)->__decltype((make_move_iterator(__niter_base(__it.base())))) 
# 2452
{ return make_move_iterator(__niter_base(__it.base())); } 
# 2454
template< class _Iterator> 
# 2455
struct __is_move_iterator< move_iterator< _Iterator> >  { 
# 2457
enum { __value = 1}; 
# 2458
typedef __true_type __type; 
# 2459
}; 
# 2461
template< class _Iterator> auto 
# 2464
__miter_base(move_iterator< _Iterator>  __it)->__decltype((__miter_base(__it.base()))) 
# 2466
{ return __miter_base(__it.base()); } 
# 2479 "/usr/include/c++/11/bits/stl_iterator.h" 3
template< class _InputIterator> using __iter_key_t = remove_const_t< typename iterator_traits< _InputIterator> ::value_type::first_type> ; 
# 2483
template< class _InputIterator> using __iter_val_t = typename iterator_traits< _InputIterator> ::value_type::second_type; 
# 2487
template< class _T1, class _T2> struct pair; 
# 2490
template< class _InputIterator> using __iter_to_alloc_t = pair< add_const_t< __iter_key_t< _InputIterator> > , __iter_val_t< _InputIterator> > ; 
# 2497
}
# 48 "/usr/include/c++/11/debug/debug.h" 3
namespace std { 
# 50
namespace __debug { }
# 51
}
# 56
namespace __gnu_debug { 
# 58
using namespace std::__debug;
# 60
template< class _Ite, class _Seq, class _Cat> struct _Safe_iterator; 
# 62
}
# 35 "/usr/include/c++/11/bits/predefined_ops.h" 3
namespace __gnu_cxx { 
# 37
namespace __ops { 
# 39
struct _Iter_less_iter { 
# 41
template< class _Iterator1, class _Iterator2> constexpr bool 
# 44
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 45
{ return (*__it1) < (*__it2); } 
# 46
}; 
# 50
constexpr _Iter_less_iter __iter_less_iter() 
# 51
{ return _Iter_less_iter(); } 
# 53
struct _Iter_less_val { 
# 56
constexpr _Iter_less_val() = default;
# 63
explicit _Iter_less_val(_Iter_less_iter) { } 
# 65
template< class _Iterator, class _Value> bool 
# 68
operator()(_Iterator __it, _Value &__val) const 
# 69
{ return (*__it) < __val; } 
# 70
}; 
# 74
inline _Iter_less_val __iter_less_val() 
# 75
{ return _Iter_less_val(); } 
# 79
inline _Iter_less_val __iter_comp_val(_Iter_less_iter) 
# 80
{ return _Iter_less_val(); } 
# 82
struct _Val_less_iter { 
# 85
constexpr _Val_less_iter() = default;
# 92
explicit _Val_less_iter(_Iter_less_iter) { } 
# 94
template< class _Value, class _Iterator> bool 
# 97
operator()(_Value &__val, _Iterator __it) const 
# 98
{ return __val < (*__it); } 
# 99
}; 
# 103
inline _Val_less_iter __val_less_iter() 
# 104
{ return _Val_less_iter(); } 
# 108
inline _Val_less_iter __val_comp_iter(_Iter_less_iter) 
# 109
{ return _Val_less_iter(); } 
# 111
struct _Iter_equal_to_iter { 
# 113
template< class _Iterator1, class _Iterator2> bool 
# 116
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 117
{ return (*__it1) == (*__it2); } 
# 118
}; 
# 122
inline _Iter_equal_to_iter __iter_equal_to_iter() 
# 123
{ return _Iter_equal_to_iter(); } 
# 125
struct _Iter_equal_to_val { 
# 127
template< class _Iterator, class _Value> bool 
# 130
operator()(_Iterator __it, _Value &__val) const 
# 131
{ return (*__it) == __val; } 
# 132
}; 
# 136
inline _Iter_equal_to_val __iter_equal_to_val() 
# 137
{ return _Iter_equal_to_val(); } 
# 141
inline _Iter_equal_to_val __iter_comp_val(_Iter_equal_to_iter) 
# 142
{ return _Iter_equal_to_val(); } 
# 144
template< class _Compare> 
# 145
struct _Iter_comp_iter { 
# 147
_Compare _M_comp; 
# 150
constexpr explicit _Iter_comp_iter(_Compare __comp) : _M_comp(std::move(__comp)) 
# 152
{ } 
# 154
template< class _Iterator1, class _Iterator2> constexpr bool 
# 157
operator()(_Iterator1 __it1, _Iterator2 __it2) 
# 158
{ return (bool)(_M_comp)(*__it1, *__it2); } 
# 159
}; 
# 161
template< class _Compare> constexpr _Iter_comp_iter< _Compare>  
# 164
__iter_comp_iter(_Compare __comp) 
# 165
{ return ((_Iter_comp_iter< _Compare> )(std::move(__comp))); } 
# 167
template< class _Compare> 
# 168
struct _Iter_comp_val { 
# 170
_Compare _M_comp; 
# 174
explicit _Iter_comp_val(_Compare __comp) : _M_comp(std::move(__comp)) 
# 176
{ } 
# 180
explicit _Iter_comp_val(const _Iter_comp_iter< _Compare>  &__comp) : _M_comp((__comp._M_comp)) 
# 182
{ } 
# 187
explicit _Iter_comp_val(_Iter_comp_iter< _Compare>  &&__comp) : _M_comp(std::move((__comp._M_comp))) 
# 189
{ } 
# 192
template< class _Iterator, class _Value> bool 
# 195
operator()(_Iterator __it, _Value &__val) 
# 196
{ return (bool)(_M_comp)(*__it, __val); } 
# 197
}; 
# 199
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 202
__iter_comp_val(_Compare __comp) 
# 203
{ return ((_Iter_comp_val< _Compare> )(std::move(__comp))); } 
# 205
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 208
__iter_comp_val(_Iter_comp_iter< _Compare>  __comp) 
# 209
{ return ((_Iter_comp_val< _Compare> )(std::move(__comp))); } 
# 211
template< class _Compare> 
# 212
struct _Val_comp_iter { 
# 214
_Compare _M_comp; 
# 218
explicit _Val_comp_iter(_Compare __comp) : _M_comp(std::move(__comp)) 
# 220
{ } 
# 224
explicit _Val_comp_iter(const _Iter_comp_iter< _Compare>  &__comp) : _M_comp((__comp._M_comp)) 
# 226
{ } 
# 231
explicit _Val_comp_iter(_Iter_comp_iter< _Compare>  &&__comp) : _M_comp(std::move((__comp._M_comp))) 
# 233
{ } 
# 236
template< class _Value, class _Iterator> bool 
# 239
operator()(_Value &__val, _Iterator __it) 
# 240
{ return (bool)(_M_comp)(__val, *__it); } 
# 241
}; 
# 243
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 246
__val_comp_iter(_Compare __comp) 
# 247
{ return ((_Val_comp_iter< _Compare> )(std::move(__comp))); } 
# 249
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 252
__val_comp_iter(_Iter_comp_iter< _Compare>  __comp) 
# 253
{ return ((_Val_comp_iter< _Compare> )(std::move(__comp))); } 
# 255
template< class _Value> 
# 256
struct _Iter_equals_val { 
# 258
_Value &_M_value; 
# 262
explicit _Iter_equals_val(_Value &__value) : _M_value(__value) 
# 264
{ } 
# 266
template< class _Iterator> bool 
# 269
operator()(_Iterator __it) 
# 270
{ return (*__it) == (_M_value); } 
# 271
}; 
# 273
template< class _Value> inline _Iter_equals_val< _Value>  
# 276
__iter_equals_val(_Value &__val) 
# 277
{ return ((_Iter_equals_val< _Value> )(__val)); } 
# 279
template< class _Iterator1> 
# 280
struct _Iter_equals_iter { 
# 282
_Iterator1 _M_it1; 
# 286
explicit _Iter_equals_iter(_Iterator1 __it1) : _M_it1(__it1) 
# 288
{ } 
# 290
template< class _Iterator2> bool 
# 293
operator()(_Iterator2 __it2) 
# 294
{ return (*__it2) == (*(_M_it1)); } 
# 295
}; 
# 297
template< class _Iterator> inline _Iter_equals_iter< _Iterator>  
# 300
__iter_comp_iter(_Iter_equal_to_iter, _Iterator __it) 
# 301
{ return ((_Iter_equals_iter< _Iterator> )(__it)); } 
# 303
template< class _Predicate> 
# 304
struct _Iter_pred { 
# 306
_Predicate _M_pred; 
# 310
explicit _Iter_pred(_Predicate __pred) : _M_pred(std::move(__pred)) 
# 312
{ } 
# 314
template< class _Iterator> bool 
# 317
operator()(_Iterator __it) 
# 318
{ return (bool)(_M_pred)(*__it); } 
# 319
}; 
# 321
template< class _Predicate> inline _Iter_pred< _Predicate>  
# 324
__pred_iter(_Predicate __pred) 
# 325
{ return ((_Iter_pred< _Predicate> )(std::move(__pred))); } 
# 327
template< class _Compare, class _Value> 
# 328
struct _Iter_comp_to_val { 
# 330
_Compare _M_comp; 
# 331
_Value &_M_value; 
# 334
_Iter_comp_to_val(_Compare __comp, _Value &__value) : _M_comp(std::move(__comp)), _M_value(__value) 
# 336
{ } 
# 338
template< class _Iterator> bool 
# 341
operator()(_Iterator __it) 
# 342
{ return (bool)(_M_comp)(*__it, _M_value); } 
# 343
}; 
# 345
template< class _Compare, class _Value> _Iter_comp_to_val< _Compare, _Value>  
# 348
__iter_comp_val(_Compare __comp, _Value &__val) 
# 349
{ 
# 350
return _Iter_comp_to_val< _Compare, _Value> (std::move(__comp), __val); 
# 351
} 
# 353
template< class _Compare, class _Iterator1> 
# 354
struct _Iter_comp_to_iter { 
# 356
_Compare _M_comp; 
# 357
_Iterator1 _M_it1; 
# 360
_Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1) : _M_comp(std::move(__comp)), _M_it1(__it1) 
# 362
{ } 
# 364
template< class _Iterator2> bool 
# 367
operator()(_Iterator2 __it2) 
# 368
{ return (bool)(_M_comp)(*__it2, *(_M_it1)); } 
# 369
}; 
# 371
template< class _Compare, class _Iterator> inline _Iter_comp_to_iter< _Compare, _Iterator>  
# 374
__iter_comp_iter(_Iter_comp_iter< _Compare>  __comp, _Iterator __it) 
# 375
{ 
# 376
return _Iter_comp_to_iter< _Compare, _Iterator> (std::move((__comp._M_comp)), __it); 
# 378
} 
# 380
template< class _Predicate> 
# 381
struct _Iter_negate { 
# 383
_Predicate _M_pred; 
# 387
explicit _Iter_negate(_Predicate __pred) : _M_pred(std::move(__pred)) 
# 389
{ } 
# 391
template< class _Iterator> bool 
# 394
operator()(_Iterator __it) 
# 395
{ return !((bool)(_M_pred)(*__it)); } 
# 396
}; 
# 398
template< class _Predicate> inline _Iter_negate< _Predicate>  
# 401
__negate(_Iter_pred< _Predicate>  __pred) 
# 402
{ return ((_Iter_negate< _Predicate> )(std::move((__pred._M_pred)))); } 
# 404
}
# 405
}
# 79 "/usr/include/c++/11/bits/stl_algobase.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 87
template< class _Tp, class _Up> constexpr int 
# 90
__memcmp(const _Tp *__first1, const _Up *__first2, size_t __num) 
# 91
{ 
# 93
static_assert((sizeof(_Tp) == sizeof(_Up)), "can be compared with memcmp");
# 105 "/usr/include/c++/11/bits/stl_algobase.h" 3
return __builtin_memcmp(__first1, __first2, sizeof(_Tp) * __num); 
# 106
} 
# 149 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> inline void 
# 152
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 153
{ 
# 182 "/usr/include/c++/11/bits/stl_algobase.h" 3
swap(*__a, *__b); 
# 184
} 
# 198 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> _ForwardIterator2 
# 201
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 202
__first2) 
# 203
{ 
# 209
; 
# 211
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 212
std::iter_swap(__first1, __first2); }  
# 213
return __first2; 
# 214
} 
# 227 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _Tp> constexpr const _Tp &
# 230
min(const _Tp &__a, const _Tp &__b) 
# 231
{ 
# 235
if (__b < __a) { 
# 236
return __b; }  
# 237
return __a; 
# 238
} 
# 251 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _Tp> constexpr const _Tp &
# 254
max(const _Tp &__a, const _Tp &__b) 
# 255
{ 
# 259
if (__a < __b) { 
# 260
return __b; }  
# 261
return __a; 
# 262
} 
# 275 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _Tp, class _Compare> constexpr const _Tp &
# 278
min(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 279
{ 
# 281
if (__comp(__b, __a)) { 
# 282
return __b; }  
# 283
return __a; 
# 284
} 
# 297 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _Tp, class _Compare> constexpr const _Tp &
# 300
max(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 301
{ 
# 303
if (__comp(__a, __b)) { 
# 304
return __b; }  
# 305
return __a; 
# 306
} 
# 310
template< class _Iterator> inline _Iterator 
# 313
__niter_base(_Iterator __it) noexcept(std::template is_nothrow_copy_constructible< _Iterator> ::value) 
# 315
{ return __it; } 
# 317
template< class _Ite, class _Seq> _Ite __niter_base(const __gnu_debug::_Safe_iterator< _Ite, _Seq, random_access_iterator_tag>  &); 
# 325
template< class _From, class _To> inline _From 
# 328
__niter_wrap(_From __from, _To __res) 
# 329
{ return __from + (__res - std::__niter_base(__from)); } 
# 332
template< class _Iterator> inline _Iterator 
# 335
__niter_wrap(const _Iterator &, _Iterator __res) 
# 336
{ return __res; } 
# 344
template< bool _IsMove, bool _IsSimple, class _Category> 
# 345
struct __copy_move { 
# 347
template< class _II, class _OI> static _OI 
# 350
__copy_m(_II __first, _II __last, _OI __result) 
# 351
{ 
# 352
for (; __first != __last; (++__result), ((void)(++__first))) { 
# 353
(*__result) = (*__first); }  
# 354
return __result; 
# 355
} 
# 356
}; 
# 359
template< class _Category> 
# 360
struct __copy_move< true, false, _Category>  { 
# 362
template< class _II, class _OI> static _OI 
# 365
__copy_m(_II __first, _II __last, _OI __result) 
# 366
{ 
# 367
for (; __first != __last; (++__result), ((void)(++__first))) { 
# 368
(*__result) = std::move(*__first); }  
# 369
return __result; 
# 370
} 
# 371
}; 
# 375
template<> struct __copy_move< false, false, random_access_iterator_tag>  { 
# 377
template< class _II, class _OI> static _OI 
# 380
__copy_m(_II __first, _II __last, _OI __result) 
# 381
{ 
# 382
typedef typename iterator_traits< _II> ::difference_type _Distance; 
# 383
for (_Distance __n = __last - __first; __n > 0; --__n) 
# 384
{ 
# 385
(*__result) = (*__first); 
# 386
++__first; 
# 387
++__result; 
# 388
}  
# 389
return __result; 
# 390
} 
# 391
}; 
# 395
template<> struct __copy_move< true, false, random_access_iterator_tag>  { 
# 397
template< class _II, class _OI> static _OI 
# 400
__copy_m(_II __first, _II __last, _OI __result) 
# 401
{ 
# 402
typedef typename iterator_traits< _II> ::difference_type _Distance; 
# 403
for (_Distance __n = __last - __first; __n > 0; --__n) 
# 404
{ 
# 405
(*__result) = std::move(*__first); 
# 406
++__first; 
# 407
++__result; 
# 408
}  
# 409
return __result; 
# 410
} 
# 411
}; 
# 414
template< bool _IsMove> 
# 415
struct __copy_move< _IsMove, true, random_access_iterator_tag>  { 
# 417
template< class _Tp> static _Tp *
# 420
__copy_m(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 421
{ 
# 423
using __assignable = conditional< _IsMove, is_move_assignable< _Tp> , is_copy_assignable< _Tp> > ; 
# 427
static_assert((__assignable::type::value), "type is not assignable");
# 429
const ptrdiff_t _Num = __last - __first; 
# 430
if (_Num) { 
# 431
__builtin_memmove(__result, __first, sizeof(_Tp) * _Num); }  
# 432
return __result + _Num; 
# 433
} 
# 434
}; 
# 438
template< class _Tp, class _Ref, class _Ptr> struct _Deque_iterator; 
# 441
struct _Bit_iterator; 
# 447
template< class _CharT> struct char_traits; 
# 450
template< class _CharT, class _Traits> class istreambuf_iterator; 
# 453
template< class _CharT, class _Traits> class ostreambuf_iterator; 
# 456
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(_CharT *, _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 462
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(const _CharT *, const _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 468
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _CharT *); 
# 474
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _Deque_iterator< _CharT, _CharT &, _CharT *> > ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _Deque_iterator< _CharT, _CharT &, _CharT *> ); 
# 483
template< bool _IsMove, class _II, class _OI> inline _OI 
# 486
__copy_move_a2(_II __first, _II __last, _OI __result) 
# 487
{ 
# 488
typedef typename iterator_traits< _II> ::iterator_category _Category; 
# 494
return std::template __copy_move< _IsMove, __memcpyable< _OI, _II> ::__value, typename iterator_traits< _II> ::iterator_category> ::__copy_m(__first, __last, __result); 
# 496
} 
# 498
template< bool _IsMove, class 
# 499
_Tp, class _Ref, class _Ptr, class _OI> _OI 
# 498
__copy_move_a1(_Deque_iterator< _Tp, _Ref, _Ptr> , _Deque_iterator< _Tp, _Ref, _Ptr> , _OI); 
# 505
template< bool _IsMove, class 
# 506
_ITp, class _IRef, class _IPtr, class _OTp> _Deque_iterator< _OTp, _OTp &, _OTp *>  
# 505
__copy_move_a1(_Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _OTp, _OTp &, _OTp *> ); 
# 512
template< bool _IsMove, class _II, class _Tp> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, _Deque_iterator< _Tp, _Tp &, _Tp *> > ::__type __copy_move_a1(_II, _II, _Deque_iterator< _Tp, _Tp &, _Tp *> ); 
# 518
template< bool _IsMove, class _II, class _OI> inline _OI 
# 521
__copy_move_a1(_II __first, _II __last, _OI __result) 
# 522
{ return std::__copy_move_a2< _IsMove> (__first, __last, __result); } 
# 524
template< bool _IsMove, class _II, class _OI> inline _OI 
# 527
__copy_move_a(_II __first, _II __last, _OI __result) 
# 528
{ 
# 529
return std::__niter_wrap(__result, std::__copy_move_a1< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result))); 
# 533
} 
# 535
template< bool _IsMove, class 
# 536
_Ite, class _Seq, class _Cat, class _OI> _OI 
# 535
__copy_move_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, _OI); 
# 542
template< bool _IsMove, class 
# 543
_II, class _Ite, class _Seq, class _Cat> __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  
# 542
__copy_move_a(_II, _II, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &); 
# 548
template< bool _IsMove, class 
# 549
_IIte, class _ISeq, class _ICat, class 
# 550
_OIte, class _OSeq, class _OCat> __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  
# 548
__copy_move_a(const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  &); 
# 556
template< class _InputIterator, class _Size, class _OutputIterator> _OutputIterator 
# 559
__copy_n_a(_InputIterator __first, _Size __n, _OutputIterator __result, bool) 
# 561
{ 
# 562
if (__n > 0) 
# 563
{ 
# 564
while (true) 
# 565
{ 
# 566
(*__result) = (*__first); 
# 567
++__result; 
# 568
if ((--__n) > 0) { 
# 569
++__first; } else { 
# 571
break; }  
# 572
}  
# 573
}  
# 574
return __result; 
# 575
} 
# 577
template< class _CharT, class _Size> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_n_a(istreambuf_iterator< _CharT, char_traits< _CharT> > , _Size, _CharT *, bool); 
# 583
template< class _CharT, class _Size> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _Deque_iterator< _CharT, _CharT &, _CharT *> > ::__type __copy_n_a(istreambuf_iterator< _CharT, char_traits< _CharT> > , _Size, _Deque_iterator< _CharT, _CharT &, _CharT *> , bool); 
# 608 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _II, class _OI> inline _OI 
# 611
copy(_II __first, _II __last, _OI __result) 
# 612
{ 
# 617
; 
# 619
return std::__copy_move_a< __is_move_iterator< _II> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 621
} 
# 641 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _II, class _OI> inline _OI 
# 644
move(_II __first, _II __last, _OI __result) 
# 645
{ 
# 650
; 
# 652
return std::__copy_move_a< true> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 654
} 
# 661
template< bool _IsMove, bool _IsSimple, class _Category> 
# 662
struct __copy_move_backward { 
# 664
template< class _BI1, class _BI2> static _BI2 
# 667
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 668
{ 
# 669
while (__first != __last) { 
# 670
(*(--__result)) = (*(--__last)); }  
# 671
return __result; 
# 672
} 
# 673
}; 
# 676
template< class _Category> 
# 677
struct __copy_move_backward< true, false, _Category>  { 
# 679
template< class _BI1, class _BI2> static _BI2 
# 682
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 683
{ 
# 684
while (__first != __last) { 
# 685
(*(--__result)) = std::move(*(--__last)); }  
# 686
return __result; 
# 687
} 
# 688
}; 
# 692
template<> struct __copy_move_backward< false, false, random_access_iterator_tag>  { 
# 694
template< class _BI1, class _BI2> static _BI2 
# 697
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 698
{ 
# 700
typename iterator_traits< _BI1> ::difference_type __n = __last - __first; 
# 701
for (; __n > 0; --__n) { 
# 702
(*(--__result)) = (*(--__last)); }  
# 703
return __result; 
# 704
} 
# 705
}; 
# 709
template<> struct __copy_move_backward< true, false, random_access_iterator_tag>  { 
# 711
template< class _BI1, class _BI2> static _BI2 
# 714
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 715
{ 
# 717
typename iterator_traits< _BI1> ::difference_type __n = __last - __first; 
# 718
for (; __n > 0; --__n) { 
# 719
(*(--__result)) = std::move(*(--__last)); }  
# 720
return __result; 
# 721
} 
# 722
}; 
# 725
template< bool _IsMove> 
# 726
struct __copy_move_backward< _IsMove, true, random_access_iterator_tag>  { 
# 728
template< class _Tp> static _Tp *
# 731
__copy_move_b(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 732
{ 
# 734
using __assignable = conditional< _IsMove, is_move_assignable< _Tp> , is_copy_assignable< _Tp> > ; 
# 738
static_assert((__assignable::type::value), "type is not assignable");
# 740
const ptrdiff_t _Num = __last - __first; 
# 741
if (_Num) { 
# 742
__builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num); }  
# 743
return __result - _Num; 
# 744
} 
# 745
}; 
# 747
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 750
__copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result) 
# 751
{ 
# 752
typedef typename iterator_traits< _BI1> ::iterator_category _Category; 
# 758
return std::template __copy_move_backward< _IsMove, __memcpyable< _BI2, _BI1> ::__value, typename iterator_traits< _BI1> ::iterator_category> ::__copy_move_b(__first, __last, __result); 
# 763
} 
# 765
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 768
__copy_move_backward_a1(_BI1 __first, _BI1 __last, _BI2 __result) 
# 769
{ return std::__copy_move_backward_a2< _IsMove> (__first, __last, __result); } 
# 771
template< bool _IsMove, class 
# 772
_Tp, class _Ref, class _Ptr, class _OI> _OI 
# 771
__copy_move_backward_a1(_Deque_iterator< _Tp, _Ref, _Ptr> , _Deque_iterator< _Tp, _Ref, _Ptr> , _OI); 
# 778
template< bool _IsMove, class 
# 779
_ITp, class _IRef, class _IPtr, class _OTp> _Deque_iterator< _OTp, _OTp &, _OTp *>  
# 778
__copy_move_backward_a1(_Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _ITp, _IRef, _IPtr> , _Deque_iterator< _OTp, _OTp &, _OTp *> ); 
# 786
template< bool _IsMove, class _II, class _Tp> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, _Deque_iterator< _Tp, _Tp &, _Tp *> > ::__type __copy_move_backward_a1(_II, _II, _Deque_iterator< _Tp, _Tp &, _Tp *> ); 
# 793
template< bool _IsMove, class _II, class _OI> inline _OI 
# 796
__copy_move_backward_a(_II __first, _II __last, _OI __result) 
# 797
{ 
# 798
return std::__niter_wrap(__result, std::__copy_move_backward_a1< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result))); 
# 802
} 
# 804
template< bool _IsMove, class 
# 805
_Ite, class _Seq, class _Cat, class _OI> _OI 
# 804
__copy_move_backward_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, _OI); 
# 812
template< bool _IsMove, class 
# 813
_II, class _Ite, class _Seq, class _Cat> __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  
# 812
__copy_move_backward_a(_II, _II, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &); 
# 818
template< bool _IsMove, class 
# 819
_IIte, class _ISeq, class _ICat, class 
# 820
_OIte, class _OSeq, class _OCat> __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  
# 818
__copy_move_backward_a(const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _IIte, _ISeq, _ICat>  &, const __gnu_debug::_Safe_iterator< _OIte, _OSeq, _OCat>  &); 
# 845 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _BI1, class _BI2> inline _BI2 
# 848
copy_backward(_BI1 __first, _BI1 __last, _BI2 __result) 
# 849
{ 
# 856
; 
# 858
return std::__copy_move_backward_a< __is_move_iterator< _BI1> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 860
} 
# 881 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _BI1, class _BI2> inline _BI2 
# 884
move_backward(_BI1 __first, _BI1 __last, _BI2 __result) 
# 885
{ 
# 892
; 
# 894
return std::__copy_move_backward_a< true> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 897
} 
# 904
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, void> ::__type 
# 908
__fill_a1(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 909
__value) 
# 910
{ 
# 911
for (; __first != __last; ++__first) { 
# 912
(*__first) = __value; }  
# 913
} 
# 915
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, void> ::__type 
# 919
__fill_a1(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 920
__value) 
# 921
{ 
# 922
const _Tp __tmp = __value; 
# 923
for (; __first != __last; ++__first) { 
# 924
(*__first) = __tmp; }  
# 925
} 
# 928
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_byte< _Tp> ::__value, void> ::__type 
# 932
__fill_a1(_Tp *__first, _Tp *__last, const _Tp &__c) 
# 933
{ 
# 934
const _Tp __tmp = __c; 
# 943 "/usr/include/c++/11/bits/stl_algobase.h" 3
if (const size_t __len = __last - __first) { 
# 944
__builtin_memset(__first, static_cast< unsigned char>(__tmp), __len); }  
# 945
} 
# 947
template< class _Ite, class _Cont, class _Tp> inline void 
# 950
__fill_a1(__gnu_cxx::__normal_iterator< _Ite, _Cont>  __first, __gnu_cxx::__normal_iterator< _Ite, _Cont>  
# 951
__last, const _Tp &
# 952
__value) 
# 953
{ std::__fill_a1(__first.base(), __last.base(), __value); } 
# 955
template< class _Tp, class _VTp> void __fill_a1(const _Deque_iterator< _Tp, _Tp &, _Tp *>  &, const _Deque_iterator< _Tp, _Tp &, _Tp *>  &, const _VTp &); 
# 962
void __fill_a1(_Bit_iterator, _Bit_iterator, const bool &); 
# 965
template< class _FIte, class _Tp> inline void 
# 968
__fill_a(_FIte __first, _FIte __last, const _Tp &__value) 
# 969
{ std::__fill_a1(__first, __last, __value); } 
# 971
template< class _Ite, class _Seq, class _Cat, class _Tp> void __fill_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  &, const _Tp &); 
# 989 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline void 
# 992
fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value) 
# 993
{ 
# 997
; 
# 999
std::__fill_a(__first, __last, __value); 
# 1000
} 
# 1004
constexpr int __size_to_integer(int __n) { return __n; } 
# 1006
constexpr unsigned __size_to_integer(unsigned __n) { return __n; } 
# 1008
constexpr long __size_to_integer(long __n) { return __n; } 
# 1010
constexpr unsigned long __size_to_integer(unsigned long __n) { return __n; } 
# 1012
constexpr long long __size_to_integer(long long __n) { return __n; } 
# 1014
constexpr unsigned long long __size_to_integer(unsigned long long __n) { return __n; } 
# 1018
constexpr __int128 __size_to_integer(__int128 __n) { return __n; } 
# 1020
constexpr unsigned __int128 __size_to_integer(unsigned __int128 __n) { return __n; } 
# 1042 "/usr/include/c++/11/bits/stl_algobase.h" 3
constexpr long long __size_to_integer(float __n) { return (long long)__n; } 
# 1044
constexpr long long __size_to_integer(double __n) { return (long long)__n; } 
# 1046
constexpr long long __size_to_integer(long double __n) { return (long long)__n; } 
# 1052
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 1056
__fill_n_a1(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 1057
{ 
# 1058
for (; __n > 0; (--__n), ((void)(++__first))) { 
# 1059
(*__first) = __value; }  
# 1060
return __first; 
# 1061
} 
# 1063
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 1067
__fill_n_a1(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 1068
{ 
# 1069
const _Tp __tmp = __value; 
# 1070
for (; __n > 0; (--__n), ((void)(++__first))) { 
# 1071
(*__first) = __tmp; }  
# 1072
return __first; 
# 1073
} 
# 1075
template< class _Ite, class _Seq, class _Cat, class _Size, class 
# 1076
_Tp> __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  
# 1075
__fill_n_a(const __gnu_debug::_Safe_iterator< _Ite, _Seq, _Cat>  & __first, _Size __n, const _Tp & __value, input_iterator_tag); 
# 1082
template< class _OutputIterator, class _Size, class _Tp> inline _OutputIterator 
# 1085
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value, output_iterator_tag) 
# 1087
{ 
# 1089
static_assert((is_integral< _Size> {}), "fill_n must pass integral size");
# 1091
return __fill_n_a1(__first, __n, __value); 
# 1092
} 
# 1094
template< class _OutputIterator, class _Size, class _Tp> inline _OutputIterator 
# 1097
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value, input_iterator_tag) 
# 1099
{ 
# 1101
static_assert((is_integral< _Size> {}), "fill_n must pass integral size");
# 1103
return __fill_n_a1(__first, __n, __value); 
# 1104
} 
# 1106
template< class _OutputIterator, class _Size, class _Tp> inline _OutputIterator 
# 1109
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value, random_access_iterator_tag) 
# 1111
{ 
# 1113
static_assert((is_integral< _Size> {}), "fill_n must pass integral size");
# 1115
if (__n <= 0) { 
# 1116
return __first; }  
# 1118
; 
# 1120
std::__fill_a(__first, __first + __n, __value); 
# 1121
return __first + __n; 
# 1122
} 
# 1141 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _OI, class _Size, class _Tp> inline _OI 
# 1144
fill_n(_OI __first, _Size __n, const _Tp &__value) 
# 1145
{ 
# 1149
return std::__fill_n_a(__first, std::__size_to_integer(__n), __value, std::__iterator_category(__first)); 
# 1151
} 
# 1153
template< bool _BoolType> 
# 1154
struct __equal { 
# 1156
template< class _II1, class _II2> static bool 
# 1159
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1160
{ 
# 1161
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 1162
if (!((*__first1) == (*__first2))) { 
# 1163
return false; }  }  
# 1164
return true; 
# 1165
} 
# 1166
}; 
# 1169
template<> struct __equal< true>  { 
# 1171
template< class _Tp> static bool 
# 1174
equal(const _Tp *__first1, const _Tp *__last1, const _Tp *__first2) 
# 1175
{ 
# 1176
if (const size_t __len = __last1 - __first1) { 
# 1177
return !std::__memcmp(__first1, __first2, __len); }  
# 1178
return true; 
# 1179
} 
# 1180
}; 
# 1182
template< class _Tp, class _Ref, class _Ptr, class _II> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, bool> ::__type __equal_aux1(_Deque_iterator< _Tp, _Ref, _Ptr> , _Deque_iterator< _Tp, _Ref, _Ptr> , _II); 
# 1189
template< class _Tp1, class _Ref1, class _Ptr1, class 
# 1190
_Tp2, class _Ref2, class _Ptr2> bool 
# 1189
__equal_aux1(_Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> ); 
# 1196
template< class _II, class _Tp, class _Ref, class _Ptr> typename __gnu_cxx::__enable_if< __is_random_access_iter< _II> ::__value, bool> ::__type __equal_aux1(_II, _II, _Deque_iterator< _Tp, _Ref, _Ptr> ); 
# 1202
template< class _II1, class _II2> inline bool 
# 1205
__equal_aux1(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1206
{ 
# 1207
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 1208
const bool __simple = ((__is_integer< typename iterator_traits< _II1> ::value_type> ::__value || __is_pointer< typename iterator_traits< _II1> ::value_type> ::__value) && __memcmpable< _II1, _II2> ::__value); 
# 1211
return std::template __equal< __simple> ::equal(__first1, __last1, __first2); 
# 1212
} 
# 1214
template< class _II1, class _II2> inline bool 
# 1217
__equal_aux(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1218
{ 
# 1219
return std::__equal_aux1(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2)); 
# 1222
} 
# 1224
template< class _II1, class _Seq1, class _Cat1, class _II2> bool __equal_aux(const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, _II2); 
# 1230
template< class _II1, class _II2, class _Seq2, class _Cat2> bool __equal_aux(_II1, _II1, const __gnu_debug::_Safe_iterator< _II2, _Seq2, _Cat2>  &); 
# 1235
template< class _II1, class _Seq1, class _Cat1, class 
# 1236
_II2, class _Seq2, class _Cat2> bool 
# 1235
__equal_aux(const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _II1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _II2, _Seq2, _Cat2>  &); 
# 1242
template< class , class > 
# 1243
struct __lc_rai { 
# 1245
template< class _II1, class _II2> static _II1 
# 1248
__newlast1(_II1, _II1 __last1, _II2, _II2) 
# 1249
{ return __last1; } 
# 1251
template< class _II> static bool 
# 1254
__cnd2(_II __first, _II __last) 
# 1255
{ return __first != __last; } 
# 1256
}; 
# 1259
template<> struct __lc_rai< random_access_iterator_tag, random_access_iterator_tag>  { 
# 1261
template< class _RAI1, class _RAI2> static _RAI1 
# 1264
__newlast1(_RAI1 __first1, _RAI1 __last1, _RAI2 
# 1265
__first2, _RAI2 __last2) 
# 1266
{ 
# 1268
const typename iterator_traits< _RAI1> ::difference_type __diff1 = __last1 - __first1; 
# 1270
const typename iterator_traits< _RAI2> ::difference_type __diff2 = __last2 - __first2; 
# 1271
return (__diff2 < __diff1) ? __first1 + __diff2 : __last1; 
# 1272
} 
# 1274
template< class _RAI> static bool 
# 1276
__cnd2(_RAI, _RAI) 
# 1277
{ return true; } 
# 1278
}; 
# 1280
template< class _II1, class _II2, class _Compare> bool 
# 1283
__lexicographical_compare_impl(_II1 __first1, _II1 __last1, _II2 
# 1284
__first2, _II2 __last2, _Compare 
# 1285
__comp) 
# 1286
{ 
# 1287
typedef typename iterator_traits< _II1> ::iterator_category _Category1; 
# 1288
typedef typename iterator_traits< _II2> ::iterator_category _Category2; 
# 1289
typedef __lc_rai< typename iterator_traits< _II1> ::iterator_category, typename iterator_traits< _II2> ::iterator_category>  __rai_type; 
# 1291
__last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2); 
# 1292
for (; (__first1 != __last1) && __rai_type::__cnd2(__first2, __last2); (++__first1), ((void)(++__first2))) 
# 1294
{ 
# 1295
if (__comp(__first1, __first2)) { 
# 1296
return true; }  
# 1297
if (__comp(__first2, __first1)) { 
# 1298
return false; }  
# 1299
}  
# 1300
return (__first1 == __last1) && (__first2 != __last2); 
# 1301
} 
# 1303
template< bool _BoolType> 
# 1304
struct __lexicographical_compare { 
# 1306
template< class _II1, class _II2> static bool 
# 1309
__lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1310
{ 
# 1311
using __gnu_cxx::__ops::__iter_less_iter;
# 1312
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __iter_less_iter()); 
# 1315
} 
# 1317
template< class _II1, class _II2> static int 
# 1320
__3way(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1321
{ 
# 1322
while (__first1 != __last1) 
# 1323
{ 
# 1324
if (__first2 == __last2) { 
# 1325
return +1; }  
# 1326
if ((*__first1) < (*__first2)) { 
# 1327
return -1; }  
# 1328
if ((*__first2) < (*__first1)) { 
# 1329
return +1; }  
# 1330
++__first1; 
# 1331
++__first2; 
# 1332
}  
# 1333
return ((int)(__first2 == __last2)) - 1; 
# 1334
} 
# 1335
}; 
# 1338
template<> struct __lexicographical_compare< true>  { 
# 1340
template< class _Tp, class _Up> static bool 
# 1343
__lc(const _Tp *__first1, const _Tp *__last1, const _Up *
# 1344
__first2, const _Up *__last2) 
# 1345
{ return __3way(__first1, __last1, __first2, __last2) < 0; } 
# 1347
template< class _Tp, class _Up> static ptrdiff_t 
# 1350
__3way(const _Tp *__first1, const _Tp *__last1, const _Up *
# 1351
__first2, const _Up *__last2) 
# 1352
{ 
# 1353
const size_t __len1 = __last1 - __first1; 
# 1354
const size_t __len2 = __last2 - __first2; 
# 1355
if (const size_t __len = std::min(__len1, __len2)) { 
# 1356
if (int __result = std::__memcmp(__first1, __first2, __len)) { 
# 1357
return __result; }  }  
# 1358
return (ptrdiff_t)(__len1 - __len2); 
# 1359
} 
# 1360
}; 
# 1362
template< class _II1, class _II2> inline bool 
# 1365
__lexicographical_compare_aux1(_II1 __first1, _II1 __last1, _II2 
# 1366
__first2, _II2 __last2) 
# 1367
{ 
# 1368
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 1369
typedef typename iterator_traits< _II2> ::value_type _ValueType2; 
# 1370
const bool __simple = (__is_memcmp_ordered_with< typename iterator_traits< _II1> ::value_type, typename iterator_traits< _II2> ::value_type> ::__value && __is_pointer< _II1> ::__value && __is_pointer< _II2> ::__value); 
# 1383
return std::template __lexicographical_compare< __simple> ::__lc(__first1, __last1, __first2, __last2); 
# 1385
} 
# 1387
template< class _Tp1, class _Ref1, class _Ptr1, class 
# 1388
_Tp2> bool 
# 1387
__lexicographical_compare_aux1(_Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Tp2 *, _Tp2 *); 
# 1395
template< class _Tp1, class 
# 1396
_Tp2, class _Ref2, class _Ptr2> bool 
# 1395
__lexicographical_compare_aux1(_Tp1 *, _Tp1 *, _Deque_iterator< _Tp2, _Ref2, _Ptr2> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> ); 
# 1402
template< class _Tp1, class _Ref1, class _Ptr1, class 
# 1403
_Tp2, class _Ref2, class _Ptr2> bool 
# 1402
__lexicographical_compare_aux1(_Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp1, _Ref1, _Ptr1> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> , _Deque_iterator< _Tp2, _Ref2, _Ptr2> ); 
# 1411
template< class _II1, class _II2> inline bool 
# 1414
__lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 
# 1415
__first2, _II2 __last2) 
# 1416
{ 
# 1417
return std::__lexicographical_compare_aux1(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2), std::__niter_base(__last2)); 
# 1421
} 
# 1423
template< class _Iter1, class _Seq1, class _Cat1, class 
# 1424
_II2> bool 
# 1423
__lexicographical_compare_aux(const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, _II2, _II2); 
# 1431
template< class _II1, class 
# 1432
_Iter2, class _Seq2, class _Cat2> bool 
# 1431
__lexicographical_compare_aux(_II1, _II1, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &); 
# 1439
template< class _Iter1, class _Seq1, class _Cat1, class 
# 1440
_Iter2, class _Seq2, class _Cat2> bool 
# 1439
__lexicographical_compare_aux(const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _Iter1, _Seq1, _Cat1>  &, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &, const __gnu_debug::_Safe_iterator< _Iter2, _Seq2, _Cat2>  &); 
# 1448
template< class _ForwardIterator, class _Tp, class _Compare> _ForwardIterator 
# 1451
__lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 1452
__val, _Compare __comp) 
# 1453
{ 
# 1455
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 1457
_DistanceType __len = std::distance(__first, __last); 
# 1459
while (__len > 0) 
# 1460
{ 
# 1461
_DistanceType __half = __len >> 1; 
# 1462
_ForwardIterator __middle = __first; 
# 1463
std::advance(__middle, __half); 
# 1464
if (__comp(__middle, __val)) 
# 1465
{ 
# 1466
__first = __middle; 
# 1467
++__first; 
# 1468
__len = ((__len - __half) - 1); 
# 1469
} else { 
# 1471
__len = __half; }  
# 1472
}  
# 1473
return __first; 
# 1474
} 
# 1487 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline _ForwardIterator 
# 1490
lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 1491
__val) 
# 1492
{ 
# 1497
; 
# 1499
return std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val()); 
# 1501
} 
# 1506
constexpr int __lg(int __n) 
# 1507
{ return ((((int)sizeof(int)) * 8) - 1) - __builtin_clz(__n); } 
# 1510
constexpr unsigned __lg(unsigned __n) 
# 1511
{ return ((((int)sizeof(int)) * 8) - 1) - __builtin_clz(__n); } 
# 1514
constexpr long __lg(long __n) 
# 1515
{ return ((((int)sizeof(long)) * 8) - 1) - __builtin_clzl(__n); } 
# 1518
constexpr unsigned long __lg(unsigned long __n) 
# 1519
{ return ((((int)sizeof(long)) * 8) - 1) - __builtin_clzl(__n); } 
# 1522
constexpr long long __lg(long long __n) 
# 1523
{ return ((((int)sizeof(long long)) * 8) - 1) - __builtin_clzll(__n); } 
# 1526
constexpr unsigned long long __lg(unsigned long long __n) 
# 1527
{ return ((((int)sizeof(long long)) * 8) - 1) - __builtin_clzll(__n); } 
# 1543 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1546
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1547
{ 
# 1554
; 
# 1556
return std::__equal_aux(__first1, __last1, __first2); 
# 1557
} 
# 1574 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool 
# 1577
equal(_IIter1 __first1, _IIter1 __last1, _IIter2 
# 1578
__first2, _BinaryPredicate __binary_pred) 
# 1579
{ 
# 1583
; 
# 1585
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 1586
if (!((bool)__binary_pred(*__first1, *__first2))) { 
# 1587
return false; }  }  
# 1588
return true; 
# 1589
} 
# 1593
template< class _II1, class _II2> inline bool 
# 1596
__equal4(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1597
{ 
# 1598
using _RATag = random_access_iterator_tag; 
# 1599
using _Cat1 = typename iterator_traits< _II1> ::iterator_category; 
# 1600
using _Cat2 = typename iterator_traits< _II2> ::iterator_category; 
# 1601
using _RAIters = __and_< is_same< typename iterator_traits< _II1> ::iterator_category, random_access_iterator_tag> , is_same< typename iterator_traits< _II2> ::iterator_category, random_access_iterator_tag> > ; 
# 1602
if (_RAIters()) 
# 1603
{ 
# 1604
auto __d1 = std::distance(__first1, __last1); 
# 1605
auto __d2 = std::distance(__first2, __last2); 
# 1606
if (__d1 != __d2) { 
# 1607
return false; }  
# 1608
return std::equal(__first1, __last1, __first2); 
# 1609
}  
# 1611
for (; (__first1 != __last1) && (__first2 != __last2); (++__first1), ((void)(++__first2))) { 
# 1613
if (!((*__first1) == (*__first2))) { 
# 1614
return false; }  }  
# 1615
return (__first1 == __last1) && (__first2 == __last2); 
# 1616
} 
# 1619
template< class _II1, class _II2, class _BinaryPredicate> inline bool 
# 1622
__equal4(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _BinaryPredicate 
# 1623
__binary_pred) 
# 1624
{ 
# 1625
using _RATag = random_access_iterator_tag; 
# 1626
using _Cat1 = typename iterator_traits< _II1> ::iterator_category; 
# 1627
using _Cat2 = typename iterator_traits< _II2> ::iterator_category; 
# 1628
using _RAIters = __and_< is_same< typename iterator_traits< _II1> ::iterator_category, random_access_iterator_tag> , is_same< typename iterator_traits< _II2> ::iterator_category, random_access_iterator_tag> > ; 
# 1629
if (_RAIters()) 
# 1630
{ 
# 1631
auto __d1 = std::distance(__first1, __last1); 
# 1632
auto __d2 = std::distance(__first2, __last2); 
# 1633
if (__d1 != __d2) { 
# 1634
return false; }  
# 1635
return std::equal(__first1, __last1, __first2, __binary_pred); 
# 1637
}  
# 1639
for (; (__first1 != __last1) && (__first2 != __last2); (++__first1), ((void)(++__first2))) { 
# 1641
if (!((bool)__binary_pred(*__first1, *__first2))) { 
# 1642
return false; }  }  
# 1643
return (__first1 == __last1) && (__first2 == __last2); 
# 1644
} 
# 1664 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1667
equal(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 1668
{ 
# 1675
; 
# 1676
; 
# 1678
return std::__equal4(__first1, __last1, __first2, __last2); 
# 1679
} 
# 1697 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool 
# 1700
equal(_IIter1 __first1, _IIter1 __last1, _IIter2 
# 1701
__first2, _IIter2 __last2, _BinaryPredicate __binary_pred) 
# 1702
{ 
# 1706
; 
# 1707
; 
# 1709
return std::__equal4(__first1, __last1, __first2, __last2, __binary_pred); 
# 1711
} 
# 1729 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1732
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1733
__first2, _II2 __last2) 
# 1734
{ 
# 1744
; 
# 1745
; 
# 1747
return std::__lexicographical_compare_aux(__first1, __last1, __first2, __last2); 
# 1749
} 
# 1764 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _II1, class _II2, class _Compare> inline bool 
# 1767
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1768
__first2, _II2 __last2, _Compare __comp) 
# 1769
{ 
# 1773
; 
# 1774
; 
# 1776
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 1779
} 
# 1877 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 1878
_BinaryPredicate> pair< _InputIterator1, _InputIterator2>  
# 1881
__mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1882
__first2, _BinaryPredicate __binary_pred) 
# 1883
{ 
# 1884
while ((__first1 != __last1) && __binary_pred(__first1, __first2)) 
# 1885
{ 
# 1886
++__first1; 
# 1887
++__first2; 
# 1888
}  
# 1889
return pair< _InputIterator1, _InputIterator2> (__first1, __first2); 
# 1890
} 
# 1905 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2> inline pair< _InputIterator1, _InputIterator2>  
# 1908
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1909
__first2) 
# 1910
{ 
# 1917
; 
# 1919
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 1921
} 
# 1939 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 1940
_BinaryPredicate> inline pair< _InputIterator1, _InputIterator2>  
# 1943
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1944
__first2, _BinaryPredicate __binary_pred) 
# 1945
{ 
# 1949
; 
# 1951
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 1953
} 
# 1957
template< class _InputIterator1, class _InputIterator2, class 
# 1958
_BinaryPredicate> pair< _InputIterator1, _InputIterator2>  
# 1961
__mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1962
__first2, _InputIterator2 __last2, _BinaryPredicate 
# 1963
__binary_pred) 
# 1964
{ 
# 1965
while ((__first1 != __last1) && (__first2 != __last2) && __binary_pred(__first1, __first2)) 
# 1967
{ 
# 1968
++__first1; 
# 1969
++__first2; 
# 1970
}  
# 1971
return pair< _InputIterator1, _InputIterator2> (__first1, __first2); 
# 1972
} 
# 1988 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2> inline pair< _InputIterator1, _InputIterator2>  
# 1991
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1992
__first2, _InputIterator2 __last2) 
# 1993
{ 
# 2000
; 
# 2001
; 
# 2003
return std::__mismatch(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 2005
} 
# 2024 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 2025
_BinaryPredicate> inline pair< _InputIterator1, _InputIterator2>  
# 2028
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 2029
__first2, _InputIterator2 __last2, _BinaryPredicate 
# 2030
__binary_pred) 
# 2031
{ 
# 2035
; 
# 2036
; 
# 2038
return std::__mismatch(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 2040
} 
# 2046
template< class _InputIterator, class _Predicate> inline _InputIterator 
# 2049
__find_if(_InputIterator __first, _InputIterator __last, _Predicate 
# 2050
__pred, input_iterator_tag) 
# 2051
{ 
# 2052
while ((__first != __last) && (!__pred(__first))) { 
# 2053
++__first; }  
# 2054
return __first; 
# 2055
} 
# 2058
template< class _RandomAccessIterator, class _Predicate> _RandomAccessIterator 
# 2061
__find_if(_RandomAccessIterator __first, _RandomAccessIterator __last, _Predicate 
# 2062
__pred, random_access_iterator_tag) 
# 2063
{ 
# 2065
typename iterator_traits< _RandomAccessIterator> ::difference_type __trip_count = (__last - __first) >> 2; 
# 2067
for (; __trip_count > 0; --__trip_count) 
# 2068
{ 
# 2069
if (__pred(__first)) { 
# 2070
return __first; }  
# 2071
++__first; 
# 2073
if (__pred(__first)) { 
# 2074
return __first; }  
# 2075
++__first; 
# 2077
if (__pred(__first)) { 
# 2078
return __first; }  
# 2079
++__first; 
# 2081
if (__pred(__first)) { 
# 2082
return __first; }  
# 2083
++__first; 
# 2084
}  
# 2086
switch (__last - __first) 
# 2087
{ 
# 2088
case 3:  
# 2089
if (__pred(__first)) { 
# 2090
return __first; }  
# 2091
++__first; 
# 2093
case 2:  
# 2094
if (__pred(__first)) { 
# 2095
return __first; }  
# 2096
++__first; 
# 2098
case 1:  
# 2099
if (__pred(__first)) { 
# 2100
return __first; }  
# 2101
++__first; 
# 2103
case 0:  
# 2104
default:  
# 2105
return __last; 
# 2106
}  
# 2107
} 
# 2109
template< class _Iterator, class _Predicate> inline _Iterator 
# 2112
__find_if(_Iterator __first, _Iterator __last, _Predicate __pred) 
# 2113
{ 
# 2114
return __find_if(__first, __last, __pred, std::__iterator_category(__first)); 
# 2116
} 
# 2118
template< class _InputIterator, class _Predicate> typename iterator_traits< _InputIterator> ::difference_type 
# 2121
__count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred) 
# 2122
{ 
# 2123
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 2124
for (; __first != __last; ++__first) { 
# 2125
if (__pred(__first)) { 
# 2126
++__n; }  }  
# 2127
return __n; 
# 2128
} 
# 2131
template< class _ForwardIterator1, class _ForwardIterator2, class 
# 2132
_BinaryPredicate> bool 
# 2135
__is_permutation(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 2136
__first2, _BinaryPredicate __pred) 
# 2137
{ 
# 2140
for (; __first1 != __last1; (++__first1), ((void)(++__first2))) { 
# 2141
if (!__pred(__first1, __first2)) { 
# 2142
break; }  }  
# 2144
if (__first1 == __last1) { 
# 2145
return true; }  
# 2149
_ForwardIterator2 __last2 = __first2; 
# 2150
std::advance(__last2, std::distance(__first1, __last1)); 
# 2151
for (_ForwardIterator1 __scan = __first1; __scan != __last1; ++__scan) 
# 2152
{ 
# 2153
if (__scan != std::__find_if(__first1, __scan, __gnu_cxx::__ops::__iter_comp_iter(__pred, __scan))) { 
# 2155
continue; }  
# 2157
auto __matches = std::__count_if(__first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__pred, __scan)); 
# 2160
if ((0 == __matches) || (std::__count_if(__scan, __last1, __gnu_cxx::__ops::__iter_comp_iter(__pred, __scan)) != __matches)) { 
# 2164
return false; }  
# 2165
}   
# 2166
return true; 
# 2167
} 
# 2181 "/usr/include/c++/11/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> inline bool 
# 2184
is_permutation(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 2185
__first2) 
# 2186
{ 
# 2193
; 
# 2195
return std::__is_permutation(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 2197
} 
# 2201
}
# 158 "/usr/include/c++/11/limits" 3
namespace std __attribute((__visibility__("default"))) { 
# 167
enum float_round_style { 
# 169
round_indeterminate = (-1), 
# 170
round_toward_zero = 0, 
# 171
round_to_nearest, 
# 172
round_toward_infinity, 
# 173
round_toward_neg_infinity
# 174
}; 
# 182
enum float_denorm_style { 
# 185
denorm_indeterminate = (-1), 
# 187
denorm_absent = 0, 
# 189
denorm_present
# 190
}; 
# 202 "/usr/include/c++/11/limits" 3
struct __numeric_limits_base { 
# 206
static constexpr inline bool is_specialized = false; 
# 211
static constexpr inline int digits = 0; 
# 214
static constexpr inline int digits10 = 0; 
# 219
static constexpr inline int max_digits10 = 0; 
# 223
static constexpr inline bool is_signed = false; 
# 226
static constexpr inline bool is_integer = false; 
# 231
static constexpr inline bool is_exact = false; 
# 235
static constexpr inline int radix = 0; 
# 239
static constexpr inline int min_exponent = 0; 
# 243
static constexpr inline int min_exponent10 = 0; 
# 248
static constexpr inline int max_exponent = 0; 
# 252
static constexpr inline int max_exponent10 = 0; 
# 255
static constexpr inline bool has_infinity = false; 
# 259
static constexpr inline bool has_quiet_NaN = false; 
# 263
static constexpr inline bool has_signaling_NaN = false; 
# 266
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 270
static constexpr inline bool has_denorm_loss = false; 
# 274
static constexpr inline bool is_iec559 = false; 
# 279
static constexpr inline bool is_bounded = false; 
# 288 "/usr/include/c++/11/limits" 3
static constexpr inline bool is_modulo = false; 
# 291
static constexpr inline bool traps = false; 
# 294
static constexpr inline bool tinyness_before = false; 
# 299
static constexpr inline float_round_style round_style = round_toward_zero; 
# 301
}; 
# 311 "/usr/include/c++/11/limits" 3
template< class _Tp> 
# 312
struct numeric_limits : public __numeric_limits_base { 
# 317
static constexpr _Tp min() noexcept { return _Tp(); } 
# 321
static constexpr _Tp max() noexcept { return _Tp(); } 
# 327
static constexpr _Tp lowest() noexcept { return _Tp(); } 
# 333
static constexpr _Tp epsilon() noexcept { return _Tp(); } 
# 337
static constexpr _Tp round_error() noexcept { return _Tp(); } 
# 341
static constexpr _Tp infinity() noexcept { return _Tp(); } 
# 346
static constexpr _Tp quiet_NaN() noexcept { return _Tp(); } 
# 351
static constexpr _Tp signaling_NaN() noexcept { return _Tp(); } 
# 357
static constexpr _Tp denorm_min() noexcept { return _Tp(); } 
# 358
}; 
# 363
template< class _Tp> 
# 364
struct numeric_limits< const _Tp>  : public std::numeric_limits< _Tp>  { 
# 365
}; 
# 367
template< class _Tp> 
# 368
struct numeric_limits< volatile _Tp>  : public std::numeric_limits< _Tp>  { 
# 369
}; 
# 371
template< class _Tp> 
# 372
struct numeric_limits< const volatile _Tp>  : public std::numeric_limits< _Tp>  { 
# 373
}; 
# 384 "/usr/include/c++/11/limits" 3
template<> struct numeric_limits< bool>  { 
# 386
static constexpr inline bool is_specialized = true; 
# 389
static constexpr bool min() noexcept { return false; } 
# 392
static constexpr bool max() noexcept { return true; } 
# 396
static constexpr bool lowest() noexcept { return min(); } 
# 398
static constexpr inline int digits = 1; 
# 399
static constexpr inline int digits10 = 0; 
# 401
static constexpr inline int max_digits10 = 0; 
# 403
static constexpr inline bool is_signed = false; 
# 404
static constexpr inline bool is_integer = true; 
# 405
static constexpr inline bool is_exact = true; 
# 406
static constexpr inline int radix = 2; 
# 409
static constexpr bool epsilon() noexcept { return false; } 
# 412
static constexpr bool round_error() noexcept { return false; } 
# 414
static constexpr inline int min_exponent = 0; 
# 415
static constexpr inline int min_exponent10 = 0; 
# 416
static constexpr inline int max_exponent = 0; 
# 417
static constexpr inline int max_exponent10 = 0; 
# 419
static constexpr inline bool has_infinity = false; 
# 420
static constexpr inline bool has_quiet_NaN = false; 
# 421
static constexpr inline bool has_signaling_NaN = false; 
# 422
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 424
static constexpr inline bool has_denorm_loss = false; 
# 427
static constexpr bool infinity() noexcept { return false; } 
# 430
static constexpr bool quiet_NaN() noexcept { return false; } 
# 433
static constexpr bool signaling_NaN() noexcept { return false; } 
# 436
static constexpr bool denorm_min() noexcept { return false; } 
# 438
static constexpr inline bool is_iec559 = false; 
# 439
static constexpr inline bool is_bounded = true; 
# 440
static constexpr inline bool is_modulo = false; 
# 445
static constexpr inline bool traps = true; 
# 446
static constexpr inline bool tinyness_before = false; 
# 447
static constexpr inline float_round_style round_style = round_toward_zero; 
# 449
}; 
# 453
template<> struct numeric_limits< char>  { 
# 455
static constexpr inline bool is_specialized = true; 
# 458
static constexpr char min() noexcept { return ((((char)(-1)) < 0) ? (-((((char)(-1)) < 0) ? (((((char)1) << (((sizeof(char) * (8)) - (((char)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char)0)))) - 1 : ((char)0)); } 
# 461
static constexpr char max() noexcept { return ((((char)(-1)) < 0) ? (((((char)1) << (((sizeof(char) * (8)) - (((char)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char)0))); } 
# 465
static constexpr char lowest() noexcept { return min(); } 
# 468
static constexpr inline int digits = ((sizeof(char) * (8)) - (((char)(-1)) < 0)); 
# 469
static constexpr inline int digits10 = ((((sizeof(char) * (8)) - (((char)(-1)) < 0)) * (643L)) / (2136)); 
# 471
static constexpr inline int max_digits10 = 0; 
# 473
static constexpr inline bool is_signed = (((char)(-1)) < 0); 
# 474
static constexpr inline bool is_integer = true; 
# 475
static constexpr inline bool is_exact = true; 
# 476
static constexpr inline int radix = 2; 
# 479
static constexpr char epsilon() noexcept { return 0; } 
# 482
static constexpr char round_error() noexcept { return 0; } 
# 484
static constexpr inline int min_exponent = 0; 
# 485
static constexpr inline int min_exponent10 = 0; 
# 486
static constexpr inline int max_exponent = 0; 
# 487
static constexpr inline int max_exponent10 = 0; 
# 489
static constexpr inline bool has_infinity = false; 
# 490
static constexpr inline bool has_quiet_NaN = false; 
# 491
static constexpr inline bool has_signaling_NaN = false; 
# 492
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 494
static constexpr inline bool has_denorm_loss = false; 
# 497
static constexpr char infinity() noexcept { return ((char)0); } 
# 500
static constexpr char quiet_NaN() noexcept { return ((char)0); } 
# 503
static constexpr char signaling_NaN() noexcept { return ((char)0); } 
# 506
static constexpr char denorm_min() noexcept { return static_cast< char>(0); } 
# 508
static constexpr inline bool is_iec559 = false; 
# 509
static constexpr inline bool is_bounded = true; 
# 510
static constexpr inline bool is_modulo = (!is_signed); 
# 512
static constexpr inline bool traps = true; 
# 513
static constexpr inline bool tinyness_before = false; 
# 514
static constexpr inline float_round_style round_style = round_toward_zero; 
# 516
}; 
# 520
template<> struct numeric_limits< signed char>  { 
# 522
static constexpr inline bool is_specialized = true; 
# 525
static constexpr signed char min() noexcept { return (-127) - 1; } 
# 528
static constexpr signed char max() noexcept { return 127; } 
# 532
static constexpr signed char lowest() noexcept { return min(); } 
# 535
static constexpr inline int digits = ((sizeof(signed char) * (8)) - (((signed char)(-1)) < 0)); 
# 536
static constexpr inline int digits10 = ((((sizeof(signed char) * (8)) - (((signed char)(-1)) < 0)) * (643L)) / (2136)); 
# 539
static constexpr inline int max_digits10 = 0; 
# 541
static constexpr inline bool is_signed = true; 
# 542
static constexpr inline bool is_integer = true; 
# 543
static constexpr inline bool is_exact = true; 
# 544
static constexpr inline int radix = 2; 
# 547
static constexpr signed char epsilon() noexcept { return 0; } 
# 550
static constexpr signed char round_error() noexcept { return 0; } 
# 552
static constexpr inline int min_exponent = 0; 
# 553
static constexpr inline int min_exponent10 = 0; 
# 554
static constexpr inline int max_exponent = 0; 
# 555
static constexpr inline int max_exponent10 = 0; 
# 557
static constexpr inline bool has_infinity = false; 
# 558
static constexpr inline bool has_quiet_NaN = false; 
# 559
static constexpr inline bool has_signaling_NaN = false; 
# 560
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 562
static constexpr inline bool has_denorm_loss = false; 
# 565
static constexpr signed char infinity() noexcept { return static_cast< signed char>(0); } 
# 568
static constexpr signed char quiet_NaN() noexcept { return static_cast< signed char>(0); } 
# 571
static constexpr signed char signaling_NaN() noexcept 
# 572
{ return static_cast< signed char>(0); } 
# 575
static constexpr signed char denorm_min() noexcept 
# 576
{ return static_cast< signed char>(0); } 
# 578
static constexpr inline bool is_iec559 = false; 
# 579
static constexpr inline bool is_bounded = true; 
# 580
static constexpr inline bool is_modulo = false; 
# 582
static constexpr inline bool traps = true; 
# 583
static constexpr inline bool tinyness_before = false; 
# 584
static constexpr inline float_round_style round_style = round_toward_zero; 
# 586
}; 
# 590
template<> struct numeric_limits< unsigned char>  { 
# 592
static constexpr inline bool is_specialized = true; 
# 595
static constexpr unsigned char min() noexcept { return 0; } 
# 598
static constexpr unsigned char max() noexcept { return ((127) * 2U) + (1); } 
# 602
static constexpr unsigned char lowest() noexcept { return min(); } 
# 605
static constexpr inline int digits = ((sizeof(unsigned char) * (8)) - (((unsigned char)(-1)) < 0)); 
# 607
static constexpr inline int digits10 = ((((sizeof(unsigned char) * (8)) - (((unsigned char)(-1)) < 0)) * (643L)) / (2136)); 
# 610
static constexpr inline int max_digits10 = 0; 
# 612
static constexpr inline bool is_signed = false; 
# 613
static constexpr inline bool is_integer = true; 
# 614
static constexpr inline bool is_exact = true; 
# 615
static constexpr inline int radix = 2; 
# 618
static constexpr unsigned char epsilon() noexcept { return 0; } 
# 621
static constexpr unsigned char round_error() noexcept { return 0; } 
# 623
static constexpr inline int min_exponent = 0; 
# 624
static constexpr inline int min_exponent10 = 0; 
# 625
static constexpr inline int max_exponent = 0; 
# 626
static constexpr inline int max_exponent10 = 0; 
# 628
static constexpr inline bool has_infinity = false; 
# 629
static constexpr inline bool has_quiet_NaN = false; 
# 630
static constexpr inline bool has_signaling_NaN = false; 
# 631
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 633
static constexpr inline bool has_denorm_loss = false; 
# 636
static constexpr unsigned char infinity() noexcept 
# 637
{ return static_cast< unsigned char>(0); } 
# 640
static constexpr unsigned char quiet_NaN() noexcept 
# 641
{ return static_cast< unsigned char>(0); } 
# 644
static constexpr unsigned char signaling_NaN() noexcept 
# 645
{ return static_cast< unsigned char>(0); } 
# 648
static constexpr unsigned char denorm_min() noexcept 
# 649
{ return static_cast< unsigned char>(0); } 
# 651
static constexpr inline bool is_iec559 = false; 
# 652
static constexpr inline bool is_bounded = true; 
# 653
static constexpr inline bool is_modulo = true; 
# 655
static constexpr inline bool traps = true; 
# 656
static constexpr inline bool tinyness_before = false; 
# 657
static constexpr inline float_round_style round_style = round_toward_zero; 
# 659
}; 
# 663
template<> struct numeric_limits< wchar_t>  { 
# 665
static constexpr inline bool is_specialized = true; 
# 668
static constexpr wchar_t min() noexcept { return ((((wchar_t)(-1)) < 0) ? (-((((wchar_t)(-1)) < 0) ? (((((wchar_t)1) << (((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((wchar_t)0)))) - 1 : ((wchar_t)0)); } 
# 671
static constexpr wchar_t max() noexcept { return ((((wchar_t)(-1)) < 0) ? (((((wchar_t)1) << (((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((wchar_t)0))); } 
# 675
static constexpr wchar_t lowest() noexcept { return min(); } 
# 678
static constexpr inline int digits = ((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)); 
# 679
static constexpr inline int digits10 = ((((sizeof(wchar_t) * (8)) - (((wchar_t)(-1)) < 0)) * (643L)) / (2136)); 
# 682
static constexpr inline int max_digits10 = 0; 
# 684
static constexpr inline bool is_signed = (((wchar_t)(-1)) < 0); 
# 685
static constexpr inline bool is_integer = true; 
# 686
static constexpr inline bool is_exact = true; 
# 687
static constexpr inline int radix = 2; 
# 690
static constexpr wchar_t epsilon() noexcept { return 0; } 
# 693
static constexpr wchar_t round_error() noexcept { return 0; } 
# 695
static constexpr inline int min_exponent = 0; 
# 696
static constexpr inline int min_exponent10 = 0; 
# 697
static constexpr inline int max_exponent = 0; 
# 698
static constexpr inline int max_exponent10 = 0; 
# 700
static constexpr inline bool has_infinity = false; 
# 701
static constexpr inline bool has_quiet_NaN = false; 
# 702
static constexpr inline bool has_signaling_NaN = false; 
# 703
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 705
static constexpr inline bool has_denorm_loss = false; 
# 708
static constexpr wchar_t infinity() noexcept { return ((wchar_t)0); } 
# 711
static constexpr wchar_t quiet_NaN() noexcept { return ((wchar_t)0); } 
# 714
static constexpr wchar_t signaling_NaN() noexcept { return ((wchar_t)0); } 
# 717
static constexpr wchar_t denorm_min() noexcept { return ((wchar_t)0); } 
# 719
static constexpr inline bool is_iec559 = false; 
# 720
static constexpr inline bool is_bounded = true; 
# 721
static constexpr inline bool is_modulo = (!is_signed); 
# 723
static constexpr inline bool traps = true; 
# 724
static constexpr inline bool tinyness_before = false; 
# 725
static constexpr inline float_round_style round_style = round_toward_zero; 
# 727
}; 
# 797 "/usr/include/c++/11/limits" 3
template<> struct numeric_limits< char16_t>  { 
# 799
static constexpr inline bool is_specialized = true; 
# 802
static constexpr char16_t min() noexcept { return ((((char16_t)(-1)) < 0) ? (-((((char16_t)(-1)) < 0) ? (((((char16_t)1) << (((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char16_t)0)))) - 1 : ((char16_t)0)); } 
# 805
static constexpr char16_t max() noexcept { return ((((char16_t)(-1)) < 0) ? (((((char16_t)1) << (((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((char16_t)0))); } 
# 808
static constexpr char16_t lowest() noexcept { return min(); } 
# 810
static constexpr inline int digits = ((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)); 
# 811
static constexpr inline int digits10 = ((((sizeof(char16_t) * (8)) - (((char16_t)(-1)) < 0)) * (643L)) / (2136)); 
# 812
static constexpr inline int max_digits10 = 0; 
# 813
static constexpr inline bool is_signed = (((char16_t)(-1)) < 0); 
# 814
static constexpr inline bool is_integer = true; 
# 815
static constexpr inline bool is_exact = true; 
# 816
static constexpr inline int radix = 2; 
# 819
static constexpr char16_t epsilon() noexcept { return 0; } 
# 822
static constexpr char16_t round_error() noexcept { return 0; } 
# 824
static constexpr inline int min_exponent = 0; 
# 825
static constexpr inline int min_exponent10 = 0; 
# 826
static constexpr inline int max_exponent = 0; 
# 827
static constexpr inline int max_exponent10 = 0; 
# 829
static constexpr inline bool has_infinity = false; 
# 830
static constexpr inline bool has_quiet_NaN = false; 
# 831
static constexpr inline bool has_signaling_NaN = false; 
# 832
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 833
static constexpr inline bool has_denorm_loss = false; 
# 836
static constexpr char16_t infinity() noexcept { return ((char16_t)0); } 
# 839
static constexpr char16_t quiet_NaN() noexcept { return ((char16_t)0); } 
# 842
static constexpr char16_t signaling_NaN() noexcept { return ((char16_t)0); } 
# 845
static constexpr char16_t denorm_min() noexcept { return ((char16_t)0); } 
# 847
static constexpr inline bool is_iec559 = false; 
# 848
static constexpr inline bool is_bounded = true; 
# 849
static constexpr inline bool is_modulo = (!is_signed); 
# 851
static constexpr inline bool traps = true; 
# 852
static constexpr inline bool tinyness_before = false; 
# 853
static constexpr inline float_round_style round_style = round_toward_zero; 
# 854
}; 
# 858
template<> struct numeric_limits< char32_t>  { 
# 860
static constexpr inline bool is_specialized = true; 
# 863
static constexpr char32_t min() noexcept { return ((((char32_t)(-1)) < (0)) ? (-((((char32_t)(-1)) < (0)) ? (((((char32_t)1) << (((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))) - (1))) - (1)) << 1) + (1) : (~((char32_t)0)))) - (1) : ((char32_t)0)); } 
# 866
static constexpr char32_t max() noexcept { return ((((char32_t)(-1)) < (0)) ? (((((char32_t)1) << (((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))) - (1))) - (1)) << 1) + (1) : (~((char32_t)0))); } 
# 869
static constexpr char32_t lowest() noexcept { return min(); } 
# 871
static constexpr inline int digits = ((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))); 
# 872
static constexpr inline int digits10 = ((((sizeof(char32_t) * (8)) - (((char32_t)(-1)) < (0))) * (643L)) / (2136)); 
# 873
static constexpr inline int max_digits10 = 0; 
# 874
static constexpr inline bool is_signed = (((char32_t)(-1)) < (0)); 
# 875
static constexpr inline bool is_integer = true; 
# 876
static constexpr inline bool is_exact = true; 
# 877
static constexpr inline int radix = 2; 
# 880
static constexpr char32_t epsilon() noexcept { return 0; } 
# 883
static constexpr char32_t round_error() noexcept { return 0; } 
# 885
static constexpr inline int min_exponent = 0; 
# 886
static constexpr inline int min_exponent10 = 0; 
# 887
static constexpr inline int max_exponent = 0; 
# 888
static constexpr inline int max_exponent10 = 0; 
# 890
static constexpr inline bool has_infinity = false; 
# 891
static constexpr inline bool has_quiet_NaN = false; 
# 892
static constexpr inline bool has_signaling_NaN = false; 
# 893
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 894
static constexpr inline bool has_denorm_loss = false; 
# 897
static constexpr char32_t infinity() noexcept { return ((char32_t)0); } 
# 900
static constexpr char32_t quiet_NaN() noexcept { return ((char32_t)0); } 
# 903
static constexpr char32_t signaling_NaN() noexcept { return ((char32_t)0); } 
# 906
static constexpr char32_t denorm_min() noexcept { return ((char32_t)0); } 
# 908
static constexpr inline bool is_iec559 = false; 
# 909
static constexpr inline bool is_bounded = true; 
# 910
static constexpr inline bool is_modulo = (!is_signed); 
# 912
static constexpr inline bool traps = true; 
# 913
static constexpr inline bool tinyness_before = false; 
# 914
static constexpr inline float_round_style round_style = round_toward_zero; 
# 915
}; 
# 920
template<> struct numeric_limits< short>  { 
# 922
static constexpr inline bool is_specialized = true; 
# 925
static constexpr short min() noexcept { return (-32767) - 1; } 
# 928
static constexpr short max() noexcept { return 32767; } 
# 932
static constexpr short lowest() noexcept { return min(); } 
# 935
static constexpr inline int digits = ((sizeof(short) * (8)) - (((short)(-1)) < 0)); 
# 936
static constexpr inline int digits10 = ((((sizeof(short) * (8)) - (((short)(-1)) < 0)) * (643L)) / (2136)); 
# 938
static constexpr inline int max_digits10 = 0; 
# 940
static constexpr inline bool is_signed = true; 
# 941
static constexpr inline bool is_integer = true; 
# 942
static constexpr inline bool is_exact = true; 
# 943
static constexpr inline int radix = 2; 
# 946
static constexpr short epsilon() noexcept { return 0; } 
# 949
static constexpr short round_error() noexcept { return 0; } 
# 951
static constexpr inline int min_exponent = 0; 
# 952
static constexpr inline int min_exponent10 = 0; 
# 953
static constexpr inline int max_exponent = 0; 
# 954
static constexpr inline int max_exponent10 = 0; 
# 956
static constexpr inline bool has_infinity = false; 
# 957
static constexpr inline bool has_quiet_NaN = false; 
# 958
static constexpr inline bool has_signaling_NaN = false; 
# 959
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 961
static constexpr inline bool has_denorm_loss = false; 
# 964
static constexpr short infinity() noexcept { return ((short)0); } 
# 967
static constexpr short quiet_NaN() noexcept { return ((short)0); } 
# 970
static constexpr short signaling_NaN() noexcept { return ((short)0); } 
# 973
static constexpr short denorm_min() noexcept { return ((short)0); } 
# 975
static constexpr inline bool is_iec559 = false; 
# 976
static constexpr inline bool is_bounded = true; 
# 977
static constexpr inline bool is_modulo = false; 
# 979
static constexpr inline bool traps = true; 
# 980
static constexpr inline bool tinyness_before = false; 
# 981
static constexpr inline float_round_style round_style = round_toward_zero; 
# 983
}; 
# 987
template<> struct numeric_limits< unsigned short>  { 
# 989
static constexpr inline bool is_specialized = true; 
# 992
static constexpr unsigned short min() noexcept { return 0; } 
# 995
static constexpr unsigned short max() noexcept { return ((32767) * 2U) + (1); } 
# 999
static constexpr unsigned short lowest() noexcept { return min(); } 
# 1002
static constexpr inline int digits = ((sizeof(unsigned short) * (8)) - (((unsigned short)(-1)) < 0)); 
# 1004
static constexpr inline int digits10 = ((((sizeof(unsigned short) * (8)) - (((unsigned short)(-1)) < 0)) * (643L)) / (2136)); 
# 1007
static constexpr inline int max_digits10 = 0; 
# 1009
static constexpr inline bool is_signed = false; 
# 1010
static constexpr inline bool is_integer = true; 
# 1011
static constexpr inline bool is_exact = true; 
# 1012
static constexpr inline int radix = 2; 
# 1015
static constexpr unsigned short epsilon() noexcept { return 0; } 
# 1018
static constexpr unsigned short round_error() noexcept { return 0; } 
# 1020
static constexpr inline int min_exponent = 0; 
# 1021
static constexpr inline int min_exponent10 = 0; 
# 1022
static constexpr inline int max_exponent = 0; 
# 1023
static constexpr inline int max_exponent10 = 0; 
# 1025
static constexpr inline bool has_infinity = false; 
# 1026
static constexpr inline bool has_quiet_NaN = false; 
# 1027
static constexpr inline bool has_signaling_NaN = false; 
# 1028
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1030
static constexpr inline bool has_denorm_loss = false; 
# 1033
static constexpr unsigned short infinity() noexcept 
# 1034
{ return static_cast< unsigned short>(0); } 
# 1037
static constexpr unsigned short quiet_NaN() noexcept 
# 1038
{ return static_cast< unsigned short>(0); } 
# 1041
static constexpr unsigned short signaling_NaN() noexcept 
# 1042
{ return static_cast< unsigned short>(0); } 
# 1045
static constexpr unsigned short denorm_min() noexcept 
# 1046
{ return static_cast< unsigned short>(0); } 
# 1048
static constexpr inline bool is_iec559 = false; 
# 1049
static constexpr inline bool is_bounded = true; 
# 1050
static constexpr inline bool is_modulo = true; 
# 1052
static constexpr inline bool traps = true; 
# 1053
static constexpr inline bool tinyness_before = false; 
# 1054
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1056
}; 
# 1060
template<> struct numeric_limits< int>  { 
# 1062
static constexpr inline bool is_specialized = true; 
# 1065
static constexpr int min() noexcept { return (-2147483647) - 1; } 
# 1068
static constexpr int max() noexcept { return 2147483647; } 
# 1072
static constexpr int lowest() noexcept { return min(); } 
# 1075
static constexpr inline int digits = ((sizeof(int) * (8)) - (((int)(-1)) < 0)); 
# 1076
static constexpr inline int digits10 = ((((sizeof(int) * (8)) - (((int)(-1)) < 0)) * (643L)) / (2136)); 
# 1078
static constexpr inline int max_digits10 = 0; 
# 1080
static constexpr inline bool is_signed = true; 
# 1081
static constexpr inline bool is_integer = true; 
# 1082
static constexpr inline bool is_exact = true; 
# 1083
static constexpr inline int radix = 2; 
# 1086
static constexpr int epsilon() noexcept { return 0; } 
# 1089
static constexpr int round_error() noexcept { return 0; } 
# 1091
static constexpr inline int min_exponent = 0; 
# 1092
static constexpr inline int min_exponent10 = 0; 
# 1093
static constexpr inline int max_exponent = 0; 
# 1094
static constexpr inline int max_exponent10 = 0; 
# 1096
static constexpr inline bool has_infinity = false; 
# 1097
static constexpr inline bool has_quiet_NaN = false; 
# 1098
static constexpr inline bool has_signaling_NaN = false; 
# 1099
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1101
static constexpr inline bool has_denorm_loss = false; 
# 1104
static constexpr int infinity() noexcept { return static_cast< int>(0); } 
# 1107
static constexpr int quiet_NaN() noexcept { return static_cast< int>(0); } 
# 1110
static constexpr int signaling_NaN() noexcept { return static_cast< int>(0); } 
# 1113
static constexpr int denorm_min() noexcept { return static_cast< int>(0); } 
# 1115
static constexpr inline bool is_iec559 = false; 
# 1116
static constexpr inline bool is_bounded = true; 
# 1117
static constexpr inline bool is_modulo = false; 
# 1119
static constexpr inline bool traps = true; 
# 1120
static constexpr inline bool tinyness_before = false; 
# 1121
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1123
}; 
# 1127
template<> struct numeric_limits< unsigned>  { 
# 1129
static constexpr inline bool is_specialized = true; 
# 1132
static constexpr unsigned min() noexcept { return 0; } 
# 1135
static constexpr unsigned max() noexcept { return ((2147483647) * 2U) + (1); } 
# 1139
static constexpr unsigned lowest() noexcept { return min(); } 
# 1142
static constexpr inline int digits = ((sizeof(unsigned) * (8)) - (((unsigned)(-1)) < (0))); 
# 1144
static constexpr inline int digits10 = ((((sizeof(unsigned) * (8)) - (((unsigned)(-1)) < (0))) * (643L)) / (2136)); 
# 1147
static constexpr inline int max_digits10 = 0; 
# 1149
static constexpr inline bool is_signed = false; 
# 1150
static constexpr inline bool is_integer = true; 
# 1151
static constexpr inline bool is_exact = true; 
# 1152
static constexpr inline int radix = 2; 
# 1155
static constexpr unsigned epsilon() noexcept { return 0; } 
# 1158
static constexpr unsigned round_error() noexcept { return 0; } 
# 1160
static constexpr inline int min_exponent = 0; 
# 1161
static constexpr inline int min_exponent10 = 0; 
# 1162
static constexpr inline int max_exponent = 0; 
# 1163
static constexpr inline int max_exponent10 = 0; 
# 1165
static constexpr inline bool has_infinity = false; 
# 1166
static constexpr inline bool has_quiet_NaN = false; 
# 1167
static constexpr inline bool has_signaling_NaN = false; 
# 1168
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1170
static constexpr inline bool has_denorm_loss = false; 
# 1173
static constexpr unsigned infinity() noexcept { return static_cast< unsigned>(0); } 
# 1176
static constexpr unsigned quiet_NaN() noexcept 
# 1177
{ return static_cast< unsigned>(0); } 
# 1180
static constexpr unsigned signaling_NaN() noexcept 
# 1181
{ return static_cast< unsigned>(0); } 
# 1184
static constexpr unsigned denorm_min() noexcept 
# 1185
{ return static_cast< unsigned>(0); } 
# 1187
static constexpr inline bool is_iec559 = false; 
# 1188
static constexpr inline bool is_bounded = true; 
# 1189
static constexpr inline bool is_modulo = true; 
# 1191
static constexpr inline bool traps = true; 
# 1192
static constexpr inline bool tinyness_before = false; 
# 1193
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1195
}; 
# 1199
template<> struct numeric_limits< long>  { 
# 1201
static constexpr inline bool is_specialized = true; 
# 1204
static constexpr long min() noexcept { return (-9223372036854775807L) - (1); } 
# 1207
static constexpr long max() noexcept { return 9223372036854775807L; } 
# 1211
static constexpr long lowest() noexcept { return min(); } 
# 1214
static constexpr inline int digits = ((sizeof(long) * (8)) - (((long)(-1)) < (0))); 
# 1215
static constexpr inline int digits10 = ((((sizeof(long) * (8)) - (((long)(-1)) < (0))) * (643L)) / (2136)); 
# 1217
static constexpr inline int max_digits10 = 0; 
# 1219
static constexpr inline bool is_signed = true; 
# 1220
static constexpr inline bool is_integer = true; 
# 1221
static constexpr inline bool is_exact = true; 
# 1222
static constexpr inline int radix = 2; 
# 1225
static constexpr long epsilon() noexcept { return 0; } 
# 1228
static constexpr long round_error() noexcept { return 0; } 
# 1230
static constexpr inline int min_exponent = 0; 
# 1231
static constexpr inline int min_exponent10 = 0; 
# 1232
static constexpr inline int max_exponent = 0; 
# 1233
static constexpr inline int max_exponent10 = 0; 
# 1235
static constexpr inline bool has_infinity = false; 
# 1236
static constexpr inline bool has_quiet_NaN = false; 
# 1237
static constexpr inline bool has_signaling_NaN = false; 
# 1238
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1240
static constexpr inline bool has_denorm_loss = false; 
# 1243
static constexpr long infinity() noexcept { return static_cast< long>(0); } 
# 1246
static constexpr long quiet_NaN() noexcept { return static_cast< long>(0); } 
# 1249
static constexpr long signaling_NaN() noexcept { return static_cast< long>(0); } 
# 1252
static constexpr long denorm_min() noexcept { return static_cast< long>(0); } 
# 1254
static constexpr inline bool is_iec559 = false; 
# 1255
static constexpr inline bool is_bounded = true; 
# 1256
static constexpr inline bool is_modulo = false; 
# 1258
static constexpr inline bool traps = true; 
# 1259
static constexpr inline bool tinyness_before = false; 
# 1260
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1262
}; 
# 1266
template<> struct numeric_limits< unsigned long>  { 
# 1268
static constexpr inline bool is_specialized = true; 
# 1271
static constexpr unsigned long min() noexcept { return 0; } 
# 1274
static constexpr unsigned long max() noexcept { return ((9223372036854775807L) * 2UL) + (1); } 
# 1278
static constexpr unsigned long lowest() noexcept { return min(); } 
# 1281
static constexpr inline int digits = ((sizeof(unsigned long) * (8)) - (((unsigned long)(-1)) < (0))); 
# 1283
static constexpr inline int digits10 = ((((sizeof(unsigned long) * (8)) - (((unsigned long)(-1)) < (0))) * (643L)) / (2136)); 
# 1286
static constexpr inline int max_digits10 = 0; 
# 1288
static constexpr inline bool is_signed = false; 
# 1289
static constexpr inline bool is_integer = true; 
# 1290
static constexpr inline bool is_exact = true; 
# 1291
static constexpr inline int radix = 2; 
# 1294
static constexpr unsigned long epsilon() noexcept { return 0; } 
# 1297
static constexpr unsigned long round_error() noexcept { return 0; } 
# 1299
static constexpr inline int min_exponent = 0; 
# 1300
static constexpr inline int min_exponent10 = 0; 
# 1301
static constexpr inline int max_exponent = 0; 
# 1302
static constexpr inline int max_exponent10 = 0; 
# 1304
static constexpr inline bool has_infinity = false; 
# 1305
static constexpr inline bool has_quiet_NaN = false; 
# 1306
static constexpr inline bool has_signaling_NaN = false; 
# 1307
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1309
static constexpr inline bool has_denorm_loss = false; 
# 1312
static constexpr unsigned long infinity() noexcept 
# 1313
{ return static_cast< unsigned long>(0); } 
# 1316
static constexpr unsigned long quiet_NaN() noexcept 
# 1317
{ return static_cast< unsigned long>(0); } 
# 1320
static constexpr unsigned long signaling_NaN() noexcept 
# 1321
{ return static_cast< unsigned long>(0); } 
# 1324
static constexpr unsigned long denorm_min() noexcept 
# 1325
{ return static_cast< unsigned long>(0); } 
# 1327
static constexpr inline bool is_iec559 = false; 
# 1328
static constexpr inline bool is_bounded = true; 
# 1329
static constexpr inline bool is_modulo = true; 
# 1331
static constexpr inline bool traps = true; 
# 1332
static constexpr inline bool tinyness_before = false; 
# 1333
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1335
}; 
# 1339
template<> struct numeric_limits< long long>  { 
# 1341
static constexpr inline bool is_specialized = true; 
# 1344
static constexpr long long min() noexcept { return (-9223372036854775807LL) - (1); } 
# 1347
static constexpr long long max() noexcept { return 9223372036854775807LL; } 
# 1351
static constexpr long long lowest() noexcept { return min(); } 
# 1354
static constexpr inline int digits = ((sizeof(long long) * (8)) - (((long long)(-1)) < (0))); 
# 1356
static constexpr inline int digits10 = ((((sizeof(long long) * (8)) - (((long long)(-1)) < (0))) * (643L)) / (2136)); 
# 1359
static constexpr inline int max_digits10 = 0; 
# 1361
static constexpr inline bool is_signed = true; 
# 1362
static constexpr inline bool is_integer = true; 
# 1363
static constexpr inline bool is_exact = true; 
# 1364
static constexpr inline int radix = 2; 
# 1367
static constexpr long long epsilon() noexcept { return 0; } 
# 1370
static constexpr long long round_error() noexcept { return 0; } 
# 1372
static constexpr inline int min_exponent = 0; 
# 1373
static constexpr inline int min_exponent10 = 0; 
# 1374
static constexpr inline int max_exponent = 0; 
# 1375
static constexpr inline int max_exponent10 = 0; 
# 1377
static constexpr inline bool has_infinity = false; 
# 1378
static constexpr inline bool has_quiet_NaN = false; 
# 1379
static constexpr inline bool has_signaling_NaN = false; 
# 1380
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1382
static constexpr inline bool has_denorm_loss = false; 
# 1385
static constexpr long long infinity() noexcept { return static_cast< long long>(0); } 
# 1388
static constexpr long long quiet_NaN() noexcept { return static_cast< long long>(0); } 
# 1391
static constexpr long long signaling_NaN() noexcept 
# 1392
{ return static_cast< long long>(0); } 
# 1395
static constexpr long long denorm_min() noexcept { return static_cast< long long>(0); } 
# 1397
static constexpr inline bool is_iec559 = false; 
# 1398
static constexpr inline bool is_bounded = true; 
# 1399
static constexpr inline bool is_modulo = false; 
# 1401
static constexpr inline bool traps = true; 
# 1402
static constexpr inline bool tinyness_before = false; 
# 1403
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1405
}; 
# 1409
template<> struct numeric_limits< unsigned long long>  { 
# 1411
static constexpr inline bool is_specialized = true; 
# 1414
static constexpr unsigned long long min() noexcept { return 0; } 
# 1417
static constexpr unsigned long long max() noexcept { return ((9223372036854775807LL) * 2ULL) + (1); } 
# 1421
static constexpr unsigned long long lowest() noexcept { return min(); } 
# 1424
static constexpr inline int digits = ((sizeof(unsigned long long) * (8)) - (((unsigned long long)(-1)) < (0))); 
# 1426
static constexpr inline int digits10 = ((((sizeof(unsigned long long) * (8)) - (((unsigned long long)(-1)) < (0))) * (643L)) / (2136)); 
# 1429
static constexpr inline int max_digits10 = 0; 
# 1431
static constexpr inline bool is_signed = false; 
# 1432
static constexpr inline bool is_integer = true; 
# 1433
static constexpr inline bool is_exact = true; 
# 1434
static constexpr inline int radix = 2; 
# 1437
static constexpr unsigned long long epsilon() noexcept { return 0; } 
# 1440
static constexpr unsigned long long round_error() noexcept { return 0; } 
# 1442
static constexpr inline int min_exponent = 0; 
# 1443
static constexpr inline int min_exponent10 = 0; 
# 1444
static constexpr inline int max_exponent = 0; 
# 1445
static constexpr inline int max_exponent10 = 0; 
# 1447
static constexpr inline bool has_infinity = false; 
# 1448
static constexpr inline bool has_quiet_NaN = false; 
# 1449
static constexpr inline bool has_signaling_NaN = false; 
# 1450
static constexpr inline float_denorm_style has_denorm = denorm_absent; 
# 1452
static constexpr inline bool has_denorm_loss = false; 
# 1455
static constexpr unsigned long long infinity() noexcept 
# 1456
{ return static_cast< unsigned long long>(0); } 
# 1459
static constexpr unsigned long long quiet_NaN() noexcept 
# 1460
{ return static_cast< unsigned long long>(0); } 
# 1463
static constexpr unsigned long long signaling_NaN() noexcept 
# 1464
{ return static_cast< unsigned long long>(0); } 
# 1467
static constexpr unsigned long long denorm_min() noexcept 
# 1468
{ return static_cast< unsigned long long>(0); } 
# 1470
static constexpr inline bool is_iec559 = false; 
# 1471
static constexpr inline bool is_bounded = true; 
# 1472
static constexpr inline bool is_modulo = true; 
# 1474
static constexpr inline bool traps = true; 
# 1475
static constexpr inline bool tinyness_before = false; 
# 1476
static constexpr inline float_round_style round_style = round_toward_zero; 
# 1478
}; 
# 1635 "/usr/include/c++/11/limits" 3
template<> struct numeric_limits< __int128>  { static constexpr inline bool is_specialized = true; static constexpr __int128 min() noexcept { return ((((__int128)(-1)) < (0)) ? (-((((__int128)(-1)) < (0)) ? (((((__int128)1) << ((128 - (((__int128)(-1)) < (0))) - 1)) - (1)) << 1) + (1) : (~((__int128)0)))) - (1) : ((__int128)0)); } static constexpr __int128 max() noexcept { return ((((__int128)(-1)) < (0)) ? (((((__int128)1) << ((128 - (((__int128)(-1)) < (0))) - 1)) - (1)) << 1) + (1) : (~((__int128)0))); } static constexpr inline int digits = (128 - 1); static constexpr inline int digits10 = (((128 - 1) * 643L) / (2136)); static constexpr inline bool is_signed = true; static constexpr inline bool is_integer = true; static constexpr inline bool is_exact = true; static constexpr inline int radix = 2; static constexpr __int128 epsilon() noexcept { return 0; } static constexpr __int128 round_error() noexcept { return 0; } static constexpr __int128 lowest() noexcept { return min(); } static constexpr inline int max_digits10 = 0; static constexpr inline int min_exponent = 0; static constexpr inline int min_exponent10 = 0; static constexpr inline int max_exponent = 0; static constexpr inline int max_exponent10 = 0; static constexpr inline bool has_infinity = false; static constexpr inline bool has_quiet_NaN = false; static constexpr inline bool has_signaling_NaN = false; static constexpr inline float_denorm_style has_denorm = denorm_absent; static constexpr inline bool has_denorm_loss = false; static constexpr __int128 infinity() noexcept { return static_cast< __int128>(0); } static constexpr __int128 quiet_NaN() noexcept { return static_cast< __int128>(0); } static constexpr __int128 signaling_NaN() noexcept { return static_cast< __int128>(0); } static constexpr __int128 denorm_min() noexcept { return static_cast< __int128>(0); } static constexpr inline bool is_iec559 = false; static constexpr inline bool is_bounded = true; static constexpr inline bool is_modulo = false; static constexpr inline bool traps = true; static constexpr inline bool tinyness_before = false; static constexpr inline float_round_style round_style = round_toward_zero; }; template<> struct numeric_limits< unsigned __int128>  { static constexpr inline bool is_specialized = true; static constexpr unsigned __int128 min() noexcept { return 0; } static constexpr unsigned __int128 max() noexcept { return ((((unsigned __int128)(-1)) < (0)) ? (((((unsigned __int128)1) << ((128 - (((unsigned __int128)(-1)) < (0))) - 1)) - (1)) << 1) + (1) : (~((unsigned __int128)0))); } static constexpr unsigned __int128 lowest() noexcept { return min(); } static constexpr inline int max_digits10 = 0; static constexpr inline int digits = 128; static constexpr inline int digits10 = (((128) * 643L) / (2136)); static constexpr inline bool is_signed = false; static constexpr inline bool is_integer = true; static constexpr inline bool is_exact = true; static constexpr inline int radix = 2; static constexpr unsigned __int128 epsilon() noexcept { return 0; } static constexpr unsigned __int128 round_error() noexcept { return 0; } static constexpr inline int min_exponent = 0; static constexpr inline int min_exponent10 = 0; static constexpr inline int max_exponent = 0; static constexpr inline int max_exponent10 = 0; static constexpr inline bool has_infinity = false; static constexpr inline bool has_quiet_NaN = false; static constexpr inline bool has_signaling_NaN = false; static constexpr inline float_denorm_style has_denorm = denorm_absent; static constexpr inline bool has_denorm_loss = false; static constexpr unsigned __int128 infinity() noexcept { return static_cast< unsigned __int128>(0); } static constexpr unsigned __int128 quiet_NaN() noexcept { return static_cast< unsigned __int128>(0); } static constexpr unsigned __int128 signaling_NaN() noexcept { return static_cast< unsigned __int128>(0); } static constexpr unsigned __int128 denorm_min() noexcept { return static_cast< unsigned __int128>(0); } static constexpr inline bool is_iec559 = false; static constexpr inline bool is_bounded = true; static constexpr inline bool is_modulo = true; static constexpr inline bool traps = true; static constexpr inline bool tinyness_before = false; static constexpr inline float_round_style round_style = round_toward_zero; }; 
# 1668 "/usr/include/c++/11/limits" 3
template<> struct numeric_limits< float>  { 
# 1670
static constexpr inline bool is_specialized = true; 
# 1673
static constexpr float min() noexcept { return (1.1754944E-38F); } 
# 1676
static constexpr float max() noexcept { return (3.4028235E38F); } 
# 1680
static constexpr float lowest() noexcept { return -(3.4028235E38F); } 
# 1683
static constexpr inline int digits = 24; 
# 1684
static constexpr inline int digits10 = 6; 
# 1686
static constexpr inline int max_digits10 = ((2) + (((24) * 643L) / (2136))); 
# 1689
static constexpr inline bool is_signed = true; 
# 1690
static constexpr inline bool is_integer = false; 
# 1691
static constexpr inline bool is_exact = false; 
# 1692
static constexpr inline int radix = 2; 
# 1695
static constexpr float epsilon() noexcept { return (1.1920929E-7F); } 
# 1698
static constexpr float round_error() noexcept { return (0.5F); } 
# 1700
static constexpr inline int min_exponent = (-125); 
# 1701
static constexpr inline int min_exponent10 = (-37); 
# 1702
static constexpr inline int max_exponent = 128; 
# 1703
static constexpr inline int max_exponent10 = 38; 
# 1705
static constexpr inline bool has_infinity = (1); 
# 1706
static constexpr inline bool has_quiet_NaN = (1); 
# 1707
static constexpr inline bool has_signaling_NaN = has_quiet_NaN; 
# 1708
static constexpr inline float_denorm_style has_denorm = (((bool)1) ? denorm_present : denorm_absent); 
# 1710
static constexpr inline bool has_denorm_loss = false; 
# 1714
static constexpr float infinity() noexcept { return __builtin_huge_valf(); } 
# 1717
static constexpr float quiet_NaN() noexcept { return __builtin_nanf(""); } 
# 1720
static constexpr float signaling_NaN() noexcept { return __builtin_nansf(""); } 
# 1723
static constexpr float denorm_min() noexcept { return (1.4E-45F); } 
# 1725
static constexpr inline bool is_iec559 = (has_infinity && has_quiet_NaN && (has_denorm == (denorm_present))); 
# 1727
static constexpr inline bool is_bounded = true; 
# 1728
static constexpr inline bool is_modulo = false; 
# 1730
static constexpr inline bool traps = false; 
# 1731
static constexpr inline bool tinyness_before = false; 
# 1733
static constexpr inline float_round_style round_style = round_to_nearest; 
# 1735
}; 
# 1743
template<> struct numeric_limits< double>  { 
# 1745
static constexpr inline bool is_specialized = true; 
# 1748
static constexpr double min() noexcept { return (double)(2.2250738585072013831E-308L); } 
# 1751
static constexpr double max() noexcept { return (double)(1.7976931348623157081E308L); } 
# 1755
static constexpr double lowest() noexcept { return -((double)(1.7976931348623157081E308L)); } 
# 1758
static constexpr inline int digits = 53; 
# 1759
static constexpr inline int digits10 = 15; 
# 1761
static constexpr inline int max_digits10 = ((2) + (((53) * 643L) / (2136))); 
# 1764
static constexpr inline bool is_signed = true; 
# 1765
static constexpr inline bool is_integer = false; 
# 1766
static constexpr inline bool is_exact = false; 
# 1767
static constexpr inline int radix = 2; 
# 1770
static constexpr double epsilon() noexcept { return (double)(2.2204460492503130808E-16L); } 
# 1773
static constexpr double round_error() noexcept { return (0.5); } 
# 1775
static constexpr inline int min_exponent = (-1021); 
# 1776
static constexpr inline int min_exponent10 = (-307); 
# 1777
static constexpr inline int max_exponent = 1024; 
# 1778
static constexpr inline int max_exponent10 = 308; 
# 1780
static constexpr inline bool has_infinity = (1); 
# 1781
static constexpr inline bool has_quiet_NaN = (1); 
# 1782
static constexpr inline bool has_signaling_NaN = has_quiet_NaN; 
# 1783
static constexpr inline float_denorm_style has_denorm = (((bool)1) ? denorm_present : denorm_absent); 
# 1785
static constexpr inline bool has_denorm_loss = false; 
# 1789
static constexpr double infinity() noexcept { return __builtin_huge_val(); } 
# 1792
static constexpr double quiet_NaN() noexcept { return __builtin_nan(""); } 
# 1795
static constexpr double signaling_NaN() noexcept { return __builtin_nans(""); } 
# 1798
static constexpr double denorm_min() noexcept { return (double)(4.940656458412465442E-324L); } 
# 1800
static constexpr inline bool is_iec559 = (has_infinity && has_quiet_NaN && (has_denorm == (denorm_present))); 
# 1802
static constexpr inline bool is_bounded = true; 
# 1803
static constexpr inline bool is_modulo = false; 
# 1805
static constexpr inline bool traps = false; 
# 1806
static constexpr inline bool tinyness_before = false; 
# 1808
static constexpr inline float_round_style round_style = round_to_nearest; 
# 1810
}; 
# 1818
template<> struct numeric_limits< long double>  { 
# 1820
static constexpr inline bool is_specialized = true; 
# 1823
static constexpr long double min() noexcept { return (3.3621031431120935063E-4932L); } 
# 1826
static constexpr long double max() noexcept { return (1.189731495357231765E4932L); } 
# 1830
static constexpr long double lowest() noexcept { return -(1.189731495357231765E4932L); } 
# 1833
static constexpr inline int digits = 64; 
# 1834
static constexpr inline int digits10 = 18; 
# 1836
static constexpr inline int max_digits10 = ((2) + (((64) * 643L) / (2136))); 
# 1839
static constexpr inline bool is_signed = true; 
# 1840
static constexpr inline bool is_integer = false; 
# 1841
static constexpr inline bool is_exact = false; 
# 1842
static constexpr inline int radix = 2; 
# 1845
static constexpr long double epsilon() noexcept { return (1.084202172485504434E-19L); } 
# 1848
static constexpr long double round_error() noexcept { return (0.5L); } 
# 1850
static constexpr inline int min_exponent = (-16381); 
# 1851
static constexpr inline int min_exponent10 = (-4931); 
# 1852
static constexpr inline int max_exponent = 16384; 
# 1853
static constexpr inline int max_exponent10 = 4932; 
# 1855
static constexpr inline bool has_infinity = (1); 
# 1856
static constexpr inline bool has_quiet_NaN = (1); 
# 1857
static constexpr inline bool has_signaling_NaN = has_quiet_NaN; 
# 1858
static constexpr inline float_denorm_style has_denorm = (((bool)1) ? denorm_present : denorm_absent); 
# 1860
static constexpr inline bool has_denorm_loss = false; 
# 1864
static constexpr long double infinity() noexcept { return __builtin_huge_vall(); } 
# 1867
static constexpr long double quiet_NaN() noexcept { return __builtin_nanl(""); } 
# 1870
static constexpr long double signaling_NaN() noexcept { return __builtin_nansl(""); } 
# 1873
static constexpr long double denorm_min() noexcept { return (3.6E-4951L); } 
# 1875
static constexpr inline bool is_iec559 = (has_infinity && has_quiet_NaN && (has_denorm == (denorm_present))); 
# 1877
static constexpr inline bool is_bounded = true; 
# 1878
static constexpr inline bool is_modulo = false; 
# 1880
static constexpr inline bool traps = false; 
# 1881
static constexpr inline bool tinyness_before = false; 
# 1883
static constexpr inline float_round_style round_style = round_to_nearest; 
# 1885
}; 
# 1892
}
# 39 "/usr/include/c++/11/tr1/special_function_util.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 50 "/usr/include/c++/11/tr1/special_function_util.h" 3
namespace __detail { 
# 55
template< class _Tp> 
# 56
struct __floating_point_constant { 
# 58
static const _Tp __value; 
# 59
}; 
# 63
template< class _Tp> 
# 64
struct __numeric_constants { 
# 67
static _Tp __pi() throw() 
# 68
{ return static_cast< _Tp>((3.1415926535897932385L)); } 
# 70
static _Tp __pi_2() throw() 
# 71
{ return static_cast< _Tp>((1.5707963267948966193L)); } 
# 73
static _Tp __pi_3() throw() 
# 74
{ return static_cast< _Tp>((1.0471975511965977461L)); } 
# 76
static _Tp __pi_4() throw() 
# 77
{ return static_cast< _Tp>((0.78539816339744830963L)); } 
# 79
static _Tp __1_pi() throw() 
# 80
{ return static_cast< _Tp>((0.31830988618379067154L)); } 
# 82
static _Tp __2_sqrtpi() throw() 
# 83
{ return static_cast< _Tp>((1.1283791670955125738L)); } 
# 85
static _Tp __sqrt2() throw() 
# 86
{ return static_cast< _Tp>((1.4142135623730950488L)); } 
# 88
static _Tp __sqrt3() throw() 
# 89
{ return static_cast< _Tp>((1.7320508075688772936L)); } 
# 91
static _Tp __sqrtpio2() throw() 
# 92
{ return static_cast< _Tp>((1.2533141373155002512L)); } 
# 94
static _Tp __sqrt1_2() throw() 
# 95
{ return static_cast< _Tp>((0.7071067811865475244L)); } 
# 97
static _Tp __lnpi() throw() 
# 98
{ return static_cast< _Tp>((1.1447298858494001742L)); } 
# 100
static _Tp __gamma_e() throw() 
# 101
{ return static_cast< _Tp>((0.5772156649015328606L)); } 
# 103
static _Tp __euler() throw() 
# 104
{ return static_cast< _Tp>((2.7182818284590452354L)); } 
# 105
}; 
# 114 "/usr/include/c++/11/tr1/special_function_util.h" 3
template< class _Tp> inline bool 
# 115
__isnan(_Tp __x) 
# 116
{ return std::isnan(__x); } 
# 133 "/usr/include/c++/11/tr1/special_function_util.h" 3
}
# 139
}
# 51 "/usr/include/c++/11/tr1/gamma.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/usr/include/c++/11/tr1/gamma.tcc" 3
namespace __detail { 
# 76 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 78
__bernoulli_series(unsigned __n) 
# 79
{ 
# 81
static const _Tp __num[28] = {((_Tp)1UL), ((-((_Tp)1UL)) / ((_Tp)2UL)), (((_Tp)1UL) / ((_Tp)6UL)), ((_Tp)0UL), ((-((_Tp)1UL)) / ((_Tp)30UL)), ((_Tp)0UL), (((_Tp)1UL) / ((_Tp)42UL)), ((_Tp)0UL), ((-((_Tp)1UL)) / ((_Tp)30UL)), ((_Tp)0UL), (((_Tp)5UL) / ((_Tp)66UL)), ((_Tp)0UL), ((-((_Tp)691UL)) / ((_Tp)2730UL)), ((_Tp)0UL), (((_Tp)7UL) / ((_Tp)6UL)), ((_Tp)0UL), ((-((_Tp)3617UL)) / ((_Tp)510UL)), ((_Tp)0UL), (((_Tp)43867UL) / ((_Tp)798UL)), ((_Tp)0UL), ((-((_Tp)174611)) / ((_Tp)330UL)), ((_Tp)0UL), (((_Tp)854513UL) / ((_Tp)138UL)), ((_Tp)0UL), ((-((_Tp)236364091UL)) / ((_Tp)2730UL)), ((_Tp)0UL), (((_Tp)8553103UL) / ((_Tp)6UL)), ((_Tp)0UL)}; 
# 98
if (__n == (0)) { 
# 99
return (_Tp)1; }  
# 101
if (__n == (1)) { 
# 102
return (-((_Tp)1)) / ((_Tp)2); }  
# 105
if ((__n % (2)) == (1)) { 
# 106
return (_Tp)0; }  
# 109
if (__n < (28)) { 
# 110
return __num[__n]; }  
# 113
_Tp __fact = ((_Tp)1); 
# 114
if (((__n / (2)) % (2)) == (0)) { 
# 115
__fact *= ((_Tp)(-1)); }  
# 116
for (unsigned __k = (1); __k <= __n; ++__k) { 
# 117
__fact *= (__k / (((_Tp)2) * __numeric_constants< _Tp> ::__pi())); }  
# 118
__fact *= ((_Tp)2); 
# 120
_Tp __sum = ((_Tp)0); 
# 121
for (unsigned __i = (1); __i < (1000); ++__i) 
# 122
{ 
# 123
_Tp __term = std::pow((_Tp)__i, -((_Tp)__n)); 
# 124
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 125
break; }  
# 126
__sum += __term; 
# 127
}  
# 129
return __fact * __sum; 
# 130
} 
# 139 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> inline _Tp 
# 141
__bernoulli(int __n) 
# 142
{ return __bernoulli_series< _Tp> (__n); } 
# 153 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 155
__log_gamma_bernoulli(_Tp __x) 
# 156
{ 
# 157
_Tp __lg = (((__x - ((_Tp)(0.5L))) * std::log(__x)) - __x) + (((_Tp)(0.5L)) * std::log(((_Tp)2) * __numeric_constants< _Tp> ::__pi())); 
# 161
const _Tp __xx = __x * __x; 
# 162
_Tp __help = ((_Tp)1) / __x; 
# 163
for (unsigned __i = (1); __i < (20); ++__i) 
# 164
{ 
# 165
const _Tp __2i = (_Tp)((2) * __i); 
# 166
__help /= ((__2i * (__2i - ((_Tp)1))) * __xx); 
# 167
__lg += (__bernoulli< _Tp> ((2) * __i) * __help); 
# 168
}  
# 170
return __lg; 
# 171
} 
# 181 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 183
__log_gamma_lanczos(_Tp __x) 
# 184
{ 
# 185
const _Tp __xm1 = __x - ((_Tp)1); 
# 187
static const _Tp __lanczos_cheb_7[9] = {((_Tp)(0.99999999999980993226L)), ((_Tp)(676.52036812188509857L)), ((_Tp)(-(1259.1392167224028704L))), ((_Tp)(771.32342877765307887L)), ((_Tp)(-(176.61502916214059906L))), ((_Tp)(12.507343278686904814L)), ((_Tp)(-(0.1385710952657201169L))), ((_Tp)(9.9843695780195708595E-6L)), ((_Tp)(1.5056327351493115584E-7L))}; 
# 199
static const _Tp __LOGROOT2PI = ((_Tp)(0.9189385332046727418L)); 
# 202
_Tp __sum = (__lanczos_cheb_7[0]); 
# 203
for (unsigned __k = (1); __k < (9); ++__k) { 
# 204
__sum += ((__lanczos_cheb_7[__k]) / (__xm1 + __k)); }  
# 206
const _Tp __term1 = (__xm1 + ((_Tp)(0.5L))) * std::log((__xm1 + ((_Tp)(7.5L))) / __numeric_constants< _Tp> ::__euler()); 
# 209
const _Tp __term2 = __LOGROOT2PI + std::log(__sum); 
# 210
const _Tp __result = __term1 + (__term2 - ((_Tp)7)); 
# 212
return __result; 
# 213
} 
# 225 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 227
__log_gamma(_Tp __x) 
# 228
{ 
# 229
if (__x > ((_Tp)(0.5L))) { 
# 230
return __log_gamma_lanczos(__x); } else 
# 232
{ 
# 233
const _Tp __sin_fact = std::abs(std::sin(__numeric_constants< _Tp> ::__pi() * __x)); 
# 235
if (__sin_fact == ((_Tp)0)) { 
# 236
std::__throw_domain_error("Argument is nonpositive integer in __log_gamma"); }  
# 238
return (__numeric_constants< _Tp> ::__lnpi() - std::log(__sin_fact)) - __log_gamma_lanczos(((_Tp)1) - __x); 
# 241
}  
# 242
} 
# 252 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 254
__log_gamma_sign(_Tp __x) 
# 255
{ 
# 256
if (__x > ((_Tp)0)) { 
# 257
return (_Tp)1; } else 
# 259
{ 
# 260
const _Tp __sin_fact = std::sin(__numeric_constants< _Tp> ::__pi() * __x); 
# 262
if (__sin_fact > ((_Tp)0)) { 
# 263
return 1; } else { 
# 264
if (__sin_fact < ((_Tp)0)) { 
# 265
return -((_Tp)1); } else { 
# 267
return (_Tp)0; }  }  
# 268
}  
# 269
} 
# 283 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 285
__log_bincoef(unsigned __n, unsigned __k) 
# 286
{ 
# 288
static const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 292
_Tp __coeff = (std::lgamma((_Tp)((1) + __n)) - std::lgamma((_Tp)((1) + __k))) - std::lgamma((_Tp)(((1) + __n) - __k)); 
# 300
} 
# 314 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 316
__bincoef(unsigned __n, unsigned __k) 
# 317
{ 
# 319
static const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 323
const _Tp __log_coeff = __log_bincoef< _Tp> (__n, __k); 
# 324
if (__log_coeff > __max_bincoeff) { 
# 325
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 327
return std::exp(__log_coeff); }  
# 328
} 
# 337 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> inline _Tp 
# 339
__gamma(_Tp __x) 
# 340
{ return std::exp(__log_gamma(__x)); } 
# 356 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 358
__psi_series(_Tp __x) 
# 359
{ 
# 360
_Tp __sum = (-__numeric_constants< _Tp> ::__gamma_e()) - (((_Tp)1) / __x); 
# 361
const unsigned __max_iter = (100000); 
# 362
for (unsigned __k = (1); __k < __max_iter; ++__k) 
# 363
{ 
# 364
const _Tp __term = __x / (__k * (__k + __x)); 
# 365
__sum += __term; 
# 366
if (std::abs(__term / __sum) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 367
break; }  
# 368
}  
# 369
return __sum; 
# 370
} 
# 386 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 388
__psi_asymp(_Tp __x) 
# 389
{ 
# 390
_Tp __sum = std::log(__x) - (((_Tp)(0.5L)) / __x); 
# 391
const _Tp __xx = __x * __x; 
# 392
_Tp __xp = __xx; 
# 393
const unsigned __max_iter = (100); 
# 394
for (unsigned __k = (1); __k < __max_iter; ++__k) 
# 395
{ 
# 396
const _Tp __term = __bernoulli< _Tp> ((2) * __k) / (((2) * __k) * __xp); 
# 397
__sum -= __term; 
# 398
if (std::abs(__term / __sum) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 399
break; }  
# 400
__xp *= __xx; 
# 401
}  
# 402
return __sum; 
# 403
} 
# 417 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 419
__psi(_Tp __x) 
# 420
{ 
# 421
const int __n = static_cast< int>(__x + (0.5L)); 
# 422
const _Tp __eps = ((_Tp)4) * std::template numeric_limits< _Tp> ::epsilon(); 
# 423
if ((__n <= 0) && (std::abs(__x - ((_Tp)__n)) < __eps)) { 
# 424
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 425
if (__x < ((_Tp)0)) 
# 426
{ 
# 427
const _Tp __pi = __numeric_constants< _Tp> ::__pi(); 
# 428
return __psi(((_Tp)1) - __x) - ((__pi * std::cos(__pi * __x)) / std::sin(__pi * __x)); 
# 430
} else { 
# 431
if (__x > ((_Tp)100)) { 
# 432
return __psi_asymp(__x); } else { 
# 434
return __psi_series(__x); }  }  }  
# 435
} 
# 446 "/usr/include/c++/11/tr1/gamma.tcc" 3
template< class _Tp> _Tp 
# 448
__psi(unsigned __n, _Tp __x) 
# 449
{ 
# 450
if (__x <= ((_Tp)0)) { 
# 451
std::__throw_domain_error("Argument out of range in __psi"); } else { 
# 453
if (__n == (0)) { 
# 454
return __psi(__x); } else 
# 456
{ 
# 457
const _Tp __hzeta = __hurwitz_zeta((_Tp)(__n + (1)), __x); 
# 459
const _Tp __ln_nfact = std::lgamma((_Tp)(__n + (1))); 
# 463
_Tp __result = std::exp(__ln_nfact) * __hzeta; 
# 464
if ((__n % (2)) == (1)) { 
# 465
__result = (-__result); }  
# 466
return __result; 
# 467
}  }  
# 468
} 
# 469
}
# 476
}
# 55 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 71 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
namespace __detail { 
# 98 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 100
__gamma_temme(_Tp __mu, _Tp &
# 101
__gam1, _Tp &__gam2, _Tp &__gampl, _Tp &__gammi) 
# 102
{ 
# 104
__gampl = (((_Tp)1) / std::tgamma(((_Tp)1) + __mu)); 
# 105
__gammi = (((_Tp)1) / std::tgamma(((_Tp)1) - __mu)); 
# 111
if (std::abs(__mu) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 112
__gam1 = (-((_Tp)__numeric_constants< _Tp> ::__gamma_e())); } else { 
# 114
__gam1 = ((__gammi - __gampl) / (((_Tp)2) * __mu)); }  
# 116
__gam2 = ((__gammi + __gampl) / ((_Tp)2)); 
# 119
} 
# 136 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 138
__bessel_jn(_Tp __nu, _Tp __x, _Tp &
# 139
__Jnu, _Tp &__Nnu, _Tp &__Jpnu, _Tp &__Npnu) 
# 140
{ 
# 141
if (__x == ((_Tp)0)) 
# 142
{ 
# 143
if (__nu == ((_Tp)0)) 
# 144
{ 
# 145
__Jnu = ((_Tp)1); 
# 146
__Jpnu = ((_Tp)0); 
# 147
} else { 
# 148
if (__nu == ((_Tp)1)) 
# 149
{ 
# 150
__Jnu = ((_Tp)0); 
# 151
__Jpnu = ((_Tp)(0.5L)); 
# 152
} else 
# 154
{ 
# 155
__Jnu = ((_Tp)0); 
# 156
__Jpnu = ((_Tp)0); 
# 157
}  }  
# 158
__Nnu = (-std::template numeric_limits< _Tp> ::infinity()); 
# 159
__Npnu = std::template numeric_limits< _Tp> ::infinity(); 
# 160
return; 
# 161
}  
# 163
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 168
const _Tp __fp_min = std::sqrt(std::template numeric_limits< _Tp> ::min()); 
# 169
const int __max_iter = 15000; 
# 170
const _Tp __x_min = ((_Tp)2); 
# 172
const int __nl = (__x < __x_min) ? static_cast< int>(__nu + ((_Tp)(0.5L))) : std::max(0, static_cast< int>((__nu - __x) + ((_Tp)(1.5L)))); 
# 176
const _Tp __mu = __nu - __nl; 
# 177
const _Tp __mu2 = __mu * __mu; 
# 178
const _Tp __xi = ((_Tp)1) / __x; 
# 179
const _Tp __xi2 = ((_Tp)2) * __xi; 
# 180
_Tp __w = __xi2 / __numeric_constants< _Tp> ::__pi(); 
# 181
int __isign = 1; 
# 182
_Tp __h = __nu * __xi; 
# 183
if (__h < __fp_min) { 
# 184
__h = __fp_min; }  
# 185
_Tp __b = __xi2 * __nu; 
# 186
_Tp __d = ((_Tp)0); 
# 187
_Tp __c = __h; 
# 188
int __i; 
# 189
for (__i = 1; __i <= __max_iter; ++__i) 
# 190
{ 
# 191
__b += __xi2; 
# 192
__d = (__b - __d); 
# 193
if (std::abs(__d) < __fp_min) { 
# 194
__d = __fp_min; }  
# 195
__c = (__b - (((_Tp)1) / __c)); 
# 196
if (std::abs(__c) < __fp_min) { 
# 197
__c = __fp_min; }  
# 198
__d = (((_Tp)1) / __d); 
# 199
const _Tp __del = __c * __d; 
# 200
__h *= __del; 
# 201
if (__d < ((_Tp)0)) { 
# 202
__isign = (-__isign); }  
# 203
if (std::abs(__del - ((_Tp)1)) < __eps) { 
# 204
break; }  
# 205
}  
# 206
if (__i > __max_iter) { 
# 207
std::__throw_runtime_error("Argument x too large in __bessel_jn; try asymptotic expansion."); }  
# 209
_Tp __Jnul = __isign * __fp_min; 
# 210
_Tp __Jpnul = __h * __Jnul; 
# 211
_Tp __Jnul1 = __Jnul; 
# 212
_Tp __Jpnu1 = __Jpnul; 
# 213
_Tp __fact = __nu * __xi; 
# 214
for (int __l = __nl; __l >= 1; --__l) 
# 215
{ 
# 216
const _Tp __Jnutemp = (__fact * __Jnul) + __Jpnul; 
# 217
__fact -= __xi; 
# 218
__Jpnul = ((__fact * __Jnutemp) - __Jnul); 
# 219
__Jnul = __Jnutemp; 
# 220
}  
# 221
if (__Jnul == ((_Tp)0)) { 
# 222
__Jnul = __eps; }  
# 223
_Tp __f = __Jpnul / __Jnul; 
# 224
_Tp __Nmu, __Nnu1, __Npmu, __Jmu; 
# 225
if (__x < __x_min) 
# 226
{ 
# 227
const _Tp __x2 = __x / ((_Tp)2); 
# 228
const _Tp __pimu = __numeric_constants< _Tp> ::__pi() * __mu; 
# 229
_Tp __fact = (std::abs(__pimu) < __eps) ? (_Tp)1 : (__pimu / std::sin(__pimu)); 
# 231
_Tp __d = (-std::log(__x2)); 
# 232
_Tp __e = __mu * __d; 
# 233
_Tp __fact2 = (std::abs(__e) < __eps) ? (_Tp)1 : (std::sinh(__e) / __e); 
# 235
_Tp __gam1, __gam2, __gampl, __gammi; 
# 236
__gamma_temme(__mu, __gam1, __gam2, __gampl, __gammi); 
# 237
_Tp __ff = ((((_Tp)2) / __numeric_constants< _Tp> ::__pi()) * __fact) * ((__gam1 * std::cosh(__e)) + ((__gam2 * __fact2) * __d)); 
# 239
__e = std::exp(__e); 
# 240
_Tp __p = __e / (__numeric_constants< _Tp> ::__pi() * __gampl); 
# 241
_Tp __q = ((_Tp)1) / ((__e * __numeric_constants< _Tp> ::__pi()) * __gammi); 
# 242
const _Tp __pimu2 = __pimu / ((_Tp)2); 
# 243
_Tp __fact3 = (std::abs(__pimu2) < __eps) ? (_Tp)1 : (std::sin(__pimu2) / __pimu2); 
# 245
_Tp __r = ((__numeric_constants< _Tp> ::__pi() * __pimu2) * __fact3) * __fact3; 
# 246
_Tp __c = ((_Tp)1); 
# 247
__d = ((-__x2) * __x2); 
# 248
_Tp __sum = __ff + (__r * __q); 
# 249
_Tp __sum1 = __p; 
# 250
for (__i = 1; __i <= __max_iter; ++__i) 
# 251
{ 
# 252
__ff = ((((__i * __ff) + __p) + __q) / ((__i * __i) - __mu2)); 
# 253
__c *= (__d / ((_Tp)__i)); 
# 254
__p /= (((_Tp)__i) - __mu); 
# 255
__q /= (((_Tp)__i) + __mu); 
# 256
const _Tp __del = __c * (__ff + (__r * __q)); 
# 257
__sum += __del; 
# 258
const _Tp __del1 = (__c * __p) - (__i * __del); 
# 259
__sum1 += __del1; 
# 260
if (std::abs(__del) < (__eps * (((_Tp)1) + std::abs(__sum)))) { 
# 261
break; }  
# 262
}  
# 263
if (__i > __max_iter) { 
# 264
std::__throw_runtime_error("Bessel y series failed to converge in __bessel_jn."); }  
# 266
__Nmu = (-__sum); 
# 267
__Nnu1 = ((-__sum1) * __xi2); 
# 268
__Npmu = (((__mu * __xi) * __Nmu) - __Nnu1); 
# 269
__Jmu = (__w / (__Npmu - (__f * __Nmu))); 
# 270
} else 
# 272
{ 
# 273
_Tp __a = ((_Tp)(0.25L)) - __mu2; 
# 274
_Tp __q = ((_Tp)1); 
# 275
_Tp __p = ((-__xi) / ((_Tp)2)); 
# 276
_Tp __br = ((_Tp)2) * __x; 
# 277
_Tp __bi = ((_Tp)2); 
# 278
_Tp __fact = (__a * __xi) / ((__p * __p) + (__q * __q)); 
# 279
_Tp __cr = __br + (__q * __fact); 
# 280
_Tp __ci = __bi + (__p * __fact); 
# 281
_Tp __den = (__br * __br) + (__bi * __bi); 
# 282
_Tp __dr = __br / __den; 
# 283
_Tp __di = (-__bi) / __den; 
# 284
_Tp __dlr = (__cr * __dr) - (__ci * __di); 
# 285
_Tp __dli = (__cr * __di) + (__ci * __dr); 
# 286
_Tp __temp = (__p * __dlr) - (__q * __dli); 
# 287
__q = ((__p * __dli) + (__q * __dlr)); 
# 288
__p = __temp; 
# 289
int __i; 
# 290
for (__i = 2; __i <= __max_iter; ++__i) 
# 291
{ 
# 292
__a += ((_Tp)(2 * (__i - 1))); 
# 293
__bi += ((_Tp)2); 
# 294
__dr = ((__a * __dr) + __br); 
# 295
__di = ((__a * __di) + __bi); 
# 296
if ((std::abs(__dr) + std::abs(__di)) < __fp_min) { 
# 297
__dr = __fp_min; }  
# 298
__fact = (__a / ((__cr * __cr) + (__ci * __ci))); 
# 299
__cr = (__br + (__cr * __fact)); 
# 300
__ci = (__bi - (__ci * __fact)); 
# 301
if ((std::abs(__cr) + std::abs(__ci)) < __fp_min) { 
# 302
__cr = __fp_min; }  
# 303
__den = ((__dr * __dr) + (__di * __di)); 
# 304
__dr /= __den; 
# 305
__di /= (-__den); 
# 306
__dlr = ((__cr * __dr) - (__ci * __di)); 
# 307
__dli = ((__cr * __di) + (__ci * __dr)); 
# 308
__temp = ((__p * __dlr) - (__q * __dli)); 
# 309
__q = ((__p * __dli) + (__q * __dlr)); 
# 310
__p = __temp; 
# 311
if ((std::abs(__dlr - ((_Tp)1)) + std::abs(__dli)) < __eps) { 
# 312
break; }  
# 313
}  
# 314
if (__i > __max_iter) { 
# 315
std::__throw_runtime_error("Lentz\'s method failed in __bessel_jn."); }  
# 317
const _Tp __gam = (__p - __f) / __q; 
# 318
__Jmu = std::sqrt(__w / (((__p - __f) * __gam) + __q)); 
# 320
__Jmu = std::copysign(__Jmu, __Jnul); 
# 325
__Nmu = (__gam * __Jmu); 
# 326
__Npmu = ((__p + (__q / __gam)) * __Nmu); 
# 327
__Nnu1 = (((__mu * __xi) * __Nmu) - __Npmu); 
# 328
}  
# 329
__fact = (__Jmu / __Jnul); 
# 330
__Jnu = (__fact * __Jnul1); 
# 331
__Jpnu = (__fact * __Jpnu1); 
# 332
for (__i = 1; __i <= __nl; ++__i) 
# 333
{ 
# 334
const _Tp __Nnutemp = (((__mu + __i) * __xi2) * __Nnu1) - __Nmu; 
# 335
__Nmu = __Nnu1; 
# 336
__Nnu1 = __Nnutemp; 
# 337
}  
# 338
__Nnu = __Nmu; 
# 339
__Npnu = (((__nu * __xi) * __Nmu) - __Nnu1); 
# 342
} 
# 361 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 363
__cyl_bessel_jn_asymp(_Tp __nu, _Tp __x, _Tp &__Jnu, _Tp &__Nnu) 
# 364
{ 
# 365
const _Tp __mu = (((_Tp)4) * __nu) * __nu; 
# 366
const _Tp __8x = ((_Tp)8) * __x; 
# 368
_Tp __P = ((_Tp)0); 
# 369
_Tp __Q = ((_Tp)0); 
# 371
_Tp __k = ((_Tp)0); 
# 372
_Tp __term = ((_Tp)1); 
# 374
int __epsP = 0; 
# 375
int __epsQ = 0; 
# 377
_Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 379
do 
# 380
{ 
# 381
__term *= ((__k == 0) ? (_Tp)1 : ((-(__mu - (((2 * __k) - 1) * ((2 * __k) - 1)))) / (__k * __8x))); 
# 385
__epsP = (std::abs(__term) < (__eps * std::abs(__P))); 
# 386
__P += __term; 
# 388
__k++; 
# 390
__term *= ((__mu - (((2 * __k) - 1) * ((2 * __k) - 1))) / (__k * __8x)); 
# 391
__epsQ = (std::abs(__term) < (__eps * std::abs(__Q))); 
# 392
__Q += __term; 
# 394
if (__epsP && __epsQ && (__k > (__nu / (2.0)))) { 
# 395
break; }  
# 397
__k++; 
# 398
} 
# 399
while (__k < 1000); 
# 401
const _Tp __chi = __x - ((__nu + ((_Tp)(0.5L))) * __numeric_constants< _Tp> ::__pi_2()); 
# 404
const _Tp __c = std::cos(__chi); 
# 405
const _Tp __s = std::sin(__chi); 
# 407
const _Tp __coef = std::sqrt(((_Tp)2) / (__numeric_constants< _Tp> ::__pi() * __x)); 
# 410
__Jnu = (__coef * ((__c * __P) - (__s * __Q))); 
# 411
__Nnu = (__coef * ((__s * __P) + (__c * __Q))); 
# 414
} 
# 444 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 446
__cyl_bessel_ij_series(_Tp __nu, _Tp __x, _Tp __sgn, unsigned 
# 447
__max_iter) 
# 448
{ 
# 449
if (__x == ((_Tp)0)) { 
# 450
return (__nu == ((_Tp)0)) ? (_Tp)1 : ((_Tp)0); }  
# 452
const _Tp __x2 = __x / ((_Tp)2); 
# 453
_Tp __fact = __nu * std::log(__x2); 
# 455
__fact -= std::lgamma(__nu + ((_Tp)1)); 
# 459
__fact = std::exp(__fact); 
# 460
const _Tp __xx4 = (__sgn * __x2) * __x2; 
# 461
_Tp __Jn = ((_Tp)1); 
# 462
_Tp __term = ((_Tp)1); 
# 464
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 465
{ 
# 466
__term *= (__xx4 / (((_Tp)__i) * (__nu + ((_Tp)__i)))); 
# 467
__Jn += __term; 
# 468
if (std::abs(__term / __Jn) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 469
break; }  
# 470
}  
# 472
return __fact * __Jn; 
# 473
} 
# 490 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 492
__cyl_bessel_j(_Tp __nu, _Tp __x) 
# 493
{ 
# 494
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 495
std::__throw_domain_error("Bad argument in __cyl_bessel_j."); } else { 
# 497
if (__isnan(__nu) || __isnan(__x)) { 
# 498
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 499
if ((__x * __x) < (((_Tp)10) * (__nu + ((_Tp)1)))) { 
# 500
return __cyl_bessel_ij_series(__nu, __x, -((_Tp)1), 200); } else { 
# 501
if (__x > ((_Tp)1000)) 
# 502
{ 
# 503
_Tp __J_nu, __N_nu; 
# 504
__cyl_bessel_jn_asymp(__nu, __x, __J_nu, __N_nu); 
# 505
return __J_nu; 
# 506
} else 
# 508
{ 
# 509
_Tp __J_nu, __N_nu, __Jp_nu, __Np_nu; 
# 510
__bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 511
return __J_nu; 
# 512
}  }  }  }  
# 513
} 
# 532 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 534
__cyl_neumann_n(_Tp __nu, _Tp __x) 
# 535
{ 
# 536
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 537
std::__throw_domain_error("Bad argument in __cyl_neumann_n."); } else { 
# 539
if (__isnan(__nu) || __isnan(__x)) { 
# 540
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 541
if (__x > ((_Tp)1000)) 
# 542
{ 
# 543
_Tp __J_nu, __N_nu; 
# 544
__cyl_bessel_jn_asymp(__nu, __x, __J_nu, __N_nu); 
# 545
return __N_nu; 
# 546
} else 
# 548
{ 
# 549
_Tp __J_nu, __N_nu, __Jp_nu, __Np_nu; 
# 550
__bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 551
return __N_nu; 
# 552
}  }  }  
# 553
} 
# 569 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> void 
# 571
__sph_bessel_jn(unsigned __n, _Tp __x, _Tp &
# 572
__j_n, _Tp &__n_n, _Tp &__jp_n, _Tp &__np_n) 
# 573
{ 
# 574
const _Tp __nu = ((_Tp)__n) + ((_Tp)(0.5L)); 
# 576
_Tp __J_nu, __N_nu, __Jp_nu, __Np_nu; 
# 577
__bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 579
const _Tp __factor = __numeric_constants< _Tp> ::__sqrtpio2() / std::sqrt(__x); 
# 582
__j_n = (__factor * __J_nu); 
# 583
__n_n = (__factor * __N_nu); 
# 584
__jp_n = ((__factor * __Jp_nu) - (__j_n / (((_Tp)2) * __x))); 
# 585
__np_n = ((__factor * __Np_nu) - (__n_n / (((_Tp)2) * __x))); 
# 588
} 
# 604 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 606
__sph_bessel(unsigned __n, _Tp __x) 
# 607
{ 
# 608
if (__x < ((_Tp)0)) { 
# 609
std::__throw_domain_error("Bad argument in __sph_bessel."); } else { 
# 611
if (__isnan(__x)) { 
# 612
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 613
if (__x == ((_Tp)0)) 
# 614
{ 
# 615
if (__n == (0)) { 
# 616
return (_Tp)1; } else { 
# 618
return (_Tp)0; }  
# 619
} else 
# 621
{ 
# 622
_Tp __j_n, __n_n, __jp_n, __np_n; 
# 623
__sph_bessel_jn(__n, __x, __j_n, __n_n, __jp_n, __np_n); 
# 624
return __j_n; 
# 625
}  }  }  
# 626
} 
# 642 "/usr/include/c++/11/tr1/bessel_function.tcc" 3
template< class _Tp> _Tp 
# 644
__sph_neumann(unsigned __n, _Tp __x) 
# 645
{ 
# 646
if (__x < ((_Tp)0)) { 
# 647
std::__throw_domain_error("Bad argument in __sph_neumann."); } else { 
# 649
if (__isnan(__x)) { 
# 650
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 651
if (__x == ((_Tp)0)) { 
# 652
return -std::template numeric_limits< _Tp> ::infinity(); } else 
# 654
{ 
# 655
_Tp __j_n, __n_n, __jp_n, __np_n; 
# 656
__sph_bessel_jn(__n, __x, __j_n, __n_n, __jp_n, __np_n); 
# 657
return __n_n; 
# 658
}  }  }  
# 659
} 
# 660
}
# 667
}
# 49 "/usr/include/c++/11/tr1/beta_function.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/usr/include/c++/11/tr1/beta_function.tcc" 3
namespace __detail { 
# 79 "/usr/include/c++/11/tr1/beta_function.tcc" 3
template< class _Tp> _Tp 
# 81
__beta_gamma(_Tp __x, _Tp __y) 
# 82
{ 
# 84
_Tp __bet; 
# 86
if (__x > __y) 
# 87
{ 
# 88
__bet = (std::tgamma(__x) / std::tgamma(__x + __y)); 
# 90
__bet *= std::tgamma(__y); 
# 91
} else 
# 93
{ 
# 94
__bet = (std::tgamma(__y) / std::tgamma(__x + __y)); 
# 96
__bet *= std::tgamma(__x); 
# 97
}  
# 111 "/usr/include/c++/11/tr1/beta_function.tcc" 3
return __bet; 
# 112
} 
# 127 "/usr/include/c++/11/tr1/beta_function.tcc" 3
template< class _Tp> _Tp 
# 129
__beta_lgamma(_Tp __x, _Tp __y) 
# 130
{ 
# 132
_Tp __bet = (std::lgamma(__x) + std::lgamma(__y)) - std::lgamma(__x + __y); 
# 140
__bet = std::exp(__bet); 
# 141
return __bet; 
# 142
} 
# 158 "/usr/include/c++/11/tr1/beta_function.tcc" 3
template< class _Tp> _Tp 
# 160
__beta_product(_Tp __x, _Tp __y) 
# 161
{ 
# 163
_Tp __bet = (__x + __y) / (__x * __y); 
# 165
unsigned __max_iter = (1000000); 
# 166
for (unsigned __k = (1); __k < __max_iter; ++__k) 
# 167
{ 
# 168
_Tp __term = (((_Tp)1) + ((__x + __y) / __k)) / ((((_Tp)1) + (__x / __k)) * (((_Tp)1) + (__y / __k))); 
# 170
__bet *= __term; 
# 171
}  
# 173
return __bet; 
# 174
} 
# 189 "/usr/include/c++/11/tr1/beta_function.tcc" 3
template< class _Tp> inline _Tp 
# 191
__beta(_Tp __x, _Tp __y) 
# 192
{ 
# 193
if (__isnan(__x) || __isnan(__y)) { 
# 194
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 196
return __beta_lgamma(__x, __y); }  
# 197
} 
# 198
}
# 205
}
# 45 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 59 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
namespace __detail { 
# 76 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 78
__ellint_rf(_Tp __x, _Tp __y, _Tp __z) 
# 79
{ 
# 80
const _Tp __min = std::template numeric_limits< _Tp> ::min(); 
# 81
const _Tp __lolim = ((_Tp)5) * __min; 
# 83
if (((__x < ((_Tp)0)) || (__y < ((_Tp)0))) || (__z < ((_Tp)0))) { 
# 84
std::__throw_domain_error("Argument less than zero in __ellint_rf."); } else { 
# 86
if ((((__x + __y) < __lolim) || ((__x + __z) < __lolim)) || ((__y + __z) < __lolim)) { 
# 88
std::__throw_domain_error("Argument too small in __ellint_rf"); } else 
# 90
{ 
# 91
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 92
const _Tp __c1 = (((_Tp)1) / ((_Tp)24)); 
# 93
const _Tp __c2 = (((_Tp)1) / ((_Tp)10)); 
# 94
const _Tp __c3 = (((_Tp)3) / ((_Tp)44)); 
# 95
const _Tp __c4 = (((_Tp)1) / ((_Tp)14)); 
# 97
_Tp __xn = __x; 
# 98
_Tp __yn = __y; 
# 99
_Tp __zn = __z; 
# 101
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 102
const _Tp __errtol = std::pow(__eps, ((_Tp)1) / ((_Tp)6)); 
# 103
_Tp __mu; 
# 104
_Tp __xndev, __yndev, __zndev; 
# 106
const unsigned __max_iter = (100); 
# 107
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 108
{ 
# 109
__mu = (((__xn + __yn) + __zn) / ((_Tp)3)); 
# 110
__xndev = (2 - ((__mu + __xn) / __mu)); 
# 111
__yndev = (2 - ((__mu + __yn) / __mu)); 
# 112
__zndev = (2 - ((__mu + __zn) / __mu)); 
# 113
_Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev)); 
# 114
__epsilon = std::max(__epsilon, std::abs(__zndev)); 
# 115
if (__epsilon < __errtol) { 
# 116
break; }  
# 117
const _Tp __xnroot = std::sqrt(__xn); 
# 118
const _Tp __ynroot = std::sqrt(__yn); 
# 119
const _Tp __znroot = std::sqrt(__zn); 
# 120
const _Tp __lambda = (__xnroot * (__ynroot + __znroot)) + (__ynroot * __znroot); 
# 122
__xn = (__c0 * (__xn + __lambda)); 
# 123
__yn = (__c0 * (__yn + __lambda)); 
# 124
__zn = (__c0 * (__zn + __lambda)); 
# 125
}  
# 127
const _Tp __e2 = (__xndev * __yndev) - (__zndev * __zndev); 
# 128
const _Tp __e3 = (__xndev * __yndev) * __zndev; 
# 129
const _Tp __s = (((_Tp)1) + ((((__c1 * __e2) - __c2) - (__c3 * __e3)) * __e2)) + (__c4 * __e3); 
# 132
return __s / std::sqrt(__mu); 
# 133
}  }  
# 134
} 
# 153 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 155
__comp_ellint_1_series(_Tp __k) 
# 156
{ 
# 158
const _Tp __kk = __k * __k; 
# 160
_Tp __term = __kk / ((_Tp)4); 
# 161
_Tp __sum = ((_Tp)1) + __term; 
# 163
const unsigned __max_iter = (1000); 
# 164
for (unsigned __i = (2); __i < __max_iter; ++__i) 
# 165
{ 
# 166
__term *= (((((2) * __i) - (1)) * __kk) / ((2) * __i)); 
# 167
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 168
break; }  
# 169
__sum += __term; 
# 170
}  
# 172
return __numeric_constants< _Tp> ::__pi_2() * __sum; 
# 173
} 
# 191 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 193
__comp_ellint_1(_Tp __k) 
# 194
{ 
# 196
if (__isnan(__k)) { 
# 197
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 198
if (std::abs(__k) >= ((_Tp)1)) { 
# 199
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 201
return __ellint_rf((_Tp)0, ((_Tp)1) - (__k * __k), (_Tp)1); }  }  
# 202
} 
# 219 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 221
__ellint_1(_Tp __k, _Tp __phi) 
# 222
{ 
# 224
if (__isnan(__k) || __isnan(__phi)) { 
# 225
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 226
if (std::abs(__k) > ((_Tp)1)) { 
# 227
std::__throw_domain_error("Bad argument in __ellint_1."); } else 
# 229
{ 
# 231
const int __n = std::floor((__phi / __numeric_constants< _Tp> ::__pi()) + ((_Tp)(0.5L))); 
# 233
const _Tp __phi_red = __phi - (__n * __numeric_constants< _Tp> ::__pi()); 
# 236
const _Tp __s = std::sin(__phi_red); 
# 237
const _Tp __c = std::cos(__phi_red); 
# 239
const _Tp __F = __s * __ellint_rf(__c * __c, ((_Tp)1) - (((__k * __k) * __s) * __s), (_Tp)1); 
# 243
if (__n == 0) { 
# 244
return __F; } else { 
# 246
return __F + ((((_Tp)2) * __n) * __comp_ellint_1(__k)); }  
# 247
}  }  
# 248
} 
# 266 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 268
__comp_ellint_2_series(_Tp __k) 
# 269
{ 
# 271
const _Tp __kk = __k * __k; 
# 273
_Tp __term = __kk; 
# 274
_Tp __sum = __term; 
# 276
const unsigned __max_iter = (1000); 
# 277
for (unsigned __i = (2); __i < __max_iter; ++__i) 
# 278
{ 
# 279
const _Tp __i2m = ((2) * __i) - (1); 
# 280
const _Tp __i2 = (2) * __i; 
# 281
__term *= (((__i2m * __i2m) * __kk) / (__i2 * __i2)); 
# 282
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 283
break; }  
# 284
__sum += (__term / __i2m); 
# 285
}  
# 287
return __numeric_constants< _Tp> ::__pi_2() * (((_Tp)1) - __sum); 
# 288
} 
# 314 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 316
__ellint_rd(_Tp __x, _Tp __y, _Tp __z) 
# 317
{ 
# 318
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 319
const _Tp __errtol = std::pow(__eps / ((_Tp)8), ((_Tp)1) / ((_Tp)6)); 
# 320
const _Tp __max = std::template numeric_limits< _Tp> ::max(); 
# 321
const _Tp __lolim = (((_Tp)2) / std::pow(__max, ((_Tp)2) / ((_Tp)3))); 
# 323
if ((__x < ((_Tp)0)) || (__y < ((_Tp)0))) { 
# 324
std::__throw_domain_error("Argument less than zero in __ellint_rd."); } else { 
# 326
if (((__x + __y) < __lolim) || (__z < __lolim)) { 
# 327
std::__throw_domain_error("Argument too small in __ellint_rd."); } else 
# 330
{ 
# 331
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 332
const _Tp __c1 = (((_Tp)3) / ((_Tp)14)); 
# 333
const _Tp __c2 = (((_Tp)1) / ((_Tp)6)); 
# 334
const _Tp __c3 = (((_Tp)9) / ((_Tp)22)); 
# 335
const _Tp __c4 = (((_Tp)3) / ((_Tp)26)); 
# 337
_Tp __xn = __x; 
# 338
_Tp __yn = __y; 
# 339
_Tp __zn = __z; 
# 340
_Tp __sigma = ((_Tp)0); 
# 341
_Tp __power4 = ((_Tp)1); 
# 343
_Tp __mu; 
# 344
_Tp __xndev, __yndev, __zndev; 
# 346
const unsigned __max_iter = (100); 
# 347
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 348
{ 
# 349
__mu = (((__xn + __yn) + (((_Tp)3) * __zn)) / ((_Tp)5)); 
# 350
__xndev = ((__mu - __xn) / __mu); 
# 351
__yndev = ((__mu - __yn) / __mu); 
# 352
__zndev = ((__mu - __zn) / __mu); 
# 353
_Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev)); 
# 354
__epsilon = std::max(__epsilon, std::abs(__zndev)); 
# 355
if (__epsilon < __errtol) { 
# 356
break; }  
# 357
_Tp __xnroot = std::sqrt(__xn); 
# 358
_Tp __ynroot = std::sqrt(__yn); 
# 359
_Tp __znroot = std::sqrt(__zn); 
# 360
_Tp __lambda = (__xnroot * (__ynroot + __znroot)) + (__ynroot * __znroot); 
# 362
__sigma += (__power4 / (__znroot * (__zn + __lambda))); 
# 363
__power4 *= __c0; 
# 364
__xn = (__c0 * (__xn + __lambda)); 
# 365
__yn = (__c0 * (__yn + __lambda)); 
# 366
__zn = (__c0 * (__zn + __lambda)); 
# 367
}  
# 369
_Tp __ea = __xndev * __yndev; 
# 370
_Tp __eb = __zndev * __zndev; 
# 371
_Tp __ec = __ea - __eb; 
# 372
_Tp __ed = __ea - (((_Tp)6) * __eb); 
# 373
_Tp __ef = (__ed + __ec) + __ec; 
# 374
_Tp __s1 = __ed * (((-__c1) + ((__c3 * __ed) / ((_Tp)3))) - ((((((_Tp)3) * __c4) * __zndev) * __ef) / ((_Tp)2))); 
# 377
_Tp __s2 = __zndev * ((__c2 * __ef) + (__zndev * ((((-__c3) * __ec) - (__zndev * __c4)) - __ea))); 
# 381
return (((_Tp)3) * __sigma) + ((__power4 * ((((_Tp)1) + __s1) + __s2)) / (__mu * std::sqrt(__mu))); 
# 383
}  }  
# 384
} 
# 399 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 401
__comp_ellint_2(_Tp __k) 
# 402
{ 
# 404
if (__isnan(__k)) { 
# 405
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 406
if (std::abs(__k) == 1) { 
# 407
return (_Tp)1; } else { 
# 408
if (std::abs(__k) > ((_Tp)1)) { 
# 409
std::__throw_domain_error("Bad argument in __comp_ellint_2."); } else 
# 411
{ 
# 412
const _Tp __kk = __k * __k; 
# 414
return __ellint_rf((_Tp)0, ((_Tp)1) - __kk, (_Tp)1) - ((__kk * __ellint_rd((_Tp)0, ((_Tp)1) - __kk, (_Tp)1)) / ((_Tp)3)); 
# 416
}  }  }  
# 417
} 
# 433 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 435
__ellint_2(_Tp __k, _Tp __phi) 
# 436
{ 
# 438
if (__isnan(__k) || __isnan(__phi)) { 
# 439
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 440
if (std::abs(__k) > ((_Tp)1)) { 
# 441
std::__throw_domain_error("Bad argument in __ellint_2."); } else 
# 443
{ 
# 445
const int __n = std::floor((__phi / __numeric_constants< _Tp> ::__pi()) + ((_Tp)(0.5L))); 
# 447
const _Tp __phi_red = __phi - (__n * __numeric_constants< _Tp> ::__pi()); 
# 450
const _Tp __kk = __k * __k; 
# 451
const _Tp __s = std::sin(__phi_red); 
# 452
const _Tp __ss = __s * __s; 
# 453
const _Tp __sss = __ss * __s; 
# 454
const _Tp __c = std::cos(__phi_red); 
# 455
const _Tp __cc = __c * __c; 
# 457
const _Tp __E = (__s * __ellint_rf(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1)) - (((__kk * __sss) * __ellint_rd(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1)) / ((_Tp)3)); 
# 463
if (__n == 0) { 
# 464
return __E; } else { 
# 466
return __E + ((((_Tp)2) * __n) * __comp_ellint_2(__k)); }  
# 467
}  }  
# 468
} 
# 492 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 494
__ellint_rc(_Tp __x, _Tp __y) 
# 495
{ 
# 496
const _Tp __min = std::template numeric_limits< _Tp> ::min(); 
# 497
const _Tp __lolim = ((_Tp)5) * __min; 
# 499
if (((__x < ((_Tp)0)) || (__y < ((_Tp)0))) || ((__x + __y) < __lolim)) { 
# 500
std::__throw_domain_error("Argument less than zero in __ellint_rc."); } else 
# 503
{ 
# 504
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 505
const _Tp __c1 = (((_Tp)1) / ((_Tp)7)); 
# 506
const _Tp __c2 = (((_Tp)9) / ((_Tp)22)); 
# 507
const _Tp __c3 = (((_Tp)3) / ((_Tp)10)); 
# 508
const _Tp __c4 = (((_Tp)3) / ((_Tp)8)); 
# 510
_Tp __xn = __x; 
# 511
_Tp __yn = __y; 
# 513
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 514
const _Tp __errtol = std::pow(__eps / ((_Tp)30), ((_Tp)1) / ((_Tp)6)); 
# 515
_Tp __mu; 
# 516
_Tp __sn; 
# 518
const unsigned __max_iter = (100); 
# 519
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 520
{ 
# 521
__mu = ((__xn + (((_Tp)2) * __yn)) / ((_Tp)3)); 
# 522
__sn = (((__yn + __mu) / __mu) - ((_Tp)2)); 
# 523
if (std::abs(__sn) < __errtol) { 
# 524
break; }  
# 525
const _Tp __lambda = ((((_Tp)2) * std::sqrt(__xn)) * std::sqrt(__yn)) + __yn; 
# 527
__xn = (__c0 * (__xn + __lambda)); 
# 528
__yn = (__c0 * (__yn + __lambda)); 
# 529
}  
# 531
_Tp __s = (__sn * __sn) * (__c3 + (__sn * (__c1 + (__sn * (__c4 + (__sn * __c2)))))); 
# 534
return (((_Tp)1) + __s) / std::sqrt(__mu); 
# 535
}  
# 536
} 
# 561 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 563
__ellint_rj(_Tp __x, _Tp __y, _Tp __z, _Tp __p) 
# 564
{ 
# 565
const _Tp __min = std::template numeric_limits< _Tp> ::min(); 
# 566
const _Tp __lolim = std::pow(((_Tp)5) * __min, ((_Tp)1) / ((_Tp)3)); 
# 568
if (((__x < ((_Tp)0)) || (__y < ((_Tp)0))) || (__z < ((_Tp)0))) { 
# 569
std::__throw_domain_error("Argument less than zero in __ellint_rj."); } else { 
# 571
if (((((__x + __y) < __lolim) || ((__x + __z) < __lolim)) || ((__y + __z) < __lolim)) || (__p < __lolim)) { 
# 573
std::__throw_domain_error("Argument too small in __ellint_rj"); } else 
# 576
{ 
# 577
const _Tp __c0 = (((_Tp)1) / ((_Tp)4)); 
# 578
const _Tp __c1 = (((_Tp)3) / ((_Tp)14)); 
# 579
const _Tp __c2 = (((_Tp)1) / ((_Tp)3)); 
# 580
const _Tp __c3 = (((_Tp)3) / ((_Tp)22)); 
# 581
const _Tp __c4 = (((_Tp)3) / ((_Tp)26)); 
# 583
_Tp __xn = __x; 
# 584
_Tp __yn = __y; 
# 585
_Tp __zn = __z; 
# 586
_Tp __pn = __p; 
# 587
_Tp __sigma = ((_Tp)0); 
# 588
_Tp __power4 = ((_Tp)1); 
# 590
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 591
const _Tp __errtol = std::pow(__eps / ((_Tp)8), ((_Tp)1) / ((_Tp)6)); 
# 593
_Tp __mu; 
# 594
_Tp __xndev, __yndev, __zndev, __pndev; 
# 596
const unsigned __max_iter = (100); 
# 597
for (unsigned __iter = (0); __iter < __max_iter; ++__iter) 
# 598
{ 
# 599
__mu = ((((__xn + __yn) + __zn) + (((_Tp)2) * __pn)) / ((_Tp)5)); 
# 600
__xndev = ((__mu - __xn) / __mu); 
# 601
__yndev = ((__mu - __yn) / __mu); 
# 602
__zndev = ((__mu - __zn) / __mu); 
# 603
__pndev = ((__mu - __pn) / __mu); 
# 604
_Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev)); 
# 605
__epsilon = std::max(__epsilon, std::abs(__zndev)); 
# 606
__epsilon = std::max(__epsilon, std::abs(__pndev)); 
# 607
if (__epsilon < __errtol) { 
# 608
break; }  
# 609
const _Tp __xnroot = std::sqrt(__xn); 
# 610
const _Tp __ynroot = std::sqrt(__yn); 
# 611
const _Tp __znroot = std::sqrt(__zn); 
# 612
const _Tp __lambda = (__xnroot * (__ynroot + __znroot)) + (__ynroot * __znroot); 
# 614
const _Tp __alpha1 = (__pn * ((__xnroot + __ynroot) + __znroot)) + ((__xnroot * __ynroot) * __znroot); 
# 616
const _Tp __alpha2 = __alpha1 * __alpha1; 
# 617
const _Tp __beta = (__pn * (__pn + __lambda)) * (__pn + __lambda); 
# 619
__sigma += (__power4 * __ellint_rc(__alpha2, __beta)); 
# 620
__power4 *= __c0; 
# 621
__xn = (__c0 * (__xn + __lambda)); 
# 622
__yn = (__c0 * (__yn + __lambda)); 
# 623
__zn = (__c0 * (__zn + __lambda)); 
# 624
__pn = (__c0 * (__pn + __lambda)); 
# 625
}  
# 627
_Tp __ea = (__xndev * (__yndev + __zndev)) + (__yndev * __zndev); 
# 628
_Tp __eb = (__xndev * __yndev) * __zndev; 
# 629
_Tp __ec = __pndev * __pndev; 
# 630
_Tp __e2 = __ea - (((_Tp)3) * __ec); 
# 631
_Tp __e3 = __eb + ((((_Tp)2) * __pndev) * (__ea - __ec)); 
# 632
_Tp __s1 = ((_Tp)1) + (__e2 * (((-__c1) + (((((_Tp)3) * __c3) * __e2) / ((_Tp)4))) - (((((_Tp)3) * __c4) * __e3) / ((_Tp)2)))); 
# 634
_Tp __s2 = __eb * ((__c2 / ((_Tp)2)) + (__pndev * (((-__c3) - __c3) + (__pndev * __c4)))); 
# 636
_Tp __s3 = ((__pndev * __ea) * (__c2 - (__pndev * __c3))) - ((__c2 * __pndev) * __ec); 
# 639
return (((_Tp)3) * __sigma) + ((__power4 * ((__s1 + __s2) + __s3)) / (__mu * std::sqrt(__mu))); 
# 641
}  }  
# 642
} 
# 661 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 663
__comp_ellint_3(_Tp __k, _Tp __nu) 
# 664
{ 
# 666
if (__isnan(__k) || __isnan(__nu)) { 
# 667
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 668
if (__nu == ((_Tp)1)) { 
# 669
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 670
if (std::abs(__k) > ((_Tp)1)) { 
# 671
std::__throw_domain_error("Bad argument in __comp_ellint_3."); } else 
# 673
{ 
# 674
const _Tp __kk = __k * __k; 
# 676
return __ellint_rf((_Tp)0, ((_Tp)1) - __kk, (_Tp)1) + ((__nu * __ellint_rj((_Tp)0, ((_Tp)1) - __kk, (_Tp)1, ((_Tp)1) - __nu)) / ((_Tp)3)); 
# 680
}  }  }  
# 681
} 
# 701 "/usr/include/c++/11/tr1/ell_integral.tcc" 3
template< class _Tp> _Tp 
# 703
__ellint_3(_Tp __k, _Tp __nu, _Tp __phi) 
# 704
{ 
# 706
if ((__isnan(__k) || __isnan(__nu)) || __isnan(__phi)) { 
# 707
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 708
if (std::abs(__k) > ((_Tp)1)) { 
# 709
std::__throw_domain_error("Bad argument in __ellint_3."); } else 
# 711
{ 
# 713
const int __n = std::floor((__phi / __numeric_constants< _Tp> ::__pi()) + ((_Tp)(0.5L))); 
# 715
const _Tp __phi_red = __phi - (__n * __numeric_constants< _Tp> ::__pi()); 
# 718
const _Tp __kk = __k * __k; 
# 719
const _Tp __s = std::sin(__phi_red); 
# 720
const _Tp __ss = __s * __s; 
# 721
const _Tp __sss = __ss * __s; 
# 722
const _Tp __c = std::cos(__phi_red); 
# 723
const _Tp __cc = __c * __c; 
# 725
const _Tp __Pi = (__s * __ellint_rf(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1)) + (((__nu * __sss) * __ellint_rj(__cc, ((_Tp)1) - (__kk * __ss), (_Tp)1, ((_Tp)1) - (__nu * __ss))) / ((_Tp)3)); 
# 731
if (__n == 0) { 
# 732
return __Pi; } else { 
# 734
return __Pi + ((((_Tp)2) * __n) * __comp_ellint_3(__k, __nu)); }  
# 735
}  }  
# 736
} 
# 737
}
# 743
}
# 50 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 64 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
namespace __detail { 
# 66
template< class _Tp> _Tp __expint_E1(_Tp); 
# 81 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 83
__expint_E1_series(_Tp __x) 
# 84
{ 
# 85
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 86
_Tp __term = ((_Tp)1); 
# 87
_Tp __esum = ((_Tp)0); 
# 88
_Tp __osum = ((_Tp)0); 
# 89
const unsigned __max_iter = (1000); 
# 90
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 91
{ 
# 92
__term *= ((-__x) / __i); 
# 93
if (std::abs(__term) < __eps) { 
# 94
break; }  
# 95
if (__term >= ((_Tp)0)) { 
# 96
__esum += (__term / __i); } else { 
# 98
__osum += (__term / __i); }  
# 99
}  
# 101
return (((-__esum) - __osum) - __numeric_constants< _Tp> ::__gamma_e()) - std::log(__x); 
# 103
} 
# 118 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 120
__expint_E1_asymp(_Tp __x) 
# 121
{ 
# 122
_Tp __term = ((_Tp)1); 
# 123
_Tp __esum = ((_Tp)1); 
# 124
_Tp __osum = ((_Tp)0); 
# 125
const unsigned __max_iter = (1000); 
# 126
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 127
{ 
# 128
_Tp __prev = __term; 
# 129
__term *= ((-__i) / __x); 
# 130
if (std::abs(__term) > std::abs(__prev)) { 
# 131
break; }  
# 132
if (__term >= ((_Tp)0)) { 
# 133
__esum += __term; } else { 
# 135
__osum += __term; }  
# 136
}  
# 138
return (std::exp(-__x) * (__esum + __osum)) / __x; 
# 139
} 
# 155 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 157
__expint_En_series(unsigned __n, _Tp __x) 
# 158
{ 
# 159
const unsigned __max_iter = (1000); 
# 160
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 161
const int __nm1 = __n - (1); 
# 162
_Tp __ans = (__nm1 != 0) ? ((_Tp)1) / __nm1 : ((-std::log(__x)) - __numeric_constants< _Tp> ::__gamma_e()); 
# 165
_Tp __fact = ((_Tp)1); 
# 166
for (int __i = 1; __i <= __max_iter; ++__i) 
# 167
{ 
# 168
__fact *= ((-__x) / ((_Tp)__i)); 
# 169
_Tp __del; 
# 170
if (__i != __nm1) { 
# 171
__del = ((-__fact) / ((_Tp)(__i - __nm1))); } else 
# 173
{ 
# 174
_Tp __psi = (-__numeric_constants< _Tp> ::gamma_e()); 
# 175
for (int __ii = 1; __ii <= __nm1; ++__ii) { 
# 176
__psi += (((_Tp)1) / ((_Tp)__ii)); }  
# 177
__del = (__fact * (__psi - std::log(__x))); 
# 178
}  
# 179
__ans += __del; 
# 180
if (std::abs(__del) < (__eps * std::abs(__ans))) { 
# 181
return __ans; }  
# 182
}  
# 183
std::__throw_runtime_error("Series summation failed in __expint_En_series."); 
# 185
} 
# 201 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 203
__expint_En_cont_frac(unsigned __n, _Tp __x) 
# 204
{ 
# 205
const unsigned __max_iter = (1000); 
# 206
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 207
const _Tp __fp_min = std::template numeric_limits< _Tp> ::min(); 
# 208
const int __nm1 = __n - (1); 
# 209
_Tp __b = __x + ((_Tp)__n); 
# 210
_Tp __c = ((_Tp)1) / __fp_min; 
# 211
_Tp __d = ((_Tp)1) / __b; 
# 212
_Tp __h = __d; 
# 213
for (unsigned __i = (1); __i <= __max_iter; ++__i) 
# 214
{ 
# 215
_Tp __a = (-((_Tp)(__i * (__nm1 + __i)))); 
# 216
__b += ((_Tp)2); 
# 217
__d = (((_Tp)1) / ((__a * __d) + __b)); 
# 218
__c = (__b + (__a / __c)); 
# 219
const _Tp __del = __c * __d; 
# 220
__h *= __del; 
# 221
if (std::abs(__del - ((_Tp)1)) < __eps) 
# 222
{ 
# 223
const _Tp __ans = __h * std::exp(-__x); 
# 224
return __ans; 
# 225
}  
# 226
}  
# 227
std::__throw_runtime_error("Continued fraction failed in __expint_En_cont_frac."); 
# 229
} 
# 246 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 248
__expint_En_recursion(unsigned __n, _Tp __x) 
# 249
{ 
# 250
_Tp __En; 
# 251
_Tp __E1 = __expint_E1(__x); 
# 252
if (__x < ((_Tp)__n)) 
# 253
{ 
# 255
__En = __E1; 
# 256
for (unsigned __j = (2); __j < __n; ++__j) { 
# 257
__En = ((std::exp(-__x) - (__x * __En)) / ((_Tp)(__j - (1)))); }  
# 258
} else 
# 260
{ 
# 262
__En = ((_Tp)1); 
# 263
const int __N = __n + (20); 
# 264
_Tp __save = ((_Tp)0); 
# 265
for (int __j = __N; __j > 0; --__j) 
# 266
{ 
# 267
__En = ((std::exp(-__x) - (__j * __En)) / __x); 
# 268
if (__j == __n) { 
# 269
__save = __En; }  
# 270
}  
# 271
_Tp __norm = __En / __E1; 
# 272
__En /= __norm; 
# 273
}  
# 275
return __En; 
# 276
} 
# 290 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 292
__expint_Ei_series(_Tp __x) 
# 293
{ 
# 294
_Tp __term = ((_Tp)1); 
# 295
_Tp __sum = ((_Tp)0); 
# 296
const unsigned __max_iter = (1000); 
# 297
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 298
{ 
# 299
__term *= (__x / __i); 
# 300
__sum += (__term / __i); 
# 301
if (__term < (std::template numeric_limits< _Tp> ::epsilon() * __sum)) { 
# 302
break; }  
# 303
}  
# 305
return (__numeric_constants< _Tp> ::__gamma_e() + __sum) + std::log(__x); 
# 306
} 
# 321 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 323
__expint_Ei_asymp(_Tp __x) 
# 324
{ 
# 325
_Tp __term = ((_Tp)1); 
# 326
_Tp __sum = ((_Tp)1); 
# 327
const unsigned __max_iter = (1000); 
# 328
for (unsigned __i = (1); __i < __max_iter; ++__i) 
# 329
{ 
# 330
_Tp __prev = __term; 
# 331
__term *= (__i / __x); 
# 332
if (__term < std::template numeric_limits< _Tp> ::epsilon()) { 
# 333
break; }  
# 334
if (__term >= __prev) { 
# 335
break; }  
# 336
__sum += __term; 
# 337
}  
# 339
return (std::exp(__x) * __sum) / __x; 
# 340
} 
# 354 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 356
__expint_Ei(_Tp __x) 
# 357
{ 
# 358
if (__x < ((_Tp)0)) { 
# 359
return -__expint_E1(-__x); } else { 
# 360
if (__x < (-std::log(std::template numeric_limits< _Tp> ::epsilon()))) { 
# 361
return __expint_Ei_series(__x); } else { 
# 363
return __expint_Ei_asymp(__x); }  }  
# 364
} 
# 378 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 380
__expint_E1(_Tp __x) 
# 381
{ 
# 382
if (__x < ((_Tp)0)) { 
# 383
return -__expint_Ei(-__x); } else { 
# 384
if (__x < ((_Tp)1)) { 
# 385
return __expint_E1_series(__x); } else { 
# 386
if (__x < ((_Tp)100)) { 
# 387
return __expint_En_cont_frac(1, __x); } else { 
# 389
return __expint_E1_asymp(__x); }  }  }  
# 390
} 
# 408 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 410
__expint_asymp(unsigned __n, _Tp __x) 
# 411
{ 
# 412
_Tp __term = ((_Tp)1); 
# 413
_Tp __sum = ((_Tp)1); 
# 414
for (unsigned __i = (1); __i <= __n; ++__i) 
# 415
{ 
# 416
_Tp __prev = __term; 
# 417
__term *= ((-((__n - __i) + (1))) / __x); 
# 418
if (std::abs(__term) > std::abs(__prev)) { 
# 419
break; }  
# 420
__sum += __term; 
# 421
}  
# 423
return (std::exp(-__x) * __sum) / __x; 
# 424
} 
# 442 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 444
__expint_large_n(unsigned __n, _Tp __x) 
# 445
{ 
# 446
const _Tp __xpn = __x + __n; 
# 447
const _Tp __xpn2 = __xpn * __xpn; 
# 448
_Tp __term = ((_Tp)1); 
# 449
_Tp __sum = ((_Tp)1); 
# 450
for (unsigned __i = (1); __i <= __n; ++__i) 
# 451
{ 
# 452
_Tp __prev = __term; 
# 453
__term *= ((__n - (((2) * (__i - (1))) * __x)) / __xpn2); 
# 454
if (std::abs(__term) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 455
break; }  
# 456
__sum += __term; 
# 457
}  
# 459
return (std::exp(-__x) * __sum) / __xpn; 
# 460
} 
# 476 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> _Tp 
# 478
__expint(unsigned __n, _Tp __x) 
# 479
{ 
# 481
if (__isnan(__x)) { 
# 482
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 483
if ((__n <= (1)) && (__x == ((_Tp)0))) { 
# 484
return std::template numeric_limits< _Tp> ::infinity(); } else 
# 486
{ 
# 487
_Tp __E0 = std::exp(__x) / __x; 
# 488
if (__n == (0)) { 
# 489
return __E0; }  
# 491
_Tp __E1 = __expint_E1(__x); 
# 492
if (__n == (1)) { 
# 493
return __E1; }  
# 495
if (__x == ((_Tp)0)) { 
# 496
return ((_Tp)1) / (static_cast< _Tp>(__n - (1))); }  
# 498
_Tp __En = __expint_En_recursion(__n, __x); 
# 500
return __En; 
# 501
}  }  
# 502
} 
# 516 "/usr/include/c++/11/tr1/exp_integral.tcc" 3
template< class _Tp> inline _Tp 
# 518
__expint(_Tp __x) 
# 519
{ 
# 520
if (__isnan(__x)) { 
# 521
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 523
return __expint_Ei(__x); }  
# 524
} 
# 525
}
# 531
}
# 44 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 60 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
namespace __detail { 
# 83 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 85
__conf_hyperg_series(_Tp __a, _Tp __c, _Tp __x) 
# 86
{ 
# 87
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 89
_Tp __term = ((_Tp)1); 
# 90
_Tp __Fac = ((_Tp)1); 
# 91
const unsigned __max_iter = (100000); 
# 92
unsigned __i; 
# 93
for (__i = (0); __i < __max_iter; ++__i) 
# 94
{ 
# 95
__term *= (((__a + ((_Tp)__i)) * __x) / ((__c + ((_Tp)__i)) * ((_Tp)((1) + __i)))); 
# 97
if (std::abs(__term) < __eps) 
# 98
{ 
# 99
break; 
# 100
}  
# 101
__Fac += __term; 
# 102
}  
# 103
if (__i == __max_iter) { 
# 104
std::__throw_runtime_error("Series failed to converge in __conf_hyperg_series."); }  
# 107
return __Fac; 
# 108
} 
# 120 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 122
__conf_hyperg_luke(_Tp __a, _Tp __c, _Tp __xin) 
# 123
{ 
# 124
const _Tp __big = std::pow(std::template numeric_limits< _Tp> ::max(), (_Tp)(0.16L)); 
# 125
const int __nmax = 20000; 
# 126
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 127
const _Tp __x = (-__xin); 
# 128
const _Tp __x3 = (__x * __x) * __x; 
# 129
const _Tp __t0 = __a / __c; 
# 130
const _Tp __t1 = (__a + ((_Tp)1)) / (((_Tp)2) * __c); 
# 131
const _Tp __t2 = (__a + ((_Tp)2)) / (((_Tp)2) * (__c + ((_Tp)1))); 
# 132
_Tp __F = ((_Tp)1); 
# 133
_Tp __prec; 
# 135
_Tp __Bnm3 = ((_Tp)1); 
# 136
_Tp __Bnm2 = ((_Tp)1) + (__t1 * __x); 
# 137
_Tp __Bnm1 = ((_Tp)1) + ((__t2 * __x) * (((_Tp)1) + ((__t1 / ((_Tp)3)) * __x))); 
# 139
_Tp __Anm3 = ((_Tp)1); 
# 140
_Tp __Anm2 = __Bnm2 - (__t0 * __x); 
# 141
_Tp __Anm1 = (__Bnm1 - ((__t0 * (((_Tp)1) + (__t2 * __x))) * __x)) + ((((__t0 * __t1) * (__c / (__c + ((_Tp)1)))) * __x) * __x); 
# 144
int __n = 3; 
# 145
while (1) 
# 146
{ 
# 147
_Tp __npam1 = ((_Tp)(__n - 1)) + __a; 
# 148
_Tp __npcm1 = ((_Tp)(__n - 1)) + __c; 
# 149
_Tp __npam2 = ((_Tp)(__n - 2)) + __a; 
# 150
_Tp __npcm2 = ((_Tp)(__n - 2)) + __c; 
# 151
_Tp __tnm1 = (_Tp)((2 * __n) - 1); 
# 152
_Tp __tnm3 = (_Tp)((2 * __n) - 3); 
# 153
_Tp __tnm5 = (_Tp)((2 * __n) - 5); 
# 154
_Tp __F1 = (((_Tp)(__n - 2)) - __a) / ((((_Tp)2) * __tnm3) * __npcm1); 
# 155
_Tp __F2 = ((((_Tp)__n) + __a) * __npam1) / ((((((_Tp)4) * __tnm1) * __tnm3) * __npcm2) * __npcm1); 
# 157
_Tp __F3 = (((-__npam2) * __npam1) * (((_Tp)(__n - 2)) - __a)) / ((((((((_Tp)8) * __tnm3) * __tnm3) * __tnm5) * (((_Tp)(__n - 3)) + __c)) * __npcm2) * __npcm1); 
# 160
_Tp __E = ((-__npam1) * (((_Tp)(__n - 1)) - __c)) / (((((_Tp)2) * __tnm3) * __npcm2) * __npcm1); 
# 163
_Tp __An = (((((_Tp)1) + (__F1 * __x)) * __Anm1) + (((__E + (__F2 * __x)) * __x) * __Anm2)) + ((__F3 * __x3) * __Anm3); 
# 165
_Tp __Bn = (((((_Tp)1) + (__F1 * __x)) * __Bnm1) + (((__E + (__F2 * __x)) * __x) * __Bnm2)) + ((__F3 * __x3) * __Bnm3); 
# 167
_Tp __r = __An / __Bn; 
# 169
__prec = std::abs((__F - __r) / __F); 
# 170
__F = __r; 
# 172
if ((__prec < __eps) || (__n > __nmax)) { 
# 173
break; }  
# 175
if ((std::abs(__An) > __big) || (std::abs(__Bn) > __big)) 
# 176
{ 
# 177
__An /= __big; 
# 178
__Bn /= __big; 
# 179
__Anm1 /= __big; 
# 180
__Bnm1 /= __big; 
# 181
__Anm2 /= __big; 
# 182
__Bnm2 /= __big; 
# 183
__Anm3 /= __big; 
# 184
__Bnm3 /= __big; 
# 185
} else { 
# 186
if ((std::abs(__An) < (((_Tp)1) / __big)) || (std::abs(__Bn) < (((_Tp)1) / __big))) 
# 188
{ 
# 189
__An *= __big; 
# 190
__Bn *= __big; 
# 191
__Anm1 *= __big; 
# 192
__Bnm1 *= __big; 
# 193
__Anm2 *= __big; 
# 194
__Bnm2 *= __big; 
# 195
__Anm3 *= __big; 
# 196
__Bnm3 *= __big; 
# 197
}  }  
# 199
++__n; 
# 200
__Bnm3 = __Bnm2; 
# 201
__Bnm2 = __Bnm1; 
# 202
__Bnm1 = __Bn; 
# 203
__Anm3 = __Anm2; 
# 204
__Anm2 = __Anm1; 
# 205
__Anm1 = __An; 
# 206
}  
# 208
if (__n >= __nmax) { 
# 209
std::__throw_runtime_error("Iteration failed to converge in __conf_hyperg_luke."); }  
# 212
return __F; 
# 213
} 
# 227 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 229
__conf_hyperg(_Tp __a, _Tp __c, _Tp __x) 
# 230
{ 
# 232
const _Tp __c_nint = std::nearbyint(__c); 
# 236
if ((__isnan(__a) || __isnan(__c)) || __isnan(__x)) { 
# 237
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 238
if ((__c_nint == __c) && (__c_nint <= 0)) { 
# 239
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 240
if (__a == ((_Tp)0)) { 
# 241
return (_Tp)1; } else { 
# 242
if (__c == __a) { 
# 243
return std::exp(__x); } else { 
# 244
if (__x < ((_Tp)0)) { 
# 245
return __conf_hyperg_luke(__a, __c, __x); } else { 
# 247
return __conf_hyperg_series(__a, __c, __x); }  }  }  }  }  
# 248
} 
# 271 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 273
__hyperg_series(_Tp __a, _Tp __b, _Tp __c, _Tp __x) 
# 274
{ 
# 275
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 277
_Tp __term = ((_Tp)1); 
# 278
_Tp __Fabc = ((_Tp)1); 
# 279
const unsigned __max_iter = (100000); 
# 280
unsigned __i; 
# 281
for (__i = (0); __i < __max_iter; ++__i) 
# 282
{ 
# 283
__term *= ((((__a + ((_Tp)__i)) * (__b + ((_Tp)__i))) * __x) / ((__c + ((_Tp)__i)) * ((_Tp)((1) + __i)))); 
# 285
if (std::abs(__term) < __eps) 
# 286
{ 
# 287
break; 
# 288
}  
# 289
__Fabc += __term; 
# 290
}  
# 291
if (__i == __max_iter) { 
# 292
std::__throw_runtime_error("Series failed to converge in __hyperg_series."); }  
# 295
return __Fabc; 
# 296
} 
# 304
template< class _Tp> _Tp 
# 306
__hyperg_luke(_Tp __a, _Tp __b, _Tp __c, _Tp __xin) 
# 307
{ 
# 308
const _Tp __big = std::pow(std::template numeric_limits< _Tp> ::max(), (_Tp)(0.16L)); 
# 309
const int __nmax = 20000; 
# 310
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 311
const _Tp __x = (-__xin); 
# 312
const _Tp __x3 = (__x * __x) * __x; 
# 313
const _Tp __t0 = (__a * __b) / __c; 
# 314
const _Tp __t1 = ((__a + ((_Tp)1)) * (__b + ((_Tp)1))) / (((_Tp)2) * __c); 
# 315
const _Tp __t2 = ((__a + ((_Tp)2)) * (__b + ((_Tp)2))) / (((_Tp)2) * (__c + ((_Tp)1))); 
# 318
_Tp __F = ((_Tp)1); 
# 320
_Tp __Bnm3 = ((_Tp)1); 
# 321
_Tp __Bnm2 = ((_Tp)1) + (__t1 * __x); 
# 322
_Tp __Bnm1 = ((_Tp)1) + ((__t2 * __x) * (((_Tp)1) + ((__t1 / ((_Tp)3)) * __x))); 
# 324
_Tp __Anm3 = ((_Tp)1); 
# 325
_Tp __Anm2 = __Bnm2 - (__t0 * __x); 
# 326
_Tp __Anm1 = (__Bnm1 - ((__t0 * (((_Tp)1) + (__t2 * __x))) * __x)) + ((((__t0 * __t1) * (__c / (__c + ((_Tp)1)))) * __x) * __x); 
# 329
int __n = 3; 
# 330
while (1) 
# 331
{ 
# 332
const _Tp __npam1 = ((_Tp)(__n - 1)) + __a; 
# 333
const _Tp __npbm1 = ((_Tp)(__n - 1)) + __b; 
# 334
const _Tp __npcm1 = ((_Tp)(__n - 1)) + __c; 
# 335
const _Tp __npam2 = ((_Tp)(__n - 2)) + __a; 
# 336
const _Tp __npbm2 = ((_Tp)(__n - 2)) + __b; 
# 337
const _Tp __npcm2 = ((_Tp)(__n - 2)) + __c; 
# 338
const _Tp __tnm1 = (_Tp)((2 * __n) - 1); 
# 339
const _Tp __tnm3 = (_Tp)((2 * __n) - 3); 
# 340
const _Tp __tnm5 = (_Tp)((2 * __n) - 5); 
# 341
const _Tp __n2 = __n * __n; 
# 342
const _Tp __F1 = (((((((_Tp)3) * __n2) + (((__a + __b) - ((_Tp)6)) * __n)) + ((_Tp)2)) - (__a * __b)) - (((_Tp)2) * (__a + __b))) / ((((_Tp)2) * __tnm3) * __npcm1); 
# 345
const _Tp __F2 = (((-((((((_Tp)3) * __n2) - (((__a + __b) + ((_Tp)6)) * __n)) + ((_Tp)2)) - (__a * __b))) * __npam1) * __npbm1) / ((((((_Tp)4) * __tnm1) * __tnm3) * __npcm2) * __npcm1); 
# 348
const _Tp __F3 = (((((__npam2 * __npam1) * __npbm2) * __npbm1) * (((_Tp)(__n - 2)) - __a)) * (((_Tp)(__n - 2)) - __b)) / ((((((((_Tp)8) * __tnm3) * __tnm3) * __tnm5) * (((_Tp)(__n - 3)) + __c)) * __npcm2) * __npcm1); 
# 352
const _Tp __E = (((-__npam1) * __npbm1) * (((_Tp)(__n - 1)) - __c)) / (((((_Tp)2) * __tnm3) * __npcm2) * __npcm1); 
# 355
_Tp __An = (((((_Tp)1) + (__F1 * __x)) * __Anm1) + (((__E + (__F2 * __x)) * __x) * __Anm2)) + ((__F3 * __x3) * __Anm3); 
# 357
_Tp __Bn = (((((_Tp)1) + (__F1 * __x)) * __Bnm1) + (((__E + (__F2 * __x)) * __x) * __Bnm2)) + ((__F3 * __x3) * __Bnm3); 
# 359
const _Tp __r = __An / __Bn; 
# 361
const _Tp __prec = std::abs((__F - __r) / __F); 
# 362
__F = __r; 
# 364
if ((__prec < __eps) || (__n > __nmax)) { 
# 365
break; }  
# 367
if ((std::abs(__An) > __big) || (std::abs(__Bn) > __big)) 
# 368
{ 
# 369
__An /= __big; 
# 370
__Bn /= __big; 
# 371
__Anm1 /= __big; 
# 372
__Bnm1 /= __big; 
# 373
__Anm2 /= __big; 
# 374
__Bnm2 /= __big; 
# 375
__Anm3 /= __big; 
# 376
__Bnm3 /= __big; 
# 377
} else { 
# 378
if ((std::abs(__An) < (((_Tp)1) / __big)) || (std::abs(__Bn) < (((_Tp)1) / __big))) 
# 380
{ 
# 381
__An *= __big; 
# 382
__Bn *= __big; 
# 383
__Anm1 *= __big; 
# 384
__Bnm1 *= __big; 
# 385
__Anm2 *= __big; 
# 386
__Bnm2 *= __big; 
# 387
__Anm3 *= __big; 
# 388
__Bnm3 *= __big; 
# 389
}  }  
# 391
++__n; 
# 392
__Bnm3 = __Bnm2; 
# 393
__Bnm2 = __Bnm1; 
# 394
__Bnm1 = __Bn; 
# 395
__Anm3 = __Anm2; 
# 396
__Anm2 = __Anm1; 
# 397
__Anm1 = __An; 
# 398
}  
# 400
if (__n >= __nmax) { 
# 401
std::__throw_runtime_error("Iteration failed to converge in __hyperg_luke."); }  
# 404
return __F; 
# 405
} 
# 438 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 440
__hyperg_reflect(_Tp __a, _Tp __b, _Tp __c, _Tp __x) 
# 441
{ 
# 442
const _Tp __d = (__c - __a) - __b; 
# 443
const int __intd = std::floor(__d + ((_Tp)(0.5L))); 
# 444
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 445
const _Tp __toler = ((_Tp)1000) * __eps; 
# 446
const _Tp __log_max = std::log(std::template numeric_limits< _Tp> ::max()); 
# 447
const bool __d_integer = std::abs(__d - __intd) < __toler; 
# 449
if (__d_integer) 
# 450
{ 
# 451
const _Tp __ln_omx = std::log(((_Tp)1) - __x); 
# 452
const _Tp __ad = std::abs(__d); 
# 453
_Tp __F1, __F2; 
# 455
_Tp __d1, __d2; 
# 456
if (__d >= ((_Tp)0)) 
# 457
{ 
# 458
__d1 = __d; 
# 459
__d2 = ((_Tp)0); 
# 460
} else 
# 462
{ 
# 463
__d1 = ((_Tp)0); 
# 464
__d2 = __d; 
# 465
}  
# 467
const _Tp __lng_c = __log_gamma(__c); 
# 470
if (__ad < __eps) 
# 471
{ 
# 473
__F1 = ((_Tp)0); 
# 474
} else 
# 476
{ 
# 478
bool __ok_d1 = true; 
# 479
_Tp __lng_ad, __lng_ad1, __lng_bd1; 
# 480
try 
# 481
{ 
# 482
__lng_ad = __log_gamma(__ad); 
# 483
__lng_ad1 = __log_gamma(__a + __d1); 
# 484
__lng_bd1 = __log_gamma(__b + __d1); 
# 485
} 
# 486
catch (...) 
# 487
{ 
# 488
__ok_d1 = false; 
# 489
}  
# 491
if (__ok_d1) 
# 492
{ 
# 496
_Tp __sum1 = ((_Tp)1); 
# 497
_Tp __term = ((_Tp)1); 
# 498
_Tp __ln_pre1 = (((__lng_ad + __lng_c) + (__d2 * __ln_omx)) - __lng_ad1) - __lng_bd1; 
# 503
for (int __i = 1; __i < __ad; ++__i) 
# 504
{ 
# 505
const int __j = __i - 1; 
# 506
__term *= ((((((__a + __d2) + __j) * ((__b + __d2) + __j)) / ((((_Tp)1) + __d2) + __j)) / __i) * (((_Tp)1) - __x)); 
# 508
__sum1 += __term; 
# 509
}  
# 511
if (__ln_pre1 > __log_max) { 
# 512
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_luke."); } else { 
# 515
__F1 = (std::exp(__ln_pre1) * __sum1); }  
# 516
} else 
# 518
{ 
# 521
__F1 = ((_Tp)0); 
# 522
}  
# 523
}  
# 526
bool __ok_d2 = true; 
# 527
_Tp __lng_ad2, __lng_bd2; 
# 528
try 
# 529
{ 
# 530
__lng_ad2 = __log_gamma(__a + __d2); 
# 531
__lng_bd2 = __log_gamma(__b + __d2); 
# 532
} 
# 533
catch (...) 
# 534
{ 
# 535
__ok_d2 = false; 
# 536
}  
# 538
if (__ok_d2) 
# 539
{ 
# 542
const int __maxiter = 2000; 
# 543
const _Tp __psi_1 = (-__numeric_constants< _Tp> ::__gamma_e()); 
# 544
const _Tp __psi_1pd = __psi(((_Tp)1) + __ad); 
# 545
const _Tp __psi_apd1 = __psi(__a + __d1); 
# 546
const _Tp __psi_bpd1 = __psi(__b + __d1); 
# 548
_Tp __psi_term = (((__psi_1 + __psi_1pd) - __psi_apd1) - __psi_bpd1) - __ln_omx; 
# 550
_Tp __fact = ((_Tp)1); 
# 551
_Tp __sum2 = __psi_term; 
# 552
_Tp __ln_pre2 = ((__lng_c + (__d1 * __ln_omx)) - __lng_ad2) - __lng_bd2; 
# 556
int __j; 
# 557
for (__j = 1; __j < __maxiter; ++__j) 
# 558
{ 
# 561
const _Tp __term1 = (((_Tp)1) / ((_Tp)__j)) + (((_Tp)1) / (__ad + __j)); 
# 563
const _Tp __term2 = (((_Tp)1) / ((__a + __d1) + ((_Tp)(__j - 1)))) + (((_Tp)1) / ((__b + __d1) + ((_Tp)(__j - 1)))); 
# 565
__psi_term += (__term1 - __term2); 
# 566
__fact *= (((((__a + __d1) + ((_Tp)(__j - 1))) * ((__b + __d1) + ((_Tp)(__j - 1)))) / ((__ad + __j) * __j)) * (((_Tp)1) - __x)); 
# 569
const _Tp __delta = __fact * __psi_term; 
# 570
__sum2 += __delta; 
# 571
if (std::abs(__delta) < (__eps * std::abs(__sum2))) { 
# 572
break; }  
# 573
}  
# 574
if (__j == __maxiter) { 
# 575
std::__throw_runtime_error("Sum F2 failed to converge in __hyperg_reflect"); }  
# 578
if (__sum2 == ((_Tp)0)) { 
# 579
__F2 = ((_Tp)0); } else { 
# 581
__F2 = (std::exp(__ln_pre2) * __sum2); }  
# 582
} else 
# 584
{ 
# 587
__F2 = ((_Tp)0); 
# 588
}  
# 590
const _Tp __sgn_2 = (((__intd % 2) == 1) ? -((_Tp)1) : ((_Tp)1)); 
# 591
const _Tp __F = __F1 + (__sgn_2 * __F2); 
# 593
return __F; 
# 594
} else 
# 596
{ 
# 601
bool __ok1 = true; 
# 602
_Tp __sgn_g1ca = ((_Tp)0), __ln_g1ca = ((_Tp)0); 
# 603
_Tp __sgn_g1cb = ((_Tp)0), __ln_g1cb = ((_Tp)0); 
# 604
try 
# 605
{ 
# 606
__sgn_g1ca = __log_gamma_sign(__c - __a); 
# 607
__ln_g1ca = __log_gamma(__c - __a); 
# 608
__sgn_g1cb = __log_gamma_sign(__c - __b); 
# 609
__ln_g1cb = __log_gamma(__c - __b); 
# 610
} 
# 611
catch (...) 
# 612
{ 
# 613
__ok1 = false; 
# 614
}  
# 616
bool __ok2 = true; 
# 617
_Tp __sgn_g2a = ((_Tp)0), __ln_g2a = ((_Tp)0); 
# 618
_Tp __sgn_g2b = ((_Tp)0), __ln_g2b = ((_Tp)0); 
# 619
try 
# 620
{ 
# 621
__sgn_g2a = __log_gamma_sign(__a); 
# 622
__ln_g2a = __log_gamma(__a); 
# 623
__sgn_g2b = __log_gamma_sign(__b); 
# 624
__ln_g2b = __log_gamma(__b); 
# 625
} 
# 626
catch (...) 
# 627
{ 
# 628
__ok2 = false; 
# 629
}  
# 631
const _Tp __sgn_gc = __log_gamma_sign(__c); 
# 632
const _Tp __ln_gc = __log_gamma(__c); 
# 633
const _Tp __sgn_gd = __log_gamma_sign(__d); 
# 634
const _Tp __ln_gd = __log_gamma(__d); 
# 635
const _Tp __sgn_gmd = __log_gamma_sign(-__d); 
# 636
const _Tp __ln_gmd = __log_gamma(-__d); 
# 638
const _Tp __sgn1 = ((__sgn_gc * __sgn_gd) * __sgn_g1ca) * __sgn_g1cb; 
# 639
const _Tp __sgn2 = ((__sgn_gc * __sgn_gmd) * __sgn_g2a) * __sgn_g2b; 
# 641
_Tp __pre1, __pre2; 
# 642
if (__ok1 && __ok2) 
# 643
{ 
# 644
_Tp __ln_pre1 = ((__ln_gc + __ln_gd) - __ln_g1ca) - __ln_g1cb; 
# 645
_Tp __ln_pre2 = (((__ln_gc + __ln_gmd) - __ln_g2a) - __ln_g2b) + (__d * std::log(((_Tp)1) - __x)); 
# 647
if ((__ln_pre1 < __log_max) && (__ln_pre2 < __log_max)) 
# 648
{ 
# 649
__pre1 = std::exp(__ln_pre1); 
# 650
__pre2 = std::exp(__ln_pre2); 
# 651
__pre1 *= __sgn1; 
# 652
__pre2 *= __sgn2; 
# 653
} else 
# 655
{ 
# 656
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_reflect"); 
# 658
}  
# 659
} else { 
# 660
if (__ok1 && (!__ok2)) 
# 661
{ 
# 662
_Tp __ln_pre1 = ((__ln_gc + __ln_gd) - __ln_g1ca) - __ln_g1cb; 
# 663
if (__ln_pre1 < __log_max) 
# 664
{ 
# 665
__pre1 = std::exp(__ln_pre1); 
# 666
__pre1 *= __sgn1; 
# 667
__pre2 = ((_Tp)0); 
# 668
} else 
# 670
{ 
# 671
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_reflect"); 
# 673
}  
# 674
} else { 
# 675
if ((!__ok1) && __ok2) 
# 676
{ 
# 677
_Tp __ln_pre2 = (((__ln_gc + __ln_gmd) - __ln_g2a) - __ln_g2b) + (__d * std::log(((_Tp)1) - __x)); 
# 679
if (__ln_pre2 < __log_max) 
# 680
{ 
# 681
__pre1 = ((_Tp)0); 
# 682
__pre2 = std::exp(__ln_pre2); 
# 683
__pre2 *= __sgn2; 
# 684
} else 
# 686
{ 
# 687
std::__throw_runtime_error("Overflow of gamma functions in __hyperg_reflect"); 
# 689
}  
# 690
} else 
# 692
{ 
# 693
__pre1 = ((_Tp)0); 
# 694
__pre2 = ((_Tp)0); 
# 695
std::__throw_runtime_error("Underflow of gamma functions in __hyperg_reflect"); 
# 697
}  }  }  
# 699
const _Tp __F1 = __hyperg_series(__a, __b, ((_Tp)1) - __d, ((_Tp)1) - __x); 
# 701
const _Tp __F2 = __hyperg_series(__c - __a, __c - __b, ((_Tp)1) + __d, ((_Tp)1) - __x); 
# 704
const _Tp __F = (__pre1 * __F1) + (__pre2 * __F2); 
# 706
return __F; 
# 707
}  
# 708
} 
# 728 "/usr/include/c++/11/tr1/hypergeometric.tcc" 3
template< class _Tp> _Tp 
# 730
__hyperg(_Tp __a, _Tp __b, _Tp __c, _Tp __x) 
# 731
{ 
# 733
const _Tp __a_nint = std::nearbyint(__a); 
# 734
const _Tp __b_nint = std::nearbyint(__b); 
# 735
const _Tp __c_nint = std::nearbyint(__c); 
# 741
const _Tp __toler = ((_Tp)1000) * std::template numeric_limits< _Tp> ::epsilon(); 
# 742
if (std::abs(__x) >= ((_Tp)1)) { 
# 743
std::__throw_domain_error("Argument outside unit circle in __hyperg."); } else { 
# 745
if (((__isnan(__a) || __isnan(__b)) || __isnan(__c)) || __isnan(__x)) { 
# 747
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 748
if ((__c_nint == __c) && (__c_nint <= ((_Tp)0))) { 
# 749
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 750
if ((std::abs(__c - __b) < __toler) || (std::abs(__c - __a) < __toler)) { 
# 751
return std::pow(((_Tp)1) - __x, (__c - __a) - __b); } else { 
# 752
if ((__a >= ((_Tp)0)) && (__b >= ((_Tp)0)) && (__c >= ((_Tp)0)) && (__x >= ((_Tp)0)) && (__x < ((_Tp)(0.995L)))) { 
# 754
return __hyperg_series(__a, __b, __c, __x); } else { 
# 755
if ((std::abs(__a) < ((_Tp)10)) && (std::abs(__b) < ((_Tp)10))) 
# 756
{ 
# 759
if ((__a < ((_Tp)0)) && (std::abs(__a - __a_nint) < __toler)) { 
# 760
return __hyperg_series(__a_nint, __b, __c, __x); } else { 
# 761
if ((__b < ((_Tp)0)) && (std::abs(__b - __b_nint) < __toler)) { 
# 762
return __hyperg_series(__a, __b_nint, __c, __x); } else { 
# 763
if (__x < (-((_Tp)(0.25L)))) { 
# 764
return __hyperg_luke(__a, __b, __c, __x); } else { 
# 765
if (__x < ((_Tp)(0.5L))) { 
# 766
return __hyperg_series(__a, __b, __c, __x); } else { 
# 768
if (std::abs(__c) > ((_Tp)10)) { 
# 769
return __hyperg_series(__a, __b, __c, __x); } else { 
# 771
return __hyperg_reflect(__a, __b, __c, __x); }  }  }  }  }  
# 772
} else { 
# 774
return __hyperg_luke(__a, __b, __c, __x); }  }  }  }  }  }  
# 775
} 
# 776
}
# 783
}
# 49 "/usr/include/c++/11/tr1/legendre_function.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/usr/include/c++/11/tr1/legendre_function.tcc" 3
namespace __detail { 
# 80 "/usr/include/c++/11/tr1/legendre_function.tcc" 3
template< class _Tp> _Tp 
# 82
__poly_legendre_p(unsigned __l, _Tp __x) 
# 83
{ 
# 85
if (__isnan(__x)) { 
# 86
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 87
if (__x == (+((_Tp)1))) { 
# 88
return +((_Tp)1); } else { 
# 89
if (__x == (-((_Tp)1))) { 
# 90
return (((__l % (2)) == (1)) ? -((_Tp)1) : (+((_Tp)1))); } else 
# 92
{ 
# 93
_Tp __p_lm2 = ((_Tp)1); 
# 94
if (__l == (0)) { 
# 95
return __p_lm2; }  
# 97
_Tp __p_lm1 = __x; 
# 98
if (__l == (1)) { 
# 99
return __p_lm1; }  
# 101
_Tp __p_l = (0); 
# 102
for (unsigned __ll = (2); __ll <= __l; ++__ll) 
# 103
{ 
# 106
__p_l = ((((((_Tp)2) * __x) * __p_lm1) - __p_lm2) - (((__x * __p_lm1) - __p_lm2) / ((_Tp)__ll))); 
# 108
__p_lm2 = __p_lm1; 
# 109
__p_lm1 = __p_l; 
# 110
}  
# 112
return __p_l; 
# 113
}  }  }  
# 114
} 
# 136 "/usr/include/c++/11/tr1/legendre_function.tcc" 3
template< class _Tp> _Tp 
# 138
__assoc_legendre_p(unsigned __l, unsigned __m, _Tp __x, _Tp 
# 139
__phase = (_Tp)(+1)) 
# 140
{ 
# 142
if (__m > __l) { 
# 143
return (_Tp)0; } else { 
# 144
if (__isnan(__x)) { 
# 145
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 146
if (__m == (0)) { 
# 147
return __poly_legendre_p(__l, __x); } else 
# 149
{ 
# 150
_Tp __p_mm = ((_Tp)1); 
# 151
if (__m > (0)) 
# 152
{ 
# 155
_Tp __root = std::sqrt(((_Tp)1) - __x) * std::sqrt(((_Tp)1) + __x); 
# 156
_Tp __fact = ((_Tp)1); 
# 157
for (unsigned __i = (1); __i <= __m; ++__i) 
# 158
{ 
# 159
__p_mm *= ((__phase * __fact) * __root); 
# 160
__fact += ((_Tp)2); 
# 161
}  
# 162
}  
# 163
if (__l == __m) { 
# 164
return __p_mm; }  
# 166
_Tp __p_mp1m = (((_Tp)(((2) * __m) + (1))) * __x) * __p_mm; 
# 167
if (__l == (__m + (1))) { 
# 168
return __p_mp1m; }  
# 170
_Tp __p_lm2m = __p_mm; 
# 171
_Tp __P_lm1m = __p_mp1m; 
# 172
_Tp __p_lm = ((_Tp)0); 
# 173
for (unsigned __j = __m + (2); __j <= __l; ++__j) 
# 174
{ 
# 175
__p_lm = ((((((_Tp)(((2) * __j) - (1))) * __x) * __P_lm1m) - (((_Tp)((__j + __m) - (1))) * __p_lm2m)) / ((_Tp)(__j - __m))); 
# 177
__p_lm2m = __P_lm1m; 
# 178
__P_lm1m = __p_lm; 
# 179
}  
# 181
return __p_lm; 
# 182
}  }  }  
# 183
} 
# 214 "/usr/include/c++/11/tr1/legendre_function.tcc" 3
template< class _Tp> _Tp 
# 216
__sph_legendre(unsigned __l, unsigned __m, _Tp __theta) 
# 217
{ 
# 218
if (__isnan(__theta)) { 
# 219
return std::template numeric_limits< _Tp> ::quiet_NaN(); }  
# 221
const _Tp __x = std::cos(__theta); 
# 223
if (__m > __l) { 
# 224
return (_Tp)0; } else { 
# 225
if (__m == (0)) 
# 226
{ 
# 227
_Tp __P = __poly_legendre_p(__l, __x); 
# 228
_Tp __fact = std::sqrt(((_Tp)(((2) * __l) + (1))) / (((_Tp)4) * __numeric_constants< _Tp> ::__pi())); 
# 230
__P *= __fact; 
# 231
return __P; 
# 232
} else { 
# 233
if ((__x == ((_Tp)1)) || (__x == (-((_Tp)1)))) 
# 234
{ 
# 236
return (_Tp)0; 
# 237
} else 
# 239
{ 
# 245
const _Tp __sgn = ((__m % (2)) == (1)) ? -((_Tp)1) : ((_Tp)1); 
# 246
const _Tp __y_mp1m_factor = __x * std::sqrt((_Tp)(((2) * __m) + (3))); 
# 248
const _Tp __lncirc = std::log1p((-__x) * __x); 
# 254
const _Tp __lnpoch = std::lgamma((_Tp)(__m + ((_Tp)(0.5L)))) - std::lgamma((_Tp)__m); 
# 260
const _Tp __lnpre_val = ((-((_Tp)(0.25L))) * __numeric_constants< _Tp> ::__lnpi()) + (((_Tp)(0.5L)) * (__lnpoch + (__m * __lncirc))); 
# 263
const _Tp __sr = std::sqrt((((_Tp)2) + (((_Tp)1) / __m)) / (((_Tp)4) * __numeric_constants< _Tp> ::__pi())); 
# 265
_Tp __y_mm = (__sgn * __sr) * std::exp(__lnpre_val); 
# 266
_Tp __y_mp1m = __y_mp1m_factor * __y_mm; 
# 268
if (__l == __m) { 
# 269
return __y_mm; } else { 
# 270
if (__l == (__m + (1))) { 
# 271
return __y_mp1m; } else 
# 273
{ 
# 274
_Tp __y_lm = ((_Tp)0); 
# 277
for (unsigned __ll = __m + (2); __ll <= __l; ++__ll) 
# 278
{ 
# 279
const _Tp __rat1 = ((_Tp)(__ll - __m)) / ((_Tp)(__ll + __m)); 
# 280
const _Tp __rat2 = ((_Tp)((__ll - __m) - (1))) / ((_Tp)((__ll + __m) - (1))); 
# 281
const _Tp __fact1 = std::sqrt((__rat1 * ((_Tp)(((2) * __ll) + (1)))) * ((_Tp)(((2) * __ll) - (1)))); 
# 283
const _Tp __fact2 = std::sqrt(((__rat1 * __rat2) * ((_Tp)(((2) * __ll) + (1)))) / ((_Tp)(((2) * __ll) - (3)))); 
# 285
__y_lm = ((((__x * __y_mp1m) * __fact1) - ((((__ll + __m) - (1)) * __y_mm) * __fact2)) / ((_Tp)(__ll - __m))); 
# 287
__y_mm = __y_mp1m; 
# 288
__y_mp1m = __y_lm; 
# 289
}  
# 291
return __y_lm; 
# 292
}  }  
# 293
}  }  }  
# 294
} 
# 295
}
# 302
}
# 51 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 65 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
namespace __detail { 
# 83 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
template< class _Tp> void 
# 85
__bessel_ik(_Tp __nu, _Tp __x, _Tp &
# 86
__Inu, _Tp &__Knu, _Tp &__Ipnu, _Tp &__Kpnu) 
# 87
{ 
# 88
if (__x == ((_Tp)0)) 
# 89
{ 
# 90
if (__nu == ((_Tp)0)) 
# 91
{ 
# 92
__Inu = ((_Tp)1); 
# 93
__Ipnu = ((_Tp)0); 
# 94
} else { 
# 95
if (__nu == ((_Tp)1)) 
# 96
{ 
# 97
__Inu = ((_Tp)0); 
# 98
__Ipnu = ((_Tp)(0.5L)); 
# 99
} else 
# 101
{ 
# 102
__Inu = ((_Tp)0); 
# 103
__Ipnu = ((_Tp)0); 
# 104
}  }  
# 105
__Knu = std::template numeric_limits< _Tp> ::infinity(); 
# 106
__Kpnu = (-std::template numeric_limits< _Tp> ::infinity()); 
# 107
return; 
# 108
}  
# 110
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 111
const _Tp __fp_min = ((_Tp)10) * std::template numeric_limits< _Tp> ::epsilon(); 
# 112
const int __max_iter = 15000; 
# 113
const _Tp __x_min = ((_Tp)2); 
# 115
const int __nl = static_cast< int>(__nu + ((_Tp)(0.5L))); 
# 117
const _Tp __mu = __nu - __nl; 
# 118
const _Tp __mu2 = __mu * __mu; 
# 119
const _Tp __xi = ((_Tp)1) / __x; 
# 120
const _Tp __xi2 = ((_Tp)2) * __xi; 
# 121
_Tp __h = __nu * __xi; 
# 122
if (__h < __fp_min) { 
# 123
__h = __fp_min; }  
# 124
_Tp __b = __xi2 * __nu; 
# 125
_Tp __d = ((_Tp)0); 
# 126
_Tp __c = __h; 
# 127
int __i; 
# 128
for (__i = 1; __i <= __max_iter; ++__i) 
# 129
{ 
# 130
__b += __xi2; 
# 131
__d = (((_Tp)1) / (__b + __d)); 
# 132
__c = (__b + (((_Tp)1) / __c)); 
# 133
const _Tp __del = __c * __d; 
# 134
__h *= __del; 
# 135
if (std::abs(__del - ((_Tp)1)) < __eps) { 
# 136
break; }  
# 137
}  
# 138
if (__i > __max_iter) { 
# 139
std::__throw_runtime_error("Argument x too large in __bessel_ik; try asymptotic expansion."); }  
# 142
_Tp __Inul = __fp_min; 
# 143
_Tp __Ipnul = __h * __Inul; 
# 144
_Tp __Inul1 = __Inul; 
# 145
_Tp __Ipnu1 = __Ipnul; 
# 146
_Tp __fact = __nu * __xi; 
# 147
for (int __l = __nl; __l >= 1; --__l) 
# 148
{ 
# 149
const _Tp __Inutemp = (__fact * __Inul) + __Ipnul; 
# 150
__fact -= __xi; 
# 151
__Ipnul = ((__fact * __Inutemp) + __Inul); 
# 152
__Inul = __Inutemp; 
# 153
}  
# 154
_Tp __f = __Ipnul / __Inul; 
# 155
_Tp __Kmu, __Knu1; 
# 156
if (__x < __x_min) 
# 157
{ 
# 158
const _Tp __x2 = __x / ((_Tp)2); 
# 159
const _Tp __pimu = __numeric_constants< _Tp> ::__pi() * __mu; 
# 160
const _Tp __fact = (std::abs(__pimu) < __eps) ? (_Tp)1 : (__pimu / std::sin(__pimu)); 
# 162
_Tp __d = (-std::log(__x2)); 
# 163
_Tp __e = __mu * __d; 
# 164
const _Tp __fact2 = (std::abs(__e) < __eps) ? (_Tp)1 : (std::sinh(__e) / __e); 
# 166
_Tp __gam1, __gam2, __gampl, __gammi; 
# 167
__gamma_temme(__mu, __gam1, __gam2, __gampl, __gammi); 
# 168
_Tp __ff = __fact * ((__gam1 * std::cosh(__e)) + ((__gam2 * __fact2) * __d)); 
# 170
_Tp __sum = __ff; 
# 171
__e = std::exp(__e); 
# 172
_Tp __p = __e / (((_Tp)2) * __gampl); 
# 173
_Tp __q = ((_Tp)1) / ((((_Tp)2) * __e) * __gammi); 
# 174
_Tp __c = ((_Tp)1); 
# 175
__d = (__x2 * __x2); 
# 176
_Tp __sum1 = __p; 
# 177
int __i; 
# 178
for (__i = 1; __i <= __max_iter; ++__i) 
# 179
{ 
# 180
__ff = ((((__i * __ff) + __p) + __q) / ((__i * __i) - __mu2)); 
# 181
__c *= (__d / __i); 
# 182
__p /= (__i - __mu); 
# 183
__q /= (__i + __mu); 
# 184
const _Tp __del = __c * __ff; 
# 185
__sum += __del; 
# 186
const _Tp __del1 = __c * (__p - (__i * __ff)); 
# 187
__sum1 += __del1; 
# 188
if (std::abs(__del) < (__eps * std::abs(__sum))) { 
# 189
break; }  
# 190
}  
# 191
if (__i > __max_iter) { 
# 192
std::__throw_runtime_error("Bessel k series failed to converge in __bessel_ik."); }  
# 194
__Kmu = __sum; 
# 195
__Knu1 = (__sum1 * __xi2); 
# 196
} else 
# 198
{ 
# 199
_Tp __b = ((_Tp)2) * (((_Tp)1) + __x); 
# 200
_Tp __d = ((_Tp)1) / __b; 
# 201
_Tp __delh = __d; 
# 202
_Tp __h = __delh; 
# 203
_Tp __q1 = ((_Tp)0); 
# 204
_Tp __q2 = ((_Tp)1); 
# 205
_Tp __a1 = ((_Tp)(0.25L)) - __mu2; 
# 206
_Tp __q = __c = __a1; 
# 207
_Tp __a = (-__a1); 
# 208
_Tp __s = ((_Tp)1) + (__q * __delh); 
# 209
int __i; 
# 210
for (__i = 2; __i <= __max_iter; ++__i) 
# 211
{ 
# 212
__a -= (2 * (__i - 1)); 
# 213
__c = (((-__a) * __c) / __i); 
# 214
const _Tp __qnew = (__q1 - (__b * __q2)) / __a; 
# 215
__q1 = __q2; 
# 216
__q2 = __qnew; 
# 217
__q += (__c * __qnew); 
# 218
__b += ((_Tp)2); 
# 219
__d = (((_Tp)1) / (__b + (__a * __d))); 
# 220
__delh = (((__b * __d) - ((_Tp)1)) * __delh); 
# 221
__h += __delh; 
# 222
const _Tp __dels = __q * __delh; 
# 223
__s += __dels; 
# 224
if (std::abs(__dels / __s) < __eps) { 
# 225
break; }  
# 226
}  
# 227
if (__i > __max_iter) { 
# 228
std::__throw_runtime_error("Steed\'s method failed in __bessel_ik."); }  
# 230
__h = (__a1 * __h); 
# 231
__Kmu = ((std::sqrt(__numeric_constants< _Tp> ::__pi() / (((_Tp)2) * __x)) * std::exp(-__x)) / __s); 
# 233
__Knu1 = ((__Kmu * (((__mu + __x) + ((_Tp)(0.5L))) - __h)) * __xi); 
# 234
}  
# 236
_Tp __Kpmu = ((__mu * __xi) * __Kmu) - __Knu1; 
# 237
_Tp __Inumu = __xi / ((__f * __Kmu) - __Kpmu); 
# 238
__Inu = ((__Inumu * __Inul1) / __Inul); 
# 239
__Ipnu = ((__Inumu * __Ipnu1) / __Inul); 
# 240
for (__i = 1; __i <= __nl; ++__i) 
# 241
{ 
# 242
const _Tp __Knutemp = (((__mu + __i) * __xi2) * __Knu1) + __Kmu; 
# 243
__Kmu = __Knu1; 
# 244
__Knu1 = __Knutemp; 
# 245
}  
# 246
__Knu = __Kmu; 
# 247
__Kpnu = (((__nu * __xi) * __Kmu) - __Knu1); 
# 250
} 
# 267 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
template< class _Tp> _Tp 
# 269
__cyl_bessel_i(_Tp __nu, _Tp __x) 
# 270
{ 
# 271
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 272
std::__throw_domain_error("Bad argument in __cyl_bessel_i."); } else { 
# 274
if (__isnan(__nu) || __isnan(__x)) { 
# 275
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 276
if ((__x * __x) < (((_Tp)10) * (__nu + ((_Tp)1)))) { 
# 277
return __cyl_bessel_ij_series(__nu, __x, +((_Tp)1), 200); } else 
# 279
{ 
# 280
_Tp __I_nu, __K_nu, __Ip_nu, __Kp_nu; 
# 281
__bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 282
return __I_nu; 
# 283
}  }  }  
# 284
} 
# 303 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
template< class _Tp> _Tp 
# 305
__cyl_bessel_k(_Tp __nu, _Tp __x) 
# 306
{ 
# 307
if ((__nu < ((_Tp)0)) || (__x < ((_Tp)0))) { 
# 308
std::__throw_domain_error("Bad argument in __cyl_bessel_k."); } else { 
# 310
if (__isnan(__nu) || __isnan(__x)) { 
# 311
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else 
# 313
{ 
# 314
_Tp __I_nu, __K_nu, __Ip_nu, __Kp_nu; 
# 315
__bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 316
return __K_nu; 
# 317
}  }  
# 318
} 
# 337 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
template< class _Tp> void 
# 339
__sph_bessel_ik(unsigned __n, _Tp __x, _Tp &
# 340
__i_n, _Tp &__k_n, _Tp &__ip_n, _Tp &__kp_n) 
# 341
{ 
# 342
const _Tp __nu = ((_Tp)__n) + ((_Tp)(0.5L)); 
# 344
_Tp __I_nu, __Ip_nu, __K_nu, __Kp_nu; 
# 345
__bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 347
const _Tp __factor = __numeric_constants< _Tp> ::__sqrtpio2() / std::sqrt(__x); 
# 350
__i_n = (__factor * __I_nu); 
# 351
__k_n = (__factor * __K_nu); 
# 352
__ip_n = ((__factor * __Ip_nu) - (__i_n / (((_Tp)2) * __x))); 
# 353
__kp_n = ((__factor * __Kp_nu) - (__k_n / (((_Tp)2) * __x))); 
# 356
} 
# 373 "/usr/include/c++/11/tr1/modified_bessel_func.tcc" 3
template< class _Tp> void 
# 375
__airy(_Tp __x, _Tp &__Ai, _Tp &__Bi, _Tp &__Aip, _Tp &__Bip) 
# 376
{ 
# 377
const _Tp __absx = std::abs(__x); 
# 378
const _Tp __rootx = std::sqrt(__absx); 
# 379
const _Tp __z = ((((_Tp)2) * __absx) * __rootx) / ((_Tp)3); 
# 380
const _Tp _S_inf = std::template numeric_limits< _Tp> ::infinity(); 
# 382
if (__isnan(__x)) { 
# 383
__Bip = (__Aip = (__Bi = (__Ai = std::template numeric_limits< _Tp> ::quiet_NaN()))); } else { 
# 384
if (__z == _S_inf) 
# 385
{ 
# 386
__Aip = (__Ai = ((_Tp)0)); 
# 387
__Bip = (__Bi = _S_inf); 
# 388
} else { 
# 389
if (__z == (-_S_inf)) { 
# 390
__Bip = (__Aip = (__Bi = (__Ai = ((_Tp)0)))); } else { 
# 391
if (__x > ((_Tp)0)) 
# 392
{ 
# 393
_Tp __I_nu, __Ip_nu, __K_nu, __Kp_nu; 
# 395
__bessel_ik(((_Tp)1) / ((_Tp)3), __z, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 396
__Ai = ((__rootx * __K_nu) / (__numeric_constants< _Tp> ::__sqrt3() * __numeric_constants< _Tp> ::__pi())); 
# 399
__Bi = (__rootx * ((__K_nu / __numeric_constants< _Tp> ::__pi()) + ((((_Tp)2) * __I_nu) / __numeric_constants< _Tp> ::__sqrt3()))); 
# 402
__bessel_ik(((_Tp)2) / ((_Tp)3), __z, __I_nu, __K_nu, __Ip_nu, __Kp_nu); 
# 403
__Aip = (((-__x) * __K_nu) / (__numeric_constants< _Tp> ::__sqrt3() * __numeric_constants< _Tp> ::__pi())); 
# 406
__Bip = (__x * ((__K_nu / __numeric_constants< _Tp> ::__pi()) + ((((_Tp)2) * __I_nu) / __numeric_constants< _Tp> ::__sqrt3()))); 
# 409
} else { 
# 410
if (__x < ((_Tp)0)) 
# 411
{ 
# 412
_Tp __J_nu, __Jp_nu, __N_nu, __Np_nu; 
# 414
__bessel_jn(((_Tp)1) / ((_Tp)3), __z, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 415
__Ai = ((__rootx * (__J_nu - (__N_nu / __numeric_constants< _Tp> ::__sqrt3()))) / ((_Tp)2)); 
# 417
__Bi = (((-__rootx) * (__N_nu + (__J_nu / __numeric_constants< _Tp> ::__sqrt3()))) / ((_Tp)2)); 
# 420
__bessel_jn(((_Tp)2) / ((_Tp)3), __z, __J_nu, __N_nu, __Jp_nu, __Np_nu); 
# 421
__Aip = ((__absx * ((__N_nu / __numeric_constants< _Tp> ::__sqrt3()) + __J_nu)) / ((_Tp)2)); 
# 423
__Bip = ((__absx * ((__J_nu / __numeric_constants< _Tp> ::__sqrt3()) - __N_nu)) / ((_Tp)2)); 
# 425
} else 
# 427
{ 
# 431
__Ai = ((_Tp)(0.35502805388781723926L)); 
# 432
__Bi = (__Ai * __numeric_constants< _Tp> ::__sqrt3()); 
# 437
__Aip = (-((_Tp)(0.2588194037928067984L))); 
# 438
__Bip = ((-__Aip) * __numeric_constants< _Tp> ::__sqrt3()); 
# 439
}  }  }  }  }  
# 442
} 
# 443
}
# 449
}
# 42 "/usr/include/c++/11/tr1/poly_hermite.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 56 "/usr/include/c++/11/tr1/poly_hermite.tcc" 3
namespace __detail { 
# 72 "/usr/include/c++/11/tr1/poly_hermite.tcc" 3
template< class _Tp> _Tp 
# 74
__poly_hermite_recursion(unsigned __n, _Tp __x) 
# 75
{ 
# 77
_Tp __H_0 = (1); 
# 78
if (__n == (0)) { 
# 79
return __H_0; }  
# 82
_Tp __H_1 = 2 * __x; 
# 83
if (__n == (1)) { 
# 84
return __H_1; }  
# 87
_Tp __H_n, __H_nm1, __H_nm2; 
# 88
unsigned __i; 
# 89
for (((__H_nm2 = __H_0), (__H_nm1 = __H_1)), (__i = (2)); __i <= __n; ++__i) 
# 90
{ 
# 91
__H_n = (2 * ((__x * __H_nm1) - ((__i - (1)) * __H_nm2))); 
# 92
__H_nm2 = __H_nm1; 
# 93
__H_nm1 = __H_n; 
# 94
}  
# 96
return __H_n; 
# 97
} 
# 114 "/usr/include/c++/11/tr1/poly_hermite.tcc" 3
template< class _Tp> inline _Tp 
# 116
__poly_hermite(unsigned __n, _Tp __x) 
# 117
{ 
# 118
if (__isnan(__x)) { 
# 119
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 121
return __poly_hermite_recursion(__n, __x); }  
# 122
} 
# 123
}
# 129
}
# 44 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 60 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
namespace __detail { 
# 75 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 77
__poly_laguerre_large_n(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 78
{ 
# 79
const _Tp __a = (-((_Tp)__n)); 
# 80
const _Tp __b = ((_Tp)__alpha1) + ((_Tp)1); 
# 81
const _Tp __eta = (((_Tp)2) * __b) - (((_Tp)4) * __a); 
# 82
const _Tp __cos2th = __x / __eta; 
# 83
const _Tp __sin2th = ((_Tp)1) - __cos2th; 
# 84
const _Tp __th = std::acos(std::sqrt(__cos2th)); 
# 85
const _Tp __pre_h = ((((__numeric_constants< _Tp> ::__pi_2() * __numeric_constants< _Tp> ::__pi_2()) * __eta) * __eta) * __cos2th) * __sin2th; 
# 90
const _Tp __lg_b = std::lgamma(((_Tp)__n) + __b); 
# 91
const _Tp __lnfact = std::lgamma((_Tp)(__n + (1))); 
# 97
_Tp __pre_term1 = (((_Tp)(0.5L)) * (((_Tp)1) - __b)) * std::log((((_Tp)(0.25L)) * __x) * __eta); 
# 99
_Tp __pre_term2 = ((_Tp)(0.25L)) * std::log(__pre_h); 
# 100
_Tp __lnpre = (((__lg_b - __lnfact) + (((_Tp)(0.5L)) * __x)) + __pre_term1) - __pre_term2; 
# 102
_Tp __ser_term1 = std::sin(__a * __numeric_constants< _Tp> ::__pi()); 
# 103
_Tp __ser_term2 = std::sin(((((_Tp)(0.25L)) * __eta) * ((((_Tp)2) * __th) - std::sin(((_Tp)2) * __th))) + __numeric_constants< _Tp> ::__pi_4()); 
# 107
_Tp __ser = __ser_term1 + __ser_term2; 
# 109
return std::exp(__lnpre) * __ser; 
# 110
} 
# 129 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 131
__poly_laguerre_hyperg(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 132
{ 
# 133
const _Tp __b = ((_Tp)__alpha1) + ((_Tp)1); 
# 134
const _Tp __mx = (-__x); 
# 135
const _Tp __tc_sgn = (__x < ((_Tp)0)) ? (_Tp)1 : (((__n % (2)) == (1)) ? -((_Tp)1) : ((_Tp)1)); 
# 138
_Tp __tc = ((_Tp)1); 
# 139
const _Tp __ax = std::abs(__x); 
# 140
for (unsigned __k = (1); __k <= __n; ++__k) { 
# 141
__tc *= (__ax / __k); }  
# 143
_Tp __term = __tc * __tc_sgn; 
# 144
_Tp __sum = __term; 
# 145
for (int __k = ((int)__n) - 1; __k >= 0; --__k) 
# 146
{ 
# 147
__term *= ((((__b + ((_Tp)__k)) / ((_Tp)(((int)__n) - __k))) * ((_Tp)(__k + 1))) / __mx); 
# 149
__sum += __term; 
# 150
}  
# 152
return __sum; 
# 153
} 
# 185 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 187
__poly_laguerre_recursion(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 188
{ 
# 190
_Tp __l_0 = ((_Tp)1); 
# 191
if (__n == (0)) { 
# 192
return __l_0; }  
# 195
_Tp __l_1 = (((-__x) + ((_Tp)1)) + ((_Tp)__alpha1)); 
# 196
if (__n == (1)) { 
# 197
return __l_1; }  
# 200
_Tp __l_n2 = __l_0; 
# 201
_Tp __l_n1 = __l_1; 
# 202
_Tp __l_n = ((_Tp)0); 
# 203
for (unsigned __nn = (2); __nn <= __n; ++__nn) 
# 204
{ 
# 205
__l_n = (((((((_Tp)(((2) * __nn) - (1))) + ((_Tp)__alpha1)) - __x) * __l_n1) / ((_Tp)__nn)) - (((((_Tp)(__nn - (1))) + ((_Tp)__alpha1)) * __l_n2) / ((_Tp)__nn))); 
# 208
__l_n2 = __l_n1; 
# 209
__l_n1 = __l_n; 
# 210
}  
# 212
return __l_n; 
# 213
} 
# 244 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
template< class _Tpa, class _Tp> _Tp 
# 246
__poly_laguerre(unsigned __n, _Tpa __alpha1, _Tp __x) 
# 247
{ 
# 248
if (__x < ((_Tp)0)) { 
# 249
std::__throw_domain_error("Negative argument in __poly_laguerre."); } else { 
# 252
if (__isnan(__x)) { 
# 253
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 254
if (__n == (0)) { 
# 255
return (_Tp)1; } else { 
# 256
if (__n == (1)) { 
# 257
return (((_Tp)1) + ((_Tp)__alpha1)) - __x; } else { 
# 258
if (__x == ((_Tp)0)) 
# 259
{ 
# 260
_Tp __prod = ((_Tp)__alpha1) + ((_Tp)1); 
# 261
for (unsigned __k = (2); __k <= __n; ++__k) { 
# 262
__prod *= ((((_Tp)__alpha1) + ((_Tp)__k)) / ((_Tp)__k)); }  
# 263
return __prod; 
# 264
} else { 
# 265
if ((__n > (10000000)) && (((_Tp)__alpha1) > (-((_Tp)1))) && (__x < ((((_Tp)2) * (((_Tp)__alpha1) + ((_Tp)1))) + ((_Tp)((4) * __n))))) { 
# 267
return __poly_laguerre_large_n(__n, __alpha1, __x); } else { 
# 268
if ((((_Tp)__alpha1) >= ((_Tp)0)) || ((__x > ((_Tp)0)) && (((_Tp)__alpha1) < (-((_Tp)(__n + (1))))))) { 
# 270
return __poly_laguerre_recursion(__n, __alpha1, __x); } else { 
# 272
return __poly_laguerre_hyperg(__n, __alpha1, __x); }  }  }  }  }  }  }  
# 273
} 
# 296 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
template< class _Tp> inline _Tp 
# 298
__assoc_laguerre(unsigned __n, unsigned __m, _Tp __x) 
# 299
{ return __poly_laguerre< unsigned, _Tp> (__n, __m, __x); } 
# 316 "/usr/include/c++/11/tr1/poly_laguerre.tcc" 3
template< class _Tp> inline _Tp 
# 318
__laguerre(unsigned __n, _Tp __x) 
# 319
{ return __poly_laguerre< unsigned, _Tp> (__n, 0, __x); } 
# 320
}
# 327
}
# 47 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 63 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
namespace __detail { 
# 78 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 80
__riemann_zeta_sum(_Tp __s) 
# 81
{ 
# 83
if (__s < ((_Tp)1)) { 
# 84
std::__throw_domain_error("Bad argument in zeta sum."); }  
# 86
const unsigned max_iter = (10000); 
# 87
_Tp __zeta = ((_Tp)0); 
# 88
for (unsigned __k = (1); __k < max_iter; ++__k) 
# 89
{ 
# 90
_Tp __term = std::pow(static_cast< _Tp>(__k), -__s); 
# 91
if (__term < std::template numeric_limits< _Tp> ::epsilon()) 
# 92
{ 
# 93
break; 
# 94
}  
# 95
__zeta += __term; 
# 96
}  
# 98
return __zeta; 
# 99
} 
# 115 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 117
__riemann_zeta_alt(_Tp __s) 
# 118
{ 
# 119
_Tp __sgn = ((_Tp)1); 
# 120
_Tp __zeta = ((_Tp)0); 
# 121
for (unsigned __i = (1); __i < (10000000); ++__i) 
# 122
{ 
# 123
_Tp __term = __sgn / std::pow(__i, __s); 
# 124
if (std::abs(__term) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 125
break; }  
# 126
__zeta += __term; 
# 127
__sgn *= ((_Tp)(-1)); 
# 128
}  
# 129
__zeta /= (((_Tp)1) - std::pow((_Tp)2, ((_Tp)1) - __s)); 
# 131
return __zeta; 
# 132
} 
# 157 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 159
__riemann_zeta_glob(_Tp __s) 
# 160
{ 
# 161
_Tp __zeta = ((_Tp)0); 
# 163
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 165
const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 170
if (__s < ((_Tp)0)) 
# 171
{ 
# 173
if (std::fmod(__s, (_Tp)2) == ((_Tp)0)) { 
# 174
return (_Tp)0; } else 
# 177
{ 
# 178
_Tp __zeta = __riemann_zeta_glob(((_Tp)1) - __s); 
# 179
__zeta *= (((std::pow(((_Tp)2) * __numeric_constants< _Tp> ::__pi(), __s) * std::sin(__numeric_constants< _Tp> ::__pi_2() * __s)) * std::exp(std::lgamma(((_Tp)1) - __s))) / __numeric_constants< _Tp> ::__pi()); 
# 188
return __zeta; 
# 189
}  
# 190
}  
# 192
_Tp __num = ((_Tp)(0.5L)); 
# 193
const unsigned __maxit = (10000); 
# 194
for (unsigned __i = (0); __i < __maxit; ++__i) 
# 195
{ 
# 196
bool __punt = false; 
# 197
_Tp __sgn = ((_Tp)1); 
# 198
_Tp __term = ((_Tp)0); 
# 199
for (unsigned __j = (0); __j <= __i; ++__j) 
# 200
{ 
# 202
_Tp __bincoeff = (std::lgamma((_Tp)((1) + __i)) - std::lgamma((_Tp)((1) + __j))) - std::lgamma((_Tp)(((1) + __i) - __j)); 
# 210
if (__bincoeff > __max_bincoeff) 
# 211
{ 
# 213
__punt = true; 
# 214
break; 
# 215
}  
# 216
__bincoeff = std::exp(__bincoeff); 
# 217
__term += ((__sgn * __bincoeff) * std::pow((_Tp)((1) + __j), -__s)); 
# 218
__sgn *= ((_Tp)(-1)); 
# 219
}  
# 220
if (__punt) { 
# 221
break; }  
# 222
__term *= __num; 
# 223
__zeta += __term; 
# 224
if (std::abs(__term / __zeta) < __eps) { 
# 225
break; }  
# 226
__num *= ((_Tp)(0.5L)); 
# 227
}  
# 229
__zeta /= (((_Tp)1) - std::pow((_Tp)2, ((_Tp)1) - __s)); 
# 231
return __zeta; 
# 232
} 
# 252 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 254
__riemann_zeta_product(_Tp __s) 
# 255
{ 
# 256
static const _Tp __prime[] = {((_Tp)2), ((_Tp)3), ((_Tp)5), ((_Tp)7), ((_Tp)11), ((_Tp)13), ((_Tp)17), ((_Tp)19), ((_Tp)23), ((_Tp)29), ((_Tp)31), ((_Tp)37), ((_Tp)41), ((_Tp)43), ((_Tp)47), ((_Tp)53), ((_Tp)59), ((_Tp)61), ((_Tp)67), ((_Tp)71), ((_Tp)73), ((_Tp)79), ((_Tp)83), ((_Tp)89), ((_Tp)97), ((_Tp)101), ((_Tp)103), ((_Tp)107), ((_Tp)109)}; 
# 262
static const unsigned __num_primes = (sizeof(__prime) / sizeof(_Tp)); 
# 264
_Tp __zeta = ((_Tp)1); 
# 265
for (unsigned __i = (0); __i < __num_primes; ++__i) 
# 266
{ 
# 267
const _Tp __fact = ((_Tp)1) - std::pow(__prime[__i], -__s); 
# 268
__zeta *= __fact; 
# 269
if ((((_Tp)1) - __fact) < std::template numeric_limits< _Tp> ::epsilon()) { 
# 270
break; }  
# 271
}  
# 273
__zeta = (((_Tp)1) / __zeta); 
# 275
return __zeta; 
# 276
} 
# 293 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 295
__riemann_zeta(_Tp __s) 
# 296
{ 
# 297
if (__isnan(__s)) { 
# 298
return std::template numeric_limits< _Tp> ::quiet_NaN(); } else { 
# 299
if (__s == ((_Tp)1)) { 
# 300
return std::template numeric_limits< _Tp> ::infinity(); } else { 
# 301
if (__s < (-((_Tp)19))) 
# 302
{ 
# 303
_Tp __zeta = __riemann_zeta_product(((_Tp)1) - __s); 
# 304
__zeta *= (((std::pow(((_Tp)2) * __numeric_constants< _Tp> ::__pi(), __s) * std::sin(__numeric_constants< _Tp> ::__pi_2() * __s)) * std::exp(std::lgamma(((_Tp)1) - __s))) / __numeric_constants< _Tp> ::__pi()); 
# 312
return __zeta; 
# 313
} else { 
# 314
if (__s < ((_Tp)20)) 
# 315
{ 
# 317
bool __glob = true; 
# 318
if (__glob) { 
# 319
return __riemann_zeta_glob(__s); } else 
# 321
{ 
# 322
if (__s > ((_Tp)1)) { 
# 323
return __riemann_zeta_sum(__s); } else 
# 325
{ 
# 326
_Tp __zeta = ((std::pow(((_Tp)2) * __numeric_constants< _Tp> ::__pi(), __s) * std::sin(__numeric_constants< _Tp> ::__pi_2() * __s)) * std::tgamma(((_Tp)1) - __s)) * __riemann_zeta_sum(((_Tp)1) - __s); 
# 335
return __zeta; 
# 336
}  
# 337
}  
# 338
} else { 
# 340
return __riemann_zeta_product(__s); }  }  }  }  
# 341
} 
# 365 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> _Tp 
# 367
__hurwitz_zeta_glob(_Tp __a, _Tp __s) 
# 368
{ 
# 369
_Tp __zeta = ((_Tp)0); 
# 371
const _Tp __eps = std::template numeric_limits< _Tp> ::epsilon(); 
# 373
const _Tp __max_bincoeff = (std::template numeric_limits< _Tp> ::max_exponent10 * std::log((_Tp)10)) - ((_Tp)1); 
# 376
const unsigned __maxit = (10000); 
# 377
for (unsigned __i = (0); __i < __maxit; ++__i) 
# 378
{ 
# 379
bool __punt = false; 
# 380
_Tp __sgn = ((_Tp)1); 
# 381
_Tp __term = ((_Tp)0); 
# 382
for (unsigned __j = (0); __j <= __i; ++__j) 
# 383
{ 
# 385
_Tp __bincoeff = (std::lgamma((_Tp)((1) + __i)) - std::lgamma((_Tp)((1) + __j))) - std::lgamma((_Tp)(((1) + __i) - __j)); 
# 393
if (__bincoeff > __max_bincoeff) 
# 394
{ 
# 396
__punt = true; 
# 397
break; 
# 398
}  
# 399
__bincoeff = std::exp(__bincoeff); 
# 400
__term += ((__sgn * __bincoeff) * std::pow((_Tp)(__a + __j), -__s)); 
# 401
__sgn *= ((_Tp)(-1)); 
# 402
}  
# 403
if (__punt) { 
# 404
break; }  
# 405
__term /= ((_Tp)(__i + (1))); 
# 406
if (std::abs(__term / __zeta) < __eps) { 
# 407
break; }  
# 408
__zeta += __term; 
# 409
}  
# 411
__zeta /= (__s - ((_Tp)1)); 
# 413
return __zeta; 
# 414
} 
# 430 "/usr/include/c++/11/tr1/riemann_zeta.tcc" 3
template< class _Tp> inline _Tp 
# 432
__hurwitz_zeta(_Tp __a, _Tp __s) 
# 433
{ return __hurwitz_zeta_glob(__a, __s); } 
# 434
}
# 441
}
# 61 "/usr/include/c++/11/bits/specfun.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 206 "/usr/include/c++/11/bits/specfun.h" 3
inline float assoc_laguerref(unsigned __n, unsigned __m, float __x) 
# 207
{ return __detail::__assoc_laguerre< float> (__n, __m, __x); } 
# 216
inline long double assoc_laguerrel(unsigned __n, unsigned __m, long double __x) 
# 217
{ return __detail::__assoc_laguerre< long double> (__n, __m, __x); } 
# 250 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 252
assoc_laguerre(unsigned __n, unsigned __m, _Tp __x) 
# 253
{ 
# 254
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 255
return __detail::__assoc_laguerre< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __m, __x); 
# 256
} 
# 267 "/usr/include/c++/11/bits/specfun.h" 3
inline float assoc_legendref(unsigned __l, unsigned __m, float __x) 
# 268
{ return __detail::__assoc_legendre_p< float> (__l, __m, __x); } 
# 276
inline long double assoc_legendrel(unsigned __l, unsigned __m, long double __x) 
# 277
{ return __detail::__assoc_legendre_p< long double> (__l, __m, __x); } 
# 296 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 298
assoc_legendre(unsigned __l, unsigned __m, _Tp __x) 
# 299
{ 
# 300
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 301
return __detail::__assoc_legendre_p< typename __gnu_cxx::__promote< _Tp> ::__type> (__l, __m, __x); 
# 302
} 
# 312 "/usr/include/c++/11/bits/specfun.h" 3
inline float betaf(float __a, float __b) 
# 313
{ return __detail::__beta< float> (__a, __b); } 
# 322
inline long double betal(long double __a, long double __b) 
# 323
{ return __detail::__beta< long double> (__a, __b); } 
# 341 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpa, class _Tpb> inline typename __gnu_cxx::__promote_2< _Tpa, _Tpb> ::__type 
# 343
beta(_Tpa __a, _Tpb __b) 
# 344
{ 
# 345
typedef typename __gnu_cxx::__promote_2< _Tpa, _Tpb> ::__type __type; 
# 346
return __detail::__beta< typename __gnu_cxx::__promote_2< _Tpa, _Tpb> ::__type> (__a, __b); 
# 347
} 
# 358 "/usr/include/c++/11/bits/specfun.h" 3
inline float comp_ellint_1f(float __k) 
# 359
{ return __detail::__comp_ellint_1< float> (__k); } 
# 368
inline long double comp_ellint_1l(long double __k) 
# 369
{ return __detail::__comp_ellint_1< long double> (__k); } 
# 389 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 391
comp_ellint_1(_Tp __k) 
# 392
{ 
# 393
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 394
return __detail::__comp_ellint_1< typename __gnu_cxx::__promote< _Tp> ::__type> (__k); 
# 395
} 
# 406 "/usr/include/c++/11/bits/specfun.h" 3
inline float comp_ellint_2f(float __k) 
# 407
{ return __detail::__comp_ellint_2< float> (__k); } 
# 416
inline long double comp_ellint_2l(long double __k) 
# 417
{ return __detail::__comp_ellint_2< long double> (__k); } 
# 436 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 438
comp_ellint_2(_Tp __k) 
# 439
{ 
# 440
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 441
return __detail::__comp_ellint_2< typename __gnu_cxx::__promote< _Tp> ::__type> (__k); 
# 442
} 
# 453 "/usr/include/c++/11/bits/specfun.h" 3
inline float comp_ellint_3f(float __k, float __nu) 
# 454
{ return __detail::__comp_ellint_3< float> (__k, __nu); } 
# 463
inline long double comp_ellint_3l(long double __k, long double __nu) 
# 464
{ return __detail::__comp_ellint_3< long double> (__k, __nu); } 
# 487 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp, class _Tpn> inline typename __gnu_cxx::__promote_2< _Tp, _Tpn> ::__type 
# 489
comp_ellint_3(_Tp __k, _Tpn __nu) 
# 490
{ 
# 491
typedef typename __gnu_cxx::__promote_2< _Tp, _Tpn> ::__type __type; 
# 492
return __detail::__comp_ellint_3< typename __gnu_cxx::__promote_2< _Tp, _Tpn> ::__type> (__k, __nu); 
# 493
} 
# 504 "/usr/include/c++/11/bits/specfun.h" 3
inline float cyl_bessel_if(float __nu, float __x) 
# 505
{ return __detail::__cyl_bessel_i< float> (__nu, __x); } 
# 514
inline long double cyl_bessel_il(long double __nu, long double __x) 
# 515
{ return __detail::__cyl_bessel_i< long double> (__nu, __x); } 
# 533 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 535
cyl_bessel_i(_Tpnu __nu, _Tp __x) 
# 536
{ 
# 537
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 538
return __detail::__cyl_bessel_i< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 539
} 
# 550 "/usr/include/c++/11/bits/specfun.h" 3
inline float cyl_bessel_jf(float __nu, float __x) 
# 551
{ return __detail::__cyl_bessel_j< float> (__nu, __x); } 
# 560
inline long double cyl_bessel_jl(long double __nu, long double __x) 
# 561
{ return __detail::__cyl_bessel_j< long double> (__nu, __x); } 
# 579 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 581
cyl_bessel_j(_Tpnu __nu, _Tp __x) 
# 582
{ 
# 583
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 584
return __detail::__cyl_bessel_j< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 585
} 
# 596 "/usr/include/c++/11/bits/specfun.h" 3
inline float cyl_bessel_kf(float __nu, float __x) 
# 597
{ return __detail::__cyl_bessel_k< float> (__nu, __x); } 
# 606
inline long double cyl_bessel_kl(long double __nu, long double __x) 
# 607
{ return __detail::__cyl_bessel_k< long double> (__nu, __x); } 
# 631 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 633
cyl_bessel_k(_Tpnu __nu, _Tp __x) 
# 634
{ 
# 635
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 636
return __detail::__cyl_bessel_k< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 637
} 
# 648 "/usr/include/c++/11/bits/specfun.h" 3
inline float cyl_neumannf(float __nu, float __x) 
# 649
{ return __detail::__cyl_neumann_n< float> (__nu, __x); } 
# 658
inline long double cyl_neumannl(long double __nu, long double __x) 
# 659
{ return __detail::__cyl_neumann_n< long double> (__nu, __x); } 
# 679 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpnu, class _Tp> inline typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type 
# 681
cyl_neumann(_Tpnu __nu, _Tp __x) 
# 682
{ 
# 683
typedef typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type __type; 
# 684
return __detail::__cyl_neumann_n< typename __gnu_cxx::__promote_2< _Tpnu, _Tp> ::__type> (__nu, __x); 
# 685
} 
# 696 "/usr/include/c++/11/bits/specfun.h" 3
inline float ellint_1f(float __k, float __phi) 
# 697
{ return __detail::__ellint_1< float> (__k, __phi); } 
# 706
inline long double ellint_1l(long double __k, long double __phi) 
# 707
{ return __detail::__ellint_1< long double> (__k, __phi); } 
# 727 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp, class _Tpp> inline typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type 
# 729
ellint_1(_Tp __k, _Tpp __phi) 
# 730
{ 
# 731
typedef typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type __type; 
# 732
return __detail::__ellint_1< typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type> (__k, __phi); 
# 733
} 
# 744 "/usr/include/c++/11/bits/specfun.h" 3
inline float ellint_2f(float __k, float __phi) 
# 745
{ return __detail::__ellint_2< float> (__k, __phi); } 
# 754
inline long double ellint_2l(long double __k, long double __phi) 
# 755
{ return __detail::__ellint_2< long double> (__k, __phi); } 
# 775 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp, class _Tpp> inline typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type 
# 777
ellint_2(_Tp __k, _Tpp __phi) 
# 778
{ 
# 779
typedef typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type __type; 
# 780
return __detail::__ellint_2< typename __gnu_cxx::__promote_2< _Tp, _Tpp> ::__type> (__k, __phi); 
# 781
} 
# 792 "/usr/include/c++/11/bits/specfun.h" 3
inline float ellint_3f(float __k, float __nu, float __phi) 
# 793
{ return __detail::__ellint_3< float> (__k, __nu, __phi); } 
# 802
inline long double ellint_3l(long double __k, long double __nu, long double __phi) 
# 803
{ return __detail::__ellint_3< long double> (__k, __nu, __phi); } 
# 828 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp, class _Tpn, class _Tpp> inline typename __gnu_cxx::__promote_3< _Tp, _Tpn, _Tpp> ::__type 
# 830
ellint_3(_Tp __k, _Tpn __nu, _Tpp __phi) 
# 831
{ 
# 832
typedef typename __gnu_cxx::__promote_3< _Tp, _Tpn, _Tpp> ::__type __type; 
# 833
return __detail::__ellint_3< typename __gnu_cxx::__promote_3< _Tp, _Tpn, _Tpp> ::__type> (__k, __nu, __phi); 
# 834
} 
# 844 "/usr/include/c++/11/bits/specfun.h" 3
inline float expintf(float __x) 
# 845
{ return __detail::__expint< float> (__x); } 
# 854
inline long double expintl(long double __x) 
# 855
{ return __detail::__expint< long double> (__x); } 
# 868 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 870
expint(_Tp __x) 
# 871
{ 
# 872
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 873
return __detail::__expint< typename __gnu_cxx::__promote< _Tp> ::__type> (__x); 
# 874
} 
# 885 "/usr/include/c++/11/bits/specfun.h" 3
inline float hermitef(unsigned __n, float __x) 
# 886
{ return __detail::__poly_hermite< float> (__n, __x); } 
# 895
inline long double hermitel(unsigned __n, long double __x) 
# 896
{ return __detail::__poly_hermite< long double> (__n, __x); } 
# 916 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 918
hermite(unsigned __n, _Tp __x) 
# 919
{ 
# 920
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 921
return __detail::__poly_hermite< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 922
} 
# 933 "/usr/include/c++/11/bits/specfun.h" 3
inline float laguerref(unsigned __n, float __x) 
# 934
{ return __detail::__laguerre< float> (__n, __x); } 
# 943
inline long double laguerrel(unsigned __n, long double __x) 
# 944
{ return __detail::__laguerre< long double> (__n, __x); } 
# 960 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 962
laguerre(unsigned __n, _Tp __x) 
# 963
{ 
# 964
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 965
return __detail::__laguerre< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 966
} 
# 977 "/usr/include/c++/11/bits/specfun.h" 3
inline float legendref(unsigned __l, float __x) 
# 978
{ return __detail::__poly_legendre_p< float> (__l, __x); } 
# 987
inline long double legendrel(unsigned __l, long double __x) 
# 988
{ return __detail::__poly_legendre_p< long double> (__l, __x); } 
# 1005 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1007
legendre(unsigned __l, _Tp __x) 
# 1008
{ 
# 1009
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1010
return __detail::__poly_legendre_p< typename __gnu_cxx::__promote< _Tp> ::__type> (__l, __x); 
# 1011
} 
# 1022 "/usr/include/c++/11/bits/specfun.h" 3
inline float riemann_zetaf(float __s) 
# 1023
{ return __detail::__riemann_zeta< float> (__s); } 
# 1032
inline long double riemann_zetal(long double __s) 
# 1033
{ return __detail::__riemann_zeta< long double> (__s); } 
# 1056 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1058
riemann_zeta(_Tp __s) 
# 1059
{ 
# 1060
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1061
return __detail::__riemann_zeta< typename __gnu_cxx::__promote< _Tp> ::__type> (__s); 
# 1062
} 
# 1073 "/usr/include/c++/11/bits/specfun.h" 3
inline float sph_besself(unsigned __n, float __x) 
# 1074
{ return __detail::__sph_bessel< float> (__n, __x); } 
# 1083
inline long double sph_bessell(unsigned __n, long double __x) 
# 1084
{ return __detail::__sph_bessel< long double> (__n, __x); } 
# 1100 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1102
sph_bessel(unsigned __n, _Tp __x) 
# 1103
{ 
# 1104
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1105
return __detail::__sph_bessel< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 1106
} 
# 1117 "/usr/include/c++/11/bits/specfun.h" 3
inline float sph_legendref(unsigned __l, unsigned __m, float __theta) 
# 1118
{ return __detail::__sph_legendre< float> (__l, __m, __theta); } 
# 1128 "/usr/include/c++/11/bits/specfun.h" 3
inline long double sph_legendrel(unsigned __l, unsigned __m, long double __theta) 
# 1129
{ return __detail::__sph_legendre< long double> (__l, __m, __theta); } 
# 1147 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1149
sph_legendre(unsigned __l, unsigned __m, _Tp __theta) 
# 1150
{ 
# 1151
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1152
return __detail::__sph_legendre< typename __gnu_cxx::__promote< _Tp> ::__type> (__l, __m, __theta); 
# 1153
} 
# 1164 "/usr/include/c++/11/bits/specfun.h" 3
inline float sph_neumannf(unsigned __n, float __x) 
# 1165
{ return __detail::__sph_neumann< float> (__n, __x); } 
# 1174
inline long double sph_neumannl(unsigned __n, long double __x) 
# 1175
{ return __detail::__sph_neumann< long double> (__n, __x); } 
# 1191 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tp> inline typename __gnu_cxx::__promote< _Tp> ::__type 
# 1193
sph_neumann(unsigned __n, _Tp __x) 
# 1194
{ 
# 1195
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 1196
return __detail::__sph_neumann< typename __gnu_cxx::__promote< _Tp> ::__type> (__n, __x); 
# 1197
} 
# 1202
}
# 1205
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 1219 "/usr/include/c++/11/bits/specfun.h" 3
inline float airy_aif(float __x) 
# 1220
{ 
# 1221
float __Ai, __Bi, __Aip, __Bip; 
# 1222
std::__detail::__airy< float> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1223
return __Ai; 
# 1224
} 
# 1230
inline long double airy_ail(long double __x) 
# 1231
{ 
# 1232
long double __Ai, __Bi, __Aip, __Bip; 
# 1233
std::__detail::__airy< long double> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1234
return __Ai; 
# 1235
} 
# 1240
template< class _Tp> inline typename __promote< _Tp> ::__type 
# 1242
airy_ai(_Tp __x) 
# 1243
{ 
# 1244
typedef typename __promote< _Tp> ::__type __type; 
# 1245
__type __Ai, __Bi, __Aip, __Bip; 
# 1246
std::__detail::__airy< typename __promote< _Tp> ::__type> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1247
return __Ai; 
# 1248
} 
# 1254
inline float airy_bif(float __x) 
# 1255
{ 
# 1256
float __Ai, __Bi, __Aip, __Bip; 
# 1257
std::__detail::__airy< float> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1258
return __Bi; 
# 1259
} 
# 1265
inline long double airy_bil(long double __x) 
# 1266
{ 
# 1267
long double __Ai, __Bi, __Aip, __Bip; 
# 1268
std::__detail::__airy< long double> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1269
return __Bi; 
# 1270
} 
# 1275
template< class _Tp> inline typename __promote< _Tp> ::__type 
# 1277
airy_bi(_Tp __x) 
# 1278
{ 
# 1279
typedef typename __promote< _Tp> ::__type __type; 
# 1280
__type __Ai, __Bi, __Aip, __Bip; 
# 1281
std::__detail::__airy< typename __promote< _Tp> ::__type> (__x, __Ai, __Bi, __Aip, __Bip); 
# 1282
return __Bi; 
# 1283
} 
# 1295 "/usr/include/c++/11/bits/specfun.h" 3
inline float conf_hypergf(float __a, float __c, float __x) 
# 1296
{ return std::__detail::__conf_hyperg< float> (__a, __c, __x); } 
# 1306 "/usr/include/c++/11/bits/specfun.h" 3
inline long double conf_hypergl(long double __a, long double __c, long double __x) 
# 1307
{ return std::__detail::__conf_hyperg< long double> (__a, __c, __x); } 
# 1325 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpa, class _Tpc, class _Tp> inline typename __promote_3< _Tpa, _Tpc, _Tp> ::__type 
# 1327
conf_hyperg(_Tpa __a, _Tpc __c, _Tp __x) 
# 1328
{ 
# 1329
typedef typename __promote_3< _Tpa, _Tpc, _Tp> ::__type __type; 
# 1330
return std::__detail::__conf_hyperg< typename __promote_3< _Tpa, _Tpc, _Tp> ::__type> (__a, __c, __x); 
# 1331
} 
# 1343 "/usr/include/c++/11/bits/specfun.h" 3
inline float hypergf(float __a, float __b, float __c, float __x) 
# 1344
{ return std::__detail::__hyperg< float> (__a, __b, __c, __x); } 
# 1354 "/usr/include/c++/11/bits/specfun.h" 3
inline long double hypergl(long double __a, long double __b, long double __c, long double __x) 
# 1355
{ return std::__detail::__hyperg< long double> (__a, __b, __c, __x); } 
# 1374 "/usr/include/c++/11/bits/specfun.h" 3
template< class _Tpa, class _Tpb, class _Tpc, class _Tp> inline typename __promote_4< _Tpa, _Tpb, _Tpc, _Tp> ::__type 
# 1376
hyperg(_Tpa __a, _Tpb __b, _Tpc __c, _Tp __x) 
# 1377
{ 
# 1379
typedef typename __promote_4< _Tpa, _Tpb, _Tpc, _Tp> ::__type __type; 
# 1380
return std::__detail::__hyperg< typename __promote_4< _Tpa, _Tpb, _Tpc, _Tp> ::__type> (__a, __b, __c, __x); 
# 1381
} 
# 1385
}
# 1388
#pragma GCC visibility pop
# 1938 "/usr/include/c++/11/cmath" 3
}
# 38 "/usr/include/c++/11/math.h" 3
using std::abs;
# 39
using std::acos;
# 40
using std::asin;
# 41
using std::atan;
# 42
using std::atan2;
# 43
using std::cos;
# 44
using std::sin;
# 45
using std::tan;
# 46
using std::cosh;
# 47
using std::sinh;
# 48
using std::tanh;
# 49
using std::exp;
# 50
using std::frexp;
# 51
using std::ldexp;
# 52
using std::log;
# 53
using std::log10;
# 54
using std::modf;
# 55
using std::pow;
# 56
using std::sqrt;
# 57
using std::ceil;
# 58
using std::fabs;
# 59
using std::floor;
# 60
using std::fmod;
# 63
using std::fpclassify;
# 64
using std::isfinite;
# 65
using std::isinf;
# 66
using std::isnan;
# 67
using std::isnormal;
# 68
using std::signbit;
# 69
using std::isgreater;
# 70
using std::isgreaterequal;
# 71
using std::isless;
# 72
using std::islessequal;
# 73
using std::islessgreater;
# 74
using std::isunordered;
# 78
using std::acosh;
# 79
using std::asinh;
# 80
using std::atanh;
# 81
using std::cbrt;
# 82
using std::copysign;
# 83
using std::erf;
# 84
using std::erfc;
# 85
using std::exp2;
# 86
using std::expm1;
# 87
using std::fdim;
# 88
using std::fma;
# 89
using std::fmax;
# 90
using std::fmin;
# 91
using std::hypot;
# 92
using std::ilogb;
# 93
using std::lgamma;
# 94
using std::llrint;
# 95
using std::llround;
# 96
using std::log1p;
# 97
using std::log2;
# 98
using std::logb;
# 99
using std::lrint;
# 100
using std::lround;
# 101
using std::nearbyint;
# 102
using std::nextafter;
# 103
using std::nexttoward;
# 104
using std::remainder;
# 105
using std::remquo;
# 106
using std::rint;
# 107
using std::round;
# 108
using std::scalbln;
# 109
using std::scalbn;
# 110
using std::tgamma;
# 111
using std::trunc;
# 121 "/usr/include/c++/11/cstdlib" 3
extern "C++" {
# 123
namespace std __attribute((__visibility__("default"))) { 
# 127
using ::div_t;
# 128
using ::ldiv_t;
# 130
using ::abort;
# 132
using ::aligned_alloc;
# 134
using ::atexit;
# 137
using ::at_quick_exit;
# 140
using ::atof;
# 141
using ::atoi;
# 142
using ::atol;
# 143
using ::bsearch;
# 144
using ::calloc;
# 145
using ::div;
# 146
using ::exit;
# 147
using ::free;
# 148
using ::getenv;
# 149
using ::labs;
# 150
using ::ldiv;
# 151
using ::malloc;
# 153
using ::mblen;
# 154
using ::mbstowcs;
# 155
using ::mbtowc;
# 157
using ::qsort;
# 160
using ::quick_exit;
# 163
using ::rand;
# 164
using ::realloc;
# 165
using ::srand;
# 166
using ::strtod;
# 167
using ::strtol;
# 168
using ::strtoul;
# 169
using ::system;
# 171
using ::wcstombs;
# 172
using ::wctomb;
# 177
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 182
}
# 195 "/usr/include/c++/11/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 200
using ::lldiv_t;
# 206
using ::_Exit;
# 210
using ::llabs;
# 213
inline lldiv_t div(long long __n, long long __d) 
# 214
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 216
using ::lldiv;
# 227 "/usr/include/c++/11/cstdlib" 3
using ::atoll;
# 228
using ::strtoll;
# 229
using ::strtoull;
# 231
using ::strtof;
# 232
using ::strtold;
# 235
}
# 237
namespace std { 
# 240
using __gnu_cxx::lldiv_t;
# 242
using __gnu_cxx::_Exit;
# 244
using __gnu_cxx::llabs;
# 245
using __gnu_cxx::div;
# 246
using __gnu_cxx::lldiv;
# 248
using __gnu_cxx::atoll;
# 249
using __gnu_cxx::strtof;
# 250
using __gnu_cxx::strtoll;
# 251
using __gnu_cxx::strtoull;
# 252
using __gnu_cxx::strtold;
# 253
}
# 257
}
# 38 "/usr/include/c++/11/stdlib.h" 3
using std::abort;
# 39
using std::atexit;
# 40
using std::exit;
# 43
using std::at_quick_exit;
# 46
using std::quick_exit;
# 54
using std::abs;
# 55
using std::atof;
# 56
using std::atoi;
# 57
using std::atol;
# 58
using std::bsearch;
# 59
using std::calloc;
# 60
using std::div;
# 61
using std::free;
# 62
using std::getenv;
# 63
using std::labs;
# 64
using std::ldiv;
# 65
using std::malloc;
# 67
using std::mblen;
# 68
using std::mbstowcs;
# 69
using std::mbtowc;
# 71
using std::qsort;
# 72
using std::rand;
# 73
using std::realloc;
# 74
using std::srand;
# 75
using std::strtod;
# 76
using std::strtol;
# 77
using std::strtoul;
# 78
using std::system;
# 80
using std::wcstombs;
# 81
using std::wctomb;
# 9146 "/usr/include/crt/math_functions.h" 3
namespace std { 
# 9147
constexpr bool signbit(float x); 
# 9148
constexpr bool signbit(double x); 
# 9149
constexpr bool signbit(long double x); 
# 9150
constexpr bool isfinite(float x); 
# 9151
constexpr bool isfinite(double x); 
# 9152
constexpr bool isfinite(long double x); 
# 9153
constexpr bool isnan(float x); 
# 9158
constexpr bool isnan(double x); 
# 9160
constexpr bool isnan(long double x); 
# 9161
constexpr bool isinf(float x); 
# 9166
constexpr bool isinf(double x); 
# 9168
constexpr bool isinf(long double x); 
# 9169
}
# 9322 "/usr/include/crt/math_functions.h" 3
namespace std { 
# 9324
template< class T> extern T __pow_helper(T, int); 
# 9325
template< class T> extern T __cmath_power(T, unsigned); 
# 9326
}
# 9328
using std::abs;
# 9329
using std::fabs;
# 9330
using std::ceil;
# 9331
using std::floor;
# 9332
using std::sqrt;
# 9334
using std::pow;
# 9336
using std::log;
# 9337
using std::log10;
# 9338
using std::fmod;
# 9339
using std::modf;
# 9340
using std::exp;
# 9341
using std::frexp;
# 9342
using std::ldexp;
# 9343
using std::asin;
# 9344
using std::sin;
# 9345
using std::sinh;
# 9346
using std::acos;
# 9347
using std::cos;
# 9348
using std::cosh;
# 9349
using std::atan;
# 9350
using std::atan2;
# 9351
using std::tan;
# 9352
using std::tanh;
# 9723 "/usr/include/crt/math_functions.h" 3
namespace std { 
# 9732 "/usr/include/crt/math_functions.h" 3
extern inline long long abs(long long); 
# 9742 "/usr/include/crt/math_functions.h" 3
extern inline long abs(long); 
# 9743
extern constexpr float abs(float); 
# 9744
extern constexpr double abs(double); 
# 9745
extern constexpr float fabs(float); 
# 9746
extern constexpr float ceil(float); 
# 9747
extern constexpr float floor(float); 
# 9748
extern constexpr float sqrt(float); 
# 9749
extern constexpr float pow(float, float); 
# 9754
template< class _Tp, class _Up> extern constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type pow(_Tp, _Up); 
# 9764
extern constexpr float log(float); 
# 9765
extern constexpr float log10(float); 
# 9766
extern constexpr float fmod(float, float); 
# 9767
extern inline float modf(float, float *); 
# 9768
extern constexpr float exp(float); 
# 9769
extern inline float frexp(float, int *); 
# 9770
extern constexpr float ldexp(float, int); 
# 9771
extern constexpr float asin(float); 
# 9772
extern constexpr float sin(float); 
# 9773
extern constexpr float sinh(float); 
# 9774
extern constexpr float acos(float); 
# 9775
extern constexpr float cos(float); 
# 9776
extern constexpr float cosh(float); 
# 9777
extern constexpr float atan(float); 
# 9778
extern constexpr float atan2(float, float); 
# 9779
extern constexpr float tan(float); 
# 9780
extern constexpr float tanh(float); 
# 9859 "/usr/include/crt/math_functions.h" 3
}
# 9965 "/usr/include/crt/math_functions.h" 3
namespace std { 
# 9966
constexpr float logb(float a); 
# 9967
constexpr int ilogb(float a); 
# 9968
constexpr float scalbn(float a, int b); 
# 9969
constexpr float scalbln(float a, long b); 
# 9970
constexpr float exp2(float a); 
# 9971
constexpr float expm1(float a); 
# 9972
constexpr float log2(float a); 
# 9973
constexpr float log1p(float a); 
# 9974
constexpr float acosh(float a); 
# 9975
constexpr float asinh(float a); 
# 9976
constexpr float atanh(float a); 
# 9977
constexpr float hypot(float a, float b); 
# 9978
constexpr float cbrt(float a); 
# 9979
constexpr float erf(float a); 
# 9980
constexpr float erfc(float a); 
# 9981
constexpr float lgamma(float a); 
# 9982
constexpr float tgamma(float a); 
# 9983
constexpr float copysign(float a, float b); 
# 9984
constexpr float nextafter(float a, float b); 
# 9985
constexpr float remainder(float a, float b); 
# 9986
inline float remquo(float a, float b, int * quo); 
# 9987
constexpr float round(float a); 
# 9988
constexpr long lround(float a); 
# 9989
constexpr long long llround(float a); 
# 9990
constexpr float trunc(float a); 
# 9991
constexpr float rint(float a); 
# 9992
constexpr long lrint(float a); 
# 9993
constexpr long long llrint(float a); 
# 9994
constexpr float nearbyint(float a); 
# 9995
constexpr float fdim(float a, float b); 
# 9996
constexpr float fma(float a, float b, float c); 
# 9997
constexpr float fmax(float a, float b); 
# 9998
constexpr float fmin(float a, float b); 
# 9999
}
# 10104 "/usr/include/crt/math_functions.h" 3
static inline float exp10(const float a); 
# 10106
static inline float rsqrt(const float a); 
# 10108
static inline float rcbrt(const float a); 
# 10110
static inline float sinpi(const float a); 
# 10112
static inline float cospi(const float a); 
# 10114
static inline void sincospi(const float a, float *const sptr, float *const cptr); 
# 10116
static inline void sincos(const float a, float *const sptr, float *const cptr); 
# 10118
static inline float j0(const float a); 
# 10120
static inline float j1(const float a); 
# 10122
static inline float jn(const int n, const float a); 
# 10124
static inline float y0(const float a); 
# 10126
static inline float y1(const float a); 
# 10128
static inline float yn(const int n, const float a); 
# 10130
__attribute__((unused)) static inline float cyl_bessel_i0(const float a); 
# 10132
__attribute__((unused)) static inline float cyl_bessel_i1(const float a); 
# 10134
static inline float erfinv(const float a); 
# 10136
static inline float erfcinv(const float a); 
# 10138
static inline float normcdfinv(const float a); 
# 10140
static inline float normcdf(const float a); 
# 10142
static inline float erfcx(const float a); 
# 10144
static inline double copysign(const double a, const float b); 
# 10146
static inline double copysign(const float a, const double b); 
# 10154
static inline unsigned min(const unsigned a, const unsigned b); 
# 10162
static inline unsigned min(const int a, const unsigned b); 
# 10170
static inline unsigned min(const unsigned a, const int b); 
# 10178
static inline long min(const long a, const long b); 
# 10186
static inline unsigned long min(const unsigned long a, const unsigned long b); 
# 10194
static inline unsigned long min(const long a, const unsigned long b); 
# 10202
static inline unsigned long min(const unsigned long a, const long b); 
# 10210
static inline long long min(const long long a, const long long b); 
# 10218
static inline unsigned long long min(const unsigned long long a, const unsigned long long b); 
# 10226
static inline unsigned long long min(const long long a, const unsigned long long b); 
# 10234
static inline unsigned long long min(const unsigned long long a, const long long b); 
# 10245 "/usr/include/crt/math_functions.h" 3
static inline float min(const float a, const float b); 
# 10256 "/usr/include/crt/math_functions.h" 3
static inline double min(const double a, const double b); 
# 10266 "/usr/include/crt/math_functions.h" 3
static inline double min(const float a, const double b); 
# 10276 "/usr/include/crt/math_functions.h" 3
static inline double min(const double a, const float b); 
# 10284
static inline unsigned max(const unsigned a, const unsigned b); 
# 10292
static inline unsigned max(const int a, const unsigned b); 
# 10300
static inline unsigned max(const unsigned a, const int b); 
# 10308
static inline long max(const long a, const long b); 
# 10316
static inline unsigned long max(const unsigned long a, const unsigned long b); 
# 10324
static inline unsigned long max(const long a, const unsigned long b); 
# 10332
static inline unsigned long max(const unsigned long a, const long b); 
# 10340
static inline long long max(const long long a, const long long b); 
# 10348
static inline unsigned long long max(const unsigned long long a, const unsigned long long b); 
# 10356
static inline unsigned long long max(const long long a, const unsigned long long b); 
# 10364
static inline unsigned long long max(const unsigned long long a, const long long b); 
# 10375 "/usr/include/crt/math_functions.h" 3
static inline float max(const float a, const float b); 
# 10386 "/usr/include/crt/math_functions.h" 3
static inline double max(const double a, const double b); 
# 10396 "/usr/include/crt/math_functions.h" 3
static inline double max(const float a, const double b); 
# 10406 "/usr/include/crt/math_functions.h" 3
static inline double max(const double a, const float b); 
# 10417 "/usr/include/crt/math_functions.h" 3
extern "C" {
# 10418
__attribute__((unused)) inline void *__nv_aligned_device_malloc(size_t size, size_t align) 
# 10419
{int volatile ___ = 1;(void)size;(void)align;
# 10422
::exit(___);}
#if 0
# 10419
{ 
# 10420
__attribute__((unused)) void *__nv_aligned_device_malloc_impl(size_t, size_t); 
# 10421
return __nv_aligned_device_malloc_impl(size, align); 
# 10422
} 
#endif
# 10423 "/usr/include/crt/math_functions.h" 3
}
# 758 "/usr/include/crt/math_functions.hpp" 3
static inline float exp10(const float a) 
# 759
{ 
# 760
return exp10f(a); 
# 761
} 
# 763
static inline float rsqrt(const float a) 
# 764
{ 
# 765
return rsqrtf(a); 
# 766
} 
# 768
static inline float rcbrt(const float a) 
# 769
{ 
# 770
return rcbrtf(a); 
# 771
} 
# 773
static inline float sinpi(const float a) 
# 774
{ 
# 775
return sinpif(a); 
# 776
} 
# 778
static inline float cospi(const float a) 
# 779
{ 
# 780
return cospif(a); 
# 781
} 
# 783
static inline void sincospi(const float a, float *const sptr, float *const cptr) 
# 784
{ 
# 785
sincospif(a, sptr, cptr); 
# 786
} 
# 788
static inline void sincos(const float a, float *const sptr, float *const cptr) 
# 789
{ 
# 790
sincosf(a, sptr, cptr); 
# 791
} 
# 793
static inline float j0(const float a) 
# 794
{ 
# 795
return j0f(a); 
# 796
} 
# 798
static inline float j1(const float a) 
# 799
{ 
# 800
return j1f(a); 
# 801
} 
# 803
static inline float jn(const int n, const float a) 
# 804
{ 
# 805
return jnf(n, a); 
# 806
} 
# 808
static inline float y0(const float a) 
# 809
{ 
# 810
return y0f(a); 
# 811
} 
# 813
static inline float y1(const float a) 
# 814
{ 
# 815
return y1f(a); 
# 816
} 
# 818
static inline float yn(const int n, const float a) 
# 819
{ 
# 820
return ynf(n, a); 
# 821
} 
# 823
__attribute__((unused)) static inline float cyl_bessel_i0(const float a) 
# 824
{int volatile ___ = 1;(void)a;
# 826
::exit(___);}
#if 0
# 824
{ 
# 825
return cyl_bessel_i0f(a); 
# 826
} 
#endif
# 828 "/usr/include/crt/math_functions.hpp" 3
__attribute__((unused)) static inline float cyl_bessel_i1(const float a) 
# 829
{int volatile ___ = 1;(void)a;
# 831
::exit(___);}
#if 0
# 829
{ 
# 830
return cyl_bessel_i1f(a); 
# 831
} 
#endif
# 833 "/usr/include/crt/math_functions.hpp" 3
static inline float erfinv(const float a) 
# 834
{ 
# 835
return erfinvf(a); 
# 836
} 
# 838
static inline float erfcinv(const float a) 
# 839
{ 
# 840
return erfcinvf(a); 
# 841
} 
# 843
static inline float normcdfinv(const float a) 
# 844
{ 
# 845
return normcdfinvf(a); 
# 846
} 
# 848
static inline float normcdf(const float a) 
# 849
{ 
# 850
return normcdff(a); 
# 851
} 
# 853
static inline float erfcx(const float a) 
# 854
{ 
# 855
return erfcxf(a); 
# 856
} 
# 858
static inline double copysign(const double a, const float b) 
# 859
{ 
# 860
return copysign(a, static_cast< double>(b)); 
# 861
} 
# 863
static inline double copysign(const float a, const double b) 
# 864
{ 
# 865
return copysign(static_cast< double>(a), b); 
# 866
} 
# 868
static inline unsigned min(const unsigned a, const unsigned b) 
# 869
{ 
# 870
return umin(a, b); 
# 871
} 
# 873
static inline unsigned min(const int a, const unsigned b) 
# 874
{ 
# 875
return umin(static_cast< unsigned>(a), b); 
# 876
} 
# 878
static inline unsigned min(const unsigned a, const int b) 
# 879
{ 
# 880
return umin(a, static_cast< unsigned>(b)); 
# 881
} 
# 883
static inline long min(const long a, const long b) 
# 884
{ 
# 885
long retval; 
# 891
if (sizeof(long) == sizeof(int)) { 
# 895
retval = (static_cast< long>(min(static_cast< int>(a), static_cast< int>(b)))); 
# 896
} else { 
# 897
retval = (static_cast< long>(llmin(static_cast< long long>(a), static_cast< long long>(b)))); 
# 898
}  
# 899
return retval; 
# 900
} 
# 902
static inline unsigned long min(const unsigned long a, const unsigned long b) 
# 903
{ 
# 904
unsigned long retval; 
# 908
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 912
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 913
} else { 
# 914
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 915
}  
# 916
return retval; 
# 917
} 
# 919
static inline unsigned long min(const long a, const unsigned long b) 
# 920
{ 
# 921
unsigned long retval; 
# 925
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 929
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 930
} else { 
# 931
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 932
}  
# 933
return retval; 
# 934
} 
# 936
static inline unsigned long min(const unsigned long a, const long b) 
# 937
{ 
# 938
unsigned long retval; 
# 942
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 946
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 947
} else { 
# 948
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 949
}  
# 950
return retval; 
# 951
} 
# 953
static inline long long min(const long long a, const long long b) 
# 954
{ 
# 955
return llmin(a, b); 
# 956
} 
# 958
static inline unsigned long long min(const unsigned long long a, const unsigned long long b) 
# 959
{ 
# 960
return ullmin(a, b); 
# 961
} 
# 963
static inline unsigned long long min(const long long a, const unsigned long long b) 
# 964
{ 
# 965
return ullmin(static_cast< unsigned long long>(a), b); 
# 966
} 
# 968
static inline unsigned long long min(const unsigned long long a, const long long b) 
# 969
{ 
# 970
return ullmin(a, static_cast< unsigned long long>(b)); 
# 971
} 
# 973
static inline float min(const float a, const float b) 
# 974
{ 
# 975
return fminf(a, b); 
# 976
} 
# 978
static inline double min(const double a, const double b) 
# 979
{ 
# 980
return fmin(a, b); 
# 981
} 
# 983
static inline double min(const float a, const double b) 
# 984
{ 
# 985
return fmin(static_cast< double>(a), b); 
# 986
} 
# 988
static inline double min(const double a, const float b) 
# 989
{ 
# 990
return fmin(a, static_cast< double>(b)); 
# 991
} 
# 993
static inline unsigned max(const unsigned a, const unsigned b) 
# 994
{ 
# 995
return umax(a, b); 
# 996
} 
# 998
static inline unsigned max(const int a, const unsigned b) 
# 999
{ 
# 1000
return umax(static_cast< unsigned>(a), b); 
# 1001
} 
# 1003
static inline unsigned max(const unsigned a, const int b) 
# 1004
{ 
# 1005
return umax(a, static_cast< unsigned>(b)); 
# 1006
} 
# 1008
static inline long max(const long a, const long b) 
# 1009
{ 
# 1010
long retval; 
# 1015
if (sizeof(long) == sizeof(int)) { 
# 1019
retval = (static_cast< long>(max(static_cast< int>(a), static_cast< int>(b)))); 
# 1020
} else { 
# 1021
retval = (static_cast< long>(llmax(static_cast< long long>(a), static_cast< long long>(b)))); 
# 1022
}  
# 1023
return retval; 
# 1024
} 
# 1026
static inline unsigned long max(const unsigned long a, const unsigned long b) 
# 1027
{ 
# 1028
unsigned long retval; 
# 1032
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1036
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1037
} else { 
# 1038
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1039
}  
# 1040
return retval; 
# 1041
} 
# 1043
static inline unsigned long max(const long a, const unsigned long b) 
# 1044
{ 
# 1045
unsigned long retval; 
# 1049
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1053
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1054
} else { 
# 1055
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1056
}  
# 1057
return retval; 
# 1058
} 
# 1060
static inline unsigned long max(const unsigned long a, const long b) 
# 1061
{ 
# 1062
unsigned long retval; 
# 1066
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1070
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1071
} else { 
# 1072
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1073
}  
# 1074
return retval; 
# 1075
} 
# 1077
static inline long long max(const long long a, const long long b) 
# 1078
{ 
# 1079
return llmax(a, b); 
# 1080
} 
# 1082
static inline unsigned long long max(const unsigned long long a, const unsigned long long b) 
# 1083
{ 
# 1084
return ullmax(a, b); 
# 1085
} 
# 1087
static inline unsigned long long max(const long long a, const unsigned long long b) 
# 1088
{ 
# 1089
return ullmax(static_cast< unsigned long long>(a), b); 
# 1090
} 
# 1092
static inline unsigned long long max(const unsigned long long a, const long long b) 
# 1093
{ 
# 1094
return ullmax(a, static_cast< unsigned long long>(b)); 
# 1095
} 
# 1097
static inline float max(const float a, const float b) 
# 1098
{ 
# 1099
return fmaxf(a, b); 
# 1100
} 
# 1102
static inline double max(const double a, const double b) 
# 1103
{ 
# 1104
return fmax(a, b); 
# 1105
} 
# 1107
static inline double max(const float a, const double b) 
# 1108
{ 
# 1109
return fmax(static_cast< double>(a), b); 
# 1110
} 
# 1112
static inline double max(const double a, const float b) 
# 1113
{ 
# 1114
return fmax(a, static_cast< double>(b)); 
# 1115
} 
# 1126 "/usr/include/crt/math_functions.hpp" 3
inline int min(const int a, const int b) 
# 1127
{ 
# 1128
return (a < b) ? a : b; 
# 1129
} 
# 1131
inline unsigned umin(const unsigned a, const unsigned b) 
# 1132
{ 
# 1133
return (a < b) ? a : b; 
# 1134
} 
# 1136
inline long long llmin(const long long a, const long long b) 
# 1137
{ 
# 1138
return (a < b) ? a : b; 
# 1139
} 
# 1141
inline unsigned long long ullmin(const unsigned long long a, const unsigned long long 
# 1142
b) 
# 1143
{ 
# 1144
return (a < b) ? a : b; 
# 1145
} 
# 1147
inline int max(const int a, const int b) 
# 1148
{ 
# 1149
return (a > b) ? a : b; 
# 1150
} 
# 1152
inline unsigned umax(const unsigned a, const unsigned b) 
# 1153
{ 
# 1154
return (a > b) ? a : b; 
# 1155
} 
# 1157
inline long long llmax(const long long a, const long long b) 
# 1158
{ 
# 1159
return (a > b) ? a : b; 
# 1160
} 
# 1162
inline unsigned long long ullmax(const unsigned long long a, const unsigned long long 
# 1163
b) 
# 1164
{ 
# 1165
return (a > b) ? a : b; 
# 1166
} 
# 74 "/usr/include/cuda_surface_types.h" 3
template< class T, int dim = 1> 
# 75
struct surface : public surfaceReference { 
# 78
surface() 
# 79
{ 
# 80
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 81
} 
# 83
surface(cudaChannelFormatDesc desc) 
# 84
{ 
# 85
(channelDesc) = desc; 
# 86
} 
# 88
}; 
# 90
template< int dim> 
# 91
struct surface< void, dim>  : public surfaceReference { 
# 94
surface() 
# 95
{ 
# 96
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 97
} 
# 99
}; 
# 74 "/usr/include/cuda_texture_types.h" 3
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 75
struct texture : public textureReference { 
# 78
texture(int norm = 0, cudaTextureFilterMode 
# 79
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 80
aMode = cudaAddressModeClamp) 
# 81
{ 
# 82
(normalized) = norm; 
# 83
(filterMode) = fMode; 
# 84
((addressMode)[0]) = aMode; 
# 85
((addressMode)[1]) = aMode; 
# 86
((addressMode)[2]) = aMode; 
# 87
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 88
(sRGB) = 0; 
# 89
} 
# 91
texture(int norm, cudaTextureFilterMode 
# 92
fMode, cudaTextureAddressMode 
# 93
aMode, cudaChannelFormatDesc 
# 94
desc) 
# 95
{ 
# 96
(normalized) = norm; 
# 97
(filterMode) = fMode; 
# 98
((addressMode)[0]) = aMode; 
# 99
((addressMode)[1]) = aMode; 
# 100
((addressMode)[2]) = aMode; 
# 101
(channelDesc) = desc; 
# 102
(sRGB) = 0; 
# 103
} 
# 105
}; 
# 89 "/usr/include/crt/device_functions.h" 3
extern "C" {
# 3207 "/usr/include/crt/device_functions.h" 3
}
# 3229 "/usr/include/crt/device_functions.h" 3
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline int mulhi(const int a, const int b); 
# 3231
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline unsigned mulhi(const unsigned a, const unsigned b); 
# 3233
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline unsigned mulhi(const int a, const unsigned b); 
# 3235
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline unsigned mulhi(const unsigned a, const int b); 
# 3237
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline long long mul64hi(const long long a, const long long b); 
# 3239
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const unsigned long long b); 
# 3241
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline unsigned long long mul64hi(const long long a, const unsigned long long b); 
# 3243
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const long long b); 
# 3245
__attribute((deprecated("float_as_int() is deprecated in favor of __float_as_int() and may be removed in a future release (Use -Wno-deprecated-declaratio" "ns to suppress this warning)."))) __attribute__((unused)) static inline int float_as_int(const float a); 
# 3247
__attribute((deprecated("int_as_float() is deprecated in favor of __int_as_float() and may be removed in a future release (Use -Wno-deprecated-declaratio" "ns to suppress this warning)."))) __attribute__((unused)) static inline float int_as_float(const int a); 
# 3249
__attribute((deprecated("float_as_uint() is deprecated in favor of __float_as_uint() and may be removed in a future release (Use -Wno-deprecated-declarat" "ions to suppress this warning)."))) __attribute__((unused)) static inline unsigned float_as_uint(const float a); 
# 3251
__attribute((deprecated("uint_as_float() is deprecated in favor of __uint_as_float() and may be removed in a future release (Use -Wno-deprecated-declarat" "ions to suppress this warning)."))) __attribute__((unused)) static inline float uint_as_float(const unsigned a); 
# 3253
__attribute((deprecated("saturate() is deprecated in favor of __saturatef() and may be removed in a future release (Use -Wno-deprecated-declarations to s" "uppress this warning)."))) __attribute__((unused)) static inline float saturate(const float a); 
# 3255
__attribute((deprecated("mul24() is deprecated in favor of __mul24() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline int mul24(const int a, const int b); 
# 3257
__attribute((deprecated("umul24() is deprecated in favor of __umul24() and may be removed in a future release (Use -Wno-deprecated-declarations to suppre" "ss this warning)."))) __attribute__((unused)) static inline unsigned umul24(const unsigned a, const unsigned b); 
# 3259
__attribute((deprecated("float2int() is deprecated in favor of __float2int_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated-d" "eclarations to suppress this warning)."))) __attribute__((unused)) static inline int float2int(const float a, const cudaRoundMode mode = cudaRoundZero); 
# 3261
__attribute((deprecated("float2uint() is deprecated in favor of __float2uint_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated" "-declarations to suppress this warning)."))) __attribute__((unused)) static inline unsigned float2uint(const float a, const cudaRoundMode mode = cudaRoundZero); 
# 3263
__attribute((deprecated("int2float() is deprecated in favor of __int2float_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated-d" "eclarations to suppress this warning)."))) __attribute__((unused)) static inline float int2float(const int a, const cudaRoundMode mode = cudaRoundNearest); 
# 3265
__attribute((deprecated("uint2float() is deprecated in favor of __uint2float_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated" "-declarations to suppress this warning)."))) __attribute__((unused)) static inline float uint2float(const unsigned a, const cudaRoundMode mode = cudaRoundNearest); 
# 90 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int mulhi(const int a, const int b) 
# 91
{int volatile ___ = 1;(void)a;(void)b;
# 93
::exit(___);}
#if 0
# 91
{ 
# 92
return __mulhi(a, b); 
# 93
} 
#endif
# 95 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned mulhi(const unsigned a, const unsigned b) 
# 96
{int volatile ___ = 1;(void)a;(void)b;
# 98
::exit(___);}
#if 0
# 96
{ 
# 97
return __umulhi(a, b); 
# 98
} 
#endif
# 100 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned mulhi(const int a, const unsigned b) 
# 101
{int volatile ___ = 1;(void)a;(void)b;
# 103
::exit(___);}
#if 0
# 101
{ 
# 102
return __umulhi(static_cast< unsigned>(a), b); 
# 103
} 
#endif
# 105 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned mulhi(const unsigned a, const int b) 
# 106
{int volatile ___ = 1;(void)a;(void)b;
# 108
::exit(___);}
#if 0
# 106
{ 
# 107
return __umulhi(a, static_cast< unsigned>(b)); 
# 108
} 
#endif
# 110 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline long long mul64hi(const long long a, const long long b) 
# 111
{int volatile ___ = 1;(void)a;(void)b;
# 113
::exit(___);}
#if 0
# 111
{ 
# 112
return __mul64hi(a, b); 
# 113
} 
#endif
# 115 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const unsigned long long b) 
# 116
{int volatile ___ = 1;(void)a;(void)b;
# 118
::exit(___);}
#if 0
# 116
{ 
# 117
return __umul64hi(a, b); 
# 118
} 
#endif
# 120 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long mul64hi(const long long a, const unsigned long long b) 
# 121
{int volatile ___ = 1;(void)a;(void)b;
# 123
::exit(___);}
#if 0
# 121
{ 
# 122
return __umul64hi(static_cast< unsigned long long>(a), b); 
# 123
} 
#endif
# 125 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const long long b) 
# 126
{int volatile ___ = 1;(void)a;(void)b;
# 128
::exit(___);}
#if 0
# 126
{ 
# 127
return __umul64hi(a, static_cast< unsigned long long>(b)); 
# 128
} 
#endif
# 130 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int float_as_int(const float a) 
# 131
{int volatile ___ = 1;(void)a;
# 133
::exit(___);}
#if 0
# 131
{ 
# 132
return __float_as_int(a); 
# 133
} 
#endif
# 135 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float int_as_float(const int a) 
# 136
{int volatile ___ = 1;(void)a;
# 138
::exit(___);}
#if 0
# 136
{ 
# 137
return __int_as_float(a); 
# 138
} 
#endif
# 140 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned float_as_uint(const float a) 
# 141
{int volatile ___ = 1;(void)a;
# 143
::exit(___);}
#if 0
# 141
{ 
# 142
return __float_as_uint(a); 
# 143
} 
#endif
# 145 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float uint_as_float(const unsigned a) 
# 146
{int volatile ___ = 1;(void)a;
# 148
::exit(___);}
#if 0
# 146
{ 
# 147
return __uint_as_float(a); 
# 148
} 
#endif
# 149 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float saturate(const float a) 
# 150
{int volatile ___ = 1;(void)a;
# 152
::exit(___);}
#if 0
# 150
{ 
# 151
return __saturatef(a); 
# 152
} 
#endif
# 154 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int mul24(const int a, const int b) 
# 155
{int volatile ___ = 1;(void)a;(void)b;
# 157
::exit(___);}
#if 0
# 155
{ 
# 156
return __mul24(a, b); 
# 157
} 
#endif
# 159 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned umul24(const unsigned a, const unsigned b) 
# 160
{int volatile ___ = 1;(void)a;(void)b;
# 162
::exit(___);}
#if 0
# 160
{ 
# 161
return __umul24(a, b); 
# 162
} 
#endif
# 164 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int float2int(const float a, const cudaRoundMode mode) 
# 165
{int volatile ___ = 1;(void)a;(void)mode;
# 170
::exit(___);}
#if 0
# 165
{ 
# 166
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 170
} 
#endif
# 172 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned float2uint(const float a, const cudaRoundMode mode) 
# 173
{int volatile ___ = 1;(void)a;(void)mode;
# 178
::exit(___);}
#if 0
# 173
{ 
# 174
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 178
} 
#endif
# 180 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float int2float(const int a, const cudaRoundMode mode) 
# 181
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 181
{ 
# 182
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 186
} 
#endif
# 188 "/usr/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float uint2float(const unsigned a, const cudaRoundMode mode) 
# 189
{int volatile ___ = 1;(void)a;(void)mode;
# 194
::exit(___);}
#if 0
# 189
{ 
# 190
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 194
} 
#endif
# 106 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 120 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 120
{ } 
#endif
# 122 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 122
{ } 
#endif
# 124 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 128
{ } 
#endif
# 130 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 132
{ } 
#endif
# 134 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 134
{ } 
#endif
# 136 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 138
{ } 
#endif
# 140 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 140
{ } 
#endif
# 142 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 144
{ } 
#endif
# 146 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 146
{ } 
#endif
# 171 "/usr/include/device_atomic_functions.h" 3
extern "C" {
# 180
}
# 189 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 191 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 193
{ } 
#endif
# 195 "/usr/include/device_atomic_functions.h" 3
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 195
{ } 
#endif
# 197 "/usr/include/device_atomic_functions.h" 3
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 197
{ } 
#endif
# 87 "/usr/include/crt/device_double_functions.h" 3
extern "C" {
# 1139 "/usr/include/crt/device_double_functions.h" 3
}
# 1147
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1149
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1151
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1153
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1155
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1157
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1159
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1161
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1163
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1165
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1167
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1169
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1171
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 93 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 94
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 99
::exit(___);}
#if 0
# 94
{ 
# 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 99
} 
#endif
# 101 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 102
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 107
::exit(___);}
#if 0
# 102
{ 
# 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 107
} 
#endif
# 109 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 110
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 115
::exit(___);}
#if 0
# 110
{ 
# 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 115
} 
#endif
# 117 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 118
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 123
::exit(___);}
#if 0
# 118
{ 
# 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 123
} 
#endif
# 125 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 126
{int volatile ___ = 1;(void)a;(void)mode;
# 131
::exit(___);}
#if 0
# 126
{ 
# 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 131
} 
#endif
# 133 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 134
{int volatile ___ = 1;(void)a;(void)mode;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 139
} 
#endif
# 141 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 142
{int volatile ___ = 1;(void)a;(void)mode;
# 147
::exit(___);}
#if 0
# 142
{ 
# 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 147
} 
#endif
# 149 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 150
{int volatile ___ = 1;(void)a;(void)mode;
# 155
::exit(___);}
#if 0
# 150
{ 
# 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 155
} 
#endif
# 157 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 158
{int volatile ___ = 1;(void)a;(void)mode;
# 163
::exit(___);}
#if 0
# 158
{ 
# 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 163
} 
#endif
# 165 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 166
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 166
{ 
# 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 171
} 
#endif
# 173 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 178 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 181
::exit(___);}
#if 0
# 179
{ 
# 180
return (double)a; 
# 181
} 
#endif
# 183 "/usr/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 184
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 184
{ 
# 185
return (double)a; 
# 186
} 
#endif
# 89 "/usr/include/sm_20_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 100 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 104 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 104
{ } 
#endif
# 106 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 303 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 303
{ } 
#endif
# 306 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 306
{ } 
#endif
# 309 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 309
{ } 
#endif
# 312 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 312
{ } 
#endif
# 315 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 315
{ } 
#endif
# 318 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 318
{ } 
#endif
# 321 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 321
{ } 
#endif
# 324 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 324
{ } 
#endif
# 327 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 327
{ } 
#endif
# 330 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 330
{ } 
#endif
# 333 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 333
{ } 
#endif
# 336 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 336
{ } 
#endif
# 339 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 339
{ } 
#endif
# 342 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 342
{ } 
#endif
# 345 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 345
{ } 
#endif
# 348 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 348
{ } 
#endif
# 351 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 351
{ } 
#endif
# 354 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 354
{ } 
#endif
# 357 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 357
{ } 
#endif
# 360 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 360
{ } 
#endif
# 363 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 363
{ } 
#endif
# 366 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 366
{ } 
#endif
# 369 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 369
{ } 
#endif
# 372 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 372
{ } 
#endif
# 375 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 375
{ } 
#endif
# 378 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 378
{ } 
#endif
# 381 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 381
{ } 
#endif
# 384 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 384
{ } 
#endif
# 387 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 387
{ } 
#endif
# 390 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 390
{ } 
#endif
# 393 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 393
{ } 
#endif
# 396 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 396
{ } 
#endif
# 399 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 399
{ } 
#endif
# 402 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 402
{ } 
#endif
# 405 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 405
{ } 
#endif
# 408 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 408
{ } 
#endif
# 411 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 411
{ } 
#endif
# 414 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 414
{ } 
#endif
# 417 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 417
{ } 
#endif
# 420 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 420
{ } 
#endif
# 423 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 423
{ } 
#endif
# 426 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 426
{ } 
#endif
# 429 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 429
{ } 
#endif
# 432 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 432
{ } 
#endif
# 435 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 435
{ } 
#endif
# 438 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 439
{ } 
#endif
# 442 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 443
{ } 
#endif
# 446 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 447
compare, unsigned long long 
# 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 448
{ } 
#endif
# 451 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 452
compare, unsigned long long 
# 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 453
{ } 
#endif
# 456 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 456
{ } 
#endif
# 459 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 459
{ } 
#endif
# 462 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 462
{ } 
#endif
# 465 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 465
{ } 
#endif
# 468 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 468
{ } 
#endif
# 471 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 471
{ } 
#endif
# 474 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 474
{ } 
#endif
# 477 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 477
{ } 
#endif
# 480 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 480
{ } 
#endif
# 483 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 483
{ } 
#endif
# 486 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 486
{ } 
#endif
# 489 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 489
{ } 
#endif
# 492 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 492
{ } 
#endif
# 495 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 495
{ } 
#endif
# 498 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 498
{ } 
#endif
# 501 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 501
{ } 
#endif
# 504 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 504
{ } 
#endif
# 507 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 507
{ } 
#endif
# 510 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 510
{ } 
#endif
# 513 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 513
{ } 
#endif
# 516 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 516
{ } 
#endif
# 519 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 519
{ } 
#endif
# 522 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 522
{ } 
#endif
# 525 "/usr/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 525
{ } 
#endif
# 90 "/usr/include/sm_20_intrinsics.h" 3
extern "C" {
# 1503 "/usr/include/sm_20_intrinsics.h" 3
}
# 1510
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1510
{ } 
#endif
# 1512 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1512
{ } 
#endif
# 1514 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1514
{ } 
#endif
# 1516 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1516
{ } 
#endif
# 1521 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1521
{ } 
#endif
# 1522 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1522
{ } 
#endif
# 1523 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1523
{ } 
#endif
# 1524 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1524
{ } 
#endif
# 1526 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline size_t __cvta_generic_to_global(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1526
{ } 
#endif
# 1527 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline size_t __cvta_generic_to_shared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1527
{ } 
#endif
# 1528 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline size_t __cvta_generic_to_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1528
{ } 
#endif
# 1529 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline size_t __cvta_generic_to_local(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1529
{ } 
#endif
# 1531 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline void *__cvta_global_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1531
{ } 
#endif
# 1532 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline void *__cvta_shared_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1532
{ } 
#endif
# 1533 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline void *__cvta_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1533
{ } 
#endif
# 1534 "/usr/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline void *__cvta_local_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1534
{ } 
#endif
# 102 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 110
{ } 
#endif
# 119 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 121
{ } 
#endif
# 122 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 122
{ } 
#endif
# 123 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 125 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 133 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 148 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 159
{ } 
#endif
# 162 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 177 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 187 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/usr/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 87 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 87
{ } 
#endif
# 88 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 88
{ } 
#endif
# 90 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 91 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 116 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 116
{ } 
#endif
# 117 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 123 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 151 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 159 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 160
{ } 
#endif
# 162 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 195 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 195
{ } 
#endif
# 196 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 196
{ } 
#endif
# 198 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 199
{ } 
#endif
# 200 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 211 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 223 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 224 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 224
{ } 
#endif
# 225 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 231 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldlu(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 231
{ } 
#endif
# 232 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldlu(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 232
{ } 
#endif
# 234 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldlu(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 234
{ } 
#endif
# 235 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldlu(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 235
{ } 
#endif
# 236 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldlu(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 236
{ } 
#endif
# 237 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldlu(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 237
{ } 
#endif
# 238 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldlu(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 238
{ } 
#endif
# 239 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldlu(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 239
{ } 
#endif
# 240 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldlu(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 240
{ } 
#endif
# 241 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldlu(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 241
{ } 
#endif
# 242 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldlu(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 242
{ } 
#endif
# 243 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldlu(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 243
{ } 
#endif
# 244 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldlu(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 244
{ } 
#endif
# 245 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldlu(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 245
{ } 
#endif
# 247 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldlu(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 247
{ } 
#endif
# 248 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldlu(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 248
{ } 
#endif
# 249 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldlu(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 249
{ } 
#endif
# 250 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldlu(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 250
{ } 
#endif
# 251 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldlu(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 251
{ } 
#endif
# 252 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldlu(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 252
{ } 
#endif
# 253 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldlu(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 253
{ } 
#endif
# 254 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldlu(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 254
{ } 
#endif
# 255 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldlu(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 255
{ } 
#endif
# 256 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldlu(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 256
{ } 
#endif
# 257 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldlu(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 257
{ } 
#endif
# 259 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldlu(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 259
{ } 
#endif
# 260 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldlu(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 260
{ } 
#endif
# 261 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldlu(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 261
{ } 
#endif
# 262 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldlu(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 262
{ } 
#endif
# 263 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldlu(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 263
{ } 
#endif
# 267 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcv(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 267
{ } 
#endif
# 268 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcv(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 268
{ } 
#endif
# 270 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcv(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 270
{ } 
#endif
# 271 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcv(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 271
{ } 
#endif
# 272 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcv(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 272
{ } 
#endif
# 273 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcv(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 273
{ } 
#endif
# 274 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcv(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 274
{ } 
#endif
# 275 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcv(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 275
{ } 
#endif
# 276 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcv(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 276
{ } 
#endif
# 277 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcv(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 277
{ } 
#endif
# 278 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcv(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 278
{ } 
#endif
# 279 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcv(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 279
{ } 
#endif
# 280 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcv(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 280
{ } 
#endif
# 281 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcv(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 281
{ } 
#endif
# 283 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcv(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 283
{ } 
#endif
# 284 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcv(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 284
{ } 
#endif
# 285 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcv(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 285
{ } 
#endif
# 286 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcv(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 286
{ } 
#endif
# 287 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcv(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 287
{ } 
#endif
# 288 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcv(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 288
{ } 
#endif
# 289 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcv(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 289
{ } 
#endif
# 290 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcv(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 290
{ } 
#endif
# 291 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcv(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 291
{ } 
#endif
# 292 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcv(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 292
{ } 
#endif
# 293 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcv(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 293
{ } 
#endif
# 295 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcv(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 295
{ } 
#endif
# 296 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcv(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 296
{ } 
#endif
# 297 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcv(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 297
{ } 
#endif
# 298 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcv(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 298
{ } 
#endif
# 299 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcv(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 299
{ } 
#endif
# 303 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 303
{ } 
#endif
# 304 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 304
{ } 
#endif
# 306 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 306
{ } 
#endif
# 307 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 307
{ } 
#endif
# 308 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 308
{ } 
#endif
# 309 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 309
{ } 
#endif
# 310 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 310
{ } 
#endif
# 311 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 311
{ } 
#endif
# 312 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 312
{ } 
#endif
# 313 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 313
{ } 
#endif
# 314 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 314
{ } 
#endif
# 315 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 315
{ } 
#endif
# 316 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 316
{ } 
#endif
# 317 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 317
{ } 
#endif
# 319 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 319
{ } 
#endif
# 320 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 320
{ } 
#endif
# 321 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 321
{ } 
#endif
# 322 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 322
{ } 
#endif
# 323 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 323
{ } 
#endif
# 324 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 324
{ } 
#endif
# 325 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 325
{ } 
#endif
# 326 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 326
{ } 
#endif
# 327 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 327
{ } 
#endif
# 328 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 328
{ } 
#endif
# 329 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 329
{ } 
#endif
# 331 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 331
{ } 
#endif
# 332 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 332
{ } 
#endif
# 333 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 333
{ } 
#endif
# 334 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 334
{ } 
#endif
# 335 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwb(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 335
{ } 
#endif
# 339 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 339
{ } 
#endif
# 340 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 340
{ } 
#endif
# 342 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 342
{ } 
#endif
# 343 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 343
{ } 
#endif
# 344 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 344
{ } 
#endif
# 345 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 345
{ } 
#endif
# 346 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 346
{ } 
#endif
# 347 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 347
{ } 
#endif
# 348 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 348
{ } 
#endif
# 349 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 349
{ } 
#endif
# 350 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 350
{ } 
#endif
# 351 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 351
{ } 
#endif
# 352 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 352
{ } 
#endif
# 353 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 353
{ } 
#endif
# 355 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 355
{ } 
#endif
# 356 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 356
{ } 
#endif
# 357 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 357
{ } 
#endif
# 358 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 358
{ } 
#endif
# 359 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 359
{ } 
#endif
# 360 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 360
{ } 
#endif
# 361 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 361
{ } 
#endif
# 362 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 362
{ } 
#endif
# 363 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 363
{ } 
#endif
# 364 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 364
{ } 
#endif
# 365 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 365
{ } 
#endif
# 367 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 367
{ } 
#endif
# 368 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 368
{ } 
#endif
# 369 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 369
{ } 
#endif
# 370 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 370
{ } 
#endif
# 371 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcg(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 371
{ } 
#endif
# 375 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 375
{ } 
#endif
# 376 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 376
{ } 
#endif
# 378 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 378
{ } 
#endif
# 379 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 379
{ } 
#endif
# 380 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 380
{ } 
#endif
# 381 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 381
{ } 
#endif
# 382 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 382
{ } 
#endif
# 383 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 383
{ } 
#endif
# 384 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 384
{ } 
#endif
# 385 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 385
{ } 
#endif
# 386 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 386
{ } 
#endif
# 387 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 387
{ } 
#endif
# 388 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 388
{ } 
#endif
# 389 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 389
{ } 
#endif
# 391 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 391
{ } 
#endif
# 392 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 392
{ } 
#endif
# 393 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 393
{ } 
#endif
# 394 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 394
{ } 
#endif
# 395 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 395
{ } 
#endif
# 396 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 396
{ } 
#endif
# 397 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 397
{ } 
#endif
# 398 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 398
{ } 
#endif
# 399 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 399
{ } 
#endif
# 400 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 400
{ } 
#endif
# 401 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 401
{ } 
#endif
# 403 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 403
{ } 
#endif
# 404 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 404
{ } 
#endif
# 405 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 405
{ } 
#endif
# 406 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 406
{ } 
#endif
# 407 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stcs(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 407
{ } 
#endif
# 411 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 411
{ } 
#endif
# 412 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 412
{ } 
#endif
# 414 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 414
{ } 
#endif
# 415 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 415
{ } 
#endif
# 416 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 416
{ } 
#endif
# 417 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 417
{ } 
#endif
# 418 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 418
{ } 
#endif
# 419 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 419
{ } 
#endif
# 420 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 420
{ } 
#endif
# 421 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 421
{ } 
#endif
# 422 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 422
{ } 
#endif
# 423 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 423
{ } 
#endif
# 424 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 424
{ } 
#endif
# 425 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 425
{ } 
#endif
# 427 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 427
{ } 
#endif
# 428 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 428
{ } 
#endif
# 429 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 429
{ } 
#endif
# 430 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 430
{ } 
#endif
# 431 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 431
{ } 
#endif
# 432 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 432
{ } 
#endif
# 433 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 433
{ } 
#endif
# 434 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 434
{ } 
#endif
# 435 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 435
{ } 
#endif
# 436 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 436
{ } 
#endif
# 437 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 437
{ } 
#endif
# 439 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 439
{ } 
#endif
# 440 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 440
{ } 
#endif
# 441 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 441
{ } 
#endif
# 442 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 442
{ } 
#endif
# 443 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline void __stwt(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 443
{ } 
#endif
# 460 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 460
{ } 
#endif
# 472 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 472
{ } 
#endif
# 485 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 485
{ } 
#endif
# 497 "/usr/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 497
{ } 
#endif
# 89 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 96
{ } 
#endif
# 98 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 99
{ } 
#endif
# 106 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 110
{ } 
#endif
# 93 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 93 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline unsigned __reduce_add_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline unsigned __reduce_min_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline unsigned __reduce_max_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline int __reduce_add_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline int __reduce_min_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline int __reduce_max_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline unsigned __reduce_and_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline unsigned __reduce_or_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) static inline unsigned __reduce_xor_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 103
{ } 
#endif
# 106 "/usr/include/crt/sm_80_rt.h" 3
extern "C" {
# 107
__attribute__((unused)) inline void *__nv_associate_access_property(const void *ptr, unsigned long long 
# 108
property) {int volatile ___ = 1;(void)ptr;(void)property;
# 112
::exit(___);}
#if 0
# 108
{ 
# 109
__attribute__((unused)) extern void *__nv_associate_access_property_impl(const void *, unsigned long long); 
# 111
return __nv_associate_access_property_impl(ptr, property); 
# 112
} 
#endif
# 114 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_4(void *dst, const void *
# 115
src, unsigned 
# 116
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 121
::exit(___);}
#if 0
# 116
{ 
# 117
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_4_impl(void *, const void *, unsigned); 
# 120
__nv_memcpy_async_shared_global_4_impl(dst, src, src_size); 
# 121
} 
#endif
# 123 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_8(void *dst, const void *
# 124
src, unsigned 
# 125
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 130
::exit(___);}
#if 0
# 125
{ 
# 126
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_8_impl(void *, const void *, unsigned); 
# 129
__nv_memcpy_async_shared_global_8_impl(dst, src, src_size); 
# 130
} 
#endif
# 132 "/usr/include/crt/sm_80_rt.h" 3
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_16(void *dst, const void *
# 133
src, unsigned 
# 134
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_16_impl(void *, const void *, unsigned); 
# 138
__nv_memcpy_async_shared_global_16_impl(dst, src, src_size); 
# 139
} 
#endif
# 141 "/usr/include/crt/sm_80_rt.h" 3
}
# 122 "/usr/include/surface_functions.h" 3
template< class T> 
# 123
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 124
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 128
::exit(___);}
#if 0
# 124
{ 
# 128
} 
#endif
# 130 "/usr/include/surface_functions.h" 3
template< class T> 
# 131
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 132
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 138
::exit(___);}
#if 0
# 132
{ 
# 138
} 
#endif
# 140 "/usr/include/surface_functions.h" 3
template< class T> 
# 141
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 142
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 146
::exit(___);}
#if 0
# 142
{ 
# 146
} 
#endif
# 149 "/usr/include/surface_functions.h" 3
template< class T> 
# 150
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 151
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 155
::exit(___);}
#if 0
# 151
{ 
# 155
} 
#endif
# 157 "/usr/include/surface_functions.h" 3
template< class T> 
# 158
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 159
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 165
::exit(___);}
#if 0
# 159
{ 
# 165
} 
#endif
# 167 "/usr/include/surface_functions.h" 3
template< class T> 
# 168
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 169
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 173
::exit(___);}
#if 0
# 169
{ 
# 173
} 
#endif
# 176 "/usr/include/surface_functions.h" 3
template< class T> 
# 177
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 178
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 182
::exit(___);}
#if 0
# 178
{ 
# 182
} 
#endif
# 184 "/usr/include/surface_functions.h" 3
template< class T> 
# 185
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 186
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 192
::exit(___);}
#if 0
# 186
{ 
# 192
} 
#endif
# 194 "/usr/include/surface_functions.h" 3
template< class T> 
# 195
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 196
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 200
::exit(___);}
#if 0
# 196
{ 
# 200
} 
#endif
# 204 "/usr/include/surface_functions.h" 3
template< class T> 
# 205
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 206
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 210
::exit(___);}
#if 0
# 206
{ 
# 210
} 
#endif
# 212 "/usr/include/surface_functions.h" 3
template< class T> 
# 213
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 214
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 220
::exit(___);}
#if 0
# 214
{ 
# 220
} 
#endif
# 223 "/usr/include/surface_functions.h" 3
template< class T> 
# 224
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 225
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 229
::exit(___);}
#if 0
# 225
{ 
# 229
} 
#endif
# 232 "/usr/include/surface_functions.h" 3
template< class T> 
# 233
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 234
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 238
::exit(___);}
#if 0
# 234
{ 
# 238
} 
#endif
# 240 "/usr/include/surface_functions.h" 3
template< class T> 
# 241
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 242
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 248
::exit(___);}
#if 0
# 242
{ 
# 248
} 
#endif
# 251 "/usr/include/surface_functions.h" 3
template< class T> 
# 252
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 253
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 257
::exit(___);}
#if 0
# 253
{ 
# 257
} 
#endif
# 260 "/usr/include/surface_functions.h" 3
template< class T> 
# 261
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 262
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 266
::exit(___);}
#if 0
# 262
{ 
# 266
} 
#endif
# 268 "/usr/include/surface_functions.h" 3
template< class T> 
# 269
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 270
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 277
::exit(___);}
#if 0
# 270
{ 
# 277
} 
#endif
# 279 "/usr/include/surface_functions.h" 3
template< class T> 
# 280
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 281
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 285
::exit(___);}
#if 0
# 281
{ 
# 285
} 
#endif
# 288 "/usr/include/surface_functions.h" 3
template< class T> 
# 289
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 290
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 294
::exit(___);}
#if 0
# 290
{ 
# 294
} 
#endif
# 296 "/usr/include/surface_functions.h" 3
template< class T> 
# 297
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 298
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 304
::exit(___);}
#if 0
# 298
{ 
# 304
} 
#endif
# 306 "/usr/include/surface_functions.h" 3
template< class T> 
# 307
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 308
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 312
::exit(___);}
#if 0
# 308
{ 
# 312
} 
#endif
# 315 "/usr/include/surface_functions.h" 3
template< class T> 
# 316
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 317
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 321
::exit(___);}
#if 0
# 317
{ 
# 321
} 
#endif
# 323 "/usr/include/surface_functions.h" 3
template< class T> 
# 324
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 325
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 329
::exit(___);}
#if 0
# 325
{ 
# 329
} 
#endif
# 333 "/usr/include/surface_functions.h" 3
template< class T> 
# 334
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 335
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 339
::exit(___);}
#if 0
# 335
{ 
# 339
} 
#endif
# 341 "/usr/include/surface_functions.h" 3
template< class T> 
# 342
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 343
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 347
::exit(___);}
#if 0
# 343
{ 
# 347
} 
#endif
# 350 "/usr/include/surface_functions.h" 3
template< class T> 
# 351
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 352
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 356
::exit(___);}
#if 0
# 352
{ 
# 356
} 
#endif
# 358 "/usr/include/surface_functions.h" 3
template< class T> 
# 359
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 360
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 364
::exit(___);}
#if 0
# 360
{ 
# 364
} 
#endif
# 367 "/usr/include/surface_functions.h" 3
template< class T> 
# 368
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 369
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 373
::exit(___);}
#if 0
# 369
{ 
# 373
} 
#endif
# 375 "/usr/include/surface_functions.h" 3
template< class T> 
# 376
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 377
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 381
::exit(___);}
#if 0
# 377
{ 
# 381
} 
#endif
# 384 "/usr/include/surface_functions.h" 3
template< class T> 
# 385
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 386
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 390
::exit(___);}
#if 0
# 386
{ 
# 390
} 
#endif
# 392 "/usr/include/surface_functions.h" 3
template< class T> 
# 393
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 394
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 398
::exit(___);}
#if 0
# 394
{ 
# 398
} 
#endif
# 401 "/usr/include/surface_functions.h" 3
template< class T> 
# 402
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 403
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 407
::exit(___);}
#if 0
# 403
{ 
# 407
} 
#endif
# 409 "/usr/include/surface_functions.h" 3
template< class T> 
# 410
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 411
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 415
::exit(___);}
#if 0
# 411
{ 
# 415
} 
#endif
# 419 "/usr/include/surface_functions.h" 3
template< class T> 
# 420
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 421
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 425
::exit(___);}
#if 0
# 421
{ 
# 425
} 
#endif
# 427 "/usr/include/surface_functions.h" 3
template< class T> 
# 428
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 429
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 433
::exit(___);}
#if 0
# 429
{ 
# 433
} 
#endif
# 72 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 73
struct __nv_tex_rmet_ret { }; 
# 75
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
# 76
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
# 77
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
# 78
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
# 79
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
# 80
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
# 81
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
# 82
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
# 83
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
# 85
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
# 86
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
# 87
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
# 88
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
# 89
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
# 90
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
# 91
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
# 92
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
# 94
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
# 95
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
# 96
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
# 97
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
# 98
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
# 99
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
# 100
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
# 101
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
# 113 "/usr/include/texture_fetch_functions.h" 3
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
# 114
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
# 115
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
# 116
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
# 119
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
# 131 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 132
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) 
# 133
{int volatile ___ = 1;(void)t;(void)x;
# 139
::exit(___);}
#if 0
# 133
{ 
# 139
} 
#endif
# 141 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 142
struct __nv_tex_rmnf_ret { }; 
# 144
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
# 145
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
# 146
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
# 147
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
# 148
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
# 149
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
# 150
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
# 151
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
# 152
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
# 153
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
# 154
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
# 155
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
# 156
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
# 157
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
# 158
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 159
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
# 160
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 162
template< class T> 
# 163
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 164
{int volatile ___ = 1;(void)t;(void)x;
# 171
::exit(___);}
#if 0
# 164
{ 
# 171
} 
#endif
# 174 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 175
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) 
# 176
{int volatile ___ = 1;(void)t;(void)x;
# 182
::exit(___);}
#if 0
# 176
{ 
# 182
} 
#endif
# 184 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 185
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 186
{int volatile ___ = 1;(void)t;(void)x;
# 193
::exit(___);}
#if 0
# 186
{ 
# 193
} 
#endif
# 197 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 198
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) 
# 199
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 206
::exit(___);}
#if 0
# 199
{ 
# 206
} 
#endif
# 208 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 209
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 210
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 217
::exit(___);}
#if 0
# 210
{ 
# 217
} 
#endif
# 221 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 222
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) 
# 223
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 229
::exit(___);}
#if 0
# 223
{ 
# 229
} 
#endif
# 231 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 232
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 233
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 240
::exit(___);}
#if 0
# 233
{ 
# 240
} 
#endif
# 244 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 245
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 246
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 252
::exit(___);}
#if 0
# 246
{ 
# 252
} 
#endif
# 254 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 255
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 256
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 263
::exit(___);}
#if 0
# 256
{ 
# 263
} 
#endif
# 266 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 267
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 268
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 274
::exit(___);}
#if 0
# 268
{ 
# 274
} 
#endif
# 276 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 277
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 278
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 285
::exit(___);}
#if 0
# 278
{ 
# 285
} 
#endif
# 288 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 289
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 290
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 296
::exit(___);}
#if 0
# 290
{ 
# 296
} 
#endif
# 298 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 299
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 300
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 307
::exit(___);}
#if 0
# 300
{ 
# 307
} 
#endif
# 310 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 311
struct __nv_tex2dgather_ret { }; 
# 312
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
# 313
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
# 314
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
# 315
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
# 316
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
# 317
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
# 318
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
# 319
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
# 320
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
# 321
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
# 322
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
# 324
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
# 325
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
# 326
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
# 327
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
# 328
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
# 329
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
# 330
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
# 331
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
# 332
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
# 333
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
# 335
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
# 336
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
# 337
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
# 338
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
# 339
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
# 340
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
# 341
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
# 342
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
# 343
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
# 344
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
# 346
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
# 347
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
# 348
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
# 349
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
# 350
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
# 352
template< class T> 
# 353
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 354
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 361
::exit(___);}
#if 0
# 354
{ 
# 361
} 
#endif
# 364 "/usr/include/texture_fetch_functions.h" 3
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
# 365
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
# 366
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
# 367
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
# 368
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
# 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
# 370
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
# 371
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
# 372
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
# 373
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
# 374
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
# 375
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 376
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
# 377
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
# 378
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
# 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
# 380
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
# 381
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
# 382
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
# 383
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
# 384
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
# 385
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 387
template< class T> 
# 388
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_rmnf_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 389
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 396
::exit(___);}
#if 0
# 389
{ 
# 396
} 
#endif
# 400 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 401
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) 
# 402
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 408
::exit(___);}
#if 0
# 402
{ 
# 408
} 
#endif
# 410 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 411
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) 
# 412
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 419
::exit(___);}
#if 0
# 412
{ 
# 419
} 
#endif
# 422 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 423
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) 
# 424
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 430
::exit(___);}
#if 0
# 424
{ 
# 430
} 
#endif
# 432 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 433
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) 
# 434
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 441
::exit(___);}
#if 0
# 434
{ 
# 441
} 
#endif
# 444 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 445
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) 
# 446
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 452
::exit(___);}
#if 0
# 446
{ 
# 452
} 
#endif
# 454 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 455
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) 
# 456
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 463
::exit(___);}
#if 0
# 456
{ 
# 463
} 
#endif
# 466 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 467
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) 
# 468
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 474
::exit(___);}
#if 0
# 468
{ 
# 474
} 
#endif
# 476 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 477
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) 
# 478
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 485
::exit(___);}
#if 0
# 478
{ 
# 485
} 
#endif
# 488 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 489
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 490
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 496
::exit(___);}
#if 0
# 490
{ 
# 496
} 
#endif
# 498 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 499
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 500
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 507
::exit(___);}
#if 0
# 500
{ 
# 507
} 
#endif
# 510 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 511
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 512
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 518
::exit(___);}
#if 0
# 512
{ 
# 518
} 
#endif
# 520 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 521
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 522
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 529
::exit(___);}
#if 0
# 522
{ 
# 529
} 
#endif
# 533 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 534
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 535
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 541
::exit(___);}
#if 0
# 535
{ 
# 541
} 
#endif
# 543 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 544
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 545
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 552
::exit(___);}
#if 0
# 545
{ 
# 552
} 
#endif
# 556 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 557
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) 
# 558
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 564
::exit(___);}
#if 0
# 558
{ 
# 564
} 
#endif
# 566 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 567
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) 
# 568
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 575
::exit(___);}
#if 0
# 568
{ 
# 575
} 
#endif
# 579 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 580
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 581
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 587
::exit(___);}
#if 0
# 581
{ 
# 587
} 
#endif
# 589 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 590
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 591
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 598
::exit(___);}
#if 0
# 591
{ 
# 598
} 
#endif
# 602 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 603
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 604
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 610
::exit(___);}
#if 0
# 604
{ 
# 610
} 
#endif
# 612 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 613
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 614
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 621
::exit(___);}
#if 0
# 614
{ 
# 621
} 
#endif
# 625 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 626
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) 
# 627
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 633
::exit(___);}
#if 0
# 627
{ 
# 633
} 
#endif
# 635 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 636
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) 
# 637
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 644
::exit(___);}
#if 0
# 637
{ 
# 644
} 
#endif
# 648 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 649
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 650
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 656
::exit(___);}
#if 0
# 650
{ 
# 656
} 
#endif
# 658 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 659
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 660
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 667
::exit(___);}
#if 0
# 660
{ 
# 667
} 
#endif
# 670 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 671
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) 
# 672
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 678
::exit(___);}
#if 0
# 672
{ 
# 678
} 
#endif
# 680 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 681
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) 
# 682
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 689
::exit(___);}
#if 0
# 682
{ 
# 689
} 
#endif
# 692 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 693
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 694
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 700
::exit(___);}
#if 0
# 694
{ 
# 700
} 
#endif
# 702 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 703
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 704
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 711
::exit(___);}
#if 0
# 704
{ 
# 711
} 
#endif
# 714 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 715
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 716
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 722
::exit(___);}
#if 0
# 716
{ 
# 722
} 
#endif
# 724 "/usr/include/texture_fetch_functions.h" 3
template< class T> 
# 725
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 726
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 733
::exit(___);}
#if 0
# 726
{ 
# 733
} 
#endif
# 64 "/usr/include/texture_indirect_functions.h" 3
template< class T> struct __nv_itex_trait { }; 
# 65
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 66
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 86
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 87
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 88
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 89
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 100 "/usr/include/texture_indirect_functions.h" 3
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 101
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 102
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 103
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 107
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 108
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 109
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 113
::exit(___);}
#if 0
# 109
{ 
# 113
} 
#endif
# 115 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 116
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 117
{int volatile ___ = 1;(void)texObject;(void)x;
# 123
::exit(___);}
#if 0
# 117
{ 
# 123
} 
#endif
# 125 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 126
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 127
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 131
::exit(___);}
#if 0
# 127
{ 
# 131
} 
#endif
# 134 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 135
tex1D(cudaTextureObject_t texObject, float x) 
# 136
{int volatile ___ = 1;(void)texObject;(void)x;
# 142
::exit(___);}
#if 0
# 136
{ 
# 142
} 
#endif
# 145 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 146
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 147
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 151
::exit(___);}
#if 0
# 147
{ 
# 151
} 
#endif
# 153 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 154
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 155
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 161
::exit(___);}
#if 0
# 155
{ 
# 161
} 
#endif
# 164 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 165
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y, bool *
# 166
isResident) 
# 167
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;
# 173
::exit(___);}
#if 0
# 167
{ 
# 173
} 
#endif
# 175 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 176
tex2D(cudaTextureObject_t texObject, float x, float y, bool *isResident) 
# 177
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)isResident;
# 183
::exit(___);}
#if 0
# 177
{ 
# 183
} 
#endif
# 188 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 189
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 190
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 194
::exit(___);}
#if 0
# 190
{ 
# 194
} 
#endif
# 196 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 197
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 198
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 204
::exit(___);}
#if 0
# 198
{ 
# 204
} 
#endif
# 207 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 208
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z, bool *
# 209
isResident) 
# 210
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)isResident;
# 216
::exit(___);}
#if 0
# 210
{ 
# 216
} 
#endif
# 218 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 219
tex3D(cudaTextureObject_t texObject, float x, float y, float z, bool *isResident) 
# 220
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)isResident;
# 226
::exit(___);}
#if 0
# 220
{ 
# 226
} 
#endif
# 230 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 231
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 232
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 236
::exit(___);}
#if 0
# 232
{ 
# 236
} 
#endif
# 238 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 239
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 240
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 246
::exit(___);}
#if 0
# 240
{ 
# 246
} 
#endif
# 248 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 249
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 250
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 254
::exit(___);}
#if 0
# 250
{ 
# 254
} 
#endif
# 256 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 257
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 258
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 264
::exit(___);}
#if 0
# 258
{ 
# 264
} 
#endif
# 267 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 268
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, bool *isResident) 
# 269
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)isResident;
# 275
::exit(___);}
#if 0
# 269
{ 
# 275
} 
#endif
# 277 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 278
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer, bool *isResident) 
# 279
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)isResident;
# 285
::exit(___);}
#if 0
# 279
{ 
# 285
} 
#endif
# 289 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 290
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 291
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 295
::exit(___);}
#if 0
# 291
{ 
# 295
} 
#endif
# 298 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 299
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 300
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 306
::exit(___);}
#if 0
# 300
{ 
# 306
} 
#endif
# 309 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 310
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 311
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 315
::exit(___);}
#if 0
# 311
{ 
# 315
} 
#endif
# 317 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 318
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 319
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 325
::exit(___);}
#if 0
# 319
{ 
# 325
} 
#endif
# 327 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 328
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 329
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 333
::exit(___);}
#if 0
# 329
{ 
# 333
} 
#endif
# 335 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 336
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 337
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 343
::exit(___);}
#if 0
# 337
{ 
# 343
} 
#endif
# 346 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 347
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, bool *isResident, int comp = 0) 
# 348
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;(void)comp;
# 354
::exit(___);}
#if 0
# 348
{ 
# 354
} 
#endif
# 356 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 357
tex2Dgather(cudaTextureObject_t to, float x, float y, bool *isResident, int comp = 0) 
# 358
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)isResident;(void)comp;
# 364
::exit(___);}
#if 0
# 358
{ 
# 364
} 
#endif
# 368 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 369
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 370
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 374
::exit(___);}
#if 0
# 370
{ 
# 374
} 
#endif
# 376 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 377
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 378
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 384
::exit(___);}
#if 0
# 378
{ 
# 384
} 
#endif
# 387 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 388
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 389
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 393
::exit(___);}
#if 0
# 389
{ 
# 393
} 
#endif
# 395 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 396
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 397
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 403
::exit(___);}
#if 0
# 397
{ 
# 403
} 
#endif
# 407 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 408
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level, bool *isResident) 
# 409
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;(void)isResident;
# 415
::exit(___);}
#if 0
# 409
{ 
# 415
} 
#endif
# 417 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 418
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level, bool *isResident) 
# 419
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;(void)isResident;
# 425
::exit(___);}
#if 0
# 419
{ 
# 425
} 
#endif
# 430 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 431
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 432
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 436
::exit(___);}
#if 0
# 432
{ 
# 436
} 
#endif
# 438 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 439
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 440
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 446
::exit(___);}
#if 0
# 440
{ 
# 446
} 
#endif
# 449 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 450
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level, bool *isResident) 
# 451
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 457
::exit(___);}
#if 0
# 451
{ 
# 457
} 
#endif
# 459 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 460
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level, bool *isResident) 
# 461
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 467
::exit(___);}
#if 0
# 461
{ 
# 467
} 
#endif
# 472 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 473
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 474
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 478
::exit(___);}
#if 0
# 474
{ 
# 478
} 
#endif
# 480 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 481
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 482
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 488
::exit(___);}
#if 0
# 482
{ 
# 488
} 
#endif
# 491 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 492
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 493
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 497
::exit(___);}
#if 0
# 493
{ 
# 497
} 
#endif
# 499 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 500
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 501
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 507
::exit(___);}
#if 0
# 501
{ 
# 507
} 
#endif
# 510 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 511
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level, bool *isResident) 
# 512
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 518
::exit(___);}
#if 0
# 512
{ 
# 518
} 
#endif
# 520 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 521
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level, bool *isResident) 
# 522
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 528
::exit(___);}
#if 0
# 522
{ 
# 528
} 
#endif
# 531 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 532
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 533
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 537
::exit(___);}
#if 0
# 533
{ 
# 537
} 
#endif
# 539 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 540
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 541
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 547
::exit(___);}
#if 0
# 541
{ 
# 547
} 
#endif
# 550 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 551
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 552
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 556
::exit(___);}
#if 0
# 552
{ 
# 556
} 
#endif
# 558 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 559
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 560
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 566
::exit(___);}
#if 0
# 560
{ 
# 566
} 
#endif
# 568 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 569
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 570
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 574
::exit(___);}
#if 0
# 570
{ 
# 574
} 
#endif
# 576 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 577
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 578
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 584
::exit(___);}
#if 0
# 578
{ 
# 584
} 
#endif
# 586 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 587
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 588
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 592
::exit(___);}
#if 0
# 588
{ 
# 592
} 
#endif
# 594 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 595
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 596
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 602
::exit(___);}
#if 0
# 596
{ 
# 602
} 
#endif
# 605 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 606
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 607
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 612
::exit(___);}
#if 0
# 607
{ 
# 612
} 
#endif
# 614 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 615
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 616
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 622
::exit(___);}
#if 0
# 616
{ 
# 622
} 
#endif
# 625 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 626
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 627
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 634
::exit(___);}
#if 0
# 627
{ 
# 634
} 
#endif
# 636 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 637
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 638
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 644
::exit(___);}
#if 0
# 638
{ 
# 644
} 
#endif
# 648 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 649
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 650
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 654
::exit(___);}
#if 0
# 650
{ 
# 654
} 
#endif
# 656 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 657
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 658
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 664
::exit(___);}
#if 0
# 658
{ 
# 664
} 
#endif
# 667 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 668
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 669
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 675
::exit(___);}
#if 0
# 669
{ 
# 675
} 
#endif
# 677 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 678
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 679
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 685
::exit(___);}
#if 0
# 679
{ 
# 685
} 
#endif
# 690 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 691
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 692
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 696
::exit(___);}
#if 0
# 692
{ 
# 696
} 
#endif
# 698 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 699
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 700
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 706
::exit(___);}
#if 0
# 700
{ 
# 706
} 
#endif
# 709 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 710
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 711
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 715
::exit(___);}
#if 0
# 711
{ 
# 715
} 
#endif
# 717 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 718
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 719
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 725
::exit(___);}
#if 0
# 719
{ 
# 725
} 
#endif
# 728 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 729
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 730
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 736
::exit(___);}
#if 0
# 730
{ 
# 736
} 
#endif
# 738 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 739
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 740
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 746
::exit(___);}
#if 0
# 740
{ 
# 746
} 
#endif
# 750 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 751
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 752
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 756
::exit(___);}
#if 0
# 752
{ 
# 756
} 
#endif
# 758 "/usr/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 759
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 760
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 766
::exit(___);}
#if 0
# 760
{ 
# 766
} 
#endif
# 59 "/usr/include/surface_indirect_functions.h" 3
template< class T> struct __nv_isurf_trait { }; 
# 60
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 61
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 78
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 80
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 88
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 90
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 96
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 99
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 100
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 101
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 105
::exit(___);}
#if 0
# 101
{ 
# 105
} 
#endif
# 107 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 108
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 109
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 115
::exit(___);}
#if 0
# 109
{ 
# 115
} 
#endif
# 117 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 118
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 119
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 123
::exit(___);}
#if 0
# 119
{ 
# 123
} 
#endif
# 125 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 126
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 127
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 133
::exit(___);}
#if 0
# 127
{ 
# 133
} 
#endif
# 136 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 137
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 138
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 142
::exit(___);}
#if 0
# 138
{ 
# 142
} 
#endif
# 144 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 145
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 146
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 152
::exit(___);}
#if 0
# 146
{ 
# 152
} 
#endif
# 154 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 155
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 156
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 160
::exit(___);}
#if 0
# 156
{ 
# 160
} 
#endif
# 162 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 163
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 164
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 170
::exit(___);}
#if 0
# 164
{ 
# 170
} 
#endif
# 172 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 173
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 174
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 178
::exit(___);}
#if 0
# 174
{ 
# 178
} 
#endif
# 180 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 181
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 182
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 188
::exit(___);}
#if 0
# 182
{ 
# 188
} 
#endif
# 190 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 191
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 192
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 196
::exit(___);}
#if 0
# 192
{ 
# 196
} 
#endif
# 198 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 199
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 200
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 206
::exit(___);}
#if 0
# 200
{ 
# 206
} 
#endif
# 208 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 209
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 210
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 214
::exit(___);}
#if 0
# 210
{ 
# 214
} 
#endif
# 216 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 217
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 218
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 224
::exit(___);}
#if 0
# 218
{ 
# 224
} 
#endif
# 226 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 227
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 228
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 232
::exit(___);}
#if 0
# 228
{ 
# 232
} 
#endif
# 234 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 235
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 236
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 240
::exit(___);}
#if 0
# 236
{ 
# 240
} 
#endif
# 242 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 243
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 244
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 248
::exit(___);}
#if 0
# 244
{ 
# 248
} 
#endif
# 250 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 251
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 252
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 256
::exit(___);}
#if 0
# 252
{ 
# 256
} 
#endif
# 258 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 259
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 260
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 264
::exit(___);}
#if 0
# 260
{ 
# 264
} 
#endif
# 266 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 267
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 268
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 272
::exit(___);}
#if 0
# 268
{ 
# 272
} 
#endif
# 274 "/usr/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 275
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 276
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 280
::exit(___);}
#if 0
# 276
{ 
# 280
} 
#endif
# 3307 "/usr/include/crt/device_functions.h" 3
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
# 68 "/usr/include/device_launch_parameters.h" 3
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 201 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 202
cudaLaunchKernel(const T *
# 203
func, dim3 
# 204
gridDim, dim3 
# 205
blockDim, void **
# 206
args, size_t 
# 207
sharedMem = 0, cudaStream_t 
# 208
stream = 0) 
# 210
{ 
# 211
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 212
} 
# 263 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 264
cudaLaunchCooperativeKernel(const T *
# 265
func, dim3 
# 266
gridDim, dim3 
# 267
blockDim, void **
# 268
args, size_t 
# 269
sharedMem = 0, cudaStream_t 
# 270
stream = 0) 
# 272
{ 
# 273
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 274
} 
# 307 "/usr/include/cuda_runtime.h" 3
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 308
event, unsigned 
# 309
flags) 
# 311
{ 
# 312
return ::cudaEventCreateWithFlags(event, flags); 
# 313
} 
# 372 "/usr/include/cuda_runtime.h" 3
static inline cudaError_t cudaMallocHost(void **
# 373
ptr, size_t 
# 374
size, unsigned 
# 375
flags) 
# 377
{ 
# 378
return ::cudaHostAlloc(ptr, size, flags); 
# 379
} 
# 381
template< class T> static inline cudaError_t 
# 382
cudaHostAlloc(T **
# 383
ptr, size_t 
# 384
size, unsigned 
# 385
flags) 
# 387
{ 
# 388
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 389
} 
# 391
template< class T> static inline cudaError_t 
# 392
cudaHostGetDevicePointer(T **
# 393
pDevice, void *
# 394
pHost, unsigned 
# 395
flags) 
# 397
{ 
# 398
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 399
} 
# 501 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 502
cudaMallocManaged(T **
# 503
devPtr, size_t 
# 504
size, unsigned 
# 505
flags = 1) 
# 507
{ 
# 508
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 509
} 
# 591 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 592
cudaStreamAttachMemAsync(cudaStream_t 
# 593
stream, T *
# 594
devPtr, size_t 
# 595
length = 0, unsigned 
# 596
flags = 4) 
# 598
{ 
# 599
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 600
} 
# 602
template< class T> inline cudaError_t 
# 603
cudaMalloc(T **
# 604
devPtr, size_t 
# 605
size) 
# 607
{ 
# 608
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 609
} 
# 611
template< class T> static inline cudaError_t 
# 612
cudaMallocHost(T **
# 613
ptr, size_t 
# 614
size, unsigned 
# 615
flags = 0) 
# 617
{ 
# 618
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 619
} 
# 621
template< class T> static inline cudaError_t 
# 622
cudaMallocPitch(T **
# 623
devPtr, size_t *
# 624
pitch, size_t 
# 625
width, size_t 
# 626
height) 
# 628
{ 
# 629
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 630
} 
# 641 "/usr/include/cuda_runtime.h" 3
static inline cudaError_t cudaMallocAsync(void **
# 642
ptr, size_t 
# 643
size, cudaMemPool_t 
# 644
memPool, cudaStream_t 
# 645
stream) 
# 647
{ 
# 648
return ::cudaMallocFromPoolAsync(ptr, size, memPool, stream); 
# 649
} 
# 651
template< class T> static inline cudaError_t 
# 652
cudaMallocAsync(T **
# 653
ptr, size_t 
# 654
size, cudaMemPool_t 
# 655
memPool, cudaStream_t 
# 656
stream) 
# 658
{ 
# 659
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 660
} 
# 662
template< class T> static inline cudaError_t 
# 663
cudaMallocAsync(T **
# 664
ptr, size_t 
# 665
size, cudaStream_t 
# 666
stream) 
# 668
{ 
# 669
return ::cudaMallocAsync((void **)((void *)ptr), size, stream); 
# 670
} 
# 672
template< class T> static inline cudaError_t 
# 673
cudaMallocFromPoolAsync(T **
# 674
ptr, size_t 
# 675
size, cudaMemPool_t 
# 676
memPool, cudaStream_t 
# 677
stream) 
# 679
{ 
# 680
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 681
} 
# 720 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 721
cudaMemcpyToSymbol(const T &
# 722
symbol, const void *
# 723
src, size_t 
# 724
count, size_t 
# 725
offset = 0, cudaMemcpyKind 
# 726
kind = cudaMemcpyHostToDevice) 
# 728
{ 
# 729
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 730
} 
# 774 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 775
cudaMemcpyToSymbolAsync(const T &
# 776
symbol, const void *
# 777
src, size_t 
# 778
count, size_t 
# 779
offset = 0, cudaMemcpyKind 
# 780
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 781
stream = 0) 
# 783
{ 
# 784
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 785
} 
# 822 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 823
cudaMemcpyFromSymbol(void *
# 824
dst, const T &
# 825
symbol, size_t 
# 826
count, size_t 
# 827
offset = 0, cudaMemcpyKind 
# 828
kind = cudaMemcpyDeviceToHost) 
# 830
{ 
# 831
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 832
} 
# 876 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 877
cudaMemcpyFromSymbolAsync(void *
# 878
dst, const T &
# 879
symbol, size_t 
# 880
count, size_t 
# 881
offset = 0, cudaMemcpyKind 
# 882
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 883
stream = 0) 
# 885
{ 
# 886
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 887
} 
# 945 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 946
cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t *
# 947
pGraphNode, cudaGraph_t 
# 948
graph, const cudaGraphNode_t *
# 949
pDependencies, size_t 
# 950
numDependencies, const T &
# 951
symbol, const void *
# 952
src, size_t 
# 953
count, size_t 
# 954
offset, cudaMemcpyKind 
# 955
kind) 
# 956
{ 
# 957
return ::cudaGraphAddMemcpyNodeToSymbol(pGraphNode, graph, pDependencies, numDependencies, (const void *)(&symbol), src, count, offset, kind); 
# 958
} 
# 1016 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1017
cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t *
# 1018
pGraphNode, cudaGraph_t 
# 1019
graph, const cudaGraphNode_t *
# 1020
pDependencies, size_t 
# 1021
numDependencies, void *
# 1022
dst, const T &
# 1023
symbol, size_t 
# 1024
count, size_t 
# 1025
offset, cudaMemcpyKind 
# 1026
kind) 
# 1027
{ 
# 1028
return ::cudaGraphAddMemcpyNodeFromSymbol(pGraphNode, graph, pDependencies, numDependencies, dst, (const void *)(&symbol), count, offset, kind); 
# 1029
} 
# 1067 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1068
cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t 
# 1069
node, const T &
# 1070
symbol, const void *
# 1071
src, size_t 
# 1072
count, size_t 
# 1073
offset, cudaMemcpyKind 
# 1074
kind) 
# 1075
{ 
# 1076
return ::cudaGraphMemcpyNodeSetParamsToSymbol(node, (const void *)(&symbol), src, count, offset, kind); 
# 1077
} 
# 1115 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1116
cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t 
# 1117
node, void *
# 1118
dst, const T &
# 1119
symbol, size_t 
# 1120
count, size_t 
# 1121
offset, cudaMemcpyKind 
# 1122
kind) 
# 1123
{ 
# 1124
return ::cudaGraphMemcpyNodeSetParamsFromSymbol(node, dst, (const void *)(&symbol), count, offset, kind); 
# 1125
} 
# 1173 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1174
cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t 
# 1175
hGraphExec, cudaGraphNode_t 
# 1176
node, const T &
# 1177
symbol, const void *
# 1178
src, size_t 
# 1179
count, size_t 
# 1180
offset, cudaMemcpyKind 
# 1181
kind) 
# 1182
{ 
# 1183
return ::cudaGraphExecMemcpyNodeSetParamsToSymbol(hGraphExec, node, (const void *)(&symbol), src, count, offset, kind); 
# 1184
} 
# 1232 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1233
cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t 
# 1234
hGraphExec, cudaGraphNode_t 
# 1235
node, void *
# 1236
dst, const T &
# 1237
symbol, size_t 
# 1238
count, size_t 
# 1239
offset, cudaMemcpyKind 
# 1240
kind) 
# 1241
{ 
# 1242
return ::cudaGraphExecMemcpyNodeSetParamsFromSymbol(hGraphExec, node, dst, (const void *)(&symbol), count, offset, kind); 
# 1243
} 
# 1271 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1272
cudaUserObjectCreate(cudaUserObject_t *
# 1273
object_out, T *
# 1274
objectToWrap, unsigned 
# 1275
initialRefcount, unsigned 
# 1276
flags) 
# 1277
{ 
# 1278
return ::cudaUserObjectCreate(object_out, objectToWrap, [](void *
# 1281
vpObj) { delete (reinterpret_cast< T *>(vpObj)); } , initialRefcount, flags); 
# 1284
} 
# 1286
template< class T> static inline cudaError_t 
# 1287
cudaUserObjectCreate(cudaUserObject_t *
# 1288
object_out, T *
# 1289
objectToWrap, unsigned 
# 1290
initialRefcount, cudaUserObjectFlags 
# 1291
flags) 
# 1292
{ 
# 1293
return cudaUserObjectCreate(object_out, objectToWrap, initialRefcount, (unsigned)flags); 
# 1294
} 
# 1321 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1322
cudaGetSymbolAddress(void **
# 1323
devPtr, const T &
# 1324
symbol) 
# 1326
{ 
# 1327
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 1328
} 
# 1353 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1354
cudaGetSymbolSize(size_t *
# 1355
size, const T &
# 1356
symbol) 
# 1358
{ 
# 1359
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 1360
} 
# 1397 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1398
__attribute((deprecated)) static inline cudaError_t cudaBindTexture(size_t *
# 1399
offset, const texture< T, dim, readMode>  &
# 1400
tex, const void *
# 1401
devPtr, const cudaChannelFormatDesc &
# 1402
desc, size_t 
# 1403
size = ((2147483647) * 2U) + 1U) 
# 1405
{ 
# 1406
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 1407
} 
# 1443 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1444
__attribute((deprecated)) static inline cudaError_t cudaBindTexture(size_t *
# 1445
offset, const texture< T, dim, readMode>  &
# 1446
tex, const void *
# 1447
devPtr, size_t 
# 1448
size = ((2147483647) * 2U) + 1U) 
# 1450
{ 
# 1451
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 1452
} 
# 1500 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1501
__attribute((deprecated)) static inline cudaError_t cudaBindTexture2D(size_t *
# 1502
offset, const texture< T, dim, readMode>  &
# 1503
tex, const void *
# 1504
devPtr, const cudaChannelFormatDesc &
# 1505
desc, size_t 
# 1506
width, size_t 
# 1507
height, size_t 
# 1508
pitch) 
# 1510
{ 
# 1511
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 1512
} 
# 1559 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1560
__attribute((deprecated)) static inline cudaError_t cudaBindTexture2D(size_t *
# 1561
offset, const texture< T, dim, readMode>  &
# 1562
tex, const void *
# 1563
devPtr, size_t 
# 1564
width, size_t 
# 1565
height, size_t 
# 1566
pitch) 
# 1568
{ 
# 1569
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
# 1570
} 
# 1602 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1603
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1604
tex, cudaArray_const_t 
# 1605
array, const cudaChannelFormatDesc &
# 1606
desc) 
# 1608
{ 
# 1609
return ::cudaBindTextureToArray(&tex, array, &desc); 
# 1610
} 
# 1641 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1642
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1643
tex, cudaArray_const_t 
# 1644
array) 
# 1646
{ 
# 1647
cudaChannelFormatDesc desc; 
# 1648
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1650
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 1651
} 
# 1683 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1684
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1685
tex, cudaMipmappedArray_const_t 
# 1686
mipmappedArray, const cudaChannelFormatDesc &
# 1687
desc) 
# 1689
{ 
# 1690
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
# 1691
} 
# 1722 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1723
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1724
tex, cudaMipmappedArray_const_t 
# 1725
mipmappedArray) 
# 1727
{ 
# 1728
cudaChannelFormatDesc desc; 
# 1729
cudaArray_t levelArray; 
# 1730
cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
# 1732
if (err != (cudaSuccess)) { 
# 1733
return err; 
# 1734
}  
# 1735
err = ::cudaGetChannelDesc(&desc, levelArray); 
# 1737
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
# 1738
} 
# 1765 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1766
__attribute((deprecated)) static inline cudaError_t cudaUnbindTexture(const texture< T, dim, readMode>  &
# 1767
tex) 
# 1769
{ 
# 1770
return ::cudaUnbindTexture(&tex); 
# 1771
} 
# 1801 "/usr/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> 
# 1802
__attribute((deprecated)) static inline cudaError_t cudaGetTextureAlignmentOffset(size_t *
# 1803
offset, const texture< T, dim, readMode>  &
# 1804
tex) 
# 1806
{ 
# 1807
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
# 1808
} 
# 1853 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1854
cudaFuncSetCacheConfig(T *
# 1855
func, cudaFuncCache 
# 1856
cacheConfig) 
# 1858
{ 
# 1859
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1860
} 
# 1862
template< class T> static inline cudaError_t 
# 1863
cudaFuncSetSharedMemConfig(T *
# 1864
func, cudaSharedMemConfig 
# 1865
config) 
# 1867
{ 
# 1868
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1869
} 
# 1901 "/usr/include/cuda_runtime.h" 3
template< class T> inline cudaError_t 
# 1902
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1903
numBlocks, T 
# 1904
func, int 
# 1905
blockSize, size_t 
# 1906
dynamicSMemSize) 
# 1907
{ 
# 1908
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1909
} 
# 1953 "/usr/include/cuda_runtime.h" 3
template< class T> inline cudaError_t 
# 1954
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1955
numBlocks, T 
# 1956
func, int 
# 1957
blockSize, size_t 
# 1958
dynamicSMemSize, unsigned 
# 1959
flags) 
# 1960
{ 
# 1961
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1962
} 
# 1967
class __cudaOccupancyB2DHelper { 
# 1968
size_t n; 
# 1970
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1971
size_t operator()(int) 
# 1972
{ 
# 1973
return n; 
# 1974
} 
# 1975
}; 
# 2023 "/usr/include/cuda_runtime.h" 3
template< class UnaryFunction, class T> static inline cudaError_t 
# 2024
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 2025
minGridSize, int *
# 2026
blockSize, T 
# 2027
func, UnaryFunction 
# 2028
blockSizeToDynamicSMemSize, int 
# 2029
blockSizeLimit = 0, unsigned 
# 2030
flags = 0) 
# 2031
{ 
# 2032
cudaError_t status; 
# 2035
int device; 
# 2036
cudaFuncAttributes attr; 
# 2039
int maxThreadsPerMultiProcessor; 
# 2040
int warpSize; 
# 2041
int devMaxThreadsPerBlock; 
# 2042
int multiProcessorCount; 
# 2043
int funcMaxThreadsPerBlock; 
# 2044
int occupancyLimit; 
# 2045
int granularity; 
# 2048
int maxBlockSize = 0; 
# 2049
int numBlocks = 0; 
# 2050
int maxOccupancy = 0; 
# 2053
int blockSizeToTryAligned; 
# 2054
int blockSizeToTry; 
# 2055
int blockSizeLimitAligned; 
# 2056
int occupancyInBlocks; 
# 2057
int occupancyInThreads; 
# 2058
size_t dynamicSMemSize; 
# 2064
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 2065
return cudaErrorInvalidValue; 
# 2066
}  
# 2072
status = ::cudaGetDevice(&device); 
# 2073
if (status != (cudaSuccess)) { 
# 2074
return status; 
# 2075
}  
# 2077
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 2081
if (status != (cudaSuccess)) { 
# 2082
return status; 
# 2083
}  
# 2085
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 2089
if (status != (cudaSuccess)) { 
# 2090
return status; 
# 2091
}  
# 2093
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 2097
if (status != (cudaSuccess)) { 
# 2098
return status; 
# 2099
}  
# 2101
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 2105
if (status != (cudaSuccess)) { 
# 2106
return status; 
# 2107
}  
# 2109
status = cudaFuncGetAttributes(&attr, func); 
# 2110
if (status != (cudaSuccess)) { 
# 2111
return status; 
# 2112
}  
# 2114
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 2120
occupancyLimit = maxThreadsPerMultiProcessor; 
# 2121
granularity = warpSize; 
# 2123
if (blockSizeLimit == 0) { 
# 2124
blockSizeLimit = devMaxThreadsPerBlock; 
# 2125
}  
# 2127
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 2128
blockSizeLimit = devMaxThreadsPerBlock; 
# 2129
}  
# 2131
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 2132
blockSizeLimit = funcMaxThreadsPerBlock; 
# 2133
}  
# 2135
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 2137
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 2141
if (blockSizeLimit < blockSizeToTryAligned) { 
# 2142
blockSizeToTry = blockSizeLimit; 
# 2143
} else { 
# 2144
blockSizeToTry = blockSizeToTryAligned; 
# 2145
}  
# 2147
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 2149
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 2156
if (status != (cudaSuccess)) { 
# 2157
return status; 
# 2158
}  
# 2160
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 2162
if (occupancyInThreads > maxOccupancy) { 
# 2163
maxBlockSize = blockSizeToTry; 
# 2164
numBlocks = occupancyInBlocks; 
# 2165
maxOccupancy = occupancyInThreads; 
# 2166
}  
# 2170
if (occupancyLimit == maxOccupancy) { 
# 2171
break; 
# 2172
}  
# 2173
}  
# 2181
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 2182
(*blockSize) = maxBlockSize; 
# 2184
return status; 
# 2185
} 
# 2219 "/usr/include/cuda_runtime.h" 3
template< class UnaryFunction, class T> static inline cudaError_t 
# 2220
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 2221
minGridSize, int *
# 2222
blockSize, T 
# 2223
func, UnaryFunction 
# 2224
blockSizeToDynamicSMemSize, int 
# 2225
blockSizeLimit = 0) 
# 2226
{ 
# 2227
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 2228
} 
# 2265 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 2266
cudaOccupancyMaxPotentialBlockSize(int *
# 2267
minGridSize, int *
# 2268
blockSize, T 
# 2269
func, size_t 
# 2270
dynamicSMemSize = 0, int 
# 2271
blockSizeLimit = 0) 
# 2272
{ 
# 2273
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 2274
} 
# 2303 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 2304
cudaOccupancyAvailableDynamicSMemPerBlock(size_t *
# 2305
dynamicSmemSize, T 
# 2306
func, int 
# 2307
numBlocks, int 
# 2308
blockSize) 
# 2309
{ 
# 2310
return ::cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, (const void *)func, numBlocks, blockSize); 
# 2311
} 
# 2362 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 2363
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 2364
minGridSize, int *
# 2365
blockSize, T 
# 2366
func, size_t 
# 2367
dynamicSMemSize = 0, int 
# 2368
blockSizeLimit = 0, unsigned 
# 2369
flags = 0) 
# 2370
{ 
# 2371
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 2372
} 
# 2405 "/usr/include/cuda_runtime.h" 3
template< class T> inline cudaError_t 
# 2406
cudaFuncGetAttributes(cudaFuncAttributes *
# 2407
attr, T *
# 2408
entry) 
# 2410
{ 
# 2411
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 2412
} 
# 2450 "/usr/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 2451
cudaFuncSetAttribute(T *
# 2452
entry, cudaFuncAttribute 
# 2453
attr, int 
# 2454
value) 
# 2456
{ 
# 2457
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 2458
} 
# 2482 "/usr/include/cuda_runtime.h" 3
template< class T, int dim> 
# 2483
__attribute((deprecated)) static inline cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
# 2484
surf, cudaArray_const_t 
# 2485
array, const cudaChannelFormatDesc &
# 2486
desc) 
# 2488
{ 
# 2489
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
# 2490
} 
# 2513 "/usr/include/cuda_runtime.h" 3
template< class T, int dim> 
# 2514
__attribute((deprecated)) static inline cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
# 2515
surf, cudaArray_const_t 
# 2516
array) 
# 2518
{ 
# 2519
cudaChannelFormatDesc desc; 
# 2520
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 2522
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 2523
} 
# 2534 "/usr/include/cuda_runtime.h" 3
#pragma GCC diagnostic pop
# 64 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
# 66
const char *info_simulate = ("INFO:simulate[GNU]"); 
# 377 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((11 / 10000000) % 10)), (('0') + ((11 / 1000000) % 10)), (('0') + ((11 / 100000) % 10)), (('0') + ((11 / 10000) % 10)), (('0') + ((11 / 1000) % 10)), (('0') + ((11 / 100) % 10)), (('0') + ((11 / 10) % 10)), (('0') + (11 % 10)), '.', (('0') + ((5 / 10000000) % 10)), (('0') + ((5 / 1000000) % 10)), (('0') + ((5 / 100000) % 10)), (('0') + ((5 / 10000) % 10)), (('0') + ((5 / 1000) % 10)), (('0') + ((5 / 100) % 10)), (('0') + ((5 / 10) % 10)), (('0') + (5 % 10)), '.', (('0') + ((119 / 10000000) % 10)), (('0') + ((119 / 1000000) % 10)), (('0') + ((119 / 100000) % 10)), (('0') + ((119 / 10000) % 10)), (('0') + ((119 / 1000) % 10)), (('0') + ((119 / 100) % 10)), (('0') + ((119 / 10) % 10)), (('0') + (119 % 10)), ']', '\000'}; 
# 406 "CMakeCUDACompilerId.cu"
const char info_simulate_version[] = {'I', 'N', 'F', 'O', ':', 's', 'i', 'm', 'u', 'l', 'a', 't', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((11 / 10000000) % 10)), (('0') + ((11 / 1000000) % 10)), (('0') + ((11 / 100000) % 10)), (('0') + ((11 / 10000) % 10)), (('0') + ((11 / 1000) % 10)), (('0') + ((11 / 100) % 10)), (('0') + ((11 / 10) % 10)), (('0') + (11 % 10)), '.', (('0') + ((4 / 10000000) % 10)), (('0') + ((4 / 1000000) % 10)), (('0') + ((4 / 100000) % 10)), (('0') + ((4 / 10000) % 10)), (('0') + ((4 / 1000) % 10)), (('0') + ((4 / 100) % 10)), (('0') + ((4 / 10) % 10)), (('0') + (4 % 10)), ']', '\000'}; 
# 426
const char *info_platform = ("INFO:platform[Linux]"); 
# 427
const char *info_arch = ("INFO:arch[]"); 
# 431
const char *info_language_standard_default = ("INFO:standard_default[17]"); 
# 447
const char *info_language_extensions_default = ("INFO:extensions_default[ON]"); 
# 458
int main(int argc, char *argv[]) 
# 459
{ 
# 460
int require = 0; 
# 461
require += (info_compiler[argc]); 
# 462
require += (info_platform[argc]); 
# 464
require += (info_version[argc]); 
# 467
require += (info_simulate[argc]); 
# 470
require += (info_simulate_version[argc]); 
# 472
require += (info_language_standard_default[argc]); 
# 473
require += (info_language_extensions_default[argc]); 
# 474
(void)argv; 
# 475
return require; 
# 476
} 

# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__bb486d2d_22_CMakeCUDACompilerId_cu_bd57c623
#ifdef _NV_ANON_NAMESPACE
#endif
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
