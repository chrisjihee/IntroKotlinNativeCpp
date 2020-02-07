#ifndef KONAN_LIBSAMPLE_H
#define KONAN_LIBSAMPLE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libsample_KBoolean;
#else
typedef _Bool           libsample_KBoolean;
#endif
typedef unsigned short     libsample_KChar;
typedef signed char        libsample_KByte;
typedef short              libsample_KShort;
typedef int                libsample_KInt;
typedef long long          libsample_KLong;
typedef unsigned char      libsample_KUByte;
typedef unsigned short     libsample_KUShort;
typedef unsigned int       libsample_KUInt;
typedef unsigned long long libsample_KULong;
typedef float              libsample_KFloat;
typedef double             libsample_KDouble;
typedef void*              libsample_KNativePtr;
struct libsample_KType;
typedef struct libsample_KType libsample_KType;

typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Byte;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Short;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Int;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Long;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Float;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Double;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Char;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Boolean;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Unit;
typedef struct {
  libsample_KNativePtr pinned;
} libsample_kref_kotlin_Array;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libsample_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libsample_KBoolean (*IsInstance)(libsample_KNativePtr ref, const libsample_KType* type);
  libsample_kref_kotlin_Byte (*createNullableByte)(libsample_KByte);
  libsample_kref_kotlin_Short (*createNullableShort)(libsample_KShort);
  libsample_kref_kotlin_Int (*createNullableInt)(libsample_KInt);
  libsample_kref_kotlin_Long (*createNullableLong)(libsample_KLong);
  libsample_kref_kotlin_Float (*createNullableFloat)(libsample_KFloat);
  libsample_kref_kotlin_Double (*createNullableDouble)(libsample_KDouble);
  libsample_kref_kotlin_Char (*createNullableChar)(libsample_KChar);
  libsample_kref_kotlin_Boolean (*createNullableBoolean)(libsample_KBoolean);
  libsample_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        const char* (*hello)();
        const char* (*hi)(const char* a);
        void (*main)(libsample_kref_kotlin_Array args);
        libsample_KInt (*plus1)(libsample_KInt x);
      } sample;
    } root;
  } kotlin;
} libsample_ExportedSymbols;
extern libsample_ExportedSymbols* libsample_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBSAMPLE_H */
