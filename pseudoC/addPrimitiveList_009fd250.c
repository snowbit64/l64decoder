// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPrimitiveList
// Entry Point: 009fd250
// Size: 304 bytes
// Signature: undefined __thiscall addPrimitiveList(DeferredDebugRenderer * this, float * param_1, PRIMITIVE_TYPE param_2, uint param_3, CATEGORY param_4, bool param_5)


/* DeferredDebugRenderer::addPrimitiveList(float const*, ICommandBuffer::PRIMITIVE_TYPE, unsigned
   int, DeferredDebugRenderer::CATEGORY, bool) */

void __thiscall
DeferredDebugRenderer::addPrimitiveList
          (DeferredDebugRenderer *this,float *param_1,PRIMITIVE_TYPE param_2,uint param_3,
          CATEGORY param_4,bool param_5)

{
  ulong uVar1;
  float **ppfVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  if ((*(uint *)(this + 0x2a0) & param_4) != 0) {
    if (!param_5) {
      this = this + 0xf0;
    }
    ppfVar2 = *(float ***)(this + 0x68);
    if (ppfVar2 == *(float ***)(this + 0x70)) {
      __src = *(void **)(this + 0x60);
      __n = (long)ppfVar2 - (long)__src;
      uVar1 = ((long)__n >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 3)) {
        uVar1 = (long)__n >> 3;
      }
      if (0x7fffffffffffffef < __n) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 * 0x10);
      ppfVar2 = (float **)((long)__dest + ((long)__n >> 4) * 0x10);
      *ppfVar2 = param_1;
      *(uint *)(ppfVar2 + 1) = param_3;
      *(PRIMITIVE_TYPE *)((long)ppfVar2 + 0xc) = param_2;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x60) = __dest;
      *(float ***)(this + 0x68) = ppfVar2 + 2;
      *(void **)(this + 0x70) = (void *)((long)__dest + uVar1 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *ppfVar2 = param_1;
      *(uint *)(ppfVar2 + 1) = param_3;
      *(PRIMITIVE_TYPE *)((long)ppfVar2 + 0xc) = param_2;
      *(float ***)(this + 0x68) = ppfVar2 + 2;
    }
  }
  return;
}


