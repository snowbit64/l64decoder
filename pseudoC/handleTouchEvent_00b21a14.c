// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleTouchEvent
// Entry Point: 00b21a14
// Size: 820 bytes
// Signature: undefined __thiscall handleTouchEvent(AndroidInputDevice * this, TouchInputEvent * param_1)


/* AndroidInputDevice::handleTouchEvent(AndroidInputDevice::TouchInputEvent&) */

void __thiscall
AndroidInputDevice::handleTouchEvent(AndroidInputDevice *this,TouchInputEvent *param_1)

{
  size_t sVar1;
  void *__dest;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  void *__src;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 5:
    (***(code ***)this)(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 8),this,*(undefined4 *)(param_1 + 0x10));
    piVar3 = *(int **)(this + 0x1578);
    __src = *(void **)(this + 0x1570);
    iVar7 = *(int *)(param_1 + 0x10);
    uVar8 = (long)piVar3 - (long)__src;
    uVar9 = (long)uVar8 >> 3;
    if (uVar8 != 0) {
      uVar5 = 0;
      do {
        if (*(int *)((long)__src + uVar5 * 8) == iVar7) {
          return;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < uVar9);
    }
    if (piVar3 == *(int **)(this + 0x1580)) {
      uVar5 = uVar9 + 1;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar5 <= (ulong)((long)uVar8 >> 2)) {
        uVar5 = (long)uVar8 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar5 * 8);
      piVar3 = (int *)((long)__dest + uVar9 * 8);
      *piVar3 = iVar7;
      piVar3[1] = 0;
      if (0 < (long)uVar8) {
        memcpy(__dest,__src,uVar8);
      }
      *(void **)(this + 0x1570) = __dest;
      *(int **)(this + 0x1578) = piVar3 + 2;
      *(void **)(this + 0x1580) = (void *)((long)__dest + uVar5 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *piVar3 = iVar7;
      piVar3[1] = 0;
      *(int **)(this + 0x1578) = piVar3 + 2;
    }
    break;
  case 1:
  case 6:
    if (*(int *)(param_1 + 0x10) == *(int *)(this + 0x14b0)) {
      dVar13 = *(double *)(param_1 + 8);
      fVar10 = *(float *)(param_1 + 0x14);
      fVar12 = *(float *)(param_1 + 0x18);
      fVar14 = ABS(*(float *)(this + 0x14b8) - fVar12);
      if (ABS(*(float *)(this + 0x14b8) - fVar12) <= ABS(*(float *)(this + 0x14b4) - fVar10)) {
        fVar14 = ABS(*(float *)(this + 0x14b4) - fVar10);
      }
      bVar2 = (long)(((dVar13 - (double)*(long *)(this + 0x14c0)) / 1000.0) / 1000.0) < 0x15e &&
              fVar14 < 0.02;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x14);
      fVar12 = *(float *)(param_1 + 0x18);
      dVar13 = *(double *)(param_1 + 8);
      bVar2 = false;
    }
    (**(code **)(*(long *)this + 0x10))(fVar10,fVar12,dVar13,this,*(int *)(param_1 + 0x10),bVar2);
    dVar13 = *(double *)(param_1 + 8);
    lVar6 = *(long *)(this + 0x1578);
    lVar4 = *(long *)(this + 0x1570);
    iVar7 = *(int *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x14);
    *(int *)(this + 0x14b0) = iVar7;
    *(undefined8 *)(this + 0x14b4) = uVar11;
    *(long *)(this + 0x14c0) = (long)dVar13;
    if (lVar6 != lVar4) {
      uVar8 = 0;
      while( true ) {
        piVar3 = (int *)(lVar4 + uVar8 * 8);
        if (*piVar3 == iVar7) {
          sVar1 = lVar6 - (long)(piVar3 + 2);
          if (sVar1 != 0) {
            memmove(piVar3,piVar3 + 2,sVar1);
            lVar4 = *(long *)(this + 0x1570);
          }
          lVar6 = (long)piVar3 + sVar1;
          *(long *)(this + 0x1578) = lVar6;
        }
        uVar8 = (ulong)((int)uVar8 + 1);
        if ((ulong)(lVar6 - lVar4 >> 3) <= uVar8) break;
        iVar7 = *(int *)(param_1 + 0x10);
      }
    }
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00b21b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))
              (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 8),this,*(undefined4 *)(param_1 + 0x10));
    return;
  case 3:
    (**(code **)(*(long *)this + 0x18))(this,*(undefined4 *)(param_1 + 0x10));
    lVar6 = *(long *)(this + 0x1578);
    lVar4 = *(long *)(this + 0x1570);
    if (lVar6 != lVar4) {
      uVar8 = 0;
      do {
        piVar3 = (int *)(lVar4 + uVar8 * 8);
        if (*piVar3 == *(int *)(param_1 + 0x10)) {
          sVar1 = lVar6 - (long)(piVar3 + 2);
          if (sVar1 != 0) {
            memmove(piVar3,piVar3 + 2,sVar1);
            lVar4 = *(long *)(this + 0x1570);
          }
          lVar6 = (long)piVar3 + sVar1;
          *(long *)(this + 0x1578) = lVar6;
        }
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(lVar6 - lVar4 >> 3));
    }
  }
  return;
}


