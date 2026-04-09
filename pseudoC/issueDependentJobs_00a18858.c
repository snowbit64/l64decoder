// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueDependentJobs
// Entry Point: 00a18858
// Size: 312 bytes
// Signature: undefined issueDependentJobs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderList::issueDependentJobs() */

void RenderList::issueDependentJobs(void)

{
  ulong uVar1;
  long *plVar2;
  long in_x0;
  long lVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (((*(float *)(*(long *)(*(long *)(in_x0 + 0x20) + 0x30) + 8) != 0.0) &&
      ((*(byte *)(*(long *)(in_x0 + 0x28) + 0x3a8) >> 4 & 1) != 0)) &&
     (lVar3 = ShadowRenderController::issueShadowMapJobs
                        ((ShadowRenderController *)(in_x0 + 0x2d8),
                         (vector *)(*(long *)(in_x0 + 0x30) + 0x18),
                         (vector *)(*(long *)(in_x0 + 0x30) + 0x98)), lVar3 != 0)) {
    plVar2 = *(long **)(in_x0 + 0x40);
    if (plVar2 == *(long **)(in_x0 + 0x48)) {
      __src = *(void **)(in_x0 + 0x38);
      __n = (long)plVar2 - (long)__src;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 2)) {
        uVar1 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 3);
      }
      plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
      *plVar2 = lVar3;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(in_x0 + 0x38) = __dest;
      *(long **)(in_x0 + 0x40) = plVar2 + 1;
      *(void **)(in_x0 + 0x48) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *plVar2 = lVar3;
      *(long **)(in_x0 + 0x40) = plVar2 + 1;
    }
  }
  return;
}


