# 1 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.cpp"
# 1 "mex_CALC_LH.cu"
# 46 "/opt/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/opt/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/opt/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/opt/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/opt/cuda/bin/../include/builtin_types.h" 3
# 1 "/opt/cuda/bin/../include/device_types.h" 1 3
# 46 "/opt/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/opt/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/opt/cuda/bin/../include/driver_types.h" 1 3
# 96 "/opt/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 255 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/opt/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/opt/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/opt/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/opt/cuda/bin/../include/surface_types.h" 1 3
# 63 "/opt/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/opt/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/opt/cuda/bin/../include/texture_types.h" 1 3
# 63 "/opt/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/opt/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/opt/cuda/bin/../include/vector_types.h" 1 3
# 45 "/opt/cuda/bin/../include/vector_types.h" 3
# 1 "/opt/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/opt/cuda/bin/../include/builtin_types.h" 3
# 1 "/opt/cuda/bin/../include/vector_types.h" 1 3
# 46 "/opt/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/opt/cuda/bin/../include/vector_types.h" 2 3
# 1 "/opt/cuda/bin/../include/host_defines.h" 1 3
# 47 "/opt/cuda/bin/../include/vector_types.h" 2 3
# 75 "/opt/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 229 "/opt/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/opt/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/opt/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/opt/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/opt/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/opt/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/opt/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 2 3
# 96 "/opt/cuda/bin/../include/driver_types.h"
# 466 "/opt/cuda/bin/../include/driver_types.h"
# 478 "/opt/cuda/bin/../include/driver_types.h"
# 491 "/opt/cuda/bin/../include/driver_types.h"
# 497 "/opt/cuda/bin/../include/driver_types.h"
# 510 "/opt/cuda/bin/../include/driver_types.h"
# 523 "/opt/cuda/bin/../include/driver_types.h"
# 535 "/opt/cuda/bin/../include/driver_types.h"
# 546 "/opt/cuda/bin/../include/driver_types.h"
# 564 "/opt/cuda/bin/../include/driver_types.h"
# 570 "/opt/cuda/bin/../include/driver_types.h"
# 579 "/opt/cuda/bin/../include/driver_types.h"
# 590 "/opt/cuda/bin/../include/driver_types.h"
# 603 "/opt/cuda/bin/../include/driver_types.h"
# 656 "/opt/cuda/bin/../include/driver_types.h"
# 667 "/opt/cuda/bin/../include/driver_types.h"
# 678 "/opt/cuda/bin/../include/driver_types.h"
# 689 "/opt/cuda/bin/../include/driver_types.h"
# 768 "/opt/cuda/bin/../include/driver_types.h"
# 774 "/opt/cuda/bin/../include/driver_types.h"
# 780 "/opt/cuda/bin/../include/driver_types.h"
# 786 "/opt/cuda/bin/../include/driver_types.h"
# 792 "/opt/cuda/bin/../include/driver_types.h"
# 63 "/opt/cuda/bin/../include/surface_types.h"
# 74 "/opt/cuda/bin/../include/surface_types.h"
# 84 "/opt/cuda/bin/../include/surface_types.h"
# 63 "/opt/cuda/bin/../include/texture_types.h"
# 75 "/opt/cuda/bin/../include/texture_types.h"
# 85 "/opt/cuda/bin/../include/texture_types.h"
# 95 "/opt/cuda/bin/../include/texture_types.h"
# 75 "/opt/cuda/bin/../include/vector_types.h"
# 81 "/opt/cuda/bin/../include/vector_types.h"
# 87 "/opt/cuda/bin/../include/vector_types.h"
# 93 "/opt/cuda/bin/../include/vector_types.h"
# 99 "/opt/cuda/bin/../include/vector_types.h"
# 105 "/opt/cuda/bin/../include/vector_types.h"
# 111 "/opt/cuda/bin/../include/vector_types.h"
# 117 "/opt/cuda/bin/../include/vector_types.h"
# 123 "/opt/cuda/bin/../include/vector_types.h"
# 129 "/opt/cuda/bin/../include/vector_types.h"
# 135 "/opt/cuda/bin/../include/vector_types.h"
# 141 "/opt/cuda/bin/../include/vector_types.h"
# 147 "/opt/cuda/bin/../include/vector_types.h"
# 153 "/opt/cuda/bin/../include/vector_types.h"
# 159 "/opt/cuda/bin/../include/vector_types.h"
# 162 "/opt/cuda/bin/../include/vector_types.h"
# 165 "/opt/cuda/bin/../include/vector_types.h"
# 171 "/opt/cuda/bin/../include/vector_types.h"
# 177 "/opt/cuda/bin/../include/vector_types.h"
# 180 "/opt/cuda/bin/../include/vector_types.h"
# 183 "/opt/cuda/bin/../include/vector_types.h"
# 189 "/opt/cuda/bin/../include/vector_types.h"
# 195 "/opt/cuda/bin/../include/vector_types.h"
# 201 "/opt/cuda/bin/../include/vector_types.h"
# 207 "/opt/cuda/bin/../include/vector_types.h"
# 213 "/opt/cuda/bin/../include/vector_types.h"
# 229 "/opt/cuda/bin/../include/vector_types.h"
# 235 "/opt/cuda/bin/../include/vector_types.h"
# 243 "/opt/cuda/bin/../include/vector_types.h"
# 249 "/opt/cuda/bin/../include/vector_types.h"
# 255 "/opt/cuda/bin/../include/vector_types.h"
# 261 "/opt/cuda/bin/../include/vector_types.h"
# 267 "/opt/cuda/bin/../include/vector_types.h"
# 273 "/opt/cuda/bin/../include/vector_types.h"
# 276 "/opt/cuda/bin/../include/vector_types.h"
# 282 "/opt/cuda/bin/../include/vector_types.h"
# 288 "/opt/cuda/bin/../include/vector_types.h"
# 294 "/opt/cuda/bin/../include/vector_types.h"
# 300 "/opt/cuda/bin/../include/vector_types.h"
# 306 "/opt/cuda/bin/../include/vector_types.h"
# 312 "/opt/cuda/bin/../include/vector_types.h"
# 318 "/opt/cuda/bin/../include/vector_types.h"
# 324 "/opt/cuda/bin/../include/vector_types.h"
# 330 "/opt/cuda/bin/../include/vector_types.h"
# 336 "/opt/cuda/bin/../include/vector_types.h"
# 342 "/opt/cuda/bin/../include/vector_types.h"
# 348 "/opt/cuda/bin/../include/vector_types.h"
# 354 "/opt/cuda/bin/../include/vector_types.h"
# 366 "/opt/cuda/bin/../include/vector_types.h"
# 368 "/opt/cuda/bin/../include/vector_types.h"
# 370 "/opt/cuda/bin/../include/vector_types.h"
# 372 "/opt/cuda/bin/../include/vector_types.h"
# 374 "/opt/cuda/bin/../include/vector_types.h"
# 376 "/opt/cuda/bin/../include/vector_types.h"
# 378 "/opt/cuda/bin/../include/vector_types.h"
# 380 "/opt/cuda/bin/../include/vector_types.h"
# 382 "/opt/cuda/bin/../include/vector_types.h"
# 384 "/opt/cuda/bin/../include/vector_types.h"
# 386 "/opt/cuda/bin/../include/vector_types.h"
# 388 "/opt/cuda/bin/../include/vector_types.h"
# 390 "/opt/cuda/bin/../include/vector_types.h"
# 392 "/opt/cuda/bin/../include/vector_types.h"
# 394 "/opt/cuda/bin/../include/vector_types.h"
# 396 "/opt/cuda/bin/../include/vector_types.h"
# 398 "/opt/cuda/bin/../include/vector_types.h"
# 400 "/opt/cuda/bin/../include/vector_types.h"
# 402 "/opt/cuda/bin/../include/vector_types.h"
# 404 "/opt/cuda/bin/../include/vector_types.h"
# 406 "/opt/cuda/bin/../include/vector_types.h"
# 408 "/opt/cuda/bin/../include/vector_types.h"
# 410 "/opt/cuda/bin/../include/vector_types.h"
# 412 "/opt/cuda/bin/../include/vector_types.h"
# 414 "/opt/cuda/bin/../include/vector_types.h"
# 416 "/opt/cuda/bin/../include/vector_types.h"
# 418 "/opt/cuda/bin/../include/vector_types.h"
# 420 "/opt/cuda/bin/../include/vector_types.h"
# 422 "/opt/cuda/bin/../include/vector_types.h"
# 424 "/opt/cuda/bin/../include/vector_types.h"
# 426 "/opt/cuda/bin/../include/vector_types.h"
# 428 "/opt/cuda/bin/../include/vector_types.h"
# 430 "/opt/cuda/bin/../include/vector_types.h"
# 432 "/opt/cuda/bin/../include/vector_types.h"
# 434 "/opt/cuda/bin/../include/vector_types.h"
# 436 "/opt/cuda/bin/../include/vector_types.h"
# 438 "/opt/cuda/bin/../include/vector_types.h"
# 440 "/opt/cuda/bin/../include/vector_types.h"
# 442 "/opt/cuda/bin/../include/vector_types.h"
# 444 "/opt/cuda/bin/../include/vector_types.h"
# 446 "/opt/cuda/bin/../include/vector_types.h"
# 448 "/opt/cuda/bin/../include/vector_types.h"
# 450 "/opt/cuda/bin/../include/vector_types.h"
# 452 "/opt/cuda/bin/../include/vector_types.h"
# 454 "/opt/cuda/bin/../include/vector_types.h"
# 456 "/opt/cuda/bin/../include/vector_types.h"
# 458 "/opt/cuda/bin/../include/vector_types.h"
# 460 "/opt/cuda/bin/../include/vector_types.h"
# 469 "/opt/cuda/bin/../include/vector_types.h"
# 480 "/opt/cuda/bin/../include/vector_types.h"
# 115 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/opt/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/opt/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/opt/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/opt/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/opt/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/opt/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/opt/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/opt/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/opt/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/opt/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/opt/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/opt/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/opt/cuda/bin/../include/driver_functions.h"
{
# 67 "/opt/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/opt/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/opt/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/opt/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/opt/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/opt/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/opt/cuda/bin/../include/driver_functions.h"
}
# 92 "/opt/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/opt/cuda/bin/../include/driver_functions.h"
{
# 94 "/opt/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/opt/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/opt/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/opt/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/opt/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/opt/cuda/bin/../include/driver_functions.h"
}
# 118 "/opt/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/opt/cuda/bin/../include/driver_functions.h"
{
# 120 "/opt/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/opt/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/opt/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/opt/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/opt/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/opt/cuda/bin/../include/driver_functions.h"
}
# 55 "/opt/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/opt/cuda/bin/../include/vector_functions.h"
{
# 57 "/opt/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/opt/cuda/bin/../include/vector_functions.h"
}
# 60 "/opt/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/opt/cuda/bin/../include/vector_functions.h"
{
# 62 "/opt/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/opt/cuda/bin/../include/vector_functions.h"
}
# 65 "/opt/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/opt/cuda/bin/../include/vector_functions.h"
{
# 67 "/opt/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/opt/cuda/bin/../include/vector_functions.h"
}
# 70 "/opt/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/opt/cuda/bin/../include/vector_functions.h"
{
# 72 "/opt/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/opt/cuda/bin/../include/vector_functions.h"
}
# 75 "/opt/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/opt/cuda/bin/../include/vector_functions.h"
{
# 77 "/opt/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/opt/cuda/bin/../include/vector_functions.h"
}
# 80 "/opt/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/opt/cuda/bin/../include/vector_functions.h"
{
# 82 "/opt/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/opt/cuda/bin/../include/vector_functions.h"
}
# 85 "/opt/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/opt/cuda/bin/../include/vector_functions.h"
{
# 87 "/opt/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/opt/cuda/bin/../include/vector_functions.h"
}
# 90 "/opt/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/opt/cuda/bin/../include/vector_functions.h"
{
# 92 "/opt/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/opt/cuda/bin/../include/vector_functions.h"
}
# 95 "/opt/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/opt/cuda/bin/../include/vector_functions.h"
{
# 97 "/opt/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/opt/cuda/bin/../include/vector_functions.h"
}
# 100 "/opt/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/opt/cuda/bin/../include/vector_functions.h"
{
# 102 "/opt/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/opt/cuda/bin/../include/vector_functions.h"
}
# 105 "/opt/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/opt/cuda/bin/../include/vector_functions.h"
{
# 107 "/opt/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/opt/cuda/bin/../include/vector_functions.h"
}
# 110 "/opt/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/opt/cuda/bin/../include/vector_functions.h"
{
# 112 "/opt/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/opt/cuda/bin/../include/vector_functions.h"
}
# 115 "/opt/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/opt/cuda/bin/../include/vector_functions.h"
{
# 117 "/opt/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/opt/cuda/bin/../include/vector_functions.h"
}
# 120 "/opt/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/opt/cuda/bin/../include/vector_functions.h"
{
# 122 "/opt/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/opt/cuda/bin/../include/vector_functions.h"
}
# 125 "/opt/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/opt/cuda/bin/../include/vector_functions.h"
{
# 127 "/opt/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/opt/cuda/bin/../include/vector_functions.h"
}
# 130 "/opt/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/opt/cuda/bin/../include/vector_functions.h"
{
# 132 "/opt/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/opt/cuda/bin/../include/vector_functions.h"
}
# 135 "/opt/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/opt/cuda/bin/../include/vector_functions.h"
{
# 137 "/opt/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/opt/cuda/bin/../include/vector_functions.h"
}
# 140 "/opt/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/opt/cuda/bin/../include/vector_functions.h"
{
# 142 "/opt/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/opt/cuda/bin/../include/vector_functions.h"
}
# 145 "/opt/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/opt/cuda/bin/../include/vector_functions.h"
{
# 147 "/opt/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/opt/cuda/bin/../include/vector_functions.h"
}
# 150 "/opt/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/opt/cuda/bin/../include/vector_functions.h"
{
# 152 "/opt/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/opt/cuda/bin/../include/vector_functions.h"
}
# 155 "/opt/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/opt/cuda/bin/../include/vector_functions.h"
{
# 157 "/opt/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/opt/cuda/bin/../include/vector_functions.h"
}
# 160 "/opt/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/opt/cuda/bin/../include/vector_functions.h"
{
# 162 "/opt/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/opt/cuda/bin/../include/vector_functions.h"
}
# 165 "/opt/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/opt/cuda/bin/../include/vector_functions.h"
{
# 167 "/opt/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/opt/cuda/bin/../include/vector_functions.h"
}
# 170 "/opt/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/opt/cuda/bin/../include/vector_functions.h"
{
# 172 "/opt/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/opt/cuda/bin/../include/vector_functions.h"
}
# 175 "/opt/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/opt/cuda/bin/../include/vector_functions.h"
{
# 177 "/opt/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/opt/cuda/bin/../include/vector_functions.h"
}
# 180 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/opt/cuda/bin/../include/vector_functions.h"
{
# 182 "/opt/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/opt/cuda/bin/../include/vector_functions.h"
}
# 185 "/opt/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/opt/cuda/bin/../include/vector_functions.h"
{
# 187 "/opt/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/opt/cuda/bin/../include/vector_functions.h"
}
# 190 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/opt/cuda/bin/../include/vector_functions.h"
{
# 192 "/opt/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/opt/cuda/bin/../include/vector_functions.h"
}
# 195 "/opt/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/opt/cuda/bin/../include/vector_functions.h"
{
# 197 "/opt/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/opt/cuda/bin/../include/vector_functions.h"
}
# 200 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/opt/cuda/bin/../include/vector_functions.h"
{
# 202 "/opt/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/opt/cuda/bin/../include/vector_functions.h"
}
# 205 "/opt/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/opt/cuda/bin/../include/vector_functions.h"
{
# 207 "/opt/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/opt/cuda/bin/../include/vector_functions.h"
}
# 210 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/opt/cuda/bin/../include/vector_functions.h"
{
# 212 "/opt/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/opt/cuda/bin/../include/vector_functions.h"
}
# 215 "/opt/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/opt/cuda/bin/../include/vector_functions.h"
{
# 217 "/opt/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/opt/cuda/bin/../include/vector_functions.h"
}
# 220 "/opt/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/opt/cuda/bin/../include/vector_functions.h"
{
# 222 "/opt/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/opt/cuda/bin/../include/vector_functions.h"
}
# 225 "/opt/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/opt/cuda/bin/../include/vector_functions.h"
{
# 227 "/opt/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/opt/cuda/bin/../include/vector_functions.h"
}
# 230 "/opt/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/opt/cuda/bin/../include/vector_functions.h"
{
# 232 "/opt/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/opt/cuda/bin/../include/vector_functions.h"
}
# 235 "/opt/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/opt/cuda/bin/../include/vector_functions.h"
{
# 237 "/opt/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/opt/cuda/bin/../include/vector_functions.h"
}
# 240 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/opt/cuda/bin/../include/vector_functions.h"
{
# 242 "/opt/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/opt/cuda/bin/../include/vector_functions.h"
}
# 245 "/opt/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/opt/cuda/bin/../include/vector_functions.h"
{
# 247 "/opt/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/opt/cuda/bin/../include/vector_functions.h"
}
# 250 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/opt/cuda/bin/../include/vector_functions.h"
{
# 252 "/opt/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/opt/cuda/bin/../include/vector_functions.h"
}
# 255 "/opt/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/opt/cuda/bin/../include/vector_functions.h"
{
# 257 "/opt/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/opt/cuda/bin/../include/vector_functions.h"
}
# 260 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/opt/cuda/bin/../include/vector_functions.h"
{
# 262 "/opt/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/opt/cuda/bin/../include/vector_functions.h"
}
# 265 "/opt/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/opt/cuda/bin/../include/vector_functions.h"
{
# 267 "/opt/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/opt/cuda/bin/../include/vector_functions.h"
}
# 270 "/opt/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/opt/cuda/bin/../include/vector_functions.h"
{
# 272 "/opt/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/opt/cuda/bin/../include/vector_functions.h"
}
# 275 "/opt/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/opt/cuda/bin/../include/vector_functions.h"
{
# 277 "/opt/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/opt/cuda/bin/../include/vector_functions.h"
}
# 280 "/opt/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/opt/cuda/bin/../include/vector_functions.h"
{
# 282 "/opt/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/opt/cuda/bin/../include/vector_functions.h"
}
# 285 "/opt/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/opt/cuda/bin/../include/vector_functions.h"
{
# 287 "/opt/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/opt/cuda/bin/../include/vector_functions.h"
}
# 290 "/opt/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/opt/cuda/bin/../include/vector_functions.h"
{
# 292 "/opt/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/opt/cuda/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/opt/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/opt/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/opt/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/opt/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef long register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/opt/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/opt/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/opt/cuda/bin/../include/math_functions.h"
}
# 502 "/opt/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/opt/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/opt/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/opt/cuda/bin/../include/math_functions.h"
}
# 508 "/opt/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/opt/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/opt/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/opt/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/opt/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/opt/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/opt/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/opt/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/opt/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/opt/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/opt/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/opt/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/opt/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/opt/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/opt/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/opt/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/opt/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/opt/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/opt/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/opt/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/opt/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/opt/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/opt/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/opt/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/opt/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/opt/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/opt/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/opt/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/opt/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/opt/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/opt/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/opt/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/opt/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/opt/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/opt/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/opt/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/opt/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/opt/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/opt/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/opt/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/opt/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/opt/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/opt/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/opt/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/opt/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/opt/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/opt/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/opt/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/opt/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/opt/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/opt/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/opt/cuda/bin/../include/math_functions.h"
}
# 619 "/opt/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/opt/cuda/bin/../include/math_functions.h"
{
# 621 "/opt/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/opt/cuda/bin/../include/math_functions.h"
}
# 624 "/opt/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/opt/cuda/bin/../include/math_functions.h"
{
# 626 "/opt/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/opt/cuda/bin/../include/math_functions.h"
}
# 629 "/opt/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/opt/cuda/bin/../include/math_functions.h"
{
# 631 "/opt/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/opt/cuda/bin/../include/math_functions.h"
}
# 634 "/opt/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/opt/cuda/bin/../include/math_functions.h"
{
# 636 "/opt/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/opt/cuda/bin/../include/math_functions.h"
}
# 639 "/opt/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/opt/cuda/bin/../include/math_functions.h"
{
# 641 "/opt/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/opt/cuda/bin/../include/math_functions.h"
}
# 644 "/opt/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/opt/cuda/bin/../include/math_functions.h"
{
# 646 "/opt/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/opt/cuda/bin/../include/math_functions.h"
}
# 649 "/opt/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/opt/cuda/bin/../include/math_functions.h"
{
# 651 "/opt/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/opt/cuda/bin/../include/math_functions.h"
}
# 654 "/opt/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/opt/cuda/bin/../include/math_functions.h"
{
# 656 "/opt/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/opt/cuda/bin/../include/math_functions.h"
}
# 659 "/opt/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/opt/cuda/bin/../include/math_functions.h"
{
# 661 "/opt/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/opt/cuda/bin/../include/math_functions.h"
}
# 664 "/opt/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/opt/cuda/bin/../include/math_functions.h"
{
# 666 "/opt/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/opt/cuda/bin/../include/math_functions.h"
}
# 669 "/opt/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/opt/cuda/bin/../include/math_functions.h"
{
# 671 "/opt/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/opt/cuda/bin/../include/math_functions.h"
}
# 674 "/opt/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/opt/cuda/bin/../include/math_functions.h"
{
# 676 "/opt/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/opt/cuda/bin/../include/math_functions.h"
}
# 679 "/opt/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/opt/cuda/bin/../include/math_functions.h"
{
# 681 "/opt/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/opt/cuda/bin/../include/math_functions.h"
}
# 684 "/opt/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/opt/cuda/bin/../include/math_functions.h"
{
# 686 "/opt/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/opt/cuda/bin/../include/math_functions.h"
}
# 689 "/opt/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/opt/cuda/bin/../include/math_functions.h"
{
# 691 "/opt/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/opt/cuda/bin/../include/math_functions.h"
}
# 694 "/opt/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/opt/cuda/bin/../include/math_functions.h"
{
# 696 "/opt/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/opt/cuda/bin/../include/math_functions.h"
}
# 699 "/opt/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/opt/cuda/bin/../include/math_functions.h"
{
# 701 "/opt/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/opt/cuda/bin/../include/math_functions.h"
}
# 704 "/opt/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/opt/cuda/bin/../include/math_functions.h"
{
# 706 "/opt/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/opt/cuda/bin/../include/math_functions.h"
}
# 709 "/opt/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/opt/cuda/bin/../include/math_functions.h"
{
# 711 "/opt/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/opt/cuda/bin/../include/math_functions.h"
}
# 714 "/opt/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/opt/cuda/bin/../include/math_functions.h"
{
# 716 "/opt/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/opt/cuda/bin/../include/math_functions.h"
}
# 719 "/opt/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/opt/cuda/bin/../include/math_functions.h"
{
# 721 "/opt/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/opt/cuda/bin/../include/math_functions.h"
}
# 724 "/opt/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/opt/cuda/bin/../include/math_functions.h"
{
# 726 "/opt/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/opt/cuda/bin/../include/math_functions.h"
}
# 729 "/opt/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/opt/cuda/bin/../include/math_functions.h"
{
# 731 "/opt/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/opt/cuda/bin/../include/math_functions.h"
}
# 734 "/opt/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/opt/cuda/bin/../include/math_functions.h"
{
# 736 "/opt/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/opt/cuda/bin/../include/math_functions.h"
}
# 739 "/opt/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/opt/cuda/bin/../include/math_functions.h"
{
# 741 "/opt/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/opt/cuda/bin/../include/math_functions.h"
}
# 744 "/opt/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/opt/cuda/bin/../include/math_functions.h"
{
# 746 "/opt/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/opt/cuda/bin/../include/math_functions.h"
}
# 749 "/opt/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/opt/cuda/bin/../include/math_functions.h"
{
# 751 "/opt/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/opt/cuda/bin/../include/math_functions.h"
}
# 754 "/opt/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/opt/cuda/bin/../include/math_functions.h"
{
# 756 "/opt/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/opt/cuda/bin/../include/math_functions.h"
}
# 759 "/opt/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/opt/cuda/bin/../include/math_functions.h"
{
# 761 "/opt/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/opt/cuda/bin/../include/math_functions.h"
}
# 764 "/opt/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/opt/cuda/bin/../include/math_functions.h"
{
# 766 "/opt/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/opt/cuda/bin/../include/math_functions.h"
}
# 769 "/opt/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/opt/cuda/bin/../include/math_functions.h"
{
# 771 "/opt/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/opt/cuda/bin/../include/math_functions.h"
}
# 774 "/opt/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/opt/cuda/bin/../include/math_functions.h"
{
# 776 "/opt/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/opt/cuda/bin/../include/math_functions.h"
}
# 779 "/opt/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/opt/cuda/bin/../include/math_functions.h"
{
# 781 "/opt/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/opt/cuda/bin/../include/math_functions.h"
}
# 784 "/opt/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/opt/cuda/bin/../include/math_functions.h"
{
# 786 "/opt/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/opt/cuda/bin/../include/math_functions.h"
}
# 789 "/opt/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/opt/cuda/bin/../include/math_functions.h"
{
# 791 "/opt/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/opt/cuda/bin/../include/math_functions.h"
}
# 794 "/opt/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/opt/cuda/bin/../include/math_functions.h"
{
# 796 "/opt/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/opt/cuda/bin/../include/math_functions.h"
}
# 799 "/opt/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/opt/cuda/bin/../include/math_functions.h"
{
# 801 "/opt/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/opt/cuda/bin/../include/math_functions.h"
}
# 804 "/opt/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/opt/cuda/bin/../include/math_functions.h"
{
# 806 "/opt/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/opt/cuda/bin/../include/math_functions.h"
}
# 809 "/opt/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/opt/cuda/bin/../include/math_functions.h"
{
# 811 "/opt/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/opt/cuda/bin/../include/math_functions.h"
}
# 814 "/opt/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/opt/cuda/bin/../include/math_functions.h"
{
# 816 "/opt/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/opt/cuda/bin/../include/math_functions.h"
}
# 819 "/opt/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/opt/cuda/bin/../include/math_functions.h"
{
# 821 "/opt/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/opt/cuda/bin/../include/math_functions.h"
}
# 824 "/opt/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/opt/cuda/bin/../include/math_functions.h"
{
# 826 "/opt/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/opt/cuda/bin/../include/math_functions.h"
}
# 829 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/opt/cuda/bin/../include/math_functions.h"
{
# 831 "/opt/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/opt/cuda/bin/../include/math_functions.h"
}
# 834 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/opt/cuda/bin/../include/math_functions.h"
{
# 836 "/opt/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/opt/cuda/bin/../include/math_functions.h"
}
# 839 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/opt/cuda/bin/../include/math_functions.h"
{
# 841 "/opt/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/opt/cuda/bin/../include/math_functions.h"
}
# 844 "/opt/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/opt/cuda/bin/../include/math_functions.h"
{
# 846 "/opt/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/opt/cuda/bin/../include/math_functions.h"
}
# 849 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/opt/cuda/bin/../include/math_functions.h"
{
# 851 "/opt/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/opt/cuda/bin/../include/math_functions.h"
}
# 854 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/opt/cuda/bin/../include/math_functions.h"
{
# 856 "/opt/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/opt/cuda/bin/../include/math_functions.h"
}
# 859 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/opt/cuda/bin/../include/math_functions.h"
{
# 861 "/opt/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/opt/cuda/bin/../include/math_functions.h"
}
# 864 "/opt/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/opt/cuda/bin/../include/math_functions.h"
{
# 866 "/opt/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/opt/cuda/bin/../include/math_functions.h"
}
# 869 "/opt/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/opt/cuda/bin/../include/math_functions.h"
{
# 871 "/opt/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/opt/cuda/bin/../include/math_functions.h"
}
# 874 "/opt/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/opt/cuda/bin/../include/math_functions.h"
{
# 876 "/opt/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/opt/cuda/bin/../include/math_functions.h"
}
# 879 "/opt/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/opt/cuda/bin/../include/math_functions.h"
{
# 881 "/opt/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/opt/cuda/bin/../include/math_functions.h"
}
# 884 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/opt/cuda/bin/../include/math_functions.h"
{
# 886 "/opt/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/opt/cuda/bin/../include/math_functions.h"
}
# 889 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/opt/cuda/bin/../include/math_functions.h"
{
# 891 "/opt/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/opt/cuda/bin/../include/math_functions.h"
}
# 894 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/opt/cuda/bin/../include/math_functions.h"
{
# 896 "/opt/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/opt/cuda/bin/../include/math_functions.h"
}
# 899 "/opt/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/opt/cuda/bin/../include/math_functions.h"
{
# 901 "/opt/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/opt/cuda/bin/../include/math_functions.h"
}
# 904 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/opt/cuda/bin/../include/math_functions.h"
{
# 906 "/opt/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/opt/cuda/bin/../include/math_functions.h"
}
# 909 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/opt/cuda/bin/../include/math_functions.h"
{
# 911 "/opt/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/opt/cuda/bin/../include/math_functions.h"
}
# 914 "/opt/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/opt/cuda/bin/../include/math_functions.h"
{
# 916 "/opt/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/opt/cuda/bin/../include/math_functions.h"
}
# 919 "/opt/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/opt/cuda/bin/../include/math_functions.h"
{
# 921 "/opt/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/opt/cuda/bin/../include/math_functions.h"
}
# 924 "/opt/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/opt/cuda/bin/../include/math_functions.h"
{
# 926 "/opt/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/opt/cuda/bin/../include/math_functions.h"
}
# 929 "/opt/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/opt/cuda/bin/../include/math_functions.h"
{
# 931 "/opt/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/opt/cuda/bin/../include/math_functions.h"
}
# 934 "/opt/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/opt/cuda/bin/../include/math_functions.h"
{
# 936 "/opt/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/opt/cuda/bin/../include/math_functions.h"
}
# 60 "/opt/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/opt/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/opt/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/opt/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/opt/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/opt/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/opt/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/opt/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/opt/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/opt/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/opt/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/opt/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/opt/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/opt/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/opt/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/opt/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/opt/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/opt/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/opt/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/opt/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/opt/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/opt/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/opt/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/opt/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/opt/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/opt/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/opt/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/opt/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/opt/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/opt/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/opt/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/opt/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/opt/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/opt/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/opt/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/opt/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/opt/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/opt/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/opt/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/opt/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/opt/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/opt/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/opt/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/opt/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/opt/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/opt/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/opt/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/opt/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/opt/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/opt/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/opt/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/opt/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/opt/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/opt/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/opt/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/opt/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/opt/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/opt/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/opt/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/opt/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/opt/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/opt/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/opt/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/opt/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/opt/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/opt/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/opt/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/opt/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/opt/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/opt/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/opt/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/opt/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/opt/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/opt/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/opt/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/opt/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/opt/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/opt/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/opt/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/opt/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/opt/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/opt/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/opt/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/opt/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/opt/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/opt/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/opt/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/opt/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/opt/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/opt/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/opt/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/opt/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/opt/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/opt/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/opt/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/opt/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/opt/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/opt/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/opt/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/opt/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/opt/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/opt/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/opt/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/opt/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/opt/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/opt/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/opt/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/opt/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/opt/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/opt/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/opt/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/opt/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/opt/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/opt/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/opt/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/opt/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/opt/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/opt/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/opt/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/opt/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/opt/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/opt/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/opt/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/opt/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/opt/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/opt/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/opt/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/opt/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/opt/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/opt/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/opt/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/opt/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/opt/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/opt/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/opt/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/opt/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/opt/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/opt/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/opt/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/opt/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/opt/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/opt/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/opt/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/opt/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/opt/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/opt/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/opt/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/opt/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/opt/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/opt/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/opt/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/opt/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/opt/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/opt/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/opt/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/opt/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/opt/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/opt/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/opt/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/opt/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/opt/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/opt/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/opt/cuda/bin/../include/cuda_runtime.h"
}
# 128 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 135 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 136 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 137 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 138 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 139 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 140 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 141 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 142 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef CUevent_st *CUevent; }
# 143 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef CUstream_st *CUstream; }
# 144 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 148 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 146 "/opt/cuda/bin/../include/cuda.h"
struct CUuuid_st {
# 147 "/opt/cuda/bin/../include/cuda.h"
char bytes[16];
# 148 "/opt/cuda/bin/../include/cuda.h"
} CUuuid; }
# 162 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 153 "/opt/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
# 154 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 155 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 156 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 157 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_MASK,
# 158 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_BLOCKING_SYNC,
# 159 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_MAP_HOST = 8,
# 160 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 161 "/opt/cuda/bin/../include/cuda.h"
CU_CTX_FLAGS_MASK = 31
# 162 "/opt/cuda/bin/../include/cuda.h"
} CUctx_flags; }
# 171 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 167 "/opt/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
# 168 "/opt/cuda/bin/../include/cuda.h"
CU_EVENT_DEFAULT,
# 169 "/opt/cuda/bin/../include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 170 "/opt/cuda/bin/../include/cuda.h"
CU_EVENT_DISABLE_TIMING
# 171 "/opt/cuda/bin/../include/cuda.h"
} CUevent_flags; }
# 185 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 176 "/opt/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
# 177 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 178 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 179 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 180 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 181 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 182 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 183 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 184 "/opt/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 185 "/opt/cuda/bin/../include/cuda.h"
} CUarray_format; }
# 195 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 190 "/opt/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
# 191 "/opt/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 192 "/opt/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 193 "/opt/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 194 "/opt/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER
# 195 "/opt/cuda/bin/../include/cuda.h"
} CUaddress_mode; }
# 203 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 200 "/opt/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
# 201 "/opt/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 202 "/opt/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 203 "/opt/cuda/bin/../include/cuda.h"
} CUfilter_mode; }
# 246 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 208 "/opt/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
# 209 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 210 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 211 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 212 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 213 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 214 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 215 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 216 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 217 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 218 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 219 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 220 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 221 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 222 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 223 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 224 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 225 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 226 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 227 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 228 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 229 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 230 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 231 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 232 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 233 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 234 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 235 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 236 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 237 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH,
# 238 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 239 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 240 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 241 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 242 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 243 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 244 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 245 "/opt/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER
# 246 "/opt/cuda/bin/../include/cuda.h"
} CUdevice_attribute; }
# 262 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 251 "/opt/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
# 252 "/opt/cuda/bin/../include/cuda.h"
int maxThreadsPerBlock;
# 253 "/opt/cuda/bin/../include/cuda.h"
int maxThreadsDim[3];
# 254 "/opt/cuda/bin/../include/cuda.h"
int maxGridSize[3];
# 255 "/opt/cuda/bin/../include/cuda.h"
int sharedMemPerBlock;
# 256 "/opt/cuda/bin/../include/cuda.h"
int totalConstantMemory;
# 257 "/opt/cuda/bin/../include/cuda.h"
int SIMDWidth;
# 258 "/opt/cuda/bin/../include/cuda.h"
int memPitch;
# 259 "/opt/cuda/bin/../include/cuda.h"
int regsPerBlock;
# 260 "/opt/cuda/bin/../include/cuda.h"
int clockRate;
# 261 "/opt/cuda/bin/../include/cuda.h"
int textureAlign;
# 262 "/opt/cuda/bin/../include/cuda.h"
} CUdevprop; }
# 317 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 267 "/opt/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 273 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 280 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 286 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 291 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 296 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 305 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 314 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 316 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX
# 317 "/opt/cuda/bin/../include/cuda.h"
} CUfunction_attribute; }
# 326 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 322 "/opt/cuda/bin/../include/cuda.h"
enum CUfunc_cache_enum {
# 323 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 324 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 325 "/opt/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_L1
# 326 "/opt/cuda/bin/../include/cuda.h"
} CUfunc_cache; }
# 335 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 331 "/opt/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
# 332 "/opt/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 333 "/opt/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 334 "/opt/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_ARRAY
# 335 "/opt/cuda/bin/../include/cuda.h"
} CUmemorytype; }
# 344 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 340 "/opt/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
# 341 "/opt/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 342 "/opt/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 343 "/opt/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_PROHIBITED
# 344 "/opt/cuda/bin/../include/cuda.h"
} CUcomputemode; }
# 436 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 349 "/opt/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {
# 355 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 368 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 375 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 383 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 391 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 399 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 407 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 414 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 421 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 427 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_TARGET,
# 434 "/opt/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 436 "/opt/cuda/bin/../include/cuda.h"
} CUjit_option; }
# 449 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 441 "/opt/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {
# 443 "/opt/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 444 "/opt/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 445 "/opt/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 446 "/opt/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_13,
# 447 "/opt/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_20,
# 448 "/opt/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_21
# 449 "/opt/cuda/bin/../include/cuda.h"
} CUjit_target; }
# 460 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 454 "/opt/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {
# 456 "/opt/cuda/bin/../include/cuda.h"
CU_PREFER_PTX,
# 458 "/opt/cuda/bin/../include/cuda.h"
CU_PREFER_BINARY
# 460 "/opt/cuda/bin/../include/cuda.h"
} CUjit_fallback; }
# 467 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 465 "/opt/cuda/bin/../include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 466 "/opt/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE
# 467 "/opt/cuda/bin/../include/cuda.h"
} CUgraphicsRegisterFlags; }
# 476 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 472 "/opt/cuda/bin/../include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 473 "/opt/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 474 "/opt/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 475 "/opt/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 476 "/opt/cuda/bin/../include/cuda.h"
} CUgraphicsMapResourceFlags; }
# 488 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 481 "/opt/cuda/bin/../include/cuda.h"
enum CUarray_cubemap_face_enum {
# 482 "/opt/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 483 "/opt/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 484 "/opt/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 485 "/opt/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 486 "/opt/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 487 "/opt/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z
# 488 "/opt/cuda/bin/../include/cuda.h"
} CUarray_cubemap_face; }
# 497 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 493 "/opt/cuda/bin/../include/cuda.h"
enum CUlimit_enum {
# 494 "/opt/cuda/bin/../include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 495 "/opt/cuda/bin/../include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 496 "/opt/cuda/bin/../include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE
# 497 "/opt/cuda/bin/../include/cuda.h"
} CUlimit; }
# 728 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 502 "/opt/cuda/bin/../include/cuda.h"
enum cudaError_enum {
# 508 "/opt/cuda/bin/../include/cuda.h"
CUDA_SUCCESS,
# 514 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 520 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 526 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 531 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 538 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 544 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 551 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 561 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 570 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 575 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 580 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 586 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 591 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 599 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 604 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 609 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 615 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 621 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 627 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 633 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 639 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 644 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 649 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 654 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 659 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 666 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 673 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 682 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 693 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 704 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 715 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 721 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 727 "/opt/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 728 "/opt/cuda/bin/../include/cuda.h"
} CUresult; }
# 777 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 756 "/opt/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 757 "/opt/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 758 "/opt/cuda/bin/../include/cuda.h"
size_t srcY;
# 760 "/opt/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 761 "/opt/cuda/bin/../include/cuda.h"
const void *srcHost;
# 762 "/opt/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 763 "/opt/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 764 "/opt/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 766 "/opt/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 767 "/opt/cuda/bin/../include/cuda.h"
size_t dstY;
# 769 "/opt/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 770 "/opt/cuda/bin/../include/cuda.h"
void *dstHost;
# 771 "/opt/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 772 "/opt/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 773 "/opt/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 775 "/opt/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 776 "/opt/cuda/bin/../include/cuda.h"
size_t Height;
# 777 "/opt/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY2D; }
# 810 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 782 "/opt/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 783 "/opt/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 784 "/opt/cuda/bin/../include/cuda.h"
size_t srcY;
# 785 "/opt/cuda/bin/../include/cuda.h"
size_t srcZ;
# 786 "/opt/cuda/bin/../include/cuda.h"
size_t srcLOD;
# 787 "/opt/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 788 "/opt/cuda/bin/../include/cuda.h"
const void *srcHost;
# 789 "/opt/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 790 "/opt/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 791 "/opt/cuda/bin/../include/cuda.h"
void *reserved0;
# 792 "/opt/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 793 "/opt/cuda/bin/../include/cuda.h"
size_t srcHeight;
# 795 "/opt/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 796 "/opt/cuda/bin/../include/cuda.h"
size_t dstY;
# 797 "/opt/cuda/bin/../include/cuda.h"
size_t dstZ;
# 798 "/opt/cuda/bin/../include/cuda.h"
size_t dstLOD;
# 799 "/opt/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 800 "/opt/cuda/bin/../include/cuda.h"
void *dstHost;
# 801 "/opt/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 802 "/opt/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 803 "/opt/cuda/bin/../include/cuda.h"
void *reserved1;
# 804 "/opt/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 805 "/opt/cuda/bin/../include/cuda.h"
size_t dstHeight;
# 807 "/opt/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 808 "/opt/cuda/bin/../include/cuda.h"
size_t Height;
# 809 "/opt/cuda/bin/../include/cuda.h"
size_t Depth;
# 810 "/opt/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY3D; }
# 822 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 815 "/opt/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR_st {
# 817 "/opt/cuda/bin/../include/cuda.h"
size_t Width;
# 818 "/opt/cuda/bin/../include/cuda.h"
size_t Height;
# 820 "/opt/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 821 "/opt/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 822 "/opt/cuda/bin/../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 836 "/opt/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 827 "/opt/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR_st {
# 829 "/opt/cuda/bin/../include/cuda.h"
size_t Width;
# 830 "/opt/cuda/bin/../include/cuda.h"
size_t Height;
# 831 "/opt/cuda/bin/../include/cuda.h"
size_t Depth;
# 833 "/opt/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 834 "/opt/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 835 "/opt/cuda/bin/../include/cuda.h"
unsigned Flags;
# 836 "/opt/cuda/bin/../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 917 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);
# 944 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int *);
# 982 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
# 1008 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int *);
# 1037 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
# 1066 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
# 1094 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t *, CUdevice);
# 1154 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
# 1235 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 1333 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext *, unsigned, CUdevice);
# 1367 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDestroy(CUcontext);
# 1403 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
# 1435 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext);
# 1473 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent(CUcontext);
# 1515 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
# 1545 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice *);
# 1575 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 1638 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit, size_t);
# 1673 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t *, CUlimit);
# 1716 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache *);
# 1766 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache);
# 1803 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext, unsigned *);
# 1851 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
# 1885 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
# 1963 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
# 2000 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
# 2025 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule);
# 2055 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
# 2089 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr *, size_t *, CUmodule, const char *);
# 2123 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 2154 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref *, CUmodule, const char *);
# 2197 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t *, size_t *);
# 2230 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr *, size_t);
# 2291 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr *, size_t *, size_t, size_t, unsigned);
# 2320 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr);
# 2353 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr *, size_t *, CUdeviceptr);
# 2392 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void **, size_t);
# 2422 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void *);
# 2494 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);
# 2532 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr *, void *, unsigned);
# 2557 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned *, void *);
# 2591 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr, const void *, size_t);
# 2624 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void *, CUdeviceptr, size_t);
# 2657 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr, CUdeviceptr, size_t);
# 2691 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray, size_t, CUdeviceptr, size_t);
# 2727 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr, CUarray, size_t, size_t);
# 2761 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray, size_t, const void *, size_t);
# 2795 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void *, CUarray, size_t, size_t);
# 2833 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray, size_t, CUarray, size_t, size_t);
# 2978 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D *);
# 3121 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D *);
# 3273 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D *);
# 3313 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr, const void *, size_t, CUstream);
# 3353 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void *, CUdeviceptr, size_t, CUstream);
# 3390 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr, CUdeviceptr, size_t, CUstream);
# 3432 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray, size_t, const void *, size_t, CUstream);
# 3474 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void *, CUarray, size_t, size_t, CUstream);
# 3630 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D *, CUstream);
# 3790 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D *, CUstream);
# 3823 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr, unsigned char, size_t);
# 3856 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr, unsigned short, size_t);
# 3889 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr, unsigned, size_t);
# 3927 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr, size_t, unsigned char, size_t, size_t);
# 3965 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr, size_t, unsigned short, size_t, size_t);
# 4003 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr, size_t, unsigned, size_t, size_t);
# 4040 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr, unsigned char, size_t, CUstream);
# 4077 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr, unsigned short, size_t, CUstream);
# 4113 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr, unsigned, size_t, CUstream);
# 4155 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr, size_t, unsigned char, size_t, size_t, CUstream);
# 4197 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr, size_t, unsigned short, size_t, size_t, CUstream);
# 4239 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr, size_t, unsigned, size_t, size_t, CUstream);
# 4342 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
# 4375 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR *, CUarray);
# 4406 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray);
# 4508 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
# 4544 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 4582 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
# 4622 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream, CUevent, unsigned);
# 4646 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream);
# 4671 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream);
# 4693 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamDestroy(CUstream);
# 4741 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
# 4777 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent, CUstream);
# 4809 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent);
# 4843 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent);
# 4866 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventDestroy(CUevent);
# 4909 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 4954 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
# 4985 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
# 5042 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 5090 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction, CUfunc_cache);
# 5119 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
# 5149 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
# 5179 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction, int, float);
# 5211 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
# 5245 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
# 5281 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
# 5321 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 5354 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 5395 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
# 5433 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t *, CUtexref, CUdeviceptr, size_t);
# 5474 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v2(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, size_t);
# 5503 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
# 5541 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
# 5574 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
# 5606 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);
# 5632 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr *, CUtexref);
# 5658 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
# 5684 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
# 5708 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
# 5734 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
# 5757 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 5791 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
# 5811 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref);
# 5849 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref, CUarray, unsigned);
# 5870 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray *, CUsurfref);
# 5911 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource);
# 5949 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray *, CUgraphicsResource, unsigned, unsigned);
# 5983 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr *, size_t *, CUgraphicsResource);
# 6024 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource, unsigned);
# 6062 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned, CUgraphicsResource *, CUstream);
# 6097 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned, CUgraphicsResource *, CUstream);
# 6101 "/opt/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGetExportTable(const void **, const CUuuid *);
# 57 "/opt/matlab/extern/include/mex.h"
typedef struct impl_info_tag *MEX_impl_info;
# 86 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned char uchar_T;
# 87 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned short ushort_T;
# 88 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned long ulong_T;
# 210 "/opt/matlab/extern/include/tmwtypes.h"
typedef signed char int8_T;
# 225 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned char uint8_T;
# 241 "/opt/matlab/extern/include/tmwtypes.h"
typedef short int16_T;
# 257 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned short uint16_T;
# 273 "/opt/matlab/extern/include/tmwtypes.h"
typedef int int32_T;
# 289 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned uint32_T;
# 350 "/opt/matlab/extern/include/tmwtypes.h"
typedef float real32_T;
# 364 "/opt/matlab/extern/include/tmwtypes.h"
typedef double real64_T;
# 408 "/opt/matlab/extern/include/tmwtypes.h"
typedef long int64_T;
# 444 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned long uint64_T;
# 500 "/opt/matlab/extern/include/tmwtypes.h"
typedef real64_T real_T;
# 509 "/opt/matlab/extern/include/tmwtypes.h"
typedef real_T time_T;
# 521 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned char boolean_T;
# 527 "/opt/matlab/extern/include/tmwtypes.h"
typedef char char_T;
# 533 "/opt/matlab/extern/include/tmwtypes.h"
typedef int int_T;
# 539 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned uint_T;
# 545 "/opt/matlab/extern/include/tmwtypes.h"
typedef unsigned char byte_T;
# 557 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 555 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 556 "/opt/matlab/extern/include/tmwtypes.h"
real32_T re, im;
# 557 "/opt/matlab/extern/include/tmwtypes.h"
} creal32_T;
# 566 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 564 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 565 "/opt/matlab/extern/include/tmwtypes.h"
real64_T re, im;
# 566 "/opt/matlab/extern/include/tmwtypes.h"
} creal64_T;
# 575 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 573 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 574 "/opt/matlab/extern/include/tmwtypes.h"
real_T re, im;
# 575 "/opt/matlab/extern/include/tmwtypes.h"
} creal_T;
# 586 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 584 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 585 "/opt/matlab/extern/include/tmwtypes.h"
int8_T re, im;
# 586 "/opt/matlab/extern/include/tmwtypes.h"
} cint8_T;
# 595 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 593 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 594 "/opt/matlab/extern/include/tmwtypes.h"
uint8_T re, im;
# 595 "/opt/matlab/extern/include/tmwtypes.h"
} cuint8_T;
# 604 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 602 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 603 "/opt/matlab/extern/include/tmwtypes.h"
int16_T re, im;
# 604 "/opt/matlab/extern/include/tmwtypes.h"
} cint16_T;
# 613 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 611 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 612 "/opt/matlab/extern/include/tmwtypes.h"
uint16_T re, im;
# 613 "/opt/matlab/extern/include/tmwtypes.h"
} cuint16_T;
# 622 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 620 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 621 "/opt/matlab/extern/include/tmwtypes.h"
int32_T re, im;
# 622 "/opt/matlab/extern/include/tmwtypes.h"
} cint32_T;
# 631 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 629 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 630 "/opt/matlab/extern/include/tmwtypes.h"
uint32_T re, im;
# 631 "/opt/matlab/extern/include/tmwtypes.h"
} cuint32_T;
# 640 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 638 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 639 "/opt/matlab/extern/include/tmwtypes.h"
int64_T re, im;
# 640 "/opt/matlab/extern/include/tmwtypes.h"
} cint64_T;
# 649 "/opt/matlab/extern/include/tmwtypes.h"
typedef
# 647 "/opt/matlab/extern/include/tmwtypes.h"
struct {
# 648 "/opt/matlab/extern/include/tmwtypes.h"
uint64_T re, im;
# 649 "/opt/matlab/extern/include/tmwtypes.h"
} cuint64_T;
# 796 "/opt/matlab/extern/include/tmwtypes.h"
typedef size_t mwSize;
# 797 "/opt/matlab/extern/include/tmwtypes.h"
typedef size_t mwIndex;
# 798 "/opt/matlab/extern/include/tmwtypes.h"
typedef ptrdiff_t mwSignedIndex;
# 298 "/opt/matlab/extern/include/matrix.h"
typedef struct mxArray_tag mxArray;
# 303 "/opt/matlab/extern/include/matrix.h"
typedef void (*mxFunctionPtr)(int, mxArray *[], int, mxArray *[]);
# 313 "/opt/matlab/extern/include/matrix.h"
typedef bool mxLogical;
# 326 "/opt/matlab/extern/include/matrix.h"
typedef unsigned short char16_t;
# 335 "/opt/matlab/extern/include/matrix.h"
typedef char16_t mxChar;
# 373 "/opt/matlab/extern/include/matrix.h"
typedef
# 345 "/opt/matlab/extern/include/matrix.h"
enum {
# 346 "/opt/matlab/extern/include/matrix.h"
mxUNKNOWN_CLASS,
# 347 "/opt/matlab/extern/include/matrix.h"
mxCELL_CLASS,
# 348 "/opt/matlab/extern/include/matrix.h"
mxSTRUCT_CLASS,
# 349 "/opt/matlab/extern/include/matrix.h"
mxLOGICAL_CLASS,
# 350 "/opt/matlab/extern/include/matrix.h"
mxCHAR_CLASS,
# 351 "/opt/matlab/extern/include/matrix.h"
mxVOID_CLASS,
# 352 "/opt/matlab/extern/include/matrix.h"
mxDOUBLE_CLASS,
# 353 "/opt/matlab/extern/include/matrix.h"
mxSINGLE_CLASS,
# 354 "/opt/matlab/extern/include/matrix.h"
mxINT8_CLASS,
# 355 "/opt/matlab/extern/include/matrix.h"
mxUINT8_CLASS,
# 356 "/opt/matlab/extern/include/matrix.h"
mxINT16_CLASS,
# 357 "/opt/matlab/extern/include/matrix.h"
mxUINT16_CLASS,
# 358 "/opt/matlab/extern/include/matrix.h"
mxINT32_CLASS,
# 359 "/opt/matlab/extern/include/matrix.h"
mxUINT32_CLASS,
# 360 "/opt/matlab/extern/include/matrix.h"
mxINT64_CLASS,
# 361 "/opt/matlab/extern/include/matrix.h"
mxUINT64_CLASS,
# 362 "/opt/matlab/extern/include/matrix.h"
mxFUNCTION_CLASS,
# 363 "/opt/matlab/extern/include/matrix.h"
mxOPAQUE_CLASS,
# 364 "/opt/matlab/extern/include/matrix.h"
mxOBJECT_CLASS,
# 366 "/opt/matlab/extern/include/matrix.h"
mxINDEX_CLASS = 15,
# 371 "/opt/matlab/extern/include/matrix.h"
mxSPARSE_CLASS = 5
# 373 "/opt/matlab/extern/include/matrix.h"
} mxClassID;
# 383 "/opt/matlab/extern/include/matrix.h"
typedef
# 379 "/opt/matlab/extern/include/matrix.h"
enum {
# 380 "/opt/matlab/extern/include/matrix.h"
mxREAL,
# 381 "/opt/matlab/extern/include/matrix.h"
mxCOMPLEX
# 383 "/opt/matlab/extern/include/matrix.h"
} mxComplexity;
# 394 "/opt/matlab/extern/include/matrix.h"
extern "C" void *mxMalloc(size_t);
# 402 "/opt/matlab/extern/include/matrix.h"
extern "C" void *mxCalloc(size_t, size_t);
# 411 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxFree(void *);
# 417 "/opt/matlab/extern/include/matrix.h"
extern "C" void *mxRealloc(void *, size_t);
# 423 "/opt/matlab/extern/include/matrix.h"
extern "C" mxClassID mxGetClassID(const mxArray *);
# 429 "/opt/matlab/extern/include/matrix.h"
extern "C" void *mxGetData(const mxArray *);
# 437 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetData(mxArray *, void *);
# 447 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsNumeric(const mxArray *);
# 453 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsCell(const mxArray *);
# 459 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsLogical(const mxArray *);
# 465 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsChar(const mxArray *);
# 471 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsStruct(const mxArray *);
# 477 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsOpaque(const mxArray *);
# 483 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsFunctionHandle(const mxArray *);
# 491 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsObject(const mxArray *);
# 499 "/opt/matlab/extern/include/matrix.h"
extern "C" void *mxGetImagData(const mxArray *);
# 507 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetImagData(mxArray *, void *);
# 516 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsComplex(const mxArray *);
# 522 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsSparse(const mxArray *);
# 529 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsDouble(const mxArray *);
# 536 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsSingle(const mxArray *);
# 543 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsInt8(const mxArray *);
# 550 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsUint8(const mxArray *);
# 557 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsInt16(const mxArray *);
# 564 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsUint16(const mxArray *);
# 571 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsInt32(const mxArray *);
# 578 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsUint32(const mxArray *);
# 585 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsInt64(const mxArray *);
# 592 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsUint64(const mxArray *);
# 598 "/opt/matlab/extern/include/matrix.h"
extern "C" mwSize mxGetNumberOfDimensions(const mxArray *);
# 604 "/opt/matlab/extern/include/matrix.h"
extern "C" const mwSize *mxGetDimensions(const mxArray *);
# 610 "/opt/matlab/extern/include/matrix.h"
extern "C" size_t mxGetNumberOfElements(const mxArray *);
# 618 "/opt/matlab/extern/include/matrix.h"
extern "C" double *mxGetPr(const mxArray *);
# 626 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetPr(mxArray *, double *);
# 635 "/opt/matlab/extern/include/matrix.h"
extern "C" double *mxGetPi(const mxArray *);
# 643 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetPi(mxArray *, double *);
# 652 "/opt/matlab/extern/include/matrix.h"
extern "C" mxChar *mxGetChars(const mxArray *);
# 662 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxGetUserBits(const mxArray *);
# 672 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetUserBits(mxArray *, int);
# 681 "/opt/matlab/extern/include/matrix.h"
extern "C" double mxGetScalar(const mxArray *);
# 696 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsFromGlobalWS(const mxArray *);
# 702 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetFromGlobalWS(mxArray *, bool);
# 708 "/opt/matlab/extern/include/matrix.h"
extern "C" size_t mxGetM(const mxArray *);
# 714 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetM(mxArray *, mwSize);
# 720 "/opt/matlab/extern/include/matrix.h"
extern "C" size_t mxGetN(const mxArray *);
# 726 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsEmpty(const mxArray *);
# 734 "/opt/matlab/extern/include/matrix.h"
extern "C" mwIndex *mxGetIr(const mxArray *);
# 740 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetIr(mxArray *, mwIndex *);
# 746 "/opt/matlab/extern/include/matrix.h"
extern "C" mwIndex *mxGetJc(const mxArray *);
# 752 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetJc(mxArray *, mwIndex *);
# 758 "/opt/matlab/extern/include/matrix.h"
extern "C" mwSize mxGetNzmax(const mxArray *);
# 764 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetNzmax(mxArray *, mwSize);
# 770 "/opt/matlab/extern/include/matrix.h"
extern "C" size_t mxGetElementSize(const mxArray *);
# 777 "/opt/matlab/extern/include/matrix.h"
extern "C" mwIndex mxCalcSingleSubscript(const mxArray *, mwSize, const mwIndex *);
# 784 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxGetNumberOfFields(const mxArray *);
# 792 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxGetCell(const mxArray *, mwIndex);
# 798 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetCell(mxArray *, mwIndex, mxArray *);
# 804 "/opt/matlab/extern/include/matrix.h"
extern "C" const char *mxGetFieldNameByNumber(const mxArray *, int);
# 810 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxGetFieldNumber(const mxArray *, const char *);
# 817 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxGetFieldByNumber(const mxArray *, mwIndex, int);
# 823 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetFieldByNumber(mxArray *, mwIndex, int, mxArray *);
# 831 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxGetField(const mxArray *, mwIndex, const char *);
# 838 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetField(mxArray *, mwIndex, const char *, mxArray *);
# 848 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxGetProperty(const mxArray *, const mwIndex, const char *);
# 856 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetProperty(mxArray *, mwIndex, const char *, const mxArray *);
# 862 "/opt/matlab/extern/include/matrix.h"
extern "C" const char *mxGetClassName(const mxArray *);
# 868 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsClass(const mxArray *, const char *);
# 880 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateNumericMatrix(mwSize, mwSize, mxClassID, mxComplexity);
# 889 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxSetN(mxArray *, mwSize);
# 896 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxSetDimensions(mxArray *, const mwSize *, mwSize);
# 902 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxDestroyArray(mxArray *);
# 911 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateNumericArray(mwSize, const mwSize *, mxClassID, mxComplexity);
# 918 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateCharArray(mwSize, const mwSize *);
# 925 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateDoubleMatrix(mwSize, mwSize, mxComplexity);
# 931 "/opt/matlab/extern/include/matrix.h"
extern "C" mxLogical *mxGetLogicals(const mxArray *);
# 937 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateLogicalArray(mwSize, const mwSize *);
# 947 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateLogicalMatrix(mwSize, mwSize);
# 956 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateLogicalScalar(bool);
# 962 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsLogicalScalar(const mxArray *);
# 968 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsLogicalScalarTrue(const mxArray *);
# 975 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateDoubleScalar(double);
# 984 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateSparse(mwSize, mwSize, mwSize, mxComplexity);
# 990 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateSparseLogicalMatrix(mwSize, mwSize, mwSize);
# 998 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxGetNChars(const mxArray *, char *, mwSize);
# 1009 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxGetString(const mxArray *, char *, mwSize);
# 1017 "/opt/matlab/extern/include/matrix.h"
extern "C" char *mxArrayToString(const mxArray *);
# 1025 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateStringFromNChars(const char *, mwSize);
# 1032 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateString(const char *);
# 1038 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateCharMatrixFromStrings(mwSize, const char **);
# 1045 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateCellMatrix(mwSize, mwSize);
# 1052 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateCellArray(mwSize, const mwSize *);
# 1059 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateStructMatrix(size_t, size_t, int, const char **);
# 1066 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxCreateStructArray(mwSize, const mwSize *, int, const char **);
# 1073 "/opt/matlab/extern/include/matrix.h"
extern "C" mxArray *mxDuplicateArray(const mxArray *);
# 1081 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxSetClassName(mxArray *, const char *);
# 1088 "/opt/matlab/extern/include/matrix.h"
extern "C" int mxAddField(mxArray *, const char *);
# 1095 "/opt/matlab/extern/include/matrix.h"
extern "C" void mxRemoveField(mxArray *, int);
# 1101 "/opt/matlab/extern/include/matrix.h"
extern "C" double mxGetEps();
# 1107 "/opt/matlab/extern/include/matrix.h"
extern "C" double mxGetInf();
# 1113 "/opt/matlab/extern/include/matrix.h"
extern "C" double mxGetNaN();
# 1130 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsFinite(double);
# 1138 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsInf(double);
# 1146 "/opt/matlab/extern/include/matrix.h"
extern "C" bool mxIsNaN(double);
# 71 "/usr/include/assert.h" 3
extern "C" void __assert_fail(const char *, const char *, unsigned, const char *) throw() __attribute__((__noreturn__));
# 76 "/usr/include/assert.h" 3
extern "C" void __assert_perror_fail(int, const char *, unsigned, const char *) throw() __attribute__((__noreturn__));
# 84 "/usr/include/assert.h" 3
extern "C" void __assert(const char *, const char *, int) throw() __attribute__((__noreturn__));
# 65 "/opt/matlab/extern/include/mex.h"
extern "C" { typedef void (*mex_exit_fn)(void); }
# 74 "/opt/matlab/extern/include/mex.h"
typedef
# 70 "/opt/matlab/extern/include/mex.h"
struct mexGlobalTableEntry_Tag {
# 72 "/opt/matlab/extern/include/mex.h"
const char *name;
# 73 "/opt/matlab/extern/include/mex.h"
mxArray **variable;
# 74 "/opt/matlab/extern/include/mex.h"
} mexGlobalTableEntry, *mexGlobalTable;
# 89 "/opt/matlab/extern/include/mex.h"
typedef
# 83 "/opt/matlab/extern/include/mex.h"
struct mexFunctionTableEntry_tag {
# 84 "/opt/matlab/extern/include/mex.h"
const char *name;
# 85 "/opt/matlab/extern/include/mex.h"
mxFunctionPtr f;
# 86 "/opt/matlab/extern/include/mex.h"
int nargin;
# 87 "/opt/matlab/extern/include/mex.h"
int nargout;
# 88 "/opt/matlab/extern/include/mex.h"
struct _mexLocalFunctionTable *local_function_table;
# 89 "/opt/matlab/extern/include/mex.h"
} mexFunctionTableEntry, *mexFunctionTable;
# 94 "/opt/matlab/extern/include/mex.h"
typedef
# 91 "/opt/matlab/extern/include/mex.h"
struct _mexLocalFunctionTable {
# 92 "/opt/matlab/extern/include/mex.h"
size_t length;
# 93 "/opt/matlab/extern/include/mex.h"
mexFunctionTable entries;
# 94 "/opt/matlab/extern/include/mex.h"
} _mexLocalFunctionTable, *mexLocalFunctionTable;
# 99 "/opt/matlab/extern/include/mex.h"
typedef
# 96 "/opt/matlab/extern/include/mex.h"
struct {
# 97 "/opt/matlab/extern/include/mex.h"
void (*initialize)(void);
# 98 "/opt/matlab/extern/include/mex.h"
void (*terminate)(void);
# 99 "/opt/matlab/extern/include/mex.h"
} _mexInitTermTableEntry, *mexInitTermTableEntry;
# 113 "/opt/matlab/extern/include/mex.h"
typedef
# 103 "/opt/matlab/extern/include/mex.h"
struct {
# 104 "/opt/matlab/extern/include/mex.h"
int version;
# 105 "/opt/matlab/extern/include/mex.h"
int file_function_table_length;
# 106 "/opt/matlab/extern/include/mex.h"
mexFunctionTable file_function_table;
# 107 "/opt/matlab/extern/include/mex.h"
int global_variable_table_length;
# 108 "/opt/matlab/extern/include/mex.h"
mexGlobalTable global_variable_table;
# 109 "/opt/matlab/extern/include/mex.h"
int npaths;
# 110 "/opt/matlab/extern/include/mex.h"
const char **paths;
# 111 "/opt/matlab/extern/include/mex.h"
int init_term_table_length;
# 112 "/opt/matlab/extern/include/mex.h"
mexInitTermTableEntry init_term_table;
# 113 "/opt/matlab/extern/include/mex.h"
} _mex_information, *mex_information;
# 115 "/opt/matlab/extern/include/mex.h"
typedef mex_information (*fn_mex_file)(void);
# 117 "/opt/matlab/extern/include/mex.h"
typedef void (*fn_clean_up_after_error)(void);
# 118 "/opt/matlab/extern/include/mex.h"
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr);
# 120 "/opt/matlab/extern/include/mex.h"
typedef void (*fn_mex_enter_mex_library)(mex_information);
# 121 "/opt/matlab/extern/include/mex.h"
typedef fn_mex_enter_mex_library fn_mex_exit_mex_library;
# 123 "/opt/matlab/extern/include/mex.h"
typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void);
# 124 "/opt/matlab/extern/include/mex.h"
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable);
# 146 "/opt/matlab/extern/include/mex.h"
extern "C" void mexFunction(int, mxArray *[], int, const mxArray *[]);
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 169 "/opt/matlab/extern/include/mex.h"
extern "C" void mexErrMsgTxt(const char *);
# 178 "/opt/matlab/extern/include/mex.h"
extern "C" void mexErrMsgIdAndTxt(const char *, const char *, ...);
# 189 "/opt/matlab/extern/include/mex.h"
extern "C" void mexWarnMsgTxt(const char *);
# 200 "/opt/matlab/extern/include/mex.h"
extern "C" void mexWarnMsgIdAndTxt(const char *, const char *, ...);
# 210 "/opt/matlab/extern/include/mex.h"
extern "C" int mexPrintf(const char *, ...);
# 225 "/opt/matlab/extern/include/mex.h"
extern "C" void mexMakeArrayPersistent(mxArray *);
# 235 "/opt/matlab/extern/include/mex.h"
extern "C" void mexMakeMemoryPersistent(void *);
# 241 "/opt/matlab/extern/include/mex.h"
extern "C" int mexSet(double, const char *, mxArray *);
# 245 "/opt/matlab/extern/include/mex.h"
extern "C" const mxArray *mexGet(double, const char *);
# 251 "/opt/matlab/extern/include/mex.h"
extern "C" int mexCallMATLAB(int, mxArray *[], int, mxArray *[], const char *);
# 263 "/opt/matlab/extern/include/mex.h"
extern "C" mxArray *mexCallMATLABWithTrap(int, mxArray *[], int, mxArray *[], const char *);
# 277 "/opt/matlab/extern/include/mex.h"
extern "C" void mexSetTrapFlag(int);
# 284 "/opt/matlab/extern/include/mex.h"
extern "C" void mexPrintAssertion(const char *, const char *, int, const char *);
# 294 "/opt/matlab/extern/include/mex.h"
extern "C" bool mexIsGlobal(const mxArray *);
# 301 "/opt/matlab/extern/include/mex.h"
extern "C" int mexPutVariable(const char *, const char *, const mxArray *);
# 312 "/opt/matlab/extern/include/mex.h"
extern "C" const mxArray *mexGetVariablePtr(const char *, const char *);
# 322 "/opt/matlab/extern/include/mex.h"
extern "C" mxArray *mexGetVariable(const char *, const char *);
# 331 "/opt/matlab/extern/include/mex.h"
extern "C" void mexLock();
# 337 "/opt/matlab/extern/include/mex.h"
extern "C" void mexUnlock();
# 343 "/opt/matlab/extern/include/mex.h"
extern "C" bool mexIsLocked();
# 349 "/opt/matlab/extern/include/mex.h"
extern "C" const char *mexFunctionName();
# 356 "/opt/matlab/extern/include/mex.h"
extern "C" int mexEvalString(const char *);
# 365 "/opt/matlab/extern/include/mex.h"
extern "C" mxArray *mexEvalStringWithTrap(const char *);
# 373 "/opt/matlab/extern/include/mex.h"
extern "C" int mexAtExit(mex_exit_fn);
# 7 "mex_CALC_LH.cu"
static int cpat_len;
# 8 "mex_CALC_LH.cu"
static int cmus[100];
# 9 "mex_CALC_LH.cu"
static float csigmas[100];
# 10 "mex_CALC_LH.cu"
static int cpat_events[100];
# 12 "mex_CALC_LH.cu"
__attribute__((unused)) float loss_function(int misses, float lambda)
# 13 "mex_CALC_LH.cu"
{int volatile ___ = 1;
# 17 "mex_CALC_LH.cu"
exit(___);}
# 20 "mex_CALC_LH.cu"
void compute_Lh(float *LH, int Nt, int *EventN, int **EventIndexes, float lambda, float minlh, float denom) ;
# 81 "mex_CALC_LH.cu"
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
# 82 "mex_CALC_LH.cu"
{
# 83 "mex_CALC_LH.cu"
int i, j;
# 84 "mex_CALC_LH.cu"
float minlh;
# 85 "mex_CALC_LH.cu"
int N_event_types;
# 86 "mex_CALC_LH.cu"
int *event_N;
# 87 "mex_CALC_LH.cu"
int **event_indexes;
# 88 "mex_CALC_LH.cu"
int Nt;
# 89 "mex_CALC_LH.cu"
int pat_len;
# 90 "mex_CALC_LH.cu"
int *pat_events;
# 91 "mex_CALC_LH.cu"
float *sigmas;
# 92 "mex_CALC_LH.cu"
int *mus;
# 93 "mex_CALC_LH.cu"
float lambda;
# 94 "mex_CALC_LH.cu"
double *pr;
# 95 "mex_CALC_LH.cu"
mxArray *mArray;
# 97 "mex_CALC_LH.cu"
int *devEventN;
# 98 "mex_CALC_LH.cu"
int **devEventIndexes;
# 99 "mex_CALC_LH.cu"
int **devEventIndexesT;
# 100 "mex_CALC_LH.cu"
int *devTmp;
# 101 "mex_CALC_LH.cu"
float *devLH;
# 103 "mex_CALC_LH.cu"
float denom;
# 105 "mex_CALC_LH.cu"
float *hostLH;
# 107 "mex_CALC_LH.cu"
if (nrhs != 5) {
# 108 "mex_CALC_LH.cu"
mexErrMsgTxt("Input should == 5"); }
# 110 "mex_CALC_LH.cu"
N_event_types = (mxGetN(prhs[0]));
# 111 "mex_CALC_LH.cu"
event_indexes = ((int **)mxMalloc(N_event_types * sizeof(int *)));
# 112 "mex_CALC_LH.cu"
event_N = ((int *)mxMalloc(N_event_types * sizeof(int)));
# 114 "mex_CALC_LH.cu"
cudaMalloc((void **)(&devEventN), sizeof(int) * N_event_types);
# 115 "mex_CALC_LH.cu"
cudaMalloc((void **)(&devEventIndexes), sizeof(int *) * N_event_types);
# 116 "mex_CALC_LH.cu"
devEventIndexesT = ((int **)mxMalloc(N_event_types * sizeof(int *)));
# 118 "mex_CALC_LH.cu"
lambda = (mxGetScalar(prhs[3]));
# 119 "mex_CALC_LH.cu"
minlh = (mxGetScalar(prhs[4]));
# 120 "mex_CALC_LH.cu"
Nt = (mxGetScalar(prhs[1]));
# 122 "mex_CALC_LH.cu"
for (i = 0; i < N_event_types; i++)
# 123 "mex_CALC_LH.cu"
{
# 124 "mex_CALC_LH.cu"
mArray = mxGetField(prhs[0], i, "indexes");
# 125 "mex_CALC_LH.cu"
(event_N[i]) = (mxGetN(mArray));
# 126 "mex_CALC_LH.cu"
(event_indexes[i]) = ((int *)mxMalloc((event_N[i]) * sizeof(int)));
# 127 "mex_CALC_LH.cu"
for (j = 0; j < (event_N[i]); j++) {
# 128 "mex_CALC_LH.cu"
((event_indexes[i])[j]) = (((int)(*(mxGetPr(mArray) + j))) - 1); }
# 130 "mex_CALC_LH.cu"
cudaMalloc((void **)(&devTmp), sizeof(int) * (event_N[i]));
# 131 "mex_CALC_LH.cu"
cudaMemcpy(devTmp, event_indexes[i], (event_N[i]) * sizeof(int), cudaMemcpyHostToDevice);
# 132 "mex_CALC_LH.cu"
(devEventIndexesT[i]) = devTmp;
# 133 "mex_CALC_LH.cu"
}
# 134 "mex_CALC_LH.cu"
cudaMemcpy(devEventIndexes, devEventIndexesT, N_event_types * sizeof(int *), cudaMemcpyHostToDevice);
# 135 "mex_CALC_LH.cu"
cudaMemcpy(devEventN, event_N, N_event_types * sizeof(int), cudaMemcpyHostToDevice);
# 138 "mex_CALC_LH.cu"
mArray = mxGetField(prhs[2], 0, "Events");
# 139 "mex_CALC_LH.cu"
pat_len = (mxGetN(mArray));
# 140 "mex_CALC_LH.cu"
pat_events = ((int *)malloc(sizeof(int) * pat_len));
# 141 "mex_CALC_LH.cu"
mus = ((int *)malloc(sizeof(float) * pat_len));
# 142 "mex_CALC_LH.cu"
sigmas = ((float *)malloc(sizeof(float) * pat_len));
# 143 "mex_CALC_LH.cu"
pr = mxGetPr(mxGetField(prhs[2], 0, "Theta"));
# 145 "mex_CALC_LH.cu"
denom = (1);
# 146 "mex_CALC_LH.cu"
for (i = 0; i < pat_len; i++)
# 147 "mex_CALC_LH.cu"
{
# 148 "mex_CALC_LH.cu"
(pat_events[i]) = (*(mxGetPr(mxGetField(prhs[2], 0, "Events")) + i));
# 149 "mex_CALC_LH.cu"
(mus[i]) = ((int)(pr[(0 * pat_len) + i]));
# 150 "mex_CALC_LH.cu"
(sigmas[i]) = ((float)(pr[(1 * pat_len) + i]));
# 151 "mex_CALC_LH.cu"
denom *= ((sigmas[i]) * sqrt((2) * (3.141592653589793116)));
# 153 "mex_CALC_LH.cu"
}
# 160 "mex_CALC_LH.cu"
cudaMemcpyToSymbol("cpat_len", &pat_len, sizeof(int), 0, cudaMemcpyHostToDevice);
# 161 "mex_CALC_LH.cu"
cudaMemcpyToSymbol("cmus", mus, sizeof(int) * pat_len, 0, cudaMemcpyHostToDevice);
# 162 "mex_CALC_LH.cu"
cudaMemcpyToSymbol("csigmas", sigmas, sizeof(float) * pat_len, 0, cudaMemcpyHostToDevice);
# 163 "mex_CALC_LH.cu"
cudaMemcpyToSymbol("cpat_events", pat_events, sizeof(int) * pat_len, 0, cudaMemcpyHostToDevice);
# 165 "mex_CALC_LH.cu"
hostLH = ((float *)mxMalloc(sizeof(float) * Nt));
# 166 "mex_CALC_LH.cu"
cudaMalloc((void **)(&devLH), sizeof(float) * Nt);
# 170 "mex_CALC_LH.cu"
dim3 dimGrid((int)ceil(((float)Nt) / (256)));
# 171 "mex_CALC_LH.cu"
dim3 dimBlock(256);
# 172 "mex_CALC_LH.cu"
cudaThreadSynchronize();
# 173 "mex_CALC_LH.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : compute_Lh(devLH, Nt, devEventN, devEventIndexes, lambda, minlh, denom);
# 174 "mex_CALC_LH.cu"
cudaThreadSynchronize();
# 176 "mex_CALC_LH.cu"
cudaMemcpy(hostLH, devLH, sizeof(float) * Nt, cudaMemcpyDeviceToHost);
# 177 "mex_CALC_LH.cu"
cudaThreadSynchronize();
# 179 "mex_CALC_LH.cu"
(plhs[0]) = mxCreateDoubleMatrix(Nt, 1, mxREAL);
# 180 "mex_CALC_LH.cu"
for (i = 0; i < Nt; i++)
# 181 "mex_CALC_LH.cu"
{
# 183 "mex_CALC_LH.cu"
(*(mxGetPr(plhs[0]) + i)) = ((double)(hostLH[i]));
# 184 "mex_CALC_LH.cu"
}
# 186 "mex_CALC_LH.cu"
cudaFree(devEventN);
# 187 "mex_CALC_LH.cu"
cudaFree(devLH);
# 188 "mex_CALC_LH.cu"
for (i = 0; i < N_event_types; i++)
# 189 "mex_CALC_LH.cu"
{
# 190 "mex_CALC_LH.cu"
cudaFree(devEventIndexesT[i]);
# 191 "mex_CALC_LH.cu"
mxFree(event_indexes[i]);
# 192 "mex_CALC_LH.cu"
}
# 193 "mex_CALC_LH.cu"
cudaFree(devEventIndexes);
# 194 "mex_CALC_LH.cu"
mxFree(hostLH);
# 195 "mex_CALC_LH.cu"
mxFree(event_N);
# 196 "mex_CALC_LH.cu"
mxFree(event_indexes);
# 197 "mex_CALC_LH.cu"
mxFree(devEventIndexesT);
# 198 "mex_CALC_LH.cu"
}
# 1 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.stub.c"
# 1 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.stub.c" 1
# 1 "/opt/cuda/bin/../include/crt/host_runtime.h" 1
# 91 "/opt/cuda/bin/../include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/opt/cuda/bin/../include/common_functions.h" 1
# 90 "/opt/cuda/bin/../include/common_functions.h"
# 1 "/opt/cuda/bin/../include/math_functions.h" 1 3
# 948 "/opt/cuda/bin/../include/math_functions.h" 3
# 1 "/opt/cuda/bin/../include/math_constants.h" 1 3
# 949 "/opt/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/opt/cuda/bin/../include/math_functions.h" 3
# 1 "/opt/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/opt/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/opt/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5000 "/opt/cuda/bin/../include/math_functions.h" 3
# 1 "/opt/cuda/bin/../include/math_functions_dbl_ptx1.h" 1 3
# 5001 "/opt/cuda/bin/../include/math_functions.h" 2 3
# 91 "/opt/cuda/bin/../include/common_functions.h" 2
# 164 "/opt/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_000036a7_00000000-3_mex_CALC_LH.fatbin.c" 1
# 1 "/opt/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/opt/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/opt/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/opt/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/opt/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/opt/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/opt/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/opt/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/opt/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/opt/cuda/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/opt/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_000036a7_00000000-3_mex_CALC_LH.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_10$:\n"
".quad 0x33010102464c457f,0x0000000000000002,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000000fa8,0x0000000000000040,0x00380040000a010a,0x0001000900400004\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000280\n"
".quad 0x00000000000000d8,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000358\n"
".quad 0x000000000000003e,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x0000000000000396\n"
".quad 0x0000000000000180,0x0000000b00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x0000000000000516\n"
".quad 0x0000000000000518,0x1300000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000a1,0x0000000000000002,0x0000000000000000,0x0000000000000a2e\n"
".quad 0x0000000000000024,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000057,0x0000000000000002,0x0000000000000000,0x0000000000000a52\n"
".quad 0x00000000000000a0,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000080000007b,0x0000000000000003,0x0000000000000000,0x0000000000000af2\n"
".quad 0x000000000000003c,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000ca,0x0000000000000002,0x0000000000000000,0x0000000000000af2\n"
".quad 0x00000000000004b4,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x30315a5f2e747865\n"
".quad 0x5f657475706d6f63,0x506950696650684c,0x2e006666665f3053,0x2e6f666e692e766e\n"
".quad 0x706d6f6330315a5f,0x6650684c5f657475,0x665f305350695069,0x732e766e2e006666\n"
".quad 0x5a5f2e6465726168,0x7475706d6f633031,0x50696650684c5f65,0x6666665f30535069\n"
".quad 0x6e6f632e766e2e00,0x5f2e31746e617473,0x75706d6f6330315a,0x696650684c5f6574\n"
".quad 0x66665f3053506950,0x6f632e766e2e0066,0x0030746e6174736e,0x6d6f6330315a5f00\n"
".quad 0x50684c5f65747570,0x5f30535069506966,0x73756d6300666666,0x76655f7461706300\n"
".quad 0x6170630073746e65,0x7363006e656c5f74,0x00000073616d6769,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000100030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000200030000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300030000,0x0000000000000000,0x0000000000000000,0x0000000000030000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000400030000,0x0518000000000000,0x0000000000000000\n"
".quad 0x0000000600030000,0x0000000000000000,0x0000000000000000,0x0000000700030000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000500030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000800030000,0x0000000000000000,0x0001000000000000\n"
".quad 0x0000000410120000,0x0000000000000000,0x001c000000000000,0x0004000800110000\n"
".quad 0x0190000000000000,0x0021000000000000,0x0324000800110000,0x0190000000000000\n"
".quad 0x002d000000000000,0x0000000800110000,0x0004000000000000,0x0036000000000000\n"
".quad 0x0194000800110000,0x0190000000000000,0x000d000000000000,0x2c0d04000780a000\n"
".quad 0xcdfd000000136100,0x00036c2107c83003,0xf9fd000005003000,0x00036c0187c83080\n"
".quad 0xf805000002801007,0xf825c00007800000,0xf8110403c7801000,0xf8210403c7801000\n"
".quad 0xf8290403c7801000,0x80350403c7801000,0x92010fffffff103f,0x00012400c7801401\n"
".quad 0xd039c41007803002,0x9c01042007802000,0x00010fffffff203c,0x01fd80c00780d00e\n"
".quad 0x14056c00c7c8307c,0x022d0400c7802000,0x92012400c7801400,0xec082400c7801401\n"
".quad 0x00032481821c1100,0x0001000002801004,0xf841c41007803003,0xf8310403c7801000\n"
".quad 0x80190403c7801000,0xd43d000000031001,0xfe03042007802000,0x9e1500000000861f\n"
".quad 0x0a010fffffff2038,0x200180800780d00e,0x0001040007802000,0x9c0580c00780d00e\n"
".quad 0x02150fffffff203c,0x000580c00780d00e,0x02050401c7802040,0x0ffd04114780a000\n"
".quad 0x00016c0187c83000,0x02456c010780300d,0x00016c0047803002,0x224504400780d081\n"
".quad 0x000104400780d081,0x044504000780d011,0x0645000007804001,0x2245000447806000\n"
".quad 0x0445c41007803010,0x8005000447806000,0x0849000000033001,0x0a49000007804003\n"
".quad 0x2449000487806002,0x0805c41007803010,0x0009000487806002,0x020900000780400d\n"
".quad 0x040900008780600c,0x0009c41007803010,0x840800008780600c,0x0019200280183006\n"
".quad 0x9831040082803000,0x0bfd000000032001,0x22096c0107c8300c,0xa041040047802000\n"
".quad 0xc003000000032004,0x1003000002801001,0x8019000007801004,0xca15000000031001\n"
".quad 0xca052400c7801400,0x08002400c7801400,0x0a01b0010a30400d,0xca1500000780600c\n"
".quad 0x04052400c7801400,0x000144014780a000,0x1830c41007803010,0x0815c0010204c005\n"
".quad 0x19fd00000780600c,0x0201605107c8b082,0x0a05e4004780a000,0x00010401c7802000\n"
".quad 0x183100400680c088,0x180800400680c088,0xf801c00200309000,0xdbfd0403c7801000\n"
".quad 0x9618602107c8b00c,0x020120438e08200a,0x0a192440c2801000,0x8015040187802000\n"
".quad 0x0029000000033001,0x0229000007804005,0x142d000287806004,0x003500000780400d\n"
".quad 0x142900000780400f,0x162dc41007803010,0x14390002c780600c,0x0235000007804003\n"
".quad 0x000900034780600e,0x1629000287806004,0x1639c41007803010,0x1a2d000387806002\n"
".quad 0x0021c41007803010,0x1419040207802000,0x1c2900028780600c,0x0001c41007803010\n"
".quad 0x92250002c780600e,0x0a1d000000032001,0x140544014780a000,0x0429000287806002\n"
".quad 0x13fd040187802000,0x18116c0147c83080,0x003500010780e007,0x0805040047802000\n"
".quad 0xc00320000780d400,0x2003000002801000,0xf811000007801007,0xf8210403c7801000\n"
".quad 0x00010403c7801000,0x10092400c7801000,0x000544014780a000,0xd80144014780a000\n"
".quad 0x03fd00200780c002,0x0001605107c8b082,0x0001e4004780a000,0x020500400680c088\n"
".quad 0x020400400680c088,0x0005c00100009000,0x021503fb8aa3c03b,0x0809cc064780a000\n"
".quad 0x0a0503fb8aa3c03b,0x041d00400780e083,0x0a05cc064780a000,0x0e090b5bfbebe00e\n"
".quad 0x021900410780e083,0x0e0903fb8aa3c03b,0x0a050b5bfbebe00e,0x0c15c0004780b000\n"
".quad 0x0419c0004780b000,0x020503fb8aa3c03b,0x0a09c00007809000,0x0e15c00007809000\n"
".quad 0x0c19c0004780b000,0x0205c0004780b000,0x0a0900000780c002,0x0c15c00007809000\n"
".quad 0x1019c00007809000,0x01fd6c0147803080,0x01fd604047c8b085,0x0401604107e8b086\n"
".quad 0x0c0900000780c005,0xf8052c014780a000,0x09fd0403c2801000,0x09fd604047c8b085\n"
".quad 0x0409604107d8b086,0x0e0544014780a000,0xf8012440e2801000,0x02050403c2801000\n"
".quad 0x0e0100000780c002,0xddfd2440d2801000,0x0004607107c8b082,0x02051100fc00c001\n"
".quad 0xdc0100400680c088,0x000900600680c088,0x0601000007809000,0x0204c41007803002\n"
".quad 0x00052100e800c002,0x0100a0c00781d00e,0x0000000000010000,0xbe8ebf3172007e80\n"
".quad 0x0000c2d20000b5bf,0x00007f80000042d2,0x0000001c0b043e80,0x0010000000080000\n"
".quad 0x0020000000180000,0x0028000000240000,0x1704002c18030000,0x0006ffffffff000c\n"
".quad 0x17040013f0000028,0x0005ffffffff000c,0x17040013f0000024,0x0004ffffffff000c\n"
".quad 0x17040013f0000020,0x0003ffffffff000c,0x17040023f0000018,0x0002ffffffff000c\n"
".quad 0x17040023f0000010,0x0001ffffffff000c,0x17040013f0000008,0x0000ffffffff000c\n"
".quad 0x0d040023f0000000,0x0001000100080008,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000500000006,0x0000000000000fa8,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000000e0,0x00000000000000e0,0x0000000000000004\n"
".quad 0x00000b0560000000,0x0000000000000516,0x0000000000000000,0x0000000000000000\n"
".quad 0x00000000000005dc,0x00000000000005dc,0x0000000000000004,0x00000b0660000000\n"
".quad 0x0000000000000af2,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000000000003c,0x0000000000000004,0x0000000500000001,0x0000000000000af2\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000004b4,0x00000000000004b4\n"
".quad 0x0000000000000004,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_10$[530];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_10$:\n"
".quad 0x6f69737265762e09,0x2e090a342e31206e,0x7320746567726174,0x616d202c30315f6d\n"
".quad 0x6f745f3436665f70,0x2f2f090a3233665f,0x656c69706d6f6320,0x2f20687469772064\n"
".quad 0x616475632f74706f,0x2f34366e65706f2f,0x0a65622f2f62696c,0x706f766e202f2f09\n"
".quad 0x322e332063636e65,0x6f20746c69756220,0x312d30313032206e,0x2f090a0a33302d31\n"
".quad 0x2d2d2d2d2d2d2d2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f2f090a2d2d2d2d\n"
".quad 0x696c69706d6f4320,0x2f706d742f20676e,0x305f746678706d74,0x5f37613633303030\n"
".quad 0x3030303030303030,0x435f78656d5f372d,0x632e484c5f434c41,0x2f2820692e337070\n"
".quad 0x494263632f706d74,0x495539354c442e23,0x2d2d2d2f2f090a29,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2f2f090a0a,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x74704f202f2f090a,0x2f090a3a736e6f69\n"
".quad 0x2d2d2d2d2d2d2d2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f2f090a2d2d2d2d\n"
".quad 0x7465677261542020,0x5349202c7874703a,0x2c30315f6d733a41,0x3a6e6169646e4520\n"
".quad 0x202c656c7474696c,0x207265746e696f50,0x0a34363a657a6953,0x334f2d20202f2f09\n"
".quad 0x696d6974704f2809,0x6c206e6f6974617a,0x2f090a296c657665,0x280930672d20202f\n"
".quad 0x656c206775626544,0x2f2f090a296c6576,0x522809326d2d2020,0x64612074726f7065\n"
".quad 0x736569726f736976,0x2d2d2d2f2f090a29,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x656c69662e090a0a,0x6d6f633c22093109,0x6e696c2d646e616d\n"
".quad 0x69662e090a223e65,0x742f22093209656c,0x6678706d742f706d,0x3633303030305f74\n"
".quad 0x30303030305f3761,0x656d5f362d303030,0x4c5f434c41435f78,0x6566616475632e48\n"
".quad 0x090a227570672e32,0x093309656c69662e,0x696c2f7273752f22,0x38782f6363672f62\n"
".quad 0x6e696c2d34365f36,0x342f756e672d7875,0x636e692f352e342e,0x6474732f6564756c\n"
".quad 0x090a22682e666564,0x093409656c69662e,0x75632f74706f2f22,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x65642f7472632f65,0x6e75725f65636976,0x0a22682e656d6974\n"
".quad 0x3509656c69662e09,0x632f74706f2f2209,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x5f74736f682f6564,0x2e73656e69666564,0x6c69662e090a2268,0x706f2f2209360965\n"
".quad 0x622f616475632f74,0x6e692f2e2e2f6e69,0x75622f6564756c63,0x79745f6e69746c69\n"
".quad 0x090a22682e736570,0x093709656c69662e,0x75632f74706f2f22,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x6563697665642f65,0x682e73657079745f,0x656c69662e090a22\n"
".quad 0x74706f2f22093809,0x69622f616475632f,0x636e692f2e2e2f6e,0x6972642f6564756c\n"
".quad 0x657079745f726576,0x662e090a22682e73,0x2f22093909656c69,0x616475632f74706f\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x5f65636166727573,0x22682e7365707974\n"
".quad 0x09656c69662e090a,0x74706f2f22093031,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x7865742f6564756c,0x7079745f65727574,0x2e090a22682e7365,0x09313109656c6966\n"
".quad 0x75632f74706f2f22,0x2e2f6e69622f6164,0x64756c636e692f2e,0x726f746365762f65\n"
".quad 0x682e73657079745f,0x656c69662e090a22,0x706f2f2209323109,0x622f616475632f74\n"
".quad 0x6e692f2e2e2f6e69,0x65642f6564756c63,0x75616c5f65636976,0x617261705f68636e\n"
".quad 0x682e73726574656d,0x656c69662e090a22,0x706f2f2209333109,0x622f616475632f74\n"
".quad 0x6e692f2e2e2f6e69,0x72632f6564756c63,0x6761726f74732f74,0x2e7373616c635f65\n"
".quad 0x6c69662e090a2268,0x752f220934310965,0x756c636e692f7273,0x2f737469622f6564\n"
".quad 0x22682e7365707974,0x09656c69662e090a,0x7273752f22093531,0x6564756c636e692f\n"
".quad 0x22682e656d69742f,0x09656c69662e090a,0x5f78656d22093631,0x2e484c5f434c4143\n"
".quad 0x69662e090a227563,0x2f2209373109656c,0x616475632f74706f,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x665f6e6f6d6d6f63,0x736e6f6974636e75,0x69662e090a22682e\n"
".quad 0x2f2209383109656c,0x616475632f74706f,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6e75665f6874616d,0x682e736e6f697463,0x656c69662e090a22,0x706f2f2209393109\n"
".quad 0x622f616475632f74,0x6e692f2e2e2f6e69,0x616d2f6564756c63,0x74736e6f635f6874\n"
".quad 0x0a22682e73746e61,0x3209656c69662e09,0x2f74706f2f220930,0x6e69622f61647563\n"
".quad 0x6c636e692f2e2e2f,0x697665642f656475,0x74636e75665f6563,0x0a22682e736e6f69\n"
".quad 0x3209656c69662e09,0x2f74706f2f220931,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x315f6d732f656475,0x63696d6f74615f31,0x6f6974636e75665f,0x2e090a22682e736e\n"
".quad 0x09323209656c6966,0x75632f74706f2f22,0x2e2f6e69622f6164,0x64756c636e692f2e\n"
".quad 0x5f32315f6d732f65,0x665f63696d6f7461,0x736e6f6974636e75,0x69662e090a22682e\n"
".quad 0x2f2209333209656c,0x616475632f74706f,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6f645f33315f6d73,0x6e75665f656c6275,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x706f2f2209343209,0x622f616475632f74,0x6e692f2e2e2f6e69,0x6d732f6564756c63\n"
".quad 0x6d6f74615f30325f,0x74636e75665f6369,0x0a22682e736e6f69,0x3209656c69662e09\n"
".quad 0x2f74706f2f220935,0x6e69622f61647563,0x6c636e692f2e2e2f,0x325f6d732f656475\n"
".quad 0x6e6972746e695f30,0x0a22682e73636973,0x3209656c69662e09,0x2f74706f2f220936\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x667275732f656475,0x636e75665f656361\n"
".quad 0x22682e736e6f6974,0x09656c69662e090a,0x74706f2f22093732,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x7865742f6564756c,0x7465665f65727574,0x74636e75665f6863\n"
".quad 0x0a22682e736e6f69,0x3209656c69662e09,0x2f74706f2f220938,0x6e69622f61647563\n"
".quad 0x6c636e692f2e2e2f,0x6874616d2f656475,0x6f6974636e75665f,0x705f6c62645f736e\n"
".quad 0x0a0a22682e317874,0x2074736e6f632e09,0x617063203233732e,0x090a3b6e656c5f74\n"
".quad 0x2e2074736e6f632e,0x2034206e67696c61,0x73756d632038622e,0x090a3b5d3030345b\n"
".quad 0x2e2074736e6f632e,0x2034206e67696c61,0x676973632038622e,0x5d3030345b73616d\n"
".quad 0x736e6f632e090a3b,0x6e67696c612e2074,0x632038622e203420,0x6e6576655f746170\n"
".quad 0x3b5d3030345b7374,0x72746e652e090a0a,0x6f6330315a5f2079,0x684c5f657475706d\n"
".quad 0x3053506950696650,0x090a28206666665f,0x206d617261702e09,0x635f5f203436752e\n"
".quad 0x5f6d726170616475,0x706d6f6330315a5f,0x6650684c5f657475,0x665f305350695069\n"
".quad 0x090a2c484c5f6666,0x206d617261702e09,0x635f5f203233732e,0x5f6d726170616475\n"
".quad 0x706d6f6330315a5f,0x6650684c5f657475,0x665f305350695069,0x090a2c744e5f6666\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x706d6f6330315a5f\n"
".quad 0x6650684c5f657475,0x665f305350695069,0x746e6576455f6666,0x61702e09090a2c4e\n"
".quad 0x3436752e206d6172,0x70616475635f5f20,0x30315a5f5f6d7261,0x5f657475706d6f63\n"
".quad 0x506950696650684c,0x455f6666665f3053,0x65646e49746e6576,0x2e09090a2c736578\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x7475706d6f633031\n"
".quad 0x50696650684c5f65,0x6666665f30535069,0x2c6164626d616c5f,0x617261702e09090a\n"
".quad 0x5f203233662e206d,0x726170616475635f,0x6f6330315a5f5f6d,0x684c5f657475706d\n"
".quad 0x3053506950696650,0x6e696d5f6666665f,0x702e09090a2c686c,0x33662e206d617261\n"
".quad 0x616475635f5f2032,0x315a5f5f6d726170,0x657475706d6f6330,0x6950696650684c5f\n"
".quad 0x5f6666665f305350,0x090a296d6f6e6564,0x206765722e090a7b,0x687225203631752e\n"
".quad 0x722e090a3b3e333c,0x203233752e206765,0x0a3b3e32353c7225,0x752e206765722e09\n"
".quad 0x323c647225203436,0x65722e090a3b3e33,0x25203233662e2067,0x090a3b3e39353c66\n"
".quad 0x72702e206765722e,0x35313c7025206465,0x636f6c2e090a3b3e,0x3009303209363109\n"
".quad 0x67656257444c240a,0x6330315a5f5f6e69,0x4c5f657475706d6f,0x5350695069665068\n"
".quad 0x090a3a6666665f30,0x203631752e766f6d,0x25202c3168722509,0x3b782e6469617463\n"
".quad 0x69772e6c756d090a,0x09203631752e6564,0x687225202c317225,0x0a3b363532202c31\n"
".quad 0x3233732e74766309,0x722509203631752e,0x2e64697425202c32,0x2e646461090a3b78\n"
".quad 0x3372250920323375,0x25202c327225202c,0x2e646c090a3b3172,0x33732e6d61726170\n"
".quad 0x202c347225092032,0x70616475635f5f5b,0x30315a5f5f6d7261,0x5f657475706d6f63\n"
".quad 0x506950696650684c,0x4e5f6666665f3053,0x746573090a3b5d74,0x3233732e74672e70\n"
".quad 0x25202c3170250920,0x3b337225202c3472,0x622031702540090a,0x5f744c2409206172\n"
".quad 0x3b30313031315f30,0x6e752e617262090a,0x3142424c24092069,0x6f6330315a5f5f35\n"
".quad 0x684c5f657475706d,0x3053506950696650,0x4c240a3b6666665f,0x313031315f305f74\n"
".quad 0x636f6c2e090a3a30,0x3009323409363109,0x6e6f632e646c090a,0x09203233732e7473\n"
".quad 0x70635b202c357225,0x3b5d6e656c5f7461,0x33752e766f6d090a,0x202c367225092032\n"
".quad 0x70746573090a3b30,0x203233732e656c2e,0x7225202c32702509,0x0a3b367225202c35\n"
".quad 0x7262203270254009,0x305f744c24092061,0x0a3b36363231315f,0x3233732e766f6d09\n"
".quad 0x25202c3772250920,0x766f6d090a3b3572,0x722509203436732e,0x090a3b30202c3164\n"
".quad 0x6d617261702e646c,0x662509203233662e,0x75635f5f5b202c31,0x5f5f6d7261706164\n"
".quad 0x75706d6f6330315a,0x696650684c5f6574,0x66665f3053506950,0x5d686c6e696d5f66\n"
".quad 0x61702e646c090a3b,0x203436752e6d6172,0x5b202c3264722509,0x6170616475635f5f\n"
".quad 0x6330315a5f5f6d72,0x4c5f657475706d6f,0x5350695069665068,0x76455f6666665f30\n"
".quad 0x090a3b5d4e746e65,0x203233732e766f6d,0x3b30202c38722509,0x33662e766f6d090a\n"
".quad 0x202c326625092032,0x3030303030306630,0x20202020203b3030,0x6d090a30202f2f09\n"
".quad 0x09203233732e766f,0x0a3b30202c397225,0x3233732e766f6d09,0x202c303172250920\n"
".quad 0x2e766f6d090a3b30,0x3172250920323373,0x090a3b312d202c31,0x203436752e766f6d\n"
".quad 0x63202c3364722509,0x6e6576655f746170,0x766f6d090a3b7374,0x722509203436752e\n"
".quad 0x73756d63202c3464,0x752e766f6d090a3b,0x3564722509203436,0x616d67697363202c\n"
".quad 0x2e766f6d090a3b73,0x3172250920323373,0x0a3b377225202c32,0x34395f305f744c24\n"
".quad 0x3c2f2f200a3a3437,0x6f4c203e706f6f6c,0x2079646f6220706f,0x2c323420656e696c\n"
".quad 0x676e697473656e20,0x203a687470656420,0x6d69747365202c31,0x6574692064657461\n"
".quad 0x3a736e6f69746172,0x6e776f6e6b6e7520,0x3109636f6c2e090a,0x090a300934340936\n"
".quad 0x203233732e766f6d,0x25202c3331722509,0x6f6c2e090a3b3472,0x0936340936310963\n"
".quad 0x732e646461090a30,0x3431722509203233,0x202c30317225202c,0x6461090a3b337225\n"
".quad 0x2509203436752e64,0x647225202c366472,0x3b34647225202c31,0x6e6f632e646c090a\n"
".quad 0x09203233732e7473,0x255b202c35317225,0x0a3b5d302b366472,0x3233732e64646109\n"
".quad 0x202c363172250920,0x7225202c34317225,0x646461090a3b3531,0x722509203436752e\n"
".quad 0x31647225202c3764,0x0a3b33647225202c,0x736e6f632e646c09,0x2509203233732e74\n"
".quad 0x72255b202c373172,0x090a3b5d302b3764,0x2e3436732e747663,0x6472250920323373\n"
".quad 0x3b37317225202c38,0x69772e6c756d090a,0x09203233732e6564,0x7225202c39647225\n"
".quad 0x090a3b34202c3731,0x203436752e646461,0x202c303164722509,0x7225202c32647225\n"
".quad 0x2e646c090a3b3964,0x732e6c61626f6c67,0x3831722509203233,0x30316472255b202c\n"
".quad 0x6d090a3b5d342d2b,0x09203233752e766f,0x3b30202c39317225,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x38317225202c3370,0x0a3b39317225202c,0x7262203370254009\n"
".quad 0x305f744c24092061,0x0a3b32323531315f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c323420,0x656c6562616c2064\n"
".quad 0x5f305f744c242064,0x6f6d090a34373439,0x2509203436732e76,0x3b30202c31316472\n"
".quad 0x7261702e646c090a,0x09203436752e6d61,0x5b202c3231647225,0x6170616475635f5f\n"
".quad 0x6330315a5f5f6d72,0x4c5f657475706d6f,0x5350695069665068,0x76455f6666665f30\n"
".quad 0x7865646e49746e65,0x756d090a3b5d7365,0x3436752e6f6c2e6c,0x2c33316472250920\n"
".quad 0x38202c3864722520,0x752e646461090a3b,0x3164722509203436,0x3231647225202c34\n"
".quad 0x3b3331647225202c,0x33732e766f6d090a,0x2c30327225092032,0x766f6d090a3b3020\n"
".quad 0x722509203233732e,0x240a3b31202c3132,0x3230315f305f744c,0x3c2f2f200a3a3234\n"
".quad 0x6f4c203e706f6f6c,0x2079646f6220706f,0x2c363420656e696c,0x676e697473656e20\n"
".quad 0x203a687470656420,0x6d69747365202c32,0x6574692064657461,0x3a736e6f69746172\n"
".quad 0x6e776f6e6b6e7520,0x3109636f6c2e090a,0x090a300931350936,0x636e79732e726162\n"
".quad 0x6c2e090a3b300920,0x323509363109636f,0x672e646c090a3009,0x36752e6c61626f6c\n"
".quad 0x3531647225092034,0x34316472255b202c,0x61090a3b5d382d2b,0x09203436752e6464\n"
".quad 0x25202c3631647225,0x7225202c35316472,0x646c090a3b313164,0x2e6c61626f6c672e\n"
".quad 0x3272250920323373,0x316472255b202c32,0x2e090a3b5d302b36,0x3509363109636f6c\n"
".quad 0x746573090a300934,0x3233732e74672e70,0x25202c3470250920,0x317225202c323272\n"
".quad 0x706c6573090a3b31,0x722509203233732e,0x30202c31202c3332,0x090a3b347025202c\n"
".quad 0x203233732e627573,0x25202c3432722509,0x317225202c323272,0x2e736261090a3b36\n"
".quad 0x3272250920323373,0x3b34327225202c35,0x6c2e70746573090a,0x2509203233732e74\n"
".quad 0x35327225202c3570,0x0a3b33317225202c,0x33732e706c657309,0x2c36327225092032\n"
".quad 0x25202c30202c3120,0x646e61090a3b3570,0x722509203233622e,0x33327225202c3732\n"
".quad 0x0a3b36327225202c,0x363109636f6c2e09,0x6d090a3009353509,0x33732e6f6c2e6c75\n"
".quad 0x2c38327225092032,0x25202c3532722520,0x6f6d090a3b373272,0x2509203233732e76\n"
".quad 0x0a3b31202c393272,0x3233732e62757309,0x202c303372250920,0x7225202c39327225\n"
".quad 0x6c756d090a3b3732,0x203233732e6f6c2e,0x25202c3133722509,0x337225202c333172\n"
".quad 0x2e646461090a3b30,0x3172250920323373,0x2c38327225202c33,0x090a3b3133722520\n"
".quad 0x09363109636f6c2e,0x756d090a30093635,0x3233732e6f6c2e6c,0x202c323372250920\n"
".quad 0x7225202c37327225,0x627573090a3b3132,0x722509203233732e,0x31327225202c3333\n"
".quad 0x0a3b32337225202c,0x3233732e62757309,0x202c343372250920,0x7225202c33337225\n"
".quad 0x646461090a3b3732,0x722509203233732e,0x33337225202c3533,0x0a3b37327225202c\n"
".quad 0x65672e7074657309,0x702509203233732e,0x2c36317225202c36,0x090a3b3232722520\n"
".quad 0x3233732e706c6573,0x202c313272250920,0x7225202c34337225,0x3b367025202c3533\n"
".quad 0x3109636f6c2e090a,0x090a300938340936,0x203233732e646461,0x25202c3032722509\n"
".quad 0x0a3b31202c303272,0x3436752e64646109,0x2c31316472250920,0x202c313164722520\n"
".quad 0x672e646c090a3b34,0x33732e6c61626f6c,0x2c36337225092032,0x2b30316472255b20\n"
".quad 0x6573090a3b5d342d,0x33732e74672e7074,0x202c377025092032,0x7225202c36337225\n"
".quad 0x702540090a3b3032,0x2409206172622037,0x3230315f305f744c,0x3c2f2f200a3b3234\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c323420656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x343734395f305f74,0x6e752e617262090a\n"
".quad 0x305f744c24092069,0x240a3b303337395f,0x3531315f305f744c,0x3c2f2f200a3a3232\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c323420656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x343734395f305f74,0x33732e766f6d090a\n"
".quad 0x2c31327225092032,0x5f744c240a3b3120,0x0a3a303337395f30,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c323420\n"
".quad 0x656c6562616c2064,0x5f305f744c242064,0x6c2e090a34373439,0x333609363109636f\n"
".quad 0x2e6c756d090a3009,0x09203233732e6f6c,0x7225202c37337225,0x31327225202c3331\n"
".quad 0x732e646461090a3b,0x3833722509203233,0x202c37337225202c,0x2e090a3b36317225\n"
".quad 0x3609363109636f6c,0x646461090a300935,0x722509203436752e,0x647225202c373164\n"
".quad 0x3b35647225202c31,0x6e6f632e646c090a,0x09203233662e7473,0x72255b202c336625\n"
".quad 0x0a3b5d302b373164,0x363109636f6c2e09,0x63090a3009393609,0x33662e6e722e7476\n"
".quad 0x2509203233732e32,0x33317225202c3466,0x662e646461090a3b,0x2c35662509203233\n"
".quad 0x6625202c33662520,0x2e6c756d090a3b33,0x3666250920323366,0x25202c346625202c\n"
".quad 0x67656e090a3b3466,0x662509203233662e,0x0a3b366625202c37,0x3233662e6c756d09\n"
".quad 0x25202c3866250920,0x3b336625202c3566,0x75662e766964090a,0x09203233662e6c6c\n"
".quad 0x376625202c396625,0x090a3b386625202c,0x2e746c2e70746573,0x3870250920323366\n"
".quad 0x25202c396625202c,0x6c6573090a3b3166,0x2509203233732e70,0x202c31202c393372\n"
".quad 0x0a3b387025202c30,0x3233732e64646109,0x25202c3972250920,0x397225202c393372\n"
".quad 0x09636f6c2e090a3b,0x0a30093037093631,0x3233732e766f6d09,0x202c303472250920\n"
".quad 0x2e627573090a3b31,0x3472250920323373,0x2c30347225202c31,0x090a3b3933722520\n"
".quad 0x203233732e627573,0x25202c3234722509,0x337225202c363172,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x337225202c333472,0x3b32347225202c39,0x33732e646461090a\n"
".quad 0x2c34347225092032,0x25202c3531722520,0x6461090a3b303172,0x2509203233732e64\n"
".quad 0x337225202c353472,0x3b34347225202c37,0x6f6c2e6c756d090a,0x722509203233732e\n"
".quad 0x31347225202c3634,0x0a3b35347225202c,0x3233732e64646109,0x202c303172250920\n"
".quad 0x7225202c33347225,0x6f6c2e090a3b3634,0x0932370936310963,0x6c2e6c756d090a30\n"
".quad 0x2509203233732e6f,0x337225202c373472,0x3b36317225202c39,0x6f6c2e6c756d090a\n"
".quad 0x722509203233732e,0x31347225202c3834,0x0a3b38337225202c,0x3233732e64646109\n"
".quad 0x202c313172250920,0x7225202c37347225,0x6f6c2e090a3b3834,0x0934370936310963\n"
".quad 0x722e747663090a30,0x33732e3233662e6e,0x2c30316625092032,0x090a3b3134722520\n"
".quad 0x203233662e64616d,0x6625202c32662509,0x2c396625202c3031,0x61090a3b32662520\n"
".quad 0x09203233732e6464,0x387225202c387225,0x6461090a3b31202c,0x2509203436752e64\n"
".quad 0x647225202c316472,0x73090a3b34202c31,0x732e656e2e707465,0x2c39702509203233\n"
".quad 0x7225202c35722520,0x39702540090a3b38,0x4c24092061726220,0x343734395f305f74\n"
".quad 0x752e617262090a3b,0x5f744c240920696e,0x0a3b323639385f30,0x31315f305f744c24\n"
".quad 0x6f6d090a3a363632,0x2509203233662e76,0x30306630202c3266,0x203b303030303030\n"
".quad 0x202f2f0920202020,0x732e766f6d090a30,0x2c39722509203233,0x5f744c240a3b3020\n"
".quad 0x0a3a323639385f30,0x383109636f6c2e09,0x0a30093339343109,0x2e6e722e74766309\n"
".quad 0x203233732e323366,0x25202c3131662509,0x747663090a3b3972,0x2e3233662e6e722e\n"
".quad 0x3166250920323373,0x0a3b357225202c32,0x617261702e646c09,0x2509203233662e6d\n"
".quad 0x5f5f5b202c333166,0x6d72617061647563,0x6d6f6330315a5f5f,0x50684c5f65747570\n"
".quad 0x5f30535069506966,0x626d616c5f666666,0x756d090a3b5d6164,0x2509203233662e6c\n"
".quad 0x316625202c343166,0x3b31316625202c33,0x33662e67656e090a,0x2c35316625092032\n"
".quad 0x090a3b3431662520,0x6c6c75662e766964,0x662509203233662e,0x35316625202c3631\n"
".quad 0x0a3b32316625202c,0x3233662e766f6d09,0x202c373166250920,0x6161386266336630\n"
".quad 0x09202020203b6233,0x3234342e31202f2f,0x662e6c756d090a37,0x3831662509203233\n"
".quad 0x202c36316625202c,0x63090a3b37316625,0x662e697a722e7476,0x09203233662e3233\n"
".quad 0x6625202c39316625,0x327865090a3b3831,0x2e786f727070612e,0x3266250920323366\n"
".quad 0x3b39316625202c30,0x33662e766f6d090a,0x2c31326625092032,0x3731336662663020\n"
".quad 0x202020203b303032,0x362e302d202f2f09,0x6d090a3634313339,0x09203233662e6461\n"
".quad 0x6625202c32326625,0x39316625202c3132,0x0a3b36316625202c,0x3233662e766f6d09\n"
".quad 0x202c333266250920,0x6562666235626630,0x09202020203b6538,0x32342e312d202f2f\n"
".quad 0x0a36302d65313638,0x3233662e64616d09,0x202c343266250920,0x6625202c33326625\n"
".quad 0x32326625202c3931,0x662e766f6d090a3b,0x3532662509203233,0x386266336630202c\n"
".quad 0x2020203b62336161,0x342e31202f2f0920,0x6c756d090a373234,0x662509203233662e\n"
".quad 0x34326625202c3632,0x0a3b35326625202c,0x7070612e32786509,0x203233662e786f72\n"
".quad 0x25202c3732662509,0x756d090a3b363266,0x2509203233662e6c,0x326625202c383266\n"
".quad 0x3b37326625202c30,0x3209636f6c2e090a,0x0a30093133350930,0x3233662e766f6d09\n"
".quad 0x202c393266250920,0x6161386266336630,0x09202020203b6233,0x3234342e31202f2f\n"
".quad 0x662e6c756d090a37,0x3033662509203233,0x25202c326625202c,0x7663090a3b393266\n"
".quad 0x33662e697a722e74,0x2509203233662e32,0x336625202c313366,0x2e766f6d090a3b30\n"
".quad 0x3366250920323366,0x3866376630202c32,0x20203b3030303030,0x2828202f2f092020\n"
".quad 0x30282f2946302e31,0x6d090a292946302e,0x09203233662e766f,0x6630202c33336625\n"
".quad 0x3030303030303030,0x2f2f09202020203b,0x2e327865090a3020,0x662e786f72707061\n"
".quad 0x3433662509203233,0x0a3b31336625202c,0x3233662e766f6d09,0x202c353366250920\n"
".quad 0x3237313366626630,0x09202020203b3030,0x39362e302d202f2f,0x616d090a36343133\n"
".quad 0x2509203233662e64,0x336625202c363366,0x2c31336625202c35,0x6d090a3b32662520\n"
".quad 0x09203233662e766f,0x6630202c37336625,0x6538656266623562,0x2f2f09202020203b\n"
".quad 0x363832342e312d20,0x6d090a36302d6531,0x09203233662e6461,0x6625202c38336625\n"
".quad 0x31336625202c3733,0x0a3b36336625202c,0x3233662e766f6d09,0x202c393366250920\n"
".quad 0x6161386266336630,0x09202020203b6233,0x3234342e31202f2f,0x662e6c756d090a37\n"
".quad 0x3034662509203233,0x202c38336625202c,0x65090a3b39336625,0x6f727070612e3278\n"
".quad 0x2509203233662e78,0x346625202c313466,0x2e6c756d090a3b30,0x3466250920323366\n"
".quad 0x2c34336625202c32,0x090a3b3134662520,0x203233662e766f6d,0x30202c3334662509\n"
".quad 0x3030303264326366,0x2f09202020203b30,0x090a3530312d202f,0x2e746c2e70746573\n"
".quad 0x3170250920323366,0x202c326625202c30,0x73090a3b33346625,0x203233662e706c65\n"
".quad 0x25202c3434662509,0x346625202c333366,0x3b30317025202c32,0x33662e766f6d090a\n"
".quad 0x2c35346625092032,0x3032643234663020,0x202020203b303030,0x0a353031202f2f09\n"
".quad 0x74672e7074657309,0x702509203233662e,0x2c326625202c3131,0x090a3b3534662520\n"
".quad 0x3233662e706c6573,0x202c363466250920,0x6625202c32336625,0x31317025202c3434\n"
".quad 0x662e766f6d090a3b,0x3734662509203233,0x303866376630202c,0x2020203b30303030\n"
".quad 0x312828202f2f0920,0x2e30282f2946302e,0x6f6d090a29294630,0x2509203233662e76\n"
".quad 0x306630202c383466,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3934662509203233,0x326432636630202c,0x2020203b30303030,0x30312d202f2f0920\n"
".quad 0x2e70746573090a35,0x09203233662e746c,0x6625202c32317025,0x39346625202c3631\n"
".quad 0x2e706c6573090a3b,0x3566250920323366,0x2c38346625202c30,0x25202c3832662520\n"
".quad 0x6f6d090a3b323170,0x2509203233662e76,0x346630202c313566,0x3b30303030326432\n"
".quad 0x202f2f0920202020,0x746573090a353031,0x3233662e74672e70,0x202c333170250920\n"
".quad 0x6625202c36316625,0x6c6573090a3b3135,0x2509203233662e70,0x346625202c323566\n"
".quad 0x2c30356625202c37,0x090a3b3331702520,0x752e656e2e746573,0x09203233732e3233\n"
".quad 0x7225202c39347225,0x0a3b397225202c35,0x3233732e67656e09,0x202c303572250920\n"
".quad 0x63090a3b39347225,0x33662e6e722e7476,0x2509203233732e32,0x357225202c333566\n"
".quad 0x2e6c756d090a3b30,0x3566250920323366,0x2c32356625202c34,0x090a3b3335662520\n"
".quad 0x203233662e6c756d,0x25202c3535662509,0x356625202c363466,0x702e646c090a3b34\n"
".quad 0x3233662e6d617261,0x202c363566250920,0x70616475635f5f5b,0x30315a5f5f6d7261\n"
".quad 0x5f657475706d6f63,0x506950696650684c,0x645f6666665f3053,0x090a3b5d6d6f6e65\n"
".quad 0x6c6c75662e766964,0x662509203233662e,0x35356625202c3735,0x0a3b36356625202c\n"
".quad 0x363109636f6c2e09,0x6c090a3009373709,0x2e6d617261702e64,0x6472250920343675\n"
".quad 0x635f5f5b202c3831,0x5f6d726170616475,0x706d6f6330315a5f,0x6650684c5f657475\n"
".quad 0x665f305350695069,0x0a3b5d484c5f6666,0x3436732e74766309,0x722509203233732e\n"
".quad 0x337225202c393164,0x772e6c756d090a3b,0x203233732e656469,0x202c303264722509\n"
".quad 0x0a3b34202c337225,0x3436752e64646109,0x2c31326472250920,0x202c383164722520\n"
".quad 0x090a3b3032647225,0x61626f6c672e7473,0x5b09203233662e6c,0x5d302b3132647225\n"
".quad 0x0a3b37356625202c,0x5f5f353142424c24,0x75706d6f6330315a,0x696650684c5f6574\n"
".quad 0x66665f3053506950,0x636f6c2e090a3a66,0x3009383709363109,0x0a3b74697865090a\n"
".quad 0x5f646e6557444c24,0x706d6f6330315a5f,0x6650684c5f657475,0x665f305350695069\n"
".quad 0x2f207d090a3a6666,0x6f6330315a5f202f,0x684c5f657475706d,0x3053506950696650\n"
".quad 0x00000a0a6666665f\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_10$[1113];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_10",(char*)__deviceText_$compute_10$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_10", (char*)__deviceText_$sm_10$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_10$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0x2e00b786,(char*)"acc931365bdc6cd3",(char*)"mex_CALC_LH.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0xa8bb6ff5,&__elfEntries1};
# 3 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.stub.c" 2
struct __T20 {float *__par0;int __par1;int *__par2;int **__par3;float __par4;float __par5;float __par6;int __dummy_field;};
extern void __device_stub__Z10compute_LhPfiPiPS0_fff(float *, int, int *, int **, float, float, float);
static void __sti____cudaRegisterAll_46_tmpxft_000036a7_00000000_4_mex_CALC_LH_cpp1_ii_695d149e(void) __attribute__((__constructor__));
void __device_stub__Z10compute_LhPfiPiPS0_fff(float *__par0, int __par1, int *__par2, int **__par3, float __par4, float __par5, float __par6){ struct __T20 *__T22 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T22->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T22->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T22->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T22->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T22->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T22->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T22->__par6) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, int, int *, int **, float, float, float))compute_Lh)); (void)cudaLaunch(((char *)((void ( *)(float *, int, int *, int **, float, float, float))compute_Lh))); };}
void compute_Lh( float *__cuda_0,int __cuda_1,int *__cuda_2,int **__cuda_3,float __cuda_4,float __cuda_5,float __cuda_6)
# 21 "mex_CALC_LH.cu"
{__device_stub__Z10compute_LhPfiPiPS0_fff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 78 "mex_CALC_LH.cu"
}
# 1 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.stub.c"
static void __sti____cudaRegisterAll_46_tmpxft_000036a7_00000000_4_mex_CALC_LH_cpp1_ii_695d149e(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, int, int *, int **, float, float, float))compute_Lh), (char*)"_Z10compute_LhPfiPiPS0_fff", "_Z10compute_LhPfiPiPS0_fff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&cpat_len, (char*)"cpat_len", "cpat_len", 0, 4, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&cmus, (char*)"cmus", "cmus", 0, 400, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&csigmas, (char*)"csigmas", "csigmas", 0, 400, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&cpat_events, (char*)"cpat_events", "cpat_events", 0, 400, 1, 0); }
# 1 "/tmp/tmpxft_000036a7_00000000-1_mex_CALC_LH.cudafe1.stub.c" 2
