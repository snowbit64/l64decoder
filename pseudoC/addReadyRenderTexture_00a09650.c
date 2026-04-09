// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addReadyRenderTexture
// Entry Point: 00a09650
// Size: 376 bytes
// Signature: undefined __thiscall addReadyRenderTexture(RenderController * this, bool param_1, vector * param_2)


/* RenderController::addReadyRenderTexture(bool, std::__ndk1::vector<RenderTextureSetup*,
   std::__ndk1::allocator<RenderTextureSetup*> >&) */

bool __thiscall
RenderController::addReadyRenderTexture(RenderController *this,bool param_1,vector *param_2)

{
  uint uVar1;
  bool bVar2;
  void *__dest;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  
  uVar1 = *(uint *)(this + 0x248);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = 0;
    bVar2 = true;
    do {
      lVar6 = *(long *)(*(long *)(this + 0x230) + uVar3 * 8);
      if ((*(char *)(lVar6 + 0xa8) == '\0') && ((bool)*(char *)(lVar6 + 0xa9) == param_1)) {
        plVar4 = *(long **)(lVar6 + 0x90);
        uVar5 = *(long *)(lVar6 + 0x98) - (long)plVar4;
        if ((int)(uVar5 >> 3) == 0) {
LAB_00a096e0:
          plVar4 = *(long **)(param_2 + 8);
          if (plVar4 == *(long **)(param_2 + 0x10)) {
            __src = *(void **)param_2;
            uVar5 = (long)plVar4 - (long)__src;
            uVar3 = ((long)uVar5 >> 3) + 1;
            if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar3 <= (ulong)((long)uVar5 >> 2)) {
              uVar3 = (long)uVar5 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar5) {
              uVar3 = 0x1fffffffffffffff;
            }
            if (uVar3 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar3 << 3);
            }
            plVar4 = (long *)((long)__dest + ((long)uVar5 >> 3) * 8);
            *plVar4 = lVar6;
            if (0 < (long)uVar5) {
              memcpy(__dest,__src,uVar5);
            }
            *(void **)param_2 = __dest;
            *(long **)(param_2 + 8) = plVar4 + 1;
            *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar3 * 8);
            if (__src != (void *)0x0) {
              operator_delete(__src);
            }
          }
          else {
            *plVar4 = lVar6;
            *(long **)(param_2 + 8) = plVar4 + 1;
          }
          *(undefined *)(lVar6 + 0xa8) = 1;
          return bVar2;
        }
        uVar5 = uVar5 >> 3 & 0xffffffff;
        while (*(char *)(*plVar4 + 0xa8) != '\0') {
          plVar4 = plVar4 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_00a096e0;
        }
      }
      uVar3 = uVar3 + 1;
      bVar2 = uVar3 < uVar1;
    } while (uVar3 != uVar1);
  }
  return bVar2;
}


