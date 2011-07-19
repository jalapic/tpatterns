# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.cpp"
# 1 "mexD_CMP.cu"
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
# 6 "mexD_CMP.cu"
static float cWsum;
# 7 "mexD_CMP.cu"
static float cWmean;
# 8 "mexD_CMP.cu"
static float cWvar;
# 12 "mexD_CMP.cu"
void reduce5(float *inData, float *outData, int n) ;
# 36 "mexD_CMP.cu"
void reduce_array(const float *d_array, int n, float *d_sum, float *h_sum, int block_size)
# 37 "mexD_CMP.cu"
{
# 38 "mexD_CMP.cu"
int i = 0;
# 39 "mexD_CMP.cu"
float *dev_arrs[2] = {(__null), (__null)};
# 40 "mexD_CMP.cu"
cudaMalloc((void **)(&((dev_arrs)[0])), n * sizeof(float));
# 41 "mexD_CMP.cu"
cudaMalloc((void **)(&((dev_arrs)[1])), n * sizeof(float));
# 42 "mexD_CMP.cu"
cudaMemcpy((dev_arrs)[0], d_array, n * sizeof(float), cudaMemcpyDeviceToDevice);
# 44 "mexD_CMP.cu"
for (i = 0; n > 1; (n = (ceil(((float)n) / block_size))), (i ^= 1))
# 45 "mexD_CMP.cu"
{
# 46 "mexD_CMP.cu"
dim3 dimBlock(block_size, 1, 1);
# 47 "mexD_CMP.cu"
dim3 dimGrid(ceil(((float)n) / block_size), 1, 1);
# 48 "mexD_CMP.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : reduce5((dev_arrs)[i], (dev_arrs)[i ^ 1], n);
# 49 "mexD_CMP.cu"
}
# 51 "mexD_CMP.cu"
if (h_sum != (__null))
# 52 "mexD_CMP.cu"
{
# 53 "mexD_CMP.cu"
cudaMemcpy(h_sum, (dev_arrs)[i], sizeof(float), cudaMemcpyDeviceToHost);
# 54 "mexD_CMP.cu"
}
# 56 "mexD_CMP.cu"
if (d_sum != (__null))
# 57 "mexD_CMP.cu"
{
# 58 "mexD_CMP.cu"
cudaMemcpy(d_sum, (dev_arrs)[i], sizeof(float), cudaMemcpyDeviceToDevice);
# 59 "mexD_CMP.cu"
}
# 61 "mexD_CMP.cu"
cudaFree((dev_arrs)[0]);
# 62 "mexD_CMP.cu"
cudaFree((dev_arrs)[1]);
# 63 "mexD_CMP.cu"
}
# 66 "mexD_CMP.cu"
void arr_minus_scalar_squared(float *dst, float *src, float scalar, int N) ;
# 76 "mexD_CMP.cu"
void compute_mu_sigma(float *K, float *g_Ws, float *g_Xs, int N, int start_index, float S_start, float S_delta) ;
# 120 "mexD_CMP.cu"
void compute_max_mu_sigma(float *g_max, float *g_Mus, float *g_Ws, float *g_Xs, float *g_Sigmas, int N, int start_index) ;
# 170 "mexD_CMP.cu"
void stat_check(float *K, float *Signif, float *g_Xs, float S_start, float S_delta, float M, float alpha, int Npoints) ;
# 200 "mexD_CMP.cu"
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
# 201 "mexD_CMP.cu"
{
# 202 "mexD_CMP.cu"
int Npoints, m, i, tmp, j, nnz;
# 203 "mexD_CMP.cu"
double alpha, kN;
# 204 "mexD_CMP.cu"
double *BigMat;
# 206 "mexD_CMP.cu"
float MaxMu;
# 207 "mexD_CMP.cu"
int Nmus;
# 209 "mexD_CMP.cu"
float M;
# 211 "mexD_CMP.cu"
float *g_max, *g_Mus, *g_Sigmas;
# 212 "mexD_CMP.cu"
float *h_max, *h_Mus, *h_Sigmas;
# 214 "mexD_CMP.cu"
float *devSignif, *cpuSignif;
# 215 "mexD_CMP.cu"
float *devK, *cpuK;
# 216 "mexD_CMP.cu"
float *Xs_host;
# 217 "mexD_CMP.cu"
float *Ws_host;
# 219 "mexD_CMP.cu"
float *g_Xs, *g_Ws;
# 220 "mexD_CMP.cu"
float *g_tmp;
# 221 "mexD_CMP.cu"
double *output, *output_ml;
# 223 "mexD_CMP.cu"
float sigma_start = (1), dsigma = (1);
# 224 "mexD_CMP.cu"
int Nsigmas = 10;
# 225 "mexD_CMP.cu"
int Nblocks;
# 226 "mexD_CMP.cu"
int isig;
# 227 "mexD_CMP.cu"
double *output_t;
# 229 "mexD_CMP.cu"
float tWs, tWm, tWv;
# 231 "mexD_CMP.cu"
dim3 dimGrid, dimBlock;
# 234 "mexD_CMP.cu"
if (nrhs != 8) {
# 235 "mexD_CMP.cu"
mexErrMsgTxt("Input should == 8"); }
# 237 "mexD_CMP.cu"
m = (mxGetN(prhs[0]));
# 238 "mexD_CMP.cu"
Npoints = (mxGetM(prhs[0]));
# 239 "mexD_CMP.cu"
Nblocks = (ceil(((float)Npoints) / (512)));
# 240 "mexD_CMP.cu"
if (m != 2) {
# 241 "mexD_CMP.cu"
mexErrMsgTxt("Wrong weights"); }
# 243 "mexD_CMP.cu"
BigMat = mxGetPr(prhs[0]);
# 244 "mexD_CMP.cu"
alpha = mxGetScalar(prhs[1]);
# 245 "mexD_CMP.cu"
kN = mxGetScalar(prhs[2]);
# 246 "mexD_CMP.cu"
sigma_start = (mxGetScalar(prhs[3]));
# 247 "mexD_CMP.cu"
dsigma = (mxGetScalar(prhs[4]));
# 248 "mexD_CMP.cu"
Nsigmas = ((int)mxGetScalar(prhs[5]));
# 249 "mexD_CMP.cu"
M = ((float)mxGetScalar(prhs[6]));
# 250 "mexD_CMP.cu"
MaxMu = ((float)mxGetScalar(prhs[7]));
# 251 "mexD_CMP.cu"
Nmus = 0;
# 253 "mexD_CMP.cu"
Xs_host = ((float *)mxMalloc(sizeof(float) * Npoints));
# 254 "mexD_CMP.cu"
Ws_host = ((float *)mxMalloc(sizeof(float) * Npoints));
# 256 "mexD_CMP.cu"
for (i = 0; i < Npoints; i++)
# 257 "mexD_CMP.cu"
{
# 258 "mexD_CMP.cu"
(Xs_host[i]) = ((float)(BigMat[i]));
# 259 "mexD_CMP.cu"
(Ws_host[i]) = ((float)(BigMat[Npoints + i]));
# 260 "mexD_CMP.cu"
if ((Xs_host[i]) <= MaxMu) {
# 261 "mexD_CMP.cu"
Nmus++; }
# 262 "mexD_CMP.cu"
}
# 265 "mexD_CMP.cu"
cpuSignif = ((float *)mxMalloc((sizeof(float) * Nmus) * Nsigmas));
# 266 "mexD_CMP.cu"
cpuK = ((float *)mxMalloc((sizeof(float) * Nmus) * Nsigmas));
# 269 "mexD_CMP.cu"
cudaMalloc((void **)(&g_Xs), sizeof(float) * Npoints);
# 270 "mexD_CMP.cu"
cudaMalloc((void **)(&g_Ws), sizeof(float) * Npoints);
# 271 "mexD_CMP.cu"
cudaMalloc((void **)(&g_tmp), sizeof(float) * Npoints);
# 273 "mexD_CMP.cu"
cudaMemcpy(g_Xs, Xs_host, sizeof(float) * Npoints, cudaMemcpyHostToDevice);
# 274 "mexD_CMP.cu"
cudaMemcpy(g_Ws, Ws_host, sizeof(float) * Npoints, cudaMemcpyHostToDevice);
# 276 "mexD_CMP.cu"
cudaMalloc((void **)(&devSignif), (sizeof(float) * Nsigmas) * Nmus);
# 277 "mexD_CMP.cu"
cudaMalloc((void **)(&devK), (sizeof(float) * Nsigmas) * Nmus);
# 280 "mexD_CMP.cu"
reduce_array(g_Ws, Npoints, __null, &tWs, 512);
# 281 "mexD_CMP.cu"
cudaMemcpyToSymbol(cWsum, &tWs, sizeof(float), 0, cudaMemcpyHostToDevice);
# 283 "mexD_CMP.cu"
tWm = (((float)tWs) / Npoints);
# 284 "mexD_CMP.cu"
cudaMemcpyToSymbol(cWmean, &tWm, sizeof(float), 0, cudaMemcpyHostToDevice);
# 286 "mexD_CMP.cu"
cudaConfigureCall(((dim3)(Nblocks)), ((dim3)(512))) ? ((void)0) : arr_minus_scalar_squared(g_tmp, g_Ws, tWm, Npoints);
# 287 "mexD_CMP.cu"
reduce_array(g_tmp, Npoints, __null, &tWv, 512);
# 288 "mexD_CMP.cu"
tWv = (tWv / (Npoints - 1));
# 289 "mexD_CMP.cu"
cudaMemcpyToSymbol(cWvar, &tWv, sizeof(float), 0, cudaMemcpyHostToDevice);
# 299 "mexD_CMP.cu"
for (i = 0; i < Npoints; i += 512)
# 300 "mexD_CMP.cu"
{
# 301 "mexD_CMP.cu"
(dimBlock.x) = (512);
# 302 "mexD_CMP.cu"
(dimGrid.x) = Nmus;
# 303 "mexD_CMP.cu"
(dimGrid.y) = Nsigmas;
# 304 "mexD_CMP.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : compute_mu_sigma(devK, g_Ws, g_Xs, Npoints, i, sigma_start, dsigma);
# 305 "mexD_CMP.cu"
cudaThreadSynchronize();
# 306 "mexD_CMP.cu"
}
# 316 "mexD_CMP.cu"
(dimGrid.y) = (1);
# 317 "mexD_CMP.cu"
(dimGrid.x) = Nmus;
# 318 "mexD_CMP.cu"
(dimBlock.x) = Nsigmas;
# 324 "mexD_CMP.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : stat_check(devK, devSignif, g_Xs, sigma_start, dsigma, M, log(alpha), Npoints);
# 334 "mexD_CMP.cu"
cudaThreadSynchronize();
# 335 "mexD_CMP.cu"
cudaMemcpy(cpuSignif, devSignif, (sizeof(float) * Nmus) * Nsigmas, cudaMemcpyDeviceToHost);
# 336 "mexD_CMP.cu"
cudaMemcpy(cpuK, devK, (sizeof(float) * Nmus) * Nsigmas, cudaMemcpyDeviceToHost);
# 337 "mexD_CMP.cu"
cudaThreadSynchronize();
# 341 "mexD_CMP.cu"
output = ((double *)mxMalloc(((sizeof(double) * Nsigmas) * Nmus) * (4)));
# 343 "mexD_CMP.cu"
nnz = 0;
# 344 "mexD_CMP.cu"
for (i = 0; i < Nmus; i++)
# 345 "mexD_CMP.cu"
{
# 346 "mexD_CMP.cu"
for (j = 0; j < Nsigmas; j++)
# 347 "mexD_CMP.cu"
{
# 348 "mexD_CMP.cu"
if (cpuSignif[(i * Nsigmas) + j])
# 349 "mexD_CMP.cu"
{
# 351 "mexD_CMP.cu"
(output[(nnz * 4) + 0]) = ((double)(Xs_host[i]));
# 352 "mexD_CMP.cu"
(output[(nnz * 4) + 1]) = (((double)sigma_start) + (dsigma * j));
# 353 "mexD_CMP.cu"
(output[(nnz * 4) + 2]) = ((double)(cpuSignif[(i * Nsigmas) + j]));
# 354 "mexD_CMP.cu"
(output[(nnz * 4) + 3]) = ((double)(cpuK[(i * Nsigmas) + j]));
# 355 "mexD_CMP.cu"
nnz++;
# 356 "mexD_CMP.cu"
}
# 357 "mexD_CMP.cu"
}
# 358 "mexD_CMP.cu"
}
# 360 "mexD_CMP.cu"
h_max = ((float *)mxMalloc(sizeof(float) * nnz));
# 361 "mexD_CMP.cu"
h_Mus = ((float *)mxMalloc(sizeof(float) * nnz));
# 362 "mexD_CMP.cu"
h_Sigmas = ((float *)mxMalloc(sizeof(float) * nnz));
# 363 "mexD_CMP.cu"
cudaMalloc((void **)(&g_max), sizeof(float) * nnz);
# 364 "mexD_CMP.cu"
cudaMalloc((void **)(&g_Mus), sizeof(float) * nnz);
# 365 "mexD_CMP.cu"
cudaMalloc((void **)(&g_Sigmas), sizeof(float) * nnz);
# 366 "mexD_CMP.cu"
for (i = 0; i < nnz; i++)
# 367 "mexD_CMP.cu"
{
# 368 "mexD_CMP.cu"
(h_max[i]) = (0);
# 369 "mexD_CMP.cu"
(h_Mus[i]) = (output[(i * 4) + 0]);
# 370 "mexD_CMP.cu"
(h_Sigmas[i]) = (output[(i * 4) + 1]);
# 371 "mexD_CMP.cu"
}
# 372 "mexD_CMP.cu"
cudaMemcpy(g_max, h_max, sizeof(float) * nnz, cudaMemcpyHostToDevice);
# 373 "mexD_CMP.cu"
cudaMemcpy(g_Mus, h_Mus, sizeof(float) * nnz, cudaMemcpyHostToDevice);
# 374 "mexD_CMP.cu"
cudaMemcpy(g_Sigmas, h_Sigmas, sizeof(float) * nnz, cudaMemcpyHostToDevice);
# 382 "mexD_CMP.cu"
for (i = 0; i < Npoints; i += 512)
# 383 "mexD_CMP.cu"
{
# 384 "mexD_CMP.cu"
(dimBlock.x) = (512);
# 385 "mexD_CMP.cu"
(dimBlock.y) = (1);
# 386 "mexD_CMP.cu"
(dimGrid.x) = nnz;
# 387 "mexD_CMP.cu"
(dimGrid.y) = (1);
# 388 "mexD_CMP.cu"
cudaThreadSynchronize();
# 389 "mexD_CMP.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : compute_max_mu_sigma(g_max, g_Mus, g_Ws, g_Xs, g_Sigmas, Npoints, i);
# 390 "mexD_CMP.cu"
cudaThreadSynchronize();
# 391 "mexD_CMP.cu"
}
# 401 "mexD_CMP.cu"
cudaMemcpy(h_max, g_max, sizeof(float) * nnz, cudaMemcpyDeviceToHost);
# 403 "mexD_CMP.cu"
output_t = ((double *)mxMalloc((sizeof(double) * nnz) * (4)));
# 404 "mexD_CMP.cu"
isig = 0;
# 413 "mexD_CMP.cu"
for (i = 0; i < nnz; i++)
# 414 "mexD_CMP.cu"
{
# 417 "mexD_CMP.cu"
if (((output[(i * 4) + 3]) / (h_max[i])) > kN)
# 418 "mexD_CMP.cu"
{
# 419 "mexD_CMP.cu"
(output_t[(isig * 4) + 0]) = (output[(i * 4) + 0]);
# 420 "mexD_CMP.cu"
(output_t[(isig * 4) + 1]) = (output[(i * 4) + 1]);
# 421 "mexD_CMP.cu"
(output_t[(isig * 4) + 2]) = (output[(i * 4) + 2]);
# 422 "mexD_CMP.cu"
(output_t[(isig * 4) + 3]) = (output[(i * 4) + 3]);
# 423 "mexD_CMP.cu"
isig++;
# 424 "mexD_CMP.cu"
}
# 425 "mexD_CMP.cu"
}
# 431 "mexD_CMP.cu"
(plhs[0]) = mxCreateDoubleMatrix(isig, 4, mxREAL);
# 432 "mexD_CMP.cu"
output_ml = mxGetPr(plhs[0]);
# 433 "mexD_CMP.cu"
for (i = 0; i < isig; i++)
# 434 "mexD_CMP.cu"
{
# 435 "mexD_CMP.cu"
(output_ml[(0 * isig) + i]) = (output_t[(i * 4) + 0]);
# 436 "mexD_CMP.cu"
(output_ml[(1 * isig) + i]) = (output_t[(i * 4) + 1]);
# 437 "mexD_CMP.cu"
(output_ml[(2 * isig) + i]) = (output_t[(i * 4) + 2]);
# 438 "mexD_CMP.cu"
(output_ml[(3 * isig) + i]) = (output_t[(i * 4) + 3]);
# 439 "mexD_CMP.cu"
}
# 444 "mexD_CMP.cu"
cudaFree(devSignif);
# 445 "mexD_CMP.cu"
cudaFree(devK);
# 446 "mexD_CMP.cu"
cudaFree(g_Ws);
# 447 "mexD_CMP.cu"
cudaFree(g_Xs);
# 448 "mexD_CMP.cu"
cudaFree(g_tmp);
# 449 "mexD_CMP.cu"
cudaFree(g_max);
# 450 "mexD_CMP.cu"
cudaFree(g_Mus);
# 451 "mexD_CMP.cu"
cudaFree(g_Sigmas);
# 452 "mexD_CMP.cu"
mxFree(h_Sigmas);
# 453 "mexD_CMP.cu"
mxFree(h_Mus);
# 454 "mexD_CMP.cu"
mxFree(h_max);
# 455 "mexD_CMP.cu"
mxFree(cpuK);
# 456 "mexD_CMP.cu"
mxFree(cpuSignif);
# 457 "mexD_CMP.cu"
mxFree(output);
# 458 "mexD_CMP.cu"
mxFree(Xs_host);
# 459 "mexD_CMP.cu"
mxFree(Ws_host);
# 460 "mexD_CMP.cu"
mxFree(output_t);
# 479 "mexD_CMP.cu"
}
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c"
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c" 1
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
# 2 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_00000ea8_00000000-3_mexD_CMP.fatbin.c" 1
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
# 2 "/tmp/tmpxft_00000ea8_00000000-3_mexD_CMP.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_10$:\n"
".quad 0x33010102464c457f,0x0000000000000002,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000001b9c,0x0000000000000040,0x00380040000a010a,0x000100170040000c\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000600\n"
".quad 0x0000000000000301,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000901\n"
".quad 0x00000000000000a5,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000009a6\n"
".quad 0x0000000000000318,0x0000001900000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x0000000100000174,0x0000000000100006,0x0000000000000000,0x0000000000000cbe\n"
".quad 0x0000000000000108,0x0400000e00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000018a,0x0000000000000002,0x0000000000000000,0x0000000000000dc6\n"
".quad 0x0000000000000050,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000247,0x0000000000000003,0x0000000000000000,0x0000000000000e16\n"
".quad 0x0000000000000824,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000011f,0x0000000000000006,0x0000000000000000,0x0000000000000e16\n"
".quad 0x0000000000000060,0x0300000c00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000148,0x0000000000000002,0x0000000000000000,0x0000000000000e76\n"
".quad 0x0000000000000064,0x0000000700000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000262,0x0000000000000003,0x0000000000000000,0x0000000000000eda\n"
".quad 0x0000000000000028,0x0000000700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000d2,0x0000000000100006,0x0000000000000000,0x0000000000000eda\n"
".quad 0x00000000000002b8,0x0600000a00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000021a,0x0000000000000002,0x0000000000000000,0x0000000000001192\n"
".quad 0x000000000000001c,0x0000000a00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000f7,0x0000000000000002,0x0000000000000000,0x00000000000011ae\n"
".quad 0x00000000000000a0,0x0000000a00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000008000001f0,0x0000000000000003,0x0000000000000000,0x000000000000124e\n"
".quad 0x0000000000000838,0x0000000a00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000079,0x0000000000100006,0x0000000000000000,0x000000000000124e\n"
".quad 0x0000000000000440,0x0b00000800000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000002c0,0x0000000000000002,0x0000000000000000,0x000000000000168e\n"
".quad 0x0000000000000040,0x0000000e00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000a4,0x0000000000000002,0x0000000000000000,0x00000000000016ce\n"
".quad 0x00000000000000a0,0x0000000e00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000290,0x0000000000000003,0x0000000000000000,0x000000000000176e\n"
".quad 0x0000000000000840,0x0000000e00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x000000000000176e\n"
".quad 0x0000000000000340,0x0a00000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001c8,0x0000000000000002,0x0000000000000000,0x0000000000001aae\n"
".quad 0x000000000000002c,0x0000001200000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000056,0x0000000000000002,0x0000000000000000,0x0000000000001ada\n"
".quad 0x00000000000000b4,0x0000001200000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000008000001a3,0x0000000000000003,0x0000000000000000,0x0000000000001b8e\n"
".quad 0x000000000000003c,0x0000001200000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000002f3,0x0000000000000002,0x0000000000000000,0x0000000000001b8e\n"
".quad 0x000000000000000c,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x30315a5f2e747865\n"
".quad 0x6568635f74617473,0x5f535f5366506b63,0x6e2e006966666666,0x5f2e6f666e692e76\n"
".quad 0x5f7461747330315a,0x5366506b63656863,0x69666666665f535f,0x5f2e747865742e00\n"
".quad 0x75706d6f6330325a,0x6d5f78616d5f6574,0x50616d6769735f75,0x535f535f535f5366\n"
".quad 0x2e766e2e0069695f,0x325a5f2e6f666e69,0x657475706d6f6330,0x5f756d5f78616d5f\n"
".quad 0x536650616d676973,0x695f535f535f535f,0x2e747865742e0069,0x706d6f6336315a5f\n"
".quad 0x735f756d5f657475,0x5f536650616d6769,0x2e00666669695f53,0x2e6f666e692e766e\n"
".quad 0x706d6f6336315a5f,0x735f756d5f657475,0x5f536650616d6769,0x2e00666669695f53\n"
".quad 0x325a5f2e74786574,0x6e696d5f72726134,0x616c6163735f7375,0x6572617571735f72\n"
".quad 0x0069665f53665064,0x6f666e692e766e2e,0x72726134325a5f2e,0x735f73756e696d5f\n"
".quad 0x71735f72616c6163,0x5366506465726175,0x7865742e0069665f,0x646572375a5f2e74\n"
".quad 0x5f53665035656375,0x6e692e766e2e0069,0x6572375a5f2e6f66,0x5366503565637564\n"
".quad 0x732e766e2e00695f,0x5a5f2e6465726168,0x635f746174733031,0x5f5366506b636568\n"
".quad 0x0069666666665f53,0x736e6f632e766e2e,0x5a5f2e31746e6174,0x635f746174733031\n"
".quad 0x5f5366506b636568,0x0069666666665f53,0x726168732e766e2e,0x6336315a5f2e6465\n"
".quad 0x6d5f657475706d6f,0x50616d6769735f75,0x6669695f535f5366,0x6f632e766e2e0066\n"
".quad 0x2e31746e6174736e,0x706d6f6336315a5f,0x735f756d5f657475,0x5f536650616d6769\n"
".quad 0x2e00666669695f53,0x65726168732e766e,0x646572375a5f2e64,0x5f53665035656375\n"
".quad 0x68732e766e2e0069,0x325a5f2e64657261,0x6e696d5f72726134,0x616c6163735f7375\n"
".quad 0x6572617571735f72,0x0069665f53665064,0x726168732e766e2e,0x6330325a5f2e6465\n"
".quad 0x6d5f657475706d6f,0x69735f756d5f7861,0x535f536650616d67,0x0069695f535f535f\n"
".quad 0x736e6f632e766e2e,0x5a5f2e31746e6174,0x7475706d6f633032,0x756d5f78616d5f65\n"
".quad 0x6650616d6769735f,0x5f535f535f535f53,0x632e766e2e006969,0x30746e6174736e6f\n"
".quad 0x747330315a5f0000,0x6b636568635f7461,0x66665f535f536650,0x30325a5f00696666\n"
".quad 0x5f657475706d6f63,0x735f756d5f78616d,0x5f536650616d6769,0x69695f535f535f53\n"
".quad 0x6d6f6336315a5f00,0x5f756d5f65747570,0x536650616d676973,0x00666669695f535f\n"
".quad 0x5f72726134325a5f,0x63735f73756e696d,0x7571735f72616c61,0x5f53665064657261\n"
".quad 0x6572375a5f006966,0x5366503565637564,0x61656d576300695f,0x006d75735763006e\n"
".quad 0x0000007261765763,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000100030000,0x0000000000000000,0x0000000000000000,0x0000000200030000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000030000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000030000,0x0000000000000000,0x0000000000000000,0x0000001200030000\n"
".quad 0x0340000000000000,0x0000000000000000,0x0000001400030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000e00030000,0x0440000000000000,0x0000000000000000\n"
".quad 0x0000001000030000,0x0000000000000000,0x0000000000000000,0x0000000a00030000\n"
".quad 0x02b8000000000000,0x0000000000000000,0x0000000c00030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000700030000,0x0060000000000000,0x0000000000000000\n"
".quad 0x0000000800030000,0x0000000000000000,0x0000000000000000,0x0000000400030000\n"
".quad 0x0108000000000000,0x0000000000000000,0x0000000500030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000001500030000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000001300030000,0x0000000000000000,0x0000000000000000,0x0000000d00030000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000b00030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000600030000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000900030000,0x0000000000000000,0x0000000000000000,0x0000001100030000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000f00030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000001600030000,0x0000000000000000,0x0001000000000000\n"
".quad 0x0000001210120000,0x0000000000000000,0x001b000000000000,0x0000000e10120000\n"
".quad 0x0000000000000000,0x0040000000000000,0x0000000a10120000,0x0000000000000000\n"
".quad 0x005f000000000000,0x0000000710120000,0x0000000000000000,0x0082000000000000\n"
".quad 0x0000000410120000,0x0000000000000000,0x0092000000000000,0x0004001600110000\n"
".quad 0x0004000000000000,0x0099000000000000,0x0000001600110000,0x0004000000000000\n"
".quad 0x009f000000000000,0x0008001600110000,0x0004000000000000,0x4209000000000000\n"
".quad 0x4c0504200780a000,0x000d04200780a000,0x040004000780a000,0xd1fd200086004004\n"
".quad 0x00016c20c7c83000,0xc801c41005003002,0x0605042005002000,0x0001c00005000002\n"
".quad 0x120180c00500d00e,0x0605e42005000400,0x1201c00002800002,0xfe03e43f02800400\n"
".quad 0x040900000000861f,0x05fde41007803001,0xc0036c00c7c8307c,0xc00300000000a001\n"
".quad 0x05fd000002801001,0x06016c00c7c83003,0x0009040085002000,0x0605c00005000002\n"
".quad 0xd201c00005000002,0xd2010423c5001800,0x120100200500b400,0xfe03e42005000400\n"
".quad 0x040900000000861f,0x05fdec1007803001,0x10036c0107c8307c,0x07fd000002801001\n"
".quad 0x00036c0147ca307c,0x0205000002803000,0xf200c41007803002,0x02012101ec041100\n"
".quad 0x0b04a0c00781d00e,0x000800000000000c,0x1803000000100000,0xffff000c17040014\n"
".quad 0xf00000100002ffff,0xffff000c17040013,0xf00000080001ffff,0xffff000c17040023\n"
".quad 0xf00000000000ffff,0x010800080d040023,0x4205000000200021,0x00050023c7801000\n"
".quad 0x4c0104000780a000,0xd3fd002047806001,0x00036c20c7c83000,0x0001000002803000\n"
".quad 0xec08c41007803002,0x04012100e8042100,0xd00180c00780d00e,0x020104200780b000\n"
".quad 0x0001a0c00780d00e,0x020100000780c000,0x0b04a0c00781d00e,0x0008000000000010\n"
".quad 0x0014000000100000,0x1704001818030000,0x0003ffffffff000c,0x17040013f0000014\n"
".quad 0x0002ffffffff000c,0x17040013f0000010,0x0001ffffffff000c,0x17040023f0000008\n"
".quad 0x0000ffffffff000c,0x0d040023f0000000,0x0001000100080008,0x0780a00000090000\n"
".quad 0x87802000d6010400,0xc7c83000d5fd0420,0x0000a002e0036c20,0x02801002c0030000\n"
".quad 0x0780a0004c050000,0x07803002000d0420,0x078030020205c410,0xf0102103f000c410\n"
".quad 0x0780d00e00052101,0x0780d00e080180c0,0x0780b000020580c0,0x0000861ffe030800\n"
".quad 0x0780a0004e110000,0xc7801000d8010420,0x4780a00008110423,0x0780e004da014401\n"
".quad 0x0810b00000100020,0x0780c0010201c000,0x07c8b08009fd0000,0x4780a00000016051\n"
".quad 0x0680c0860001e400,0x0680c08608110040,0x0000900008040040,0x8aa3c03b0005c001\n"
".quad 0x4780a000021103fb,0x0780e0810805cc06,0xfbebe00e08050040,0x8aa3c03b02150b5b\n"
".quad 0x4780b000080503fb,0x4780b0000a11c000,0x078090000205c000,0x078090000811c000\n"
".quad 0x0780c0040205c000,0x47c8b08301fd0000,0x07d8b08401fd6040,0xc2801000f8056041\n"
".quad 0xc7802000cc010403,0xd28010000a050420,0x0780d00e00012440,0x0780c000020180c0\n"
".quad 0x0780000204050000,0x078004001c01c000,0x07801002e003e420,0x0780000204050000\n"
".quad 0x078004001c01c000,0x0002f0000001e43f,0x0000861ffe03e000,0x0013100080050000\n"
".quad 0xc7c8300203fd0000,0x4500200004016c00,0x0500000200090400,0x050000020405c000\n"
".quad 0xc5001800dc01c000,0x0500b400dc010423,0x050004001c010020,0x0000861ffe03e420\n"
".quad 0x0780300102050000,0x07c8307c03fdec10,0x0280100310036c01,0x47c8307c05fd0000\n"
".quad 0x0280300000036c01,0x0780a0004e090000,0xc7801000d8010420,0x4780a000040d0423\n"
".quad 0xc78010004a094401,0x0780e003da0d0023,0x078040024c010020,0x4780a00006050020\n"
".quad 0x078020000401c400,0x06cbc01902090400,0x0780300200050402,0x07c8b08005fdc410\n"
".quad 0xe8041100fc006051,0x0680c08600012101,0x0680c08604090040,0x0780900004090040\n"
".quad 0x47c8307cd7fd0000,0x0780c00200016c21,0x0280100520030000,0x0780d00e02010000\n"
".quad 0x078030000003a0c0,0x4780a00000090000,0x0780d00e0201c400,0x4780a000000180c0\n"
".quad 0x8780b0000001c400,0x0781d00e02010000,0x72007e800000a0c0,0x0000b5bfbe8ebf31\n"
".quad 0x000042d20000c2d2,0x0b043e8000007f80,0x000800000000001c,0x0018000000100000\n"
".quad 0x00200000001c0000,0x1803000000240000,0xffff000c17040028,0xf00000240006ffff\n"
".quad 0xffff000c17040013,0xf00000200005ffff,0xffff000c17040013,0xf000001c0004ffff\n"
".quad 0xffff000c17040013,0xf00000180003ffff,0xffff000c17040013,0xf00000100002ffff\n"
".quad 0xffff000c17040023,0xf00000080001ffff,0xffff000c17040023,0xf00000000000ffff\n"
".quad 0x010000080d040023,0x4c05000000200020,0x001104200780a000,0x020504000780a000\n"
".quad 0xfe00c41007803002,0x04092101f8082104,0xcc0d80c00780d00e,0x060d042047802000\n"
".quad 0x900380c00780d00e,0xddfd00000000a003,0x60036c20c7c83000,0x0001000002801003\n"
".quad 0xd415c41007803002,0x0a15042007802000,0xfe0380c00780d00e,0xd00100000000861f\n"
".quad 0x0019042007802000,0x0dfd80c00780d00e,0x0dfd600107c8b07c,0xb003604042c8b080\n"
".quad 0x900300000000a002,0x0c01000001001002,0x000104400780d081,0x0c1904404780d082\n"
".quad 0x01fde41007803017,0x8c19604107c8b083,0x00010ffffffb2001,0x0c1900400680c08c\n"
".quad 0x0021044346802100,0x001d03f80003b000,0x10000bf80003b000,0x0e21c0000e249000\n"
".quad 0x80010401c780e009,0x102903c4c4bf1020,0x140100000780c008,0x140103b2063fe003\n"
".quad 0x140000414780e100,0x1001c0090e24c000,0x0e0108024780e000,0x0c1900000780b000\n"
".quad 0x0c0144014780a000,0xb00303f31723e018,0x0c01000007801002,0x0001600007809000\n"
".quad 0x041903f31723c018,0x041800008782b000,0x0dfdb0430a0cc006,0x060d605107c8b087\n"
".quad 0x060d00000780c003,0x0c1900400680c08e,0x0c1500400680c08e,0x0601000007809000\n"
".quad 0x080504000780e005,0x2001c00007800002,0x9003e42007800400,0x0805000007801003\n"
".quad 0x8001c00007800002,0x20010c61c4031000,0x0001e42007800400,0xfe03e0000002f000\n"
".quad 0x800d00000000861f,0x07fd000000131000,0x08016c00c7c83004,0x00090400c5002000\n"
".quad 0x0805c00005000002,0xe001c00005000002,0xe0010423c5001800,0x200180200500b400\n"
".quad 0xfe03e42005000400,0x060d00000000861f,0x07fdec1007803001,0xc0036c0107c8307c\n"
".quad 0x09fd000002801003,0x00036c0147c8307c,0xe00d000002803000,0xe00100600780c08f\n"
".quad 0x060d0423c7801000,0x0601cc064780a000,0xdffd0bf31723e000,0xe1fd6c2147e8307c\n"
".quad 0x0415606107c8b088,0x0609c4004780a000,0xc81100400780e08b,0xe1fd042047802000\n"
".quad 0x0a01606047d8b089,0x0415040206cbc019,0x400303fb8aa3c03b,0x0a09000022801006\n"
".quad 0x0605c0004780b000,0x0409c0004780b000,0x0205c00007809000,0x0205c00007809000\n"
".quad 0xf80500000780c002,0x01fd0403d2801000,0x0005605107d8b087,0x02052440c2801000\n"
".quad 0x000100401680c08e,0x000000401680c08e,0x0001c00002009000,0x0801c4004780a000\n"
".quad 0x0003a0c00780d00e,0x0805000007803000,0x020980c00780d00e,0x041903fb8aa3c03b\n"
".quad 0x0c09cc064780a000,0x0c0900404780e08a,0x041d0b5bfbebe00e,0x0c0903fb8aa3c03b\n"
".quad 0x0e19c0004780b000,0x0409c0004780b000,0x0c19c00007809000,0x0419c00007809000\n"
".quad 0x03fd00000780c006,0x0009604047f8b089,0x03fd0403c7801000,0xf819604107e8b088\n"
".quad 0x01fd0403f2801000,0x0019605107f8b087,0x0c192440e2801000,0x040900403680c08e\n"
".quad 0x060500403680c08e,0x0a15c0004780b000,0x020dc0004780b000,0x0a15c00007809000\n"
".quad 0x0404c00007809000,0x0c05c00506089000,0xf80900000780c001,0x01fd0403d2801000\n"
".quad 0x0205605107d8b087,0x0009c4004780a000,0x04092440c2801000,0x000100401680c08e\n"
".quad 0x000000401680c08e,0x0001c00004009000,0x03fdc4004780a000,0x0005600047c8b000\n"
".quad 0x08050403c2801000,0x0000a0c00781d00e,0x0000807fffff7f80,0x63c33fb504f33f80\n"
".quad 0x72183daaab503b20,0x00007e8000003f31,0x7200c2d2000042d2,0x0000b5bfbe8ebf31\n"
".quad 0x0000000000013f00,0x0b043fb8aa3b3e80,0x000800000000001c,0x0018000000100000\n"
".quad 0x0028000000200000,0x18030000002c0000,0xffff000c17040030,0xf000002c0006ffff\n"
".quad 0xffff000c17040013,0xf00000280005ffff,0xffff000c17040013,0xf00000200004ffff\n"
".quad 0xffff000c17040023,0xf00000180003ffff,0xffff000c17040023,0xf00000100002ffff\n"
".quad 0xffff000c17040023,0xf00000080001ffff,0xffff000c17040023,0xf00000000000ffff\n"
".quad 0x010000080d040023,0x4c05000000200020,0x420904200780a000,0x080d04200780a000\n"
".quad 0x0a0d000007804003,0x060d0000c7806002,0x080dc41007803010,0x00090000c7806002\n"
".quad 0x060104000780a000,0x0205040087802000,0x0011c41007803002,0xd001c41007803002\n"
".quad 0x000d042047802000,0xd9fd80c00780d00e,0xc801607107c8b080,0x0015042107802000\n"
".quad 0xd80180c00780d00e,0x060d0423c7801000,0xd80100400680c088,0x040900600680c088\n"
".quad 0xd40544014780a000,0xd8190423c7801000,0xd609c4204780a000,0x000400204780e002\n"
".quad 0x0c1d1100f8009000,0x040903fe2dffc005,0x0619c4004780a000,0x780404404780e101\n"
".quad 0x0c0dc0070420c100,0x03fd04080003c000,0x0201605107c8b080,0x0c1d0403c7801000\n"
".quad 0x8608c4004780a000,0x060d900010201000,0x020500400680c088,0x020400400680c088\n"
".quad 0x0205c00106049000,0x1005c4004780a000,0x020d08004780b000,0x0e042400c7801000\n"
".quad 0x0c0dc081061cc001,0x01fd00000780c002,0xdc09605107c8b080,0x021d44214780a000\n"
".quad 0x060d00000780c007,0x000100400680c088,0x000000400680c088,0x0001c00006009000\n"
".quad 0x02010001c780e082,0x040100000780e082,0x000100000780c000,0x0009400007809000\n"
".quad 0x0401000007809000,0x0005c4004780a000,0x03fd040206cbc019,0x03fd600107c8b07c\n"
".quad 0x0003604042c8b082,0xe00300000000a005,0x0201000001001004,0x000104400780d083\n"
".quad 0x020504404780d081,0x01fde41007803017,0x8205604107c8b084,0x00010ffffffb2001\n"
".quad 0x020500400680c089,0x001d044286802100,0x000d03f80003b000,0x0e000bf80003b000\n"
".quad 0x061dc00006209000,0x80010400c780e008,0x0e2503c4c4bf1020,0x120100000780c007\n"
".quad 0x120103b2063fe003,0x120000418780e100,0x0e01c0080620c000,0x060108020780e000\n"
".quad 0x020500000780b000,0x020144014780a000,0x000303f31723e018,0x0201000007801005\n"
".quad 0x0001600007809000,0xd9fd03f31723c018,0x0c0c607107cab080,0x060d1100f804b006\n"
".quad 0xd80500400680c088,0x020400600680c088,0x040cc00106049000,0x040cc0800204b002\n"
".quad 0x07fdb0058208c003,0x0001605107c8b080,0x0409c4004780a000,0x040900000780c002\n"
".quad 0x060d00400680c088,0x060c00400680c088,0x0409c00304089000,0x0001c4004780a000\n"
".quad 0x000100008780b000,0xfe03e4004780a000,0x03fd00000000861f,0xf805600047c8b005\n"
".quad 0xdbfd0403c7801000,0x0005602107d8b000,0xcc010403c2801000,0xf805042107802000\n"
".quad 0x00050403d5001000,0x0000a0c00781d00e,0x00003f8000007e80,0x04f3807fffff7f80\n"
".quad 0xab503b2063c33fb5,0x00003f3172183daa,0x00013f0000003e80,0x000000200b040000\n"
".quad 0x0010000000080000,0x001c000000180000,0x0024000000200000,0x1803000000280000\n"
".quad 0xffff000c1704002c,0xf00000280007ffff,0xffff000c17040013,0xf00000240006ffff\n"
".quad 0xffff000c17040013,0xf00000200005ffff,0xffff000c17040013,0xf000001c0004ffff\n"
".quad 0xffff000c17040013,0xf00000180003ffff,0xffff000c17040013,0xf00000100002ffff\n"
".quad 0xffff000c17040023,0xf00000080001ffff,0xffff000c17040023,0xf00000000000ffff\n"
".quad 0x001800080d040023,0x0000000000020003,0x0000000000000000,0x0000000600000000\n"
".quad 0x00001b9c00000005,0x0000000000000000,0x0000000000000000,0x000002a000000000\n"
".quad 0x000002a000000000,0x0000000400000000,0x6000000000000000,0x00000cbe00001d05\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000015800000000,0x0000015800000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x00000e1600001d06,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000082400000000,0x0000000400000000\n"
".quad 0x6000000000000000,0x00000e1600001c05,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000c400000000,0x000000c400000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x00000eda00001c06,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000002800000000,0x0000000400000000,0x6000000000000000,0x00000eda00001b05\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000037400000000,0x0000037400000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x0000124e00001b06,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000083800000000,0x0000000400000000\n"
".quad 0x6000000000000000,0x0000124e00001a05,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000052000000000,0x0000052000000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x0000176e00001a06,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000084000000000,0x0000000400000000,0x6000000000000000,0x0000176e00001905\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000042000000000,0x0000042000000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x00001b8e00001906,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000003c00000000,0x0000000400000000\n"
".quad 0x0000000100000000,0x00001b8e00000005,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000c00000000,0x0000000c00000000,0x0000000400000000,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_10$[968];

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
".quad 0x696c69706d6f4320,0x2f706d742f20676e,0x305f746678706d74,0x5f38616530303030\n"
".quad 0x3030303030303030,0x5f4478656d5f372d,0x337070632e504d43,0x706d742f2820692e\n"
".quad 0x6d2e23494263632f,0x090a297939785862,0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x090a0a2d2d2d2d2d,0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2f090a2d2d2d2d2d,0x6e6f6974704f202f,0x2d2d2f2f090a3a73\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x5420202f2f090a2d\n"
".quad 0x74703a7465677261,0x733a415349202c78,0x6e45202c30315f6d,0x74696c3a6e616964\n"
".quad 0x696f50202c656c74,0x7a6953207265746e,0x2f2f090a34363a65,0x4f2809334f2d2020\n"
".quad 0x74617a696d697470,0x6576656c206e6f69,0x20202f2f090a296c,0x626544280930672d\n"
".quad 0x6c6576656c206775,0x2d20202f2f090a29,0x6f7065522809326d,0x7369766461207472\n"
".quad 0x090a29736569726f,0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x090a0a2d2d2d2d2d,0x093109656c69662e,0x6e616d6d6f633c22,0x223e656e696c2d64\n"
".quad 0x09656c69662e090a,0x2f706d742f220932,0x305f746678706d74,0x5f38616530303030\n"
".quad 0x3030303030303030,0x5f4478656d5f362d,0x616475632e504d43,0x227570672e326566\n"
".quad 0x09656c69662e090a,0x2f7273752f220933,0x2f6363672f62696c,0x6c2d34365f363878\n"
".quad 0x756e672d78756e69,0x692f352e342e342f,0x732f6564756c636e,0x22682e6665646474\n"
".quad 0x09656c69662e090a,0x2f74706f2f220934,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x2f7472632f656475,0x725f656369766564,0x682e656d69746e75,0x656c69662e090a22\n"
".quad 0x74706f2f22093509,0x69622f616475632f,0x636e692f2e2e2f6e,0x736f682f6564756c\n"
".quad 0x656e696665645f74,0x662e090a22682e73,0x2f22093609656c69,0x616475632f74706f\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x5f6e69746c697562,0x22682e7365707974\n"
".quad 0x09656c69662e090a,0x2f74706f2f220937,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x697665642f656475,0x73657079745f6563,0x69662e090a22682e,0x6f2f22093809656c\n"
".quad 0x2f616475632f7470,0x692f2e2e2f6e6962,0x642f6564756c636e,0x79745f7265766972\n"
".quad 0x090a22682e736570,0x093909656c69662e,0x75632f74706f2f22,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x6361667275732f65,0x2e73657079745f65,0x6c69662e090a2268\n"
".quad 0x6f2f220930310965,0x2f616475632f7470,0x692f2e2e2f6e6962,0x742f6564756c636e\n"
".quad 0x745f657275747865,0x0a22682e73657079,0x3109656c69662e09,0x2f74706f2f220931\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x746365762f656475,0x73657079745f726f\n"
".quad 0x69662e090a22682e,0x2f2209323109656c,0x616475632f74706f,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x6c5f656369766564,0x61705f68636e7561,0x73726574656d6172\n"
".quad 0x69662e090a22682e,0x2f2209333109656c,0x616475632f74706f,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x726f74732f747263,0x73616c635f656761,0x662e090a22682e73\n"
".quad 0x2209343109656c69,0x636e692f7273752f,0x7469622f6564756c,0x2e73657079742f73\n"
".quad 0x6c69662e090a2268,0x752f220935310965,0x756c636e692f7273,0x2e656d69742f6564\n"
".quad 0x6c69662e090a2268,0x656d220936310965,0x632e504d435f4478,0x6c69662e090a2275\n"
".quad 0x6f2f220937310965,0x2f616475632f7470,0x692f2e2e2f6e6962,0x632f6564756c636e\n"
".quad 0x75665f6e6f6d6d6f,0x2e736e6f6974636e,0x6c69662e090a2268,0x6f2f220938310965\n"
".quad 0x2f616475632f7470,0x692f2e2e2f6e6962,0x6d2f6564756c636e,0x636e75665f687461\n"
".quad 0x22682e736e6f6974,0x09656c69662e090a,0x74706f2f22093931,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x74616d2f6564756c,0x6174736e6f635f68,0x090a22682e73746e\n"
".quad 0x303209656c69662e,0x632f74706f2f2209,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x63697665642f6564,0x6974636e75665f65,0x090a22682e736e6f,0x313209656c69662e\n"
".quad 0x632f74706f2f2209,0x2f6e69622f616475,0x756c636e692f2e2e,0x31315f6d732f6564\n"
".quad 0x5f63696d6f74615f,0x6e6f6974636e7566,0x662e090a22682e73,0x2209323209656c69\n"
".quad 0x6475632f74706f2f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x615f32315f6d732f\n"
".quad 0x75665f63696d6f74,0x2e736e6f6974636e,0x6c69662e090a2268,0x6f2f220933320965\n"
".quad 0x2f616475632f7470,0x692f2e2e2f6e6962,0x732f6564756c636e,0x756f645f33315f6d\n"
".quad 0x636e75665f656c62,0x22682e736e6f6974,0x09656c69662e090a,0x74706f2f22093432\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x5f6d732f6564756c,0x696d6f74615f3032\n"
".quad 0x6974636e75665f63,0x090a22682e736e6f,0x353209656c69662e,0x632f74706f2f2209\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x30325f6d732f6564,0x736e6972746e695f\n"
".quad 0x090a22682e736369,0x363209656c69662e,0x632f74706f2f2209,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x61667275732f6564,0x74636e75665f6563,0x0a22682e736e6f69\n"
".quad 0x3209656c69662e09,0x2f74706f2f220937,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x747865742f656475,0x637465665f657275,0x6974636e75665f68,0x090a22682e736e6f\n"
".quad 0x383209656c69662e,0x632f74706f2f2209,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x5f6874616d2f6564,0x6e6f6974636e7566,0x74705f6c62645f73,0x0a0a0a22682e3178\n"
".quad 0x207972746e652e09,0x6375646572375a5f,0x20695f5366503565,0x7261702e09090a28\n"
".quad 0x203436752e206d61,0x6170616475635f5f,0x6572375a5f5f6d72,0x5366503565637564\n"
".quad 0x7461446e695f695f,0x61702e09090a2c61,0x3436752e206d6172,0x70616475635f5f20\n"
".quad 0x72375a5f5f6d7261,0x6650356563756465,0x4474756f5f695f53,0x2e09090a2c617461\n"
".quad 0x732e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x3565637564657237\n"
".quad 0x296e5f695f536650,0x65722e090a7b090a,0x25203233752e2067,0x090a3b3e34313c72\n"
".quad 0x36752e206765722e,0x37313c6472252034,0x6765722e090a3b3e,0x6625203233662e20\n"
".quad 0x722e090a3b3e383c,0x646572702e206765,0x0a3b3e373c702520,0x6465726168732e09\n"
".quad 0x206e67696c612e20,0x5f5f2038622e2034,0x635f5f5f61647563,0x61636f6c5f616475\n"
".quad 0x33335f7261765f6c,0x6e5f32335f303139,0x74736e6f635f6e6f,0x5b3032617461645f\n"
".quad 0x090a3b5d38343032,0x09363109636f6c2e,0x444c240a30093231,0x5f5f6e6967656257\n"
".quad 0x656375646572375a,0x0a3a695f53665035,0x3436752e766f6d09,0x202c316472250920\n"
".quad 0x5f5f616475635f5f,0x6f6c5f616475635f,0x5f7261765f6c6163,0x32335f3031393333\n"
".quad 0x6e6f635f6e6f6e5f,0x32617461645f7473,0x2e747663090a3b30,0x203631752e323375\n"
".quad 0x6e25202c31722509,0x090a3b782e646974,0x2e3233752e747663,0x3272250920363175\n"
".quad 0x646961746325202c,0x747663090a3b782e,0x3631752e3233732e,0x25202c3372250920\n"
".quad 0x090a3b782e646974,0x752e6f6c2e6c756d,0x2c34722509203233,0x7225202c31722520\n"
".quad 0x2e646461090a3b32,0x3572250920323375,0x25202c337225202c,0x747663090a3b3472\n"
".quad 0x3233732e3436732e,0x202c326472250920,0x756d090a3b337225,0x732e656469772e6c\n"
".quad 0x3364722509203233,0x34202c337225202c,0x752e646461090a3b,0x3464722509203436\n"
".quad 0x202c31647225202c,0x6c090a3b33647225,0x2e6d617261702e64,0x3672250920323373\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x3565637564657237,0x5d6e5f695f536650\n"
".quad 0x2e70746573090a3b,0x09203233732e656c,0x367225202c317025,0x090a3b357225202c\n"
".quad 0x6172622031702540,0x5f305f744c240920,0x2e090a3b32343833,0x3109363109636f6c\n"
".quad 0x2e646c090a300939,0x36752e6d61726170,0x2c35647225092034,0x616475635f5f5b20\n"
".quad 0x375a5f5f6d726170,0x5035656375646572,0x446e695f695f5366,0x63090a3b5d617461\n"
".quad 0x732e3436732e7476,0x3664722509203233,0x090a3b357225202c,0x656469772e6c756d\n"
".quad 0x722509203233732e,0x2c357225202c3764,0x646461090a3b3420,0x722509203436752e\n"
".quad 0x35647225202c3864,0x0a3b37647225202c,0x626f6c672e646c09,0x09203233662e6c61\n"
".quad 0x72255b202c316625,0x090a3b5d302b3864,0x65726168732e7473,0x5b09203233662e64\n"
".quad 0x2c5d302b34647225,0x62090a3b31662520,0x0920696e752e6172,0x35335f305f744c24\n"
".quad 0x5f744c240a3b3638,0x0a3a323438335f30,0x363109636f6c2e09,0x6d090a3009313209\n"
".quad 0x09203233662e766f,0x306630202c326625,0x3b30303030303030,0x2f2f092020202020\n"
".quad 0x732e7473090a3020,0x33662e6465726168,0x346472255b092032,0x326625202c5d302b\n"
".quad 0x5f305f744c240a3b,0x2e090a3a36383533,0x3209363109636f6c,0x726162090a300933\n"
".quad 0x300920636e79732e,0x09636f6c2e090a3b,0x0a30093532093631,0x3233752e72687309\n"
".quad 0x25202c3772250920,0x090a3b31202c3172,0x203233732e766f6d,0x7225202c38722509\n"
".quad 0x2e766f6d090a3b37,0x3972250920323375,0x6573090a3b30202c,0x33732e656c2e7074\n"
".quad 0x202c327025092032,0x397225202c377225,0x2032702540090a3b,0x744c240920617262\n"
".quad 0x3b383930345f305f,0x345f305f744c240a,0x2f2f200a3a303136,0x4c203e706f6f6c3c\n"
".quad 0x79646f6220706f6f,0x353220656e696c20,0x6c2e70746573090a,0x2509203233732e65\n"
".quad 0x2c387225202c3370,0x40090a3b33722520,0x2061726220337025,0x345f305f744c2409\n"
".quad 0x2f2f200a3b363638,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x353220656e696c20,0x6c2064616568202c,0x242064656c656261,0x3136345f305f744c\n"
".quad 0x09636f6c2e090a30,0x0a30093832093631,0x726168732e646c09,0x09203233662e6465\n"
".quad 0x72255b202c336625,0x090a3b5d302b3464,0x203233732e646461,0x25202c3031722509\n"
".quad 0x3b337225202c3872,0x36732e747663090a,0x2509203233732e34,0x317225202c396472\n"
".quad 0x2e6c756d090a3b30,0x3233732e65646977,0x2c30316472250920,0x34202c3031722520\n"
".quad 0x752e646461090a3b,0x3164722509203436,0x2c31647225202c31,0x0a3b303164722520\n"
".quad 0x726168732e646c09,0x09203233662e6465,0x72255b202c346625,0x0a3b5d302b313164\n"
".quad 0x3233662e64646109,0x25202c3566250920,0x3b346625202c3366,0x6168732e7473090a\n"
".quad 0x203233662e646572,0x302b346472255b09,0x0a3b356625202c5d,0x38345f305f744c24\n"
".quad 0x3c2f2f200a3a3636,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c353220656e696c,0x616c206461656820,0x4c242064656c6562,0x303136345f305f74\n"
".quad 0x3109636f6c2e090a,0x090a300939320936,0x636e79732e726162,0x6c2e090a3b300920\n"
".quad 0x353209363109636f,0x2e726873090a3009,0x3872250920323373,0x31202c387225202c\n"
".quad 0x752e766f6d090a3b,0x3131722509203233,0x6573090a3b30202c,0x33732e74672e7074\n"
".quad 0x202c347025092032,0x317225202c387225,0x34702540090a3b31,0x4c24092061726220\n"
".quad 0x303136345f305f74,0x5f305f744c240a3b,0x6d090a3a38393034,0x09203233752e766f\n"
".quad 0x3b30202c32317225,0x6e2e70746573090a,0x2509203233732e65,0x2c337225202c3570\n"
".quad 0x090a3b3231722520,0x6172622035702540,0x5f305f744c240920,0x2e090a3b34333635\n"
".quad 0x3309363109636f6c,0x2e646c090a300933,0x662e646572616873,0x2c36662509203233\n"
".quad 0x616475635f5f5b20,0x5f616475635f5f5f,0x61765f6c61636f6c,0x5f30313933335f72\n"
".quad 0x635f6e6f6e5f3233,0x7461645f74736e6f,0x0a3b5d302b303261,0x617261702e646c09\n"
".quad 0x2509203436752e6d,0x5f5b202c32316472,0x726170616475635f,0x646572375a5f5f6d\n"
".quad 0x5f53665035656375,0x74614474756f5f69,0x747663090a3b5d61,0x3233752e3436752e\n"
".quad 0x2c33316472250920,0x6d090a3b32722520,0x2e656469772e6c75,0x6472250920323375\n"
".quad 0x2c327225202c3431,0x646461090a3b3420,0x722509203436752e,0x647225202c353164\n"
".quad 0x31647225202c3231,0x672e7473090a3b34,0x33662e6c61626f6c,0x316472255b092032\n"
".quad 0x6625202c5d302b35,0x305f744c240a3b36,0x090a3a343336355f,0x09363109636f6c2e\n"
".quad 0x7865090a30093433,0x57444c240a3b7469,0x72375a5f5f646e65,0x6650356563756465\n"
".quad 0x207d090a3a695f53,0x6572375a5f202f2f,0x5366503565637564,0x6e652e090a0a695f\n"
".quad 0x34325a5f20797274,0x756e696d5f727261,0x72616c6163735f73,0x646572617571735f\n"
".quad 0x282069665f536650,0x617261702e09090a,0x5f203436752e206d,0x726170616475635f\n"
".quad 0x726134325a5f5f6d,0x5f73756e696d5f72,0x735f72616c616373,0x6650646572617571\n"
".quad 0x7473645f69665f53,0x7261702e09090a2c,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x6134325a5f5f6d72,0x73756e696d5f7272,0x5f72616c6163735f,0x5064657261757173\n"
".quad 0x72735f69665f5366,0x61702e09090a2c63,0x3233662e206d6172,0x70616475635f5f20\n"
".quad 0x34325a5f5f6d7261,0x756e696d5f727261,0x72616c6163735f73,0x646572617571735f\n"
".quad 0x735f69665f536650,0x090a2c72616c6163,0x206d617261702e09,0x635f5f203233732e\n"
".quad 0x5f6d726170616475,0x5f72726134325a5f,0x63735f73756e696d,0x7571735f72616c61\n"
".quad 0x5f53665064657261,0x7b090a294e5f6966,0x2e206765722e090a,0x3c68722520363175\n"
".quad 0x65722e090a3b3e34,0x25203233752e2067,0x2e090a3b3e363c72,0x3436752e20676572\n"
".quad 0x3b3e383c64722520,0x2e206765722e090a,0x363c662520323366,0x6765722e090a3b3e\n"
".quad 0x2520646572702e20,0x2e090a3b3e333c70,0x3609363109636f6c,0x57444c240a300936\n"
".quad 0x5a5f5f6e69676562,0x696d5f7272613432,0x6c6163735f73756e,0x72617571735f7261\n"
".quad 0x69665f5366506465,0x752e766f6d090a3a,0x3168722509203631,0x646961746325202c\n"
".quad 0x766f6d090a3b782e,0x722509203631752e,0x69746e25202c3268,0x756d090a3b782e64\n"
".quad 0x752e656469772e6c,0x2c31722509203631,0x25202c3168722520,0x7663090a3b326872\n"
".quad 0x31752e3233752e74,0x202c327225092036,0x0a3b782e64697425,0x3233752e64646109\n"
".quad 0x25202c3372250920,0x3b317225202c3272,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5f5f5b202c347225,0x6d72617061647563,0x72726134325a5f5f,0x735f73756e696d5f\n"
".quad 0x71735f72616c6163,0x5366506465726175,0x0a3b5d4e5f69665f,0x656c2e7074657309\n"
".quad 0x702509203233732e,0x202c347225202c31,0x2540090a3b337225,0x0920617262203170\n"
".quad 0x30315f315f744c24,0x6f6c2e090a3b3632,0x0931370936310963,0x732e747663090a30\n"
".quad 0x09203233732e3436,0x7225202c31647225,0x2e6c756d090a3b33,0x3233732e65646977\n"
".quad 0x202c326472250920,0x0a3b34202c337225,0x617261702e646c09,0x2509203436752e6d\n"
".quad 0x5f5f5b202c336472,0x6d72617061647563,0x72726134325a5f5f,0x735f73756e696d5f\n"
".quad 0x71735f72616c6163,0x5366506465726175,0x5d7473645f69665f,0x752e646461090a3b\n"
".quad 0x3464722509203436,0x202c33647225202c,0x6c090a3b32647225,0x2e6d617261702e64\n"
".quad 0x6472250920343675,0x75635f5f5b202c35,0x5f5f6d7261706164,0x6d5f72726134325a\n"
".quad 0x6163735f73756e69,0x617571735f72616c,0x665f536650646572,0x0a3b5d6372735f69\n"
".quad 0x3436752e64646109,0x202c366472250920,0x7225202c35647225,0x2e646c090a3b3264\n"
".quad 0x662e6c61626f6c67,0x2c31662509203233,0x302b366472255b20,0x702e646c090a3b5d\n"
".quad 0x3233662e6d617261,0x5b202c3266250920,0x6170616475635f5f,0x6134325a5f5f6d72\n"
".quad 0x73756e696d5f7272,0x5f72616c6163735f,0x5064657261757173,0x63735f69665f5366\n"
".quad 0x090a3b5d72616c61,0x203233662e627573,0x6625202c33662509,0x0a3b326625202c31\n"
".quad 0x626f6c672e747309,0x09203233662e6c61,0x5d302b346472255b,0x090a3b336625202c\n"
".quad 0x09363109636f6c2e,0x756d090a30093237,0x2509203233662e6c,0x2c336625202c3466\n"
".quad 0x73090a3b33662520,0x6c61626f6c672e74,0x255b09203233662e,0x202c5d302b346472\n"
".quad 0x744c240a3b346625,0x3a363230315f315f,0x3109636f6c2e090a,0x090a300934370936\n"
".quad 0x4c240a3b74697865,0x5a5f5f646e655744,0x696d5f7272613432,0x6c6163735f73756e\n"
".quad 0x72617571735f7261,0x69665f5366506465,0x202f2f207d090a3a,0x5f72726134325a5f\n"
".quad 0x63735f73756e696d,0x7571735f72616c61,0x5f53665064657261,0x6e652e090a0a6966\n"
".quad 0x36315a5f20797274,0x5f657475706d6f63,0x616d6769735f756d,0x69695f535f536650\n"
".quad 0x2e09090a28206666,0x752e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061\n"
".quad 0x7475706d6f633631,0x6769735f756d5f65,0x5f535f536650616d,0x0a2c4b5f66666969\n"
".quad 0x6d617261702e0909,0x5f5f203436752e20,0x6d72617061647563,0x6d6f6336315a5f5f\n"
".quad 0x5f756d5f65747570,0x536650616d676973,0x5f666669695f535f,0x09090a2c73575f67\n"
".quad 0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164,0x75706d6f6336315a\n"
".quad 0x69735f756d5f6574,0x535f536650616d67,0x5f675f666669695f,0x702e09090a2c7358\n"
".quad 0x33732e206d617261,0x616475635f5f2032,0x315a5f5f6d726170,0x657475706d6f6336\n"
".quad 0x6d6769735f756d5f,0x695f535f53665061,0x090a2c4e5f666669,0x206d617261702e09\n"
".quad 0x635f5f203233732e,0x5f6d726170616475,0x706d6f6336315a5f,0x735f756d5f657475\n"
".quad 0x5f536650616d6769,0x735f666669695f53,0x646e695f74726174,0x702e09090a2c7865\n"
".quad 0x33662e206d617261,0x616475635f5f2032,0x315a5f5f6d726170,0x657475706d6f6336\n"
".quad 0x6d6769735f756d5f,0x695f535f53665061,0x74735f535f666669,0x2e09090a2c747261\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x7475706d6f633631\n"
".quad 0x6769735f756d5f65,0x5f535f536650616d,0x645f535f66666969,0x7b090a2961746c65\n"
".quad 0x2e206765722e090a,0x3c68722520363175,0x65722e090a3b3e34,0x25203233752e2067\n"
".quad 0x090a3b3e38313c72,0x36752e206765722e,0x32323c6472252034,0x6765722e090a3b3e\n"
".quad 0x6625203233662e20,0x2e090a3b3e37343c,0x3436662e20676572,0x3b3e383c64662520\n"
".quad 0x2e206765722e090a,0x3c70252064657270,0x68732e090a3b3e39,0x6c612e2064657261\n"
".quad 0x622e2034206e6769,0x616475635f5f2038,0x5f616475635f5f5f,0x61765f6c61636f6c\n"
".quad 0x5f34373933335f72,0x635f6e6f6e5f3533,0x7461645f74736e6f,0x30325b3633313261\n"
".quad 0x6c2e090a3b5d3834,0x363709363109636f,0x6257444c240a3009,0x315a5f5f6e696765\n"
".quad 0x657475706d6f6336,0x6d6769735f756d5f,0x695f535f53665061,0x6f6d090a3a666669\n"
".quad 0x2509203436752e76,0x635f5f202c316472,0x75635f5f5f616475,0x6c61636f6c5f6164\n"
".quad 0x3933335f7261765f,0x6f6e5f35335f3437,0x5f74736e6f635f6e,0x3633313261746164\n"
".quad 0x61702e646c090a3b,0x203233732e6d6172,0x5f5b202c31722509,0x726170616475635f\n"
".quad 0x6f6336315a5f5f6d,0x756d5f657475706d,0x6650616d6769735f,0x666669695f535f53\n"
".quad 0x695f74726174735f,0x090a3b5d7865646e,0x2e3233732e747663,0x3272250920363175\n"
".quad 0x782e64697425202c,0x732e646461090a3b,0x2c33722509203233,0x7225202c31722520\n"
".quad 0x2e747663090a3b32,0x203233732e343673,0x25202c3264722509,0x6c756d090a3b3272\n"
".quad 0x33732e656469772e,0x2c33647225092032,0x3b34202c32722520,0x36752e646461090a\n"
".quad 0x2c34647225092034,0x25202c3164722520,0x646c090a3b336472,0x732e6d617261702e\n"
".quad 0x2c34722509203233,0x616475635f5f5b20,0x315a5f5f6d726170,0x657475706d6f6336\n"
".quad 0x6d6769735f756d5f,0x695f535f53665061,0x0a3b5d4e5f666669,0x656c2e7074657309\n"
".quad 0x702509203233732e,0x202c347225202c31,0x2540090a3b337225,0x0920617262203170\n"
".quad 0x31365f325f744c24,0x6f6c2e090a3b3634,0x0934390936310963,0x732e747663090a30\n"
".quad 0x09203233732e3436,0x7225202c35647225,0x2e6c756d090a3b33,0x3233732e65646977\n"
".quad 0x202c366472250920,0x0a3b34202c337225,0x617261702e646c09,0x2509203436752e6d\n"
".quad 0x5f5f5b202c376472,0x6d72617061647563,0x6d6f6336315a5f5f,0x5f756d5f65747570\n"
".quad 0x536650616d676973,0x5f666669695f535f,0x090a3b5d73585f67,0x203436752e646461\n"
".quad 0x25202c3864722509,0x647225202c366472,0x672e646c090a3b37,0x33662e6c61626f6c\n"
".quad 0x202c316625092032,0x5d302b386472255b,0x732e747663090a3b,0x09203631752e3233\n"
".quad 0x746325202c357225,0x090a3b782e646961,0x2e3436732e747663,0x6472250920323373\n"
".quad 0x0a3b357225202c39,0x6469772e6c756d09,0x2509203233732e65,0x7225202c30316472\n"
".quad 0x61090a3b34202c35,0x09203436752e6464,0x25202c3131647225,0x647225202c376472\n"
".quad 0x2e646c090a3b3031,0x662e6c61626f6c67,0x2c32662509203233,0x2b31316472255b20\n"
".quad 0x627573090a3b5d30,0x662509203233662e,0x202c316625202c33,0x6c2e090a3b326625\n"
".quad 0x353909363109636f,0x2e726162090a3009,0x3b300920636e7973,0x3109636f6c2e090a\n"
".quad 0x3009333934310938,0x33732e747663090a,0x2509203631752e32,0x61746325202c3672\n"
".quad 0x63090a3b792e6469,0x33662e6e722e7476,0x2509203233732e32,0x3b367225202c3466\n"
".quad 0x33662e6c756d090a,0x202c356625092032,0x336625202c336625,0x61702e646c090a3b\n"
".quad 0x203233662e6d6172,0x5f5b202c36662509,0x726170616475635f,0x6f6336315a5f5f6d\n"
".quad 0x756d5f657475706d,0x6650616d6769735f,0x666669695f535f53,0x74726174735f535f\n"
".quad 0x702e646c090a3b5d,0x3233662e6d617261,0x5b202c3766250920,0x6170616475635f5f\n"
".quad 0x6336315a5f5f6d72,0x6d5f657475706d6f,0x50616d6769735f75,0x6669695f535f5366\n"
".quad 0x746c65645f535f66,0x64616d090a3b5d61,0x662509203233662e,0x202c346625202c38\n"
".quad 0x366625202c376625,0x662e67656e090a3b,0x2c39662509203233,0x61090a3b35662520\n"
".quad 0x09203233662e6464,0x6625202c30316625,0x0a3b386625202c38,0x3233662e6c756d09\n"
".quad 0x202c313166250920,0x6625202c30316625,0x2e766964090a3b38,0x3233662e6c6c7566\n"
".quad 0x202c323166250920,0x316625202c396625,0x2e766f6d090a3b31,0x3166250920323366\n"
".quad 0x6266336630202c33,0x20203b6233616138,0x2e31202f2f092020,0x756d090a37323434\n"
".quad 0x2509203233662e6c,0x316625202c343166,0x3b33316625202c32,0x7a722e747663090a\n"
".quad 0x33662e3233662e69,0x2c35316625092032,0x090a3b3431662520,0x727070612e327865\n"
".quad 0x09203233662e786f,0x6625202c36316625,0x766f6d090a3b3531,0x662509203233662e\n"
".quad 0x66626630202c3731,0x203b303032373133,0x2d202f2f09202020,0x3634313339362e30\n"
".quad 0x33662e64616d090a,0x2c38316625092032,0x25202c3731662520,0x316625202c353166\n"
".quad 0x2e766f6d090a3b32,0x3166250920323366,0x6235626630202c39,0x20203b6538656266\n"
".quad 0x312d202f2f092020,0x2d6531363832342e,0x2e64616d090a3630,0x3266250920323366\n"
".quad 0x2c39316625202c30,0x25202c3531662520,0x6f6d090a3b383166,0x2509203233662e76\n"
".quad 0x336630202c313266,0x3b62336161386266,0x202f2f0920202020,0x090a373234342e31\n"
".quad 0x203233662e6c756d,0x25202c3232662509,0x326625202c303266,0x2e327865090a3b31\n"
".quad 0x662e786f72707061,0x3332662509203233,0x0a3b32326625202c,0x3233662e6c756d09\n"
".quad 0x202c343266250920,0x6625202c36316625,0x6f6c2e090a3b3332,0x0936390936310963\n"
".quad 0x662e766f6d090a30,0x3532662509203233,0x303866376630202c,0x2020203b30303030\n"
".quad 0x312828202f2f0920,0x2e30282f2946302e,0x6f6d090a29294630,0x2509203233662e76\n"
".quad 0x306630202c363266,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3732662509203233,0x326432636630202c,0x2020203b30303030,0x30312d202f2f0920\n"
".quad 0x2e70746573090a35,0x09203233662e746c,0x316625202c327025,0x3b37326625202c32\n"
".quad 0x662e706c6573090a,0x3832662509203233,0x202c36326625202c,0x7025202c34326625\n"
".quad 0x2e766f6d090a3b32,0x3266250920323366,0x6432346630202c39,0x20203b3030303032\n"
".quad 0x3031202f2f092020,0x2e70746573090a35,0x09203233662e7467,0x316625202c337025\n"
".quad 0x3b39326625202c32,0x662e706c6573090a,0x3033662509203233,0x202c35326625202c\n"
".quad 0x7025202c38326625,0x702e646c090a3b33,0x3436752e6d617261,0x2c32316472250920\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x657475706d6f6336,0x6d6769735f756d5f\n"
".quad 0x695f535f53665061,0x73575f675f666669,0x2e646461090a3b5d,0x6472250920343675\n"
".quad 0x31647225202c3331,0x3b36647225202c32,0x6f6c672e646c090a,0x203233662e6c6162\n"
".quad 0x5b202c3133662509,0x5d302b3331647225,0x662e6c756d090a3b,0x3233662509203233\n"
".quad 0x202c30336625202c,0x73090a3b31336625,0x6465726168732e74,0x255b09203233662e\n"
".quad 0x202c5d302b346472,0x62090a3b32336625,0x0920696e752e6172,0x38355f325f744c24\n"
".quad 0x5f744c240a3b3039,0x0a3a363431365f32,0x363109636f6c2e09,0x090a300930303109\n"
".quad 0x203233662e766f6d,0x30202c3333662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x2e7473090a30202f,0x662e646572616873,0x6472255b09203233,0x6625202c5d302b34\n"
".quad 0x5f744c240a3b3333,0x0a3a303938355f32,0x363109636f6c2e09,0x090a300933303109\n"
".quad 0x636e79732e726162,0x6f6d090a3b300920,0x2509203233732e76,0x3b363532202c3772\n"
".quad 0x365f325f744c240a,0x2f2f200a3a343139,0x4c203e706f6f6c3c,0x79646f6220706f6f\n"
".quad 0x303120656e696c20,0x697473656e202c33,0x687470656420676e,0x747365202c31203a\n"
".quad 0x6920646574616d69,0x6e6f697461726574,0x6f6e6b6e75203a73,0x70746573090a6e77\n"
".quad 0x203233732e656c2e,0x7225202c34702509,0x0a3b327225202c37,0x7262203470254009\n"
".quad 0x325f744c24092061,0x200a3b303731375f,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c333031,0x656c6562616c2064\n"
".quad 0x5f325f744c242064,0x6c2e090a34313936,0x303109363109636f,0x2e646c090a300938\n"
".quad 0x662e646572616873,0x3433662509203233,0x2b346472255b202c,0x646461090a3b5d30\n"
".quad 0x722509203233732e,0x202c377225202c38,0x7663090a3b327225,0x33732e3436732e74\n"
".quad 0x3431647225092032,0x090a3b387225202c,0x656469772e6c756d,0x722509203233732e\n"
".quad 0x387225202c353164,0x6461090a3b34202c,0x2509203436752e64,0x7225202c36316472\n"
".quad 0x31647225202c3164,0x732e646c090a3b35,0x33662e6465726168,0x2c35336625092032\n"
".quad 0x2b36316472255b20,0x646461090a3b5d30,0x662509203233662e,0x34336625202c3633\n"
".quad 0x0a3b35336625202c,0x726168732e747309,0x09203233662e6465,0x5d302b346472255b\n"
".quad 0x0a3b36336625202c,0x31375f325f744c24,0x3c2f2f200a3a3037,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x33303120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3139365f325f744c,0x09636f6c2e090a34,0x3009393031093631\n"
".quad 0x79732e726162090a,0x090a3b300920636e,0x09363109636f6c2e,0x73090a3009353031\n"
".quad 0x09203233732e7268,0x377225202c377225,0x6f6d090a3b31202c,0x2509203233752e76\n"
".quad 0x090a3b30202c3972,0x2e74672e70746573,0x3570250920323373,0x25202c377225202c\n"
".quad 0x702540090a3b3972,0x2409206172622035,0x3139365f325f744c,0x2e766f6d090a3b34\n"
".quad 0x3172250920323375,0x73090a3b30202c30,0x732e656e2e707465,0x2c36702509203233\n"
".quad 0x7225202c32722520,0x702540090a3b3031,0x2409206172622036,0x3339375f325f744c\n"
".quad 0x2e747663090a3b38,0x203631752e323373,0x25202c3131722509,0x3b792e6469617463\n"
".quad 0x6e722e747663090a,0x3233732e3233662e,0x202c373366250920,0x6c090a3b31317225\n"
".quad 0x2e6d617261702e64,0x3366250920323366,0x75635f5f5b202c38,0x5f5f6d7261706164\n"
".quad 0x75706d6f6336315a,0x69735f756d5f6574,0x535f536650616d67,0x5f535f666669695f\n"
".quad 0x0a3b5d7472617473,0x617261702e646c09,0x2509203233662e6d,0x5f5f5b202c393366\n"
".quad 0x6d72617061647563,0x6d6f6336315a5f5f,0x5f756d5f65747570,0x536650616d676973\n"
".quad 0x5f666669695f535f,0x5d61746c65645f53,0x662e64616d090a3b,0x3034662509203233\n"
".quad 0x202c37336625202c,0x6625202c39336625,0x747663090a3b3833,0x3233662e3436662e\n"
".quad 0x202c316466250920,0x6d090a3b30346625,0x09203436662e766f,0x6430202c32646625\n"
".quad 0x3339643034303034,0x3030303030303032,0x352e32202f2f093b,0x756d090a33363630\n"
".quad 0x2509203436662e6c,0x646625202c336466,0x3b32646625202c31,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5b202c3731647225,0x6170616475635f5f,0x6336315a5f5f6d72\n"
".quad 0x6d5f657475706d6f,0x50616d6769735f75,0x6669695f535f5366,0x63090a3b5d4b5f66\n"
".quad 0x752e3233732e7476,0x3231722509203631,0x646961746325202c,0x747663090a3b782e\n"
".quad 0x3233752e3631752e,0x202c316872250920,0x63090a3b32317225,0x752e3233732e7476\n"
".quad 0x3331722509203631,0x696174636e25202c,0x7663090a3b792e64,0x33752e3631752e74\n"
".quad 0x2c32687225092032,0x090a3b3331722520,0x656469772e6c756d,0x722509203631752e\n"
".quad 0x31687225202c3431,0x0a3b32687225202c,0x3233732e64646109,0x202c353172250920\n"
".quad 0x7225202c31317225,0x747663090a3b3431,0x3233732e3436732e,0x2c38316472250920\n"
".quad 0x090a3b3531722520,0x656469772e6c756d,0x722509203233732e,0x317225202c393164\n"
".quad 0x61090a3b34202c35,0x09203436752e6464,0x25202c3032647225,0x7225202c37316472\n"
".quad 0x7663090a3b393164,0x3233662e6e722e74,0x662509203436662e,0x33646625202c3134\n"
".quad 0x68732e646c090a3b,0x3233662e64657261,0x202c323466250920,0x5f616475635f5f5b\n"
".quad 0x6c5f616475635f5f,0x7261765f6c61636f,0x335f34373933335f,0x6f635f6e6f6e5f35\n"
".quad 0x617461645f74736e,0x3b5d302b36333132,0x75662e766964090a,0x09203233662e6c6c\n"
".quad 0x6625202c33346625,0x31346625202c3234,0x752e766f6d090a3b,0x3631722509203233\n"
".quad 0x6573090a3b30202c,0x33732e656e2e7074,0x202c377025092032,0x317225202c317225\n"
".quad 0x37702540090a3b36,0x4c24092061726220,0x363037385f325f74,0x09636f6c2e090a3b\n"
".quad 0x3009343131093631,0x6f6c672e7473090a,0x203233662e6c6162,0x2b30326472255b09\n"
".quad 0x33346625202c5d30,0x752e617262090a3b,0x5f744c240920696e,0x0a3b303534385f32\n"
".quad 0x37385f325f744c24,0x6f6c2e090a3a3630,0x3631310936310963,0x672e646c090a3009\n"
".quad 0x33662e6c61626f6c,0x2c34346625092032,0x2b30326472255b20,0x747663090a3b5d30\n"
".quad 0x3233662e3436662e,0x202c346466250920,0x63090a3b34346625,0x662e3436662e7476\n"
".quad 0x3564662509203233,0x0a3b33346625202c,0x3436662e64646109,0x202c366466250920\n"
".quad 0x6625202c34646625,0x747663090a3b3564,0x2e3233662e6e722e,0x3466250920343666\n"
".quad 0x3b36646625202c35,0x6f6c672e7473090a,0x203233662e6c6162,0x2b30326472255b09\n"
".quad 0x35346625202c5d30,0x5f325f744c240a3b,0x4c240a3a30353438,0x383339375f325f74\n"
".quad 0x09636f6c2e090a3a,0x3009383131093631,0x0a3b74697865090a,0x5f646e6557444c24\n"
".quad 0x706d6f6336315a5f,0x735f756d5f657475,0x5f536650616d6769,0x0a3a666669695f53\n"
".quad 0x5a5f202f2f207d09,0x7475706d6f633631,0x6769735f756d5f65,0x5f535f536650616d\n"
".quad 0x2e090a0a66666969,0x5a5f207972746e65,0x7475706d6f633032,0x756d5f78616d5f65\n"
".quad 0x6650616d6769735f,0x5f535f535f535f53,0x2e09090a28206969,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5a5f5f6d72617061,0x7475706d6f633032,0x756d5f78616d5f65\n"
".quad 0x6650616d6769735f,0x5f535f535f535f53,0x78616d5f675f6969,0x7261702e09090a2c\n"
".quad 0x203436752e206d61,0x6170616475635f5f,0x6330325a5f5f6d72,0x6d5f657475706d6f\n"
".quad 0x69735f756d5f7861,0x535f536650616d67,0x5f69695f535f535f,0x090a2c73754d5f67\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x706d6f6330325a5f\n"
".quad 0x5f78616d5f657475,0x616d6769735f756d,0x5f535f535f536650,0x575f675f69695f53\n"
".quad 0x61702e09090a2c73,0x3436752e206d6172,0x70616475635f5f20,0x30325a5f5f6d7261\n"
".quad 0x5f657475706d6f63,0x735f756d5f78616d,0x5f536650616d6769,0x69695f535f535f53\n"
".quad 0x090a2c73585f675f,0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475\n"
".quad 0x706d6f6330325a5f,0x5f78616d5f657475,0x616d6769735f756d,0x5f535f535f536650\n"
".quad 0x535f675f69695f53,0x090a2c73616d6769,0x206d617261702e09,0x635f5f203233732e\n"
".quad 0x5f6d726170616475,0x706d6f6330325a5f,0x5f78616d5f657475,0x616d6769735f756d\n"
".quad 0x5f535f535f536650,0x0a2c4e5f69695f53,0x6d617261702e0909,0x5f5f203233732e20\n"
".quad 0x6d72617061647563,0x6d6f6330325a5f5f,0x78616d5f65747570,0x6d6769735f756d5f\n"
".quad 0x535f535f53665061,0x74735f69695f535f,0x65646e695f747261,0x2e090a7b090a2978\n"
".quad 0x3233752e20676572,0x3b3e32323c722520,0x2e206765722e090a,0x3c64722520343675\n"
".quad 0x722e090a3b3e3332,0x203233662e206765,0x0a3b3e38393c6625,0x662e206765722e09\n"
".quad 0x383c646625203436,0x6765722e090a3b3e,0x2520646572702e20,0x090a3b3e34313c70\n"
".quad 0x206465726168732e,0x34206e67696c612e,0x635f5f2038622e20,0x75635f5f5f616475\n"
".quad 0x6c61636f6c5f6164,0x3034335f7261765f,0x6f6e5f35335f3831,0x5f74736e6f635f6e\n"
".quad 0x3233323461746164,0x0a3b5d383430325b,0x363109636f6c2e09,0x240a300930323109\n"
".quad 0x6e6967656257444c,0x6d6f6330325a5f5f,0x78616d5f65747570,0x6d6769735f756d5f\n"
".quad 0x535f535f53665061,0x090a3a69695f535f,0x203436752e766f6d,0x5f202c3164722509\n"
".quad 0x5f5f5f616475635f,0x636f6c5f61647563,0x335f7261765f6c61,0x5f35335f38313034\n"
".quad 0x736e6f635f6e6f6e,0x3234617461645f74,0x6f6c2e090a3b3233,0x3832310936310963\n"
".quad 0x2e747663090a3009,0x203631752e343675,0x25202c3264722509,0x3b782e6469617463\n"
".quad 0x6f6c2e6c756d090a,0x722509203436752e,0x32647225202c3364,0x646c090a3b34202c\n"
".quad 0x752e6d617261702e,0x3464722509203436,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x7475706d6f633032,0x756d5f78616d5f65,0x6650616d6769735f,0x5f535f535f535f53\n"
".quad 0x6769535f675f6969,0x61090a3b5d73616d,0x09203436752e6464,0x7225202c35647225\n"
".quad 0x33647225202c3464,0x6c672e646c090a3b,0x3233662e6c61626f,0x5b202c3166250920\n"
".quad 0x3b5d302b35647225,0x3109636f6c2e090a,0x0a30093932310936,0x617261702e646c09\n"
".quad 0x2509203436752e6d,0x5f5f5b202c366472,0x6d72617061647563,0x6d6f6330325a5f5f\n"
".quad 0x78616d5f65747570,0x6d6769735f756d5f,0x535f535f53665061,0x5f675f69695f535f\n"
".quad 0x61090a3b5d73754d,0x09203436752e6464,0x7225202c37647225,0x33647225202c3664\n"
".quad 0x6c672e646c090a3b,0x3233662e6c61626f,0x5b202c3266250920,0x3b5d302b37647225\n"
".quad 0x7261702e646c090a,0x09203233732e6d61,0x5f5f5b202c317225,0x6d72617061647563\n"
".quad 0x6d6f6330325a5f5f,0x78616d5f65747570,0x6d6769735f756d5f,0x535f535f53665061\n"
".quad 0x74735f69695f535f,0x65646e695f747261,0x747663090a3b5d78,0x3631752e3233732e\n"
".quad 0x25202c3272250920,0x090a3b782e646974,0x203233732e646461,0x7225202c33722509\n"
".quad 0x0a3b327225202c31,0x3436732e74766309,0x722509203233732e,0x3b327225202c3864\n"
".quad 0x69772e6c756d090a,0x09203233732e6564,0x7225202c39647225,0x61090a3b34202c32\n"
".quad 0x09203436752e6464,0x25202c3031647225,0x647225202c316472,0x702e646c090a3b39\n"
".quad 0x3233732e6d617261,0x5b202c3472250920,0x6170616475635f5f,0x6330325a5f5f6d72\n"
".quad 0x6d5f657475706d6f,0x69735f756d5f7861,0x535f536650616d67,0x5f69695f535f535f\n"
".quad 0x746573090a3b5d4e,0x3233732e656c2e70,0x25202c3170250920,0x3b337225202c3472\n"
".quad 0x622031702540090a,0x5f744c2409206172,0x3b38353033315f33,0x3109636f6c2e090a\n"
".quad 0x0a30093633310936,0x3436732e74766309,0x722509203233732e,0x337225202c313164\n"
".quad 0x772e6c756d090a3b,0x203233732e656469,0x202c323164722509,0x0a3b34202c337225\n"
".quad 0x617261702e646c09,0x2509203436752e6d,0x5f5b202c33316472,0x726170616475635f\n"
".quad 0x6f6330325a5f5f6d,0x616d5f657475706d,0x6769735f756d5f78,0x5f535f536650616d\n"
".quad 0x675f69695f535f53,0x61090a3b5d73585f,0x09203436752e6464,0x25202c3431647225\n"
".quad 0x7225202c33316472,0x646c090a3b323164,0x2e6c61626f6c672e,0x3366250920323366\n"
".quad 0x34316472255b202c,0x6c2e090a3b5d302b,0x333109363109636f,0x726162090a300937\n"
".quad 0x300920636e79732e,0x09636f6c2e090a3b,0x3009383331093631,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5b202c3531647225,0x6170616475635f5f,0x6330325a5f5f6d72\n"
".quad 0x6d5f657475706d6f,0x69735f756d5f7861,0x535f536650616d67,0x5f69695f535f535f\n"
".quad 0x090a3b5d73575f67,0x203436752e646461,0x202c363164722509,0x25202c3531647225\n"
".quad 0x6c090a3b32316472,0x6c61626f6c672e64,0x662509203233662e,0x316472255b202c34\n"
".quad 0x2e090a3b5d302b36,0x3109383109636f6c,0x6d090a3009393332,0x09203233662e766f\n"
".quad 0x306630202c356625,0x3b30303030303030,0x2f2f092020202020,0x2e746573090a3020\n"
".quad 0x662e3233752e7467,0x2c35722509203233,0x6625202c34662520,0x2e67656e090a3b35\n"
".quad 0x3672250920323373,0x090a3b357225202c,0x203233662e766f6d,0x6630202c36662509\n"
".quad 0x3030303030386637,0x2f0920202020203b,0x46302e312828202f,0x2946302e30282f29\n"
".quad 0x6c2e746573090a29,0x33662e3233752e74,0x202c377225092032,0x366625202c346625\n"
".quad 0x732e67656e090a3b,0x2c38722509203233,0x61090a3b37722520,0x09203233622e646e\n"
".quad 0x367225202c397225,0x090a3b387225202c,0x203233752e766f6d,0x30202c3031722509\n"
".quad 0x2e70746573090a3b,0x09203233732e7165,0x397225202c327025,0x0a3b30317225202c\n"
".quad 0x7262203270254009,0x335f744c24092061,0x090a3b323639385f,0x09383109636f6c2e\n"
".quad 0x090a300930353231,0x203233622e766f6d,0x25202c3131722509,0x646e61090a3b3466\n"
".quad 0x722509203233622e,0x31317225202c3231,0x30393331322d202c,0x090a3b3134303539\n"
".quad 0x09203233622e726f,0x7225202c33317225,0x35363031202c3231,0x0a3b363132333533\n"
".quad 0x3233622e766f6d09,0x25202c3766250920,0x6f6d090a3b333172,0x2509203233662e76\n"
".quad 0x3b376625202c3866,0x3109636f6c2e090a,0x3009313532310938,0x33752e726873090a\n"
".quad 0x2c34317225092032,0x32202c3131722520,0x2e627573090a3b33,0x3172250920323375\n"
".quad 0x2c34317225202c35,0x6d090a3b37323120,0x09203233662e766f,0x336630202c396625\n"
".quad 0x3b33663430356266,0x2f2f092020202020,0x31323431342e3120,0x672e70746573090a\n"
".quad 0x2509203233662e74,0x2c376625202c3370,0x40090a3b39662520,0x6172622033702521\n"
".quad 0x5f335f744c240920,0x090a3b3431333331,0x09383109636f6c2e,0x090a300933353231\n"
".quad 0x203233662e766f6d,0x30202c3031662509,0x3030303030663366,0x2f09202020203b30\n"
".quad 0x6d090a352e30202f,0x09203233662e6c75,0x376625202c386625,0x0a3b30316625202c\n"
".quad 0x383109636f6c2e09,0x0a30093435323109,0x3233732e64646109,0x202c353172250920\n"
".quad 0x3b31202c35317225,0x315f335f744c240a,0x2e090a3a34313333,0x3109383109636f6c\n"
".quad 0x6d090a3009353731,0x09203233662e766f,0x6630202c31316625,0x3030303030386662\n"
".quad 0x2f2f09202020203b,0x646461090a312d20,0x662509203233662e,0x2c386625202c3231\n"
".quad 0x090a3b3131662520,0x203233662e766f6d,0x30202c3331662509,0x3030303038663366\n"
".quad 0x2f09202020203b30,0x646461090a31202f,0x662509203233662e,0x2c386625202c3431\n"
".quad 0x090a3b3331662520,0x727070612e766964,0x09203233662e786f,0x6625202c35316625\n"
".quad 0x34316625202c3231,0x662e6c756d090a3b,0x3631662509203233,0x202c32316625202c\n"
".quad 0x73090a3b35316625,0x09203233662e6275,0x6625202c37316625,0x36316625202c3231\n"
".quad 0x662e6c756d090a3b,0x3831662509203233,0x202c37316625202c,0x6d090a3b37316625\n"
".quad 0x09203233662e766f,0x6630202c39316625,0x3035626161616433,0x2f2f09202020203b\n"
".quad 0x33333338302e3020,0x2e766f6d090a3634,0x3266250920323366,0x3463336630202c30\n"
".quad 0x20203b3065623463,0x2e30202f2f092020,0x0a33393634323130,0x3233662e766f6d09\n"
".quad 0x202c313266250920,0x3336303262336630,0x09202020203b3363,0x3230302e30202f2f\n"
".quad 0x6d090a3533373434,0x09203233662e6461,0x6625202c32326625,0x38316625202c3132\n"
".quad 0x0a3b30326625202c,0x3233662e64616d09,0x202c333266250920,0x6625202c38316625\n"
".quad 0x39316625202c3232,0x662e6c756d090a3b,0x3432662509203233,0x202c38316625202c\n"
".quad 0x6d090a3b33326625,0x09203233662e6c75,0x6625202c35326625,0x34326625202c3731\n"
".quad 0x662e627573090a3b,0x3632662509203233,0x202c35326625202c,0x61090a3b36316625\n"
".quad 0x09203233662e6464,0x6625202c37326625,0x36326625202c3231,0x662e766f6d090a3b\n"
".quad 0x3832662509203233,0x313366336630202c,0x2020203b38313237,0x362e30202f2f0920\n"
".quad 0x63090a3734313339,0x33662e6e722e7476,0x2509203233732e32,0x317225202c393266\n"
".quad 0x2e64616d090a3b35,0x3366250920323366,0x2c38326625202c30,0x25202c3932662520\n"
".quad 0x6c2e090a3b373266,0x323109383109636f,0x6f6d090a30093236,0x2509203233662e76\n"
".quad 0x336625202c313366,0x2e617262090a3b30,0x444c240920696e75,0x5f5f5f69646e6557\n"
".quad 0x6c616e7265746e69,0x30325f64616d665f,0x744c240a3b315f36,0x3a323639385f335f\n"
".quad 0x3109636f6c2e090a,0x3009353632310938,0x70612e32676c090a,0x3233662e786f7270\n"
".quad 0x202c323366250920,0x6f6d090a3b346625,0x2509203233662e76,0x336630202c333366\n"
".quad 0x3b38313237313366,0x202f2f0920202020,0x3734313339362e30,0x33662e6c756d090a\n"
".quad 0x2c31336625092032,0x25202c3233662520,0x444c240a3b333366,0x5f5f5f69646e6557\n"
".quad 0x6c616e7265746e69,0x30325f64616d665f,0x6c2e090a3a315f36,0x343109363109636f\n"
".quad 0x627573090a300930,0x662509203233662e,0x2c336625202c3433,0x6d090a3b32662520\n"
".quad 0x09203233662e6c75,0x6625202c35336625,0x34336625202c3433,0x662e646461090a3b\n"
".quad 0x3633662509203233,0x25202c316625202c,0x6c756d090a3b3166,0x662509203233662e\n"
".quad 0x2c316625202c3733,0x090a3b3633662520,0x6c6c75662e766964,0x662509203233662e\n"
".quad 0x35336625202c3833,0x0a3b37336625202c,0x3233662e62757309,0x202c393366250920\n"
".quad 0x6625202c31336625,0x2e7473090a3b3833,0x662e646572616873,0x6472255b09203233\n"
".quad 0x25202c5d302b3031,0x7262090a3b393366,0x240920696e752e61,0x3832315f335f744c\n"
".quad 0x5f744c240a3b3230,0x3a38353033315f33,0x3109636f6c2e090a,0x0a30093434310936\n"
".quad 0x3233662e766f6d09,0x202c303466250920,0x3034633136636630,0x09202020203b3030\n"
".quad 0x303030312d202f2f,0x68732e7473090a30,0x3233662e64657261,0x30316472255b0920\n"
".quad 0x346625202c5d302b,0x335f744c240a3b30,0x0a3a32303832315f,0x363109636f6c2e09\n"
".quad 0x090a300937343109,0x636e79732e726162,0x6f6d090a3b300920,0x2509203233732e76\n"
".quad 0x363532202c363172,0x5f335f744c240a3b,0x200a3a3833333431,0x3e706f6f6c3c2f2f\n"
".quad 0x6f6220706f6f4c20,0x20656e696c207964,0x73656e202c373431,0x70656420676e6974\n"
".quad 0x65202c31203a6874,0x646574616d697473,0x6974617265746920,0x6b6e75203a736e6f\n"
".quad 0x6573090a6e776f6e,0x33732e656c2e7074,0x202c347025092032,0x7225202c36317225\n"
".quad 0x34702540090a3b32,0x4c24092061726220,0x393534315f335f74,0x6c3c2f2f200a3b34\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c37343120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x333334315f335f74,0x09636f6c2e090a38\n"
".quad 0x3009323531093631,0x6168732e646c090a,0x203233662e646572,0x5b202c3134662509\n"
".quad 0x5d302b3031647225,0x732e646461090a3b,0x3731722509203233,0x202c36317225202c\n"
".quad 0x7663090a3b327225,0x33732e3436732e74,0x3731647225092032,0x0a3b37317225202c\n"
".quad 0x6469772e6c756d09,0x2509203233732e65,0x7225202c38316472,0x090a3b34202c3731\n"
".quad 0x203436752e646461,0x202c393164722509,0x7225202c31647225,0x646c090a3b383164\n"
".quad 0x2e6465726168732e,0x3466250920323366,0x316472255b202c32,0x6d090a3b5d302b39\n"
".quad 0x09203233662e7861,0x6625202c33346625,0x32346625202c3134,0x68732e7473090a3b\n"
".quad 0x3233662e64657261,0x30316472255b0920,0x346625202c5d302b,0x335f744c240a3b33\n"
".quad 0x0a3a34393534315f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c37343120,0x6c6562616c206461,0x335f744c24206465\n"
".quad 0x090a38333334315f,0x09363109636f6c2e,0x62090a3009333531,0x20636e79732e7261\n"
".quad 0x6f6c2e090a3b3009,0x3934310936310963,0x2e726873090a3009,0x3172250920323373\n"
".quad 0x2c36317225202c36,0x766f6d090a3b3120,0x722509203233752e,0x090a3b30202c3831\n"
".quad 0x2e74672e70746573,0x3570250920323373,0x202c36317225202c,0x40090a3b38317225\n"
".quad 0x2061726220357025,0x315f335f744c2409,0x6d090a3b38333334,0x09203233752e766f\n"
".quad 0x3b30202c39317225,0x6e2e70746573090a,0x2509203233732e65,0x2c327225202c3670\n"
".quad 0x090a3b3931722520,0x6172622036702540,0x5f335f744c240920,0x090a3b3236333531\n"
".quad 0x65726168732e646c,0x2509203233662e64,0x5f5f5b202c343466,0x635f5f5f61647563\n"
".quad 0x61636f6c5f616475,0x34335f7261765f6c,0x6e5f35335f383130,0x74736e6f635f6e6f\n"
".quad 0x333234617461645f,0x6d090a3b5d302b32,0x09203233662e766f,0x6630202c35346625\n"
".quad 0x3030303032643234,0x2f2f09202020203b,0x6573090a35303120,0x33662e74672e7074\n"
".quad 0x202c377025092032,0x6625202c34346625,0x766f6d090a3b3534,0x662509203233662e\n"
".quad 0x32636630202c3634,0x203b303030303264,0x2d202f2f09202020,0x746573090a353031\n"
".quad 0x3233662e746c2e70,0x25202c3870250920,0x346625202c343466,0x2e766f6d090a3b36\n"
".quad 0x3466250920323366,0x6266336630202c37,0x20203b6233616138,0x2e31202f2f092020\n"
".quad 0x756d090a37323434,0x2509203233662e6c,0x346625202c383466,0x3b37346625202c34\n"
".quad 0x7261702e646c090a,0x09203436752e6d61,0x5b202c3032647225,0x6170616475635f5f\n"
".quad 0x6330325a5f5f6d72,0x6d5f657475706d6f,0x69735f756d5f7861,0x535f536650616d67\n"
".quad 0x5f69695f535f535f,0x0a3b5d78616d5f67,0x3436752e64646109,0x2c31326472250920\n"
".quad 0x202c303264722520,0x63090a3b33647225,0x662e3436662e7476,0x3164662509203233\n"
".quad 0x090a3b316625202c,0x203436662e766f6d,0x30202c3264662509,0x3964303430303464\n"
".quad 0x3030303030303233,0x2e32202f2f093b30,0x6d090a3336363035,0x09203436662e6c75\n"
".quad 0x6625202c33646625,0x32646625202c3164,0x722e747663090a3b,0x662e3233662e697a\n"
".quad 0x3934662509203233,0x0a3b38346625202c,0x2e6e722e74766309,0x203436662e323366\n"
".quad 0x25202c3035662509,0x6f6d090a3b336466,0x2509203233662e76,0x626630202c313566\n"
".quad 0x3b30303237313366,0x202f2f0920202020,0x34313339362e302d,0x662e64616d090a36\n"
".quad 0x3235662509203233,0x202c31356625202c,0x6625202c39346625,0x766f6d090a3b3434\n"
".quad 0x662509203233662e,0x35626630202c3335,0x203b653865626662,0x2d202f2f09202020\n"
".quad 0x6531363832342e31,0x64616d090a36302d,0x662509203233662e,0x33356625202c3435\n"
".quad 0x202c39346625202c,0x6d090a3b32356625,0x09203233662e766f,0x6630202c35356625\n"
".quad 0x6233616138626633,0x2f2f09202020203b,0x0a373234342e3120,0x3233662e6c756d09\n"
".quad 0x202c363566250920,0x6625202c34356625,0x766f6d090a3b3535,0x722509203233752e\n"
".quad 0x090a3b30202c3032,0x2e656e2e70746573,0x3970250920323373,0x25202c317225202c\n"
".quad 0x2540090a3b303272,0x0920617262203970,0x36315f335f744c24,0x6c2e090a3b303331\n"
".quad 0x333509303209636f,0x766f6d090a300939,0x662509203233662e,0x66376630202c3735\n"
".quad 0x203b303030303038,0x28202f2f09202020,0x282f2946302e3128,0x090a292946302e30\n"
".quad 0x203233662e766f6d,0x30202c3835662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x327865090a30202f,0x2e786f727070612e,0x3566250920323366,0x3b39346625202c39\n"
".quad 0x70612e327865090a,0x3233662e786f7270,0x202c303666250920,0x6d090a3b36356625\n"
".quad 0x09203233662e6c75,0x6625202c31366625,0x30366625202c3935,0x2e706c6573090a3b\n"
".quad 0x3666250920323366,0x2c38356625202c32,0x25202c3136662520,0x6c6573090a3b3870\n"
".quad 0x2509203233662e70,0x356625202c333666,0x2c32366625202c37,0x64090a3b37702520\n"
".quad 0x2e6c6c75662e7669,0x3666250920323366,0x2c33366625202c34,0x090a3b3035662520\n"
".quad 0x2e3436662e747663,0x6466250920323366,0x3b34366625202c34,0x3109636f6c2e090a\n"
".quad 0x0a30093835310936,0x2e6e722e74766309,0x203436662e323366,0x25202c3536662509\n"
".quad 0x7473090a3b346466,0x2e6c61626f6c672e,0x72255b0920323366,0x202c5d302b313264\n"
".quad 0x62090a3b35366625,0x0920696e752e6172,0x35315f335f744c24,0x744c240a3b343738\n"
".quad 0x30333136315f335f,0x09636f6c2e090a3a,0x3009313631093631,0x6f6c672e646c090a\n"
".quad 0x203233662e6c6162,0x5b202c3636662509,0x5d302b3132647225,0x09636f6c2e090a3b\n"
".quad 0x3009393335093032,0x33662e766f6d090a,0x2c37366625092032,0x6138626633663020\n"
".quad 0x202020203b623361,0x34342e31202f2f09,0x2e6c756d090a3732,0x3666250920323366\n"
".quad 0x2c36366625202c38,0x090a3b3736662520,0x2e697a722e747663,0x203233662e323366\n"
".quad 0x25202c3936662509,0x6f6d090a3b383666,0x2509203233662e76,0x376630202c303766\n"
".quad 0x3b30303030303866,0x202f2f0920202020,0x2f2946302e312828,0x0a292946302e3028\n"
".quad 0x3233662e766f6d09,0x202c313766250920,0x3030303030306630,0x09202020203b3030\n"
".quad 0x7865090a30202f2f,0x786f727070612e32,0x662509203233662e,0x39366625202c3237\n"
".quad 0x662e766f6d090a3b,0x3337662509203233,0x313366626630202c,0x2020203b30303237\n"
".quad 0x2e302d202f2f0920,0x090a363431333936,0x203233662e64616d,0x25202c3437662509\n"
".quad 0x366625202c333766,0x3b36366625202c39,0x33662e766f6d090a,0x2c35376625092032\n"
".quad 0x6266623562663020,0x202020203b653865,0x342e312d202f2f09,0x36302d6531363832\n"
".quad 0x33662e64616d090a,0x2c36376625092032,0x25202c3537662520,0x376625202c393666\n"
".quad 0x2e766f6d090a3b34,0x3766250920323366,0x6266336630202c37,0x20203b6233616138\n"
".quad 0x2e31202f2f092020,0x756d090a37323434,0x2509203233662e6c,0x376625202c383766\n"
".quad 0x3b37376625202c36,0x70612e327865090a,0x3233662e786f7270,0x202c393766250920\n"
".quad 0x6d090a3b38376625,0x09203233662e6c75,0x6625202c30386625,0x39376625202c3237\n"
".quad 0x662e766f6d090a3b,0x3138662509203233,0x326432636630202c,0x2020203b30303030\n"
".quad 0x30312d202f2f0920,0x2e70746573090a35,0x09203233662e746c,0x6625202c30317025\n"
".quad 0x31386625202c3636,0x2e706c6573090a3b,0x3866250920323366,0x2c31376625202c32\n"
".quad 0x25202c3038662520,0x6f6d090a3b303170,0x2509203233662e76,0x346630202c333866\n"
".quad 0x3b30303030326432,0x202f2f0920202020,0x746573090a353031,0x3233662e74672e70\n"
".quad 0x202c313170250920,0x6625202c36366625,0x6c6573090a3b3338,0x2509203233662e70\n"
".quad 0x376625202c343866,0x2c32386625202c30,0x090a3b3131702520,0x6c6c75662e766964\n"
".quad 0x662509203233662e,0x34386625202c3538,0x0a3b30356625202c,0x3436662e74766309\n"
".quad 0x662509203233662e,0x35386625202c3564,0x662e766f6d090a3b,0x3638662509203233\n"
".quad 0x303866376630202c,0x2020203b30303030,0x312828202f2f0920,0x2e30282f2946302e\n"
".quad 0x6f6d090a29294630,0x2509203233662e76,0x306630202c373866,0x3b30303030303030\n"
".quad 0x202f2f0920202020,0x612e327865090a30,0x33662e786f727070,0x2c38386625092032\n"
".quad 0x090a3b3934662520,0x727070612e327865,0x09203233662e786f,0x6625202c39386625\n"
".quad 0x6c756d090a3b3635,0x662509203233662e,0x38386625202c3039,0x0a3b39386625202c\n"
".quad 0x33662e706c657309,0x2c31396625092032,0x25202c3738662520,0x387025202c303966\n"
".quad 0x2e706c6573090a3b,0x3966250920323366,0x2c36386625202c32,0x25202c3139662520\n"
".quad 0x766964090a3b3770,0x33662e6c6c75662e,0x2c33396625092032,0x25202c3239662520\n"
".quad 0x7663090a3b303566,0x33662e3436662e74,0x2c36646625092032,0x090a3b3339662520\n"
".quad 0x09363109636f6c2e,0x63090a3009343631,0x33662e6e722e7476,0x2509203436662e32\n"
".quad 0x646625202c343966,0x2e747663090a3b36,0x662e3233662e6e72,0x3539662509203436\n"
".quad 0x0a3b35646625202c,0x746c2e7074657309,0x702509203233662e,0x35396625202c3231\n"
".quad 0x0a3b34396625202c,0x33662e706c657309,0x2c36396625092032,0x25202c3439662520\n"
".quad 0x317025202c353966,0x672e7473090a3b32,0x33662e6c61626f6c,0x326472255b092032\n"
".quad 0x6625202c5d302b31,0x5f744c240a3b3639,0x3a34373835315f33,0x315f335f744c240a\n"
".quad 0x2e090a3a32363335,0x3109363109636f6c,0x7865090a30093736,0x57444c240a3b7469\n"
".quad 0x30325a5f5f646e65,0x5f657475706d6f63,0x735f756d5f78616d,0x5f536650616d6769\n"
".quad 0x69695f535f535f53,0x202f2f207d090a3a,0x706d6f6330325a5f,0x5f78616d5f657475\n"
".quad 0x616d6769735f756d,0x5f535f535f536650,0x632e090a69695f53,0x33662e2074736e6f\n"
".quad 0x3b6d757357632032,0x74736e6f632e090a,0x5763203233662e20,0x2e090a3b6e61656d\n"
".quad 0x662e2074736e6f63,0x7261765763203233,0x746e652e090a0a3b,0x7330315a5f207972\n"
".quad 0x636568635f746174,0x665f535f5366506b,0x090a282069666666,0x206d617261702e09\n"
".quad 0x635f5f203436752e,0x5f6d726170616475,0x7461747330315a5f,0x66506b636568635f\n"
".quad 0x666666665f535f53,0x2e09090a2c4b5f69,0x752e206d61726170,0x6475635f5f203436\n"
".quad 0x5a5f5f6d72617061,0x635f746174733031,0x5f5366506b636568,0x5f69666666665f53\n"
".quad 0x0a2c66696e676953,0x6d617261702e0909,0x5f5f203436752e20,0x6d72617061647563\n"
".quad 0x61747330315a5f5f,0x506b636568635f74,0x6666665f535f5366,0x2c73585f675f6966\n"
".quad 0x617261702e09090a,0x5f203233662e206d,0x726170616475635f,0x747330315a5f5f6d\n"
".quad 0x6b636568635f7461,0x66665f535f536650,0x74735f535f696666,0x2e09090a2c747261\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x635f746174733031\n"
".quad 0x5f5366506b636568,0x5f69666666665f53,0x2c61746c65645f53,0x617261702e09090a\n"
".quad 0x5f203233662e206d,0x726170616475635f,0x747330315a5f5f6d,0x6b636568635f7461\n"
".quad 0x66665f535f536650,0x090a2c4d5f696666,0x206d617261702e09,0x635f5f203233662e\n"
".quad 0x5f6d726170616475,0x7461747330315a5f,0x66506b636568635f,0x666666665f535f53\n"
".quad 0x2c6168706c615f69,0x617261702e09090a,0x5f203233732e206d,0x726170616475635f\n"
".quad 0x747330315a5f5f6d,0x6b636568635f7461,0x66665f535f536650,0x696f704e5f696666\n"
".quad 0x0a7b090a2973746e,0x752e206765722e09,0x39313c7225203233,0x6765722e090a3b3e\n"
".quad 0x7225203436752e20,0x090a3b3e32313c64,0x33662e206765722e,0x3e33373c66252032\n"
".quad 0x206765722e090a3b,0x646625203436662e,0x2e090a3b3e39313c,0x6572702e20676572\n"
".quad 0x3b3e363c70252064,0x3109636f6c2e090a,0x0a30093037310936,0x6967656257444c24\n"
".quad 0x747330315a5f5f6e,0x6b636568635f7461,0x66665f535f536650,0x6c2e090a3a696666\n"
".quad 0x373109363109636f,0x747663090a300937,0x3631752e3233732e,0x25202c3172250920\n"
".quad 0x3b782e6469617463,0x7261702e646c090a,0x09203436752e6d61,0x5f5b202c31647225\n"
".quad 0x726170616475635f,0x747330315a5f5f6d,0x6b636568635f7461,0x66665f535f536650\n"
".quad 0x73585f675f696666,0x2e747663090a3b5d,0x203233732e343673,0x25202c3264722509\n"
".quad 0x6c756d090a3b3172,0x33732e656469772e,0x2c33647225092032,0x3b34202c31722520\n"
".quad 0x36752e646461090a,0x2c34647225092034,0x25202c3164722520,0x646c090a3b336472\n"
".quad 0x2e6c61626f6c672e,0x3166250920323366,0x2b346472255b202c,0x6f6c2e090a3b5d30\n"
".quad 0x3838310936310963,0x2e747663090a3009,0x203631752e323373,0x7425202c32722509\n"
".quad 0x63090a3b782e6469,0x752e3233732e7476,0x2c33722509203631,0x782e6469746e2520\n"
".quad 0x6c2e6c756d090a3b,0x2509203233732e6f,0x2c337225202c3472,0x61090a3b31722520\n"
".quad 0x09203233732e6464,0x327225202c357225,0x090a3b347225202c,0x2e3436732e747663\n"
".quad 0x6472250920323373,0x0a3b357225202c35,0x6469772e6c756d09,0x2509203233732e65\n"
".quad 0x357225202c366472,0x646c090a3b34202c,0x752e6d617261702e,0x3764722509203436\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x635f746174733031,0x5f5366506b636568\n"
".quad 0x5f69666666665f53,0x646461090a3b5d4b,0x722509203436752e,0x37647225202c3864\n"
".quad 0x0a3b36647225202c,0x626f6c672e646c09,0x09203233662e6c61,0x72255b202c326625\n"
".quad 0x090a3b5d302b3864,0x09363109636f6c2e,0x6c090a3009323931,0x2e6d617261702e64\n"
".quad 0x3366250920323366,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x635f746174733031\n"
".quad 0x5f5366506b636568,0x5f69666666665f53,0x766964090a3b5d4d,0x33662e6c6c75662e\n"
".quad 0x202c346625092032,0x336625202c316625,0x722e747663090a3b,0x33732e3233662e6e\n"
".quad 0x202c356625092032,0x756d090a3b327225,0x2509203233662e6c,0x2c336625202c3666\n"
".quad 0x6d090a3b33662520,0x09203233662e766f,0x336630202c376625,0x3b30303030303866\n"
".quad 0x2f2f092020202020,0x2e627573090a3120,0x3866250920323366,0x25202c376625202c\n"
".quad 0x766f6d090a3b3466,0x662509203233662e,0x3830346630202c39,0x20203b3030303030\n"
".quad 0x34202f2f09202020,0x33662e6c756d090a,0x2c30316625092032,0x6625202c38662520\n"
".quad 0x2e747663090a3b39,0x203233662e343666,0x25202c3164662509,0x2e646c090a3b3866\n"
".quad 0x33662e6d61726170,0x2c31316625092032,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x68635f7461747330,0x535f5366506b6365,0x535f69666666665f,0x3b5d74726174735f\n"
".quad 0x7261702e646c090a,0x09203233662e6d61,0x5f5b202c32316625,0x726170616475635f\n"
".quad 0x747330315a5f5f6d,0x6b636568635f7461,0x66665f535f536650,0x65645f535f696666\n"
".quad 0x6d090a3b5d61746c,0x09203233662e6461,0x6625202c33316625,0x2c32316625202c35\n"
".quad 0x090a3b3131662520,0x2e3436662e747663,0x6466250920323366,0x3b33316625202c32\n"
".quad 0x36662e747663090a,0x2509203233662e34,0x336625202c336466,0x662e766f6d090a3b\n"
".quad 0x3464662509203436,0x636666336430202c,0x3030306138666235,0x2f2f093b30303030\n"
".quad 0x35343237372e3120,0x36662e6c756d090a,0x2c35646625092034,0x25202c3364662520\n"
".quad 0x756d090a3b346466,0x2509203436662e6c,0x646625202c366466,0x3b35646625202c32\n"
".quad 0x6e722e706372090a,0x662509203436662e,0x36646625202c3764,0x662e766964090a3b\n"
".quad 0x203233662e6c6c75,0x25202c3431662509,0x366625202c303166,0x662e747663090a3b\n"
".quad 0x09203233662e3436,0x6625202c38646625,0x627573090a3b3431,0x662509203436662e\n"
".quad 0x37646625202c3964,0x0a3b38646625202c,0x3436662e6c756d09,0x2c30316466250920\n"
".quad 0x25202c3164662520,0x7663090a3b396466,0x3233662e6e722e74,0x662509203436662e\n"
".quad 0x31646625202c3531,0x632e646c090a3b30,0x3233662e74736e6f,0x202c363166250920\n"
".quad 0x3b5d72617657635b,0x6e6f632e646c090a,0x09203233662e7473,0x635b202c37316625\n"
".quad 0x0a3b5d6e61656d57,0x617261702e646c09,0x2509203233732e6d,0x635f5f5b202c3672\n"
".quad 0x5f6d726170616475,0x7461747330315a5f,0x66506b636568635f,0x666666665f535f53\n"
".quad 0x746e696f704e5f69,0x747663090a3b5d73,0x2e3233662e6e722e,0x3166250920323373\n"
".quad 0x0a3b367225202c38,0x3233662e6c756d09,0x202c393166250920,0x6625202c37316625\n"
".quad 0x6c756d090a3b3731,0x662509203233662e,0x35316625202c3032,0x0a3b39316625202c\n"
".quad 0x3233662e6c756d09,0x202c313266250920,0x316625202c386625,0x2e766964090a3b30\n"
".quad 0x3233662e6c6c7566,0x202c323266250920,0x6625202c31326625,0x2e64616d090a3b36\n"
".quad 0x3266250920323366,0x2c36316625202c33,0x25202c3232662520,0x616d090a3b303266\n"
".quad 0x2509203233662e64,0x316625202c343266,0x2c35316625202c36,0x090a3b3332662520\n"
".quad 0x203233662e6c756d,0x25202c3532662509,0x326625202c383166,0x636f6c2e090a3b34\n"
".quad 0x3933323109383109,0x74727173090a3009,0x2e786f727070612e,0x3266250920323366\n"
".quad 0x3b35326625202c36,0x36662e747663090a,0x2509203233662e34,0x6625202c31316466\n"
".quad 0x766f6d090a3b3632,0x662509203436662e,0x346430202c323164,0x3233396430343030\n"
".quad 0x3b30303030303030,0x30352e32202f2f09,0x6c756d090a333636,0x662509203436662e\n"
".quad 0x646625202c333164,0x31646625202c3131,0x2e747663090a3b32,0x662e3233662e6e72\n"
".quad 0x3732662509203436,0x3b3331646625202c,0x33662e766f6d090a,0x2c38326625092032\n"
".quad 0x3030303030663020,0x202020203b303030,0x73090a30202f2f09,0x33752e74672e7465\n"
".quad 0x2509203233662e32,0x37326625202c3772,0x0a3b38326625202c,0x3233732e67656e09\n"
".quad 0x25202c3872250920,0x766f6d090a3b3772,0x662509203233662e,0x66376630202c3932\n"
".quad 0x203b303030303038,0x28202f2f09202020,0x282f2946302e3128,0x090a292946302e30\n"
".quad 0x752e746c2e746573,0x09203233662e3233,0x326625202c397225,0x3b39326625202c37\n"
".quad 0x33732e67656e090a,0x2c30317225092032,0x61090a3b39722520,0x09203233622e646e\n"
".quad 0x7225202c31317225,0x3b30317225202c38,0x33752e766f6d090a,0x2c32317225092032\n"
".quad 0x746573090a3b3020,0x3233732e71652e70,0x25202c3170250920,0x317225202c313172\n"
".quad 0x31702540090a3b32,0x4c24092061726220,0x343730335f345f74,0x09636f6c2e090a3b\n"
".quad 0x0930353231093831,0x622e766f6d090a30,0x3331722509203233,0x0a3b37326625202c\n"
".quad 0x3233622e646e6109,0x202c343172250920,0x322d202c33317225,0x3430353930393331\n"
".quad 0x622e726f090a3b31,0x3531722509203233,0x202c34317225202c,0x3233353335363031\n"
".quad 0x766f6d090a3b3631,0x662509203233622e,0x35317225202c3033,0x662e766f6d090a3b\n"
".quad 0x3133662509203233,0x0a3b30336625202c,0x383109636f6c2e09,0x0a30093135323109\n"
".quad 0x3233752e72687309,0x202c363172250920,0x3332202c33317225,0x752e627573090a3b\n"
".quad 0x3731722509203233,0x202c36317225202c,0x6f6d090a3b373231,0x2509203233662e76\n"
".quad 0x336630202c323366,0x3b33663430356266,0x202f2f0920202020,0x0a31323431342e31\n"
".quad 0x74672e7074657309,0x702509203233662e,0x2c30336625202c32,0x090a3b3233662520\n"
".quad 0x7262203270252140,0x345f744c24092061,0x090a3b343533345f,0x09383109636f6c2e\n"
".quad 0x090a300933353231,0x203233662e766f6d,0x30202c3333662509,0x3030303030663366\n"
".quad 0x2f09202020203b30,0x6d090a352e30202f,0x09203233662e6c75,0x6625202c31336625\n"
".quad 0x33336625202c3033,0x09636f6c2e090a3b,0x0934353231093831,0x732e646461090a30\n"
".quad 0x3731722509203233,0x202c37317225202c,0x345f744c240a3b31,0x090a3a343533345f\n"
".quad 0x09383109636f6c2e,0x090a300935373131,0x203233662e766f6d,0x30202c3433662509\n"
".quad 0x3030303038666266,0x2f09202020203b30,0x6461090a312d202f,0x2509203233662e64\n"
".quad 0x336625202c353366,0x3b34336625202c31,0x33662e766f6d090a,0x2c36336625092032\n"
".quad 0x3030386633663020,0x202020203b303030,0x61090a31202f2f09,0x09203233662e6464\n"
".quad 0x6625202c37336625,0x36336625202c3133,0x612e766964090a3b,0x33662e786f727070\n"
".quad 0x2c38336625092032,0x25202c3533662520,0x756d090a3b373366,0x2509203233662e6c\n"
".quad 0x336625202c393366,0x3b38336625202c35,0x33662e627573090a,0x2c30346625092032\n"
".quad 0x25202c3533662520,0x756d090a3b393366,0x2509203233662e6c,0x346625202c313466\n"
".quad 0x3b30346625202c30,0x33662e766f6d090a,0x2c32346625092032,0x6161616433663020\n"
".quad 0x202020203b303562,0x38302e30202f2f09,0x6d090a3634333333,0x09203233662e766f\n"
".quad 0x6630202c33346625,0x3065623463346333,0x2f2f09202020203b,0x36343231302e3020\n"
".quad 0x2e766f6d090a3339,0x3466250920323366,0x3262336630202c34,0x20203b3363333630\n"
".quad 0x2e30202f2f092020,0x3533373434323030,0x33662e64616d090a,0x2c35346625092032\n"
".quad 0x25202c3434662520,0x346625202c313466,0x2e64616d090a3b33,0x3466250920323366\n"
".quad 0x2c31346625202c36,0x25202c3534662520,0x756d090a3b323466,0x2509203233662e6c\n"
".quad 0x346625202c373466,0x3b36346625202c31,0x33662e6c756d090a,0x2c38346625092032\n"
".quad 0x25202c3034662520,0x7573090a3b373466,0x2509203233662e62,0x346625202c393466\n"
".quad 0x3b39336625202c38,0x33662e646461090a,0x2c30356625092032,0x25202c3533662520\n"
".quad 0x6f6d090a3b393466,0x2509203233662e76,0x336630202c313566,0x3b38313237313366\n"
".quad 0x202f2f0920202020,0x3734313339362e30,0x6e722e747663090a,0x3233732e3233662e\n"
".quad 0x202c323566250920,0x6d090a3b37317225,0x09203233662e6461,0x6625202c33356625\n"
".quad 0x32356625202c3135,0x0a3b30356625202c,0x383109636f6c2e09,0x0a30093236323109\n"
".quad 0x3233662e766f6d09,0x202c343566250920,0x62090a3b33356625,0x0920696e752e6172\n"
".quad 0x69646e6557444c24,0x7265746e695f5f5f,0x64616d665f6c616e,0x0a3b315f3730325f\n"
".quad 0x30335f345f744c24,0x6f6c2e090a3a3437,0x3632310938310963,0x32676c090a300935\n"
".quad 0x2e786f727070612e,0x3566250920323366,0x3b37326625202c35,0x33662e766f6d090a\n"
".quad 0x2c36356625092032,0x3731336633663020,0x202020203b383132,0x39362e30202f2f09\n"
".quad 0x756d090a37343133,0x2509203233662e6c,0x356625202c343566,0x3b36356625202c35\n"
".quad 0x646e6557444c240a,0x65746e695f5f5f69,0x616d665f6c616e72,0x3a315f3730325f64\n"
".quad 0x3109636f6c2e090a,0x0a30093439310936,0x3233662e64646109,0x202c373566250920\n"
".quad 0x386625202c386625,0x09636f6c2e090a3b,0x3009323931093631,0x7261702e646c090a\n"
".quad 0x09203233662e6d61,0x5f5f5b202c336625,0x6d72617061647563,0x61747330315a5f5f\n"
".quad 0x506b636568635f74,0x6666665f535f5366,0x090a3b5d4d5f6966,0x09363109636f6c2e\n"
".quad 0x64090a3009343931,0x2e6c6c75662e7669,0x3566250920323366,0x2c37356625202c38\n"
".quad 0x6c090a3b33662520,0x2e74736e6f632e64,0x3566250920323366,0x757357635b202c39\n"
".quad 0x6c756d090a3b5d6d,0x662509203233662e,0x39356625202c3036,0x0a3b38356625202c\n"
".quad 0x3233662e62757309,0x202c313666250920,0x366625202c326625,0x2e747663090a3b30\n"
".quad 0x203233662e343666,0x202c343164662509,0x6d090a3b34356625,0x09203233662e6c75\n"
".quad 0x6625202c32366625,0x31366625202c3136,0x662e646461090a3b,0x3336662509203233\n"
".quad 0x202c36326625202c,0x6d090a3b36326625,0x09203233662e6c75,0x6625202c34366625\n"
".quad 0x33366625202c3632,0x662e766964090a3b,0x203233662e6c6c75,0x25202c3536662509\n"
".quad 0x366625202c323666,0x2e747663090a3b34,0x203233662e343666,0x202c353164662509\n"
".quad 0x61090a3b35366625,0x09203436662e6464,0x25202c3631646625,0x6625202c34316466\n"
".quad 0x656e090a3b353164,0x2509203436662e67,0x6625202c37316466,0x7663090a3b363164\n"
".quad 0x3233662e6e722e74,0x662509203436662e,0x31646625202c3636,0x636f6c2e090a3b37\n"
".quad 0x0935393109363109,0x732e726162090a30,0x0a3b300920636e79,0x363109636f6c2e09\n"
".quad 0x090a300936393109,0x203233662e766f6d,0x30202c3736662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x746573090a30202f,0x3233662e746c2e70,0x25202c3370250920\n"
".quad 0x326625202c303666,0x2e706c6573090a3b,0x3666250920323366,0x2c36366625202c38\n"
".quad 0x25202c3736662520,0x766f6d090a3b3370,0x662509203233662e,0x30306630202c3936\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x7261702e646c090a,0x09203233662e6d61\n"
".quad 0x5f5b202c30376625,0x726170616475635f,0x747330315a5f5f6d,0x6b636568635f7461\n"
".quad 0x66665f535f536650,0x68706c615f696666,0x746573090a3b5d61,0x3233662e74672e70\n"
".quad 0x25202c3470250920,0x366625202c303766,0x706c6573090a3b36,0x662509203233662e\n"
".quad 0x38366625202c3137,0x202c39366625202c,0x646c090a3b347025,0x752e6d617261702e\n"
".quad 0x3964722509203436,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x635f746174733031\n"
".quad 0x5f5366506b636568,0x5f69666666665f53,0x3b5d66696e676953,0x36752e646461090a\n"
".quad 0x3031647225092034,0x202c39647225202c,0x73090a3b36647225,0x6c61626f6c672e74\n"
".quad 0x255b09203233662e,0x2c5d302b30316472,0x090a3b3137662520,0x09363109636f6c2e\n"
".quad 0x65090a3009373931,0x444c240a3b746978,0x315a5f5f646e6557,0x68635f7461747330\n"
".quad 0x535f5366506b6365,0x0a3a69666666665f,0x5a5f202f2f207d09,0x635f746174733031\n"
".quad 0x5f5366506b636568,0x0a69666666665f53,0x000000000000000a\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_10$[2963];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_10",(char*)__deviceText_$compute_10$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_10", (char*)__deviceText_$sm_10$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_10$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0x2e00b786,(char*)"679f0aa826461efb",(char*)"mexD_CMP.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x2ecc25d7,&__elfEntries1};
# 3 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c" 2
struct __T20 {float *__par0;float *__par1;int __par2;int __dummy_field;};
struct __T21 {float *__par0;float *__par1;float __par2;int __par3;int __dummy_field;};
struct __T22 {float *__par0;float *__par1;float *__par2;int __par3;int __par4;float __par5;float __par6;int __dummy_field;};
struct __T23 {float *__par0;float *__par1;float *__par2;float *__par3;float *__par4;int __par5;int __par6;int __dummy_field;};
struct __T24 {float *__par0;float *__par1;float *__par2;float __par3;float __par4;float __par5;float __par6;int __par7;int __dummy_field;};
extern void __device_stub__Z7reduce5PfS_i(float *, float *, int);
extern void __device_stub__Z24arr_minus_scalar_squaredPfS_fi(float *, float *, float, int);
extern void __device_stub__Z16compute_mu_sigmaPfS_S_iiff(float *, float *, float *, int, int, float, float);
extern void __device_stub__Z20compute_max_mu_sigmaPfS_S_S_S_ii(float *, float *, float *, float *, float *, int, int);
extern void __device_stub__Z10stat_checkPfS_S_ffffi(float *, float *, float *, float, float, float, float, int);
static void __sti____cudaRegisterAll_43_tmpxft_00000ea8_00000000_4_mexD_CMP_cpp1_ii_9b8ae426(void) __attribute__((__constructor__));
void __device_stub__Z7reduce5PfS_i(float *__par0, float *__par1, int __par2){ struct __T20 *__T25 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T25->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T25->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T25->__par2) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, int))reduce5)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, int))reduce5))); };}
void reduce5( float *__cuda_0,float *__cuda_1,int __cuda_2)
# 13 "mexD_CMP.cu"
{__device_stub__Z7reduce5PfS_i( __cuda_0,__cuda_1,__cuda_2);
# 34 "mexD_CMP.cu"
}
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c"
void __device_stub__Z24arr_minus_scalar_squaredPfS_fi( float *__par0, float *__par1, float __par2, int __par3) { struct __T21 *__T210 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T210->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T210->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T210->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T210->__par3) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, float, int))arr_minus_scalar_squared)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, float, int))arr_minus_scalar_squared))); }; }
void arr_minus_scalar_squared( float *__cuda_0,float *__cuda_1,float __cuda_2,int __cuda_3)
# 67 "mexD_CMP.cu"
{__device_stub__Z24arr_minus_scalar_squaredPfS_fi( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 74 "mexD_CMP.cu"
}
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c"
void __device_stub__Z16compute_mu_sigmaPfS_S_iiff( float *__par0, float *__par1, float *__par2, int __par3, int __par4, float __par5, float __par6) { struct __T22 *__T211 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T211->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T211->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T211->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T211->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T211->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T211->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T211->__par6) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, float *, int, int, float, float))compute_mu_sigma)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, float *, int, int, float, float))compute_mu_sigma))); }; }
void compute_mu_sigma( float *__cuda_0,float *__cuda_1,float *__cuda_2,int __cuda_3,int __cuda_4,float __cuda_5,float __cuda_6)
# 77 "mexD_CMP.cu"
{__device_stub__Z16compute_mu_sigmaPfS_S_iiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 118 "mexD_CMP.cu"
}
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c"
void __device_stub__Z20compute_max_mu_sigmaPfS_S_S_S_ii( float *__par0, float *__par1, float *__par2, float *__par3, float *__par4, int __par5, int __par6) { struct __T23 *__T212 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T212->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T212->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T212->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T212->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T212->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T212->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T212->__par6) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, float *, float *, float *, int, int))compute_max_mu_sigma)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, float *, float *, float *, int, int))compute_max_mu_sigma))); }; }
void compute_max_mu_sigma( float *__cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,int __cuda_5,int __cuda_6)
# 121 "mexD_CMP.cu"
{__device_stub__Z20compute_max_mu_sigmaPfS_S_S_S_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 167 "mexD_CMP.cu"
}
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c"
void __device_stub__Z10stat_checkPfS_S_ffffi( float *__par0, float *__par1, float *__par2, float __par3, float __par4, float __par5, float __par6, int __par7) { struct __T24 *__T213 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T213->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T213->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T213->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T213->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T213->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T213->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T213->__par6) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T213->__par7) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, float *, float, float, float, float, int))stat_check)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, float *, float, float, float, float, int))stat_check))); }; }
void stat_check( float *__cuda_0,float *__cuda_1,float *__cuda_2,float __cuda_3,float __cuda_4,float __cuda_5,float __cuda_6,int __cuda_7)
# 171 "mexD_CMP.cu"
{__device_stub__Z10stat_checkPfS_S_ffffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7);
# 197 "mexD_CMP.cu"
}
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c"
static void __sti____cudaRegisterAll_43_tmpxft_00000ea8_00000000_4_mexD_CMP_cpp1_ii_9b8ae426(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, float *, float, float, float, float, int))stat_check), (char*)"_Z10stat_checkPfS_S_ffffi", "_Z10stat_checkPfS_S_ffffi", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, float *, float *, float *, int, int))compute_max_mu_sigma), (char*)"_Z20compute_max_mu_sigmaPfS_S_S_S_ii", "_Z20compute_max_mu_sigmaPfS_S_S_S_ii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, float *, int, int, float, float))compute_mu_sigma), (char*)"_Z16compute_mu_sigmaPfS_S_iiff", "_Z16compute_mu_sigmaPfS_S_iiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, float, int))arr_minus_scalar_squared), (char*)"_Z24arr_minus_scalar_squaredPfS_fi", "_Z24arr_minus_scalar_squaredPfS_fi", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, int))reduce5), (char*)"_Z7reduce5PfS_i", "_Z7reduce5PfS_i", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&cWsum, (char*)"cWsum", "cWsum", 0, 4, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&cWmean, (char*)"cWmean", "cWmean", 0, 4, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&cWvar, (char*)"cWvar", "cWvar", 0, 4, 1, 0); }
# 1 "/tmp/tmpxft_00000ea8_00000000-1_mexD_CMP.cudafe1.stub.c" 2
