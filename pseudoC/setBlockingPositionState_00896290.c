// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlockingPositionState
// Entry Point: 00896290
// Size: 484 bytes
// Signature: undefined __thiscall setBlockingPositionState(PedestrianSystem * this, uint param_1, float param_2, float param_3, bool param_4)


/* PedestrianSystem::setBlockingPositionState(unsigned int, float, float, bool) */

void __thiscall
PedestrianSystem::setBlockingPositionState
          (PedestrianSystem *this,uint param_1,float param_2,float param_3,bool param_4)

{
  long lVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  float **ppfVar7;
  ulong uVar8;
  
  uVar2 = (ulong)param_1;
  if (param_4) {
    ppfVar7 = (float **)(this + uVar2 * 0x80 + 0x78);
    pfVar3 = *ppfVar7;
    __src = *(void **)(this + uVar2 * 0x80 + 0x70);
    uVar6 = (long)pfVar3 - (long)__src;
    uVar8 = (long)uVar6 >> 3;
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        if (ABS(*(float *)((long)__src + uVar5 * 8) - param_2) < 0.0001) {
          *(float *)((long)__src + uVar5 * 8 + 4) = param_3;
          return;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < uVar8);
    }
    if (pfVar3 == *(float **)(this + uVar2 * 0x80 + 0x80)) {
      uVar5 = uVar8 + 1;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar5 <= (ulong)((long)uVar6 >> 2)) {
        uVar5 = (long)uVar6 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar5 * 8);
      pfVar3 = (float *)((long)__dest + uVar8 * 8);
      *pfVar3 = param_2;
      pfVar3[1] = param_3;
      if (0 < (long)uVar6) {
        memcpy(__dest,__src,uVar6);
      }
      *(void **)(this + uVar2 * 0x80 + 0x70) = __dest;
      *ppfVar7 = pfVar3 + 2;
      *(float **)(this + uVar2 * 0x80 + 0x80) = (float *)((long)__dest + uVar5 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *pfVar3 = param_2;
      pfVar3[1] = param_3;
      *ppfVar7 = pfVar3 + 2;
    }
  }
  else {
    lVar4 = *(long *)(this + uVar2 * 0x80 + 0x78);
    lVar1 = lVar4 - *(long *)(this + uVar2 * 0x80 + 0x70);
    if (lVar1 != 0) {
      uVar6 = 0;
      do {
        pfVar3 = (float *)(*(long *)(this + uVar2 * 0x80 + 0x70) + uVar6 * 8);
        if (ABS(*pfVar3 - param_2) < 0.0001) {
          __n = lVar4 - (long)(pfVar3 + 2);
          if (__n != 0) {
            memmove(pfVar3,pfVar3 + 2,__n);
          }
          *(size_t *)(this + uVar2 * 0x80 + 0x78) = (long)pfVar3 + __n;
          return;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(lVar1 >> 3));
    }
  }
  return;
}


