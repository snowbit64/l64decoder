// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shrink_to_fit
// Entry Point: 008cf8b4
// Size: 164 bytes
// Signature: undefined shrink_to_fit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::vector<FillPlaneGeometry::VertexFormat,
   std::__ndk1::allocator<FillPlaneGeometry::VertexFormat> >::shrink_to_fit() */

void std::__ndk1::
     vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>
     ::shrink_to_fit(void)

{
  void *pvVar1;
  void **in_x0;
  void *__dest;
  void *__src;
  ulong __n;
  
  __src = *in_x0;
  __n = (long)in_x0[1] - (long)__src;
  if ((ulong)((long)__n >> 5) < (ulong)((long)in_x0[2] - (long)__src >> 5)) {
    if (__n == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)__n < 0) {
                    /* try { // try from 008cf938 to 008cf943 has its CatchHandler @ 008cf944 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008cf8f0 to 008cf8f7 has its CatchHandler @ 008cf944 */
      __dest = operator_new(__n);
      memcpy(__dest,__src,__n);
    }
    pvVar1 = (void *)((long)__dest + ((long)__n >> 5) * 0x20);
    *in_x0 = __dest;
    in_x0[1] = pvVar1;
    in_x0[2] = pvVar1;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


