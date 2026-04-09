// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00c3fec4
// Size: 512 bytes
// Signature: undefined __thiscall __append(vector<int,std::__ndk1::allocator<int>> * this, ulong param_1, int * param_2)


/* std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__append(unsigned long, int const&) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
          (vector<int,std::__ndk1::allocator<int>> *this,ulong param_1,int *param_2)

{
  int iVar1;
  void *__dest;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  size_t __n;
  long lVar11;
  
  piVar3 = *(int **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)piVar3 >> 2)) {
    piVar5 = piVar3;
    if (param_1 != 0) {
      piVar5 = piVar3 + param_1;
      uVar8 = param_1 - 1 & 0x3fffffffffffffff;
      if ((6 < uVar8) && ((param_2 + 1 <= piVar3 || (piVar3 + param_1 <= param_2)))) {
        uVar8 = uVar8 + 1;
        iVar1 = *param_2;
        uVar7 = uVar8 & 0x7ffffffffffffff8;
        puVar2 = (undefined8 *)(piVar3 + 4);
        uVar6 = uVar7;
        do {
          puVar2[-1] = CONCAT44(iVar1,iVar1);
          puVar2[-2] = CONCAT44(iVar1,iVar1);
          puVar2[1] = CONCAT44(iVar1,iVar1);
          *puVar2 = CONCAT44(iVar1,iVar1);
          puVar2 = puVar2 + 4;
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
        piVar3 = piVar3 + uVar7;
        if (uVar8 == uVar7) goto LAB_00c3ffc8;
      }
      do {
        piVar4 = piVar3 + 1;
        *piVar3 = *param_2;
        piVar3 = piVar4;
      } while (piVar4 != piVar5);
    }
LAB_00c3ffc8:
    *(int **)(this + 8) = piVar5;
    return;
  }
  pvVar10 = *(void **)this;
  __n = (long)piVar3 - (long)pvVar10;
  lVar11 = (long)__n >> 2;
  uVar8 = lVar11 + param_1;
  if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - (long)pvVar10;
  uVar7 = (long)uVar6 >> 1;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar8 << 2);
  }
  piVar3 = (int *)((long)__dest + lVar11 * 4);
  uVar6 = param_1 - 1 & 0x3fffffffffffffff;
  piVar5 = piVar3;
  if ((6 < uVar6) &&
     ((param_2 + 1 <= piVar3 || ((int *)((long)__dest + (param_1 + lVar11) * 4) <= param_2)))) {
    uVar6 = uVar6 + 1;
    iVar1 = *param_2;
    uVar9 = uVar6 & 0x7ffffffffffffff8;
    puVar2 = (undefined8 *)((long)__dest + lVar11 * 4 + 0x10);
    uVar7 = uVar9;
    do {
      puVar2[-1] = CONCAT44(iVar1,iVar1);
      puVar2[-2] = CONCAT44(iVar1,iVar1);
      puVar2[1] = CONCAT44(iVar1,iVar1);
      *puVar2 = CONCAT44(iVar1,iVar1);
      puVar2 = puVar2 + 4;
      uVar7 = uVar7 - 8;
    } while (uVar7 != 0);
    piVar5 = piVar3 + uVar9;
    if (uVar6 == uVar9) goto LAB_00c4004c;
  }
  do {
    piVar4 = piVar5 + 1;
    *piVar5 = *param_2;
    piVar5 = piVar4;
  } while (piVar4 != piVar3 + param_1);
LAB_00c4004c:
  if (0 < (long)__n) {
    memcpy(__dest,pvVar10,__n);
  }
  pvVar10 = *(void **)this;
  *(void **)this = __dest;
  *(int **)(this + 8) = piVar3 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 4);
  if (pvVar10 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar10);
  return;
}


