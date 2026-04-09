// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reloadCellsDelayed
// Entry Point: 00a6ef60
// Size: 496 bytes
// Signature: undefined __thiscall reloadCellsDelayed(LocalGeometryTransformGroup * this, int param_1, int param_2, uint param_3, uint param_4, bool param_5)


/* LocalGeometryTransformGroup::reloadCellsDelayed(int, int, unsigned int, unsigned int, bool) */

void __thiscall
LocalGeometryTransformGroup::reloadCellsDelayed
          (LocalGeometryTransformGroup *this,int param_1,int param_2,uint param_3,uint param_4,
          bool param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *__dest;
  void *__src;
  int iVar8;
  ulong __n;
  int iVar9;
  
  iVar8 = *(int *)(this + 400);
  iVar9 = param_1 - *(int *)(this + 0x194);
  iVar5 = (param_3 + param_1) - *(int *)(this + 0x194);
  iVar6 = param_2 - *(int *)(this + 0x198);
  iVar3 = iVar9;
  if (iVar8 <= iVar9) {
    iVar3 = iVar8 + -1;
  }
  iVar2 = 0;
  if (-1 < iVar9) {
    iVar2 = iVar3;
  }
  iVar3 = iVar6;
  if (iVar8 <= iVar6) {
    iVar3 = iVar8 + -1;
  }
  iVar9 = 0;
  if (-1 < iVar6) {
    iVar9 = iVar3;
  }
  iVar3 = iVar8;
  if (iVar5 <= iVar8) {
    iVar3 = iVar5;
  }
  iVar7 = (param_4 + param_2) - *(int *)(this + 0x198);
  iVar6 = 0;
  if (-1 < iVar5) {
    iVar6 = iVar3;
  }
  if (iVar7 <= iVar8) {
    iVar8 = iVar7;
  }
  iVar3 = 0;
  if (-1 < iVar7) {
    iVar3 = iVar8;
  }
  if (iVar9 < iVar3) {
    do {
      iVar8 = iVar2;
      if (iVar2 < iVar6) {
        do {
          reloadCellDelayed(this,*(GridCellData **)
                                  (*(long *)(this + 0x180) +
                                  (long)(iVar8 + iVar9 * *(int *)(this + 400)) * 8),param_5);
          iVar8 = iVar8 + 1;
        } while (iVar6 != iVar8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  piVar4 = *(int **)(this + 0x1d0);
  if (piVar4 == *(int **)(this + 0x1d8)) {
    __src = *(void **)(this + 0x1c8);
    __n = (long)piVar4 - (long)__src;
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
    piVar4 = (int *)((long)__dest + ((long)__n >> 4) * 0x10);
    *piVar4 = param_1;
    piVar4[1] = param_2;
    piVar4[2] = param_3;
    piVar4[3] = param_4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x1c8) = __dest;
    *(int **)(this + 0x1d0) = piVar4 + 4;
    *(void **)(this + 0x1d8) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *piVar4 = param_1;
    piVar4[1] = param_2;
    piVar4[2] = param_3;
    piVar4[3] = param_4;
    *(int **)(this + 0x1d0) = piVar4 + 4;
  }
  return;
}


