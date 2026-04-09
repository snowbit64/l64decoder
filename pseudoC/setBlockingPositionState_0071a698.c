// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlockingPositionState
// Entry Point: 0071a698
// Size: 484 bytes
// Signature: undefined __thiscall setBlockingPositionState(TrafficSystem * this, uint param_1, float param_2, bool param_3)


/* TrafficSystem::setBlockingPositionState(unsigned int, float, bool) */

void __thiscall
TrafficSystem::setBlockingPositionState(TrafficSystem *this,uint param_1,float param_2,bool param_3)

{
  ulong __n;
  size_t __n_00;
  void *__dest;
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  void *__src;
  long lVar4;
  void **ppvVar5;
  long *plVar6;
  long lVar7;
  float **ppfVar8;
  ulong uVar9;
  ulong uVar10;
  float **ppfVar11;
  float fVar12;
  
  lVar7 = *(long *)(this + 0x4ca0);
  uVar10 = (ulong)param_1;
  fVar12 = (float)Spline::getLength();
  if (param_3) {
    lVar4 = lVar7 + uVar10 * 0x88;
    ppvVar5 = (void **)(lVar4 + 0x58);
    __src = *ppvVar5;
    ppfVar8 = (float **)(lVar4 + 0x60);
    pfVar1 = *ppfVar8;
    __n = (long)pfVar1 - (long)__src;
    uVar9 = (long)__n >> 2;
    if (__n != 0) {
      uVar2 = 0;
      do {
        if (ABS(*(float *)((long)__src + uVar2 * 4) - param_2) <= 0.5 / fVar12) {
          return;
        }
        uVar2 = (ulong)((int)uVar2 + 1);
      } while (uVar2 < uVar9);
    }
    ppfVar11 = (float **)(lVar7 + uVar10 * 0x88 + 0x68);
    if (pfVar1 == *ppfVar11) {
      uVar10 = uVar9 + 1;
      if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar10 <= (ulong)((long)__n >> 1)) {
        uVar10 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar10 << 2);
      }
      pfVar1 = (float *)((long)__dest + uVar9 * 4);
      *pfVar1 = param_2;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *ppvVar5 = __dest;
      *ppfVar8 = pfVar1 + 1;
      *ppfVar11 = (float *)((long)__dest + uVar10 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *pfVar1 = param_2;
      *ppfVar8 = pfVar1 + 1;
    }
  }
  else {
    lVar7 = lVar7 + uVar10 * 0x88;
    plVar6 = (long *)(lVar7 + 0x60);
    lVar4 = *plVar6;
    lVar3 = *(long *)(lVar7 + 0x58);
    lVar7 = lVar4 - lVar3;
    if (lVar7 != 0) {
      uVar10 = 0;
      do {
        pfVar1 = (float *)(lVar3 + uVar10 * 4);
        if (ABS(*pfVar1 - param_2) <= 0.5 / fVar12) {
          __n_00 = lVar4 - (long)(pfVar1 + 1);
          if (__n_00 != 0) {
            memmove(pfVar1,pfVar1 + 1,__n_00);
          }
          *plVar6 = (long)pfVar1 + __n_00;
          return;
        }
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (uVar10 < (ulong)(lVar7 >> 2));
    }
  }
  return;
}


