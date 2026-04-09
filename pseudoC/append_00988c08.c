// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00988c08
// Size: 624 bytes
// Signature: undefined __thiscall __append(vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>> * this, ulong param_1)


/* std::__ndk1::vector<MeshSplitManager::ConnectionShapeData,
   std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
::__append(vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
           *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  size_t __n;
  
  lVar3 = *(long *)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar3 >> 2) * 0x6db6db6db6db6db7)) {
    lVar5 = lVar3;
    if (param_1 != 0) {
      lVar5 = lVar3 + param_1 * 0x1c;
      uVar6 = param_1 * 0x1c - 0x1c;
      lVar10 = lVar3;
      if (0x1b < uVar6) {
        uVar6 = uVar6 / 0x1c + 1;
        uVar9 = uVar6 & 0x1ffffffffffffffe;
        lVar10 = lVar3 + uVar9 * 0x1c;
        lVar3 = lVar3 + 0x36;
        uVar8 = uVar9;
        do {
          *(undefined4 *)(lVar3 + -0x1e) = 0;
          uVar8 = uVar8 - 2;
          *(undefined4 *)(lVar3 + -2) = 0;
          lVar3 = lVar3 + 0x38;
        } while (uVar8 != 0);
        if (uVar6 == uVar9) goto LAB_00988d74;
      }
      do {
        *(undefined4 *)(lVar10 + 0x18) = 0;
        lVar10 = lVar10 + 0x1c;
      } while (lVar10 != lVar5);
    }
LAB_00988d74:
    *(long *)(this + 8) = lVar5;
    return;
  }
  pvVar12 = *(void **)this;
  __n = lVar3 - (long)pvVar12;
  lVar3 = (long)__n / 0x1c;
  uVar6 = lVar3 + param_1;
  if (0x924924924924924 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - (long)pvVar12 >> 2;
  uVar8 = lVar5 * -0x2492492492492492;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (0x492492492492491 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
    uVar6 = 0x924924924924924;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x924924924924924 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(uVar6 * 0x1c);
  }
  pvVar4 = (void *)((long)pvVar2 + lVar3 * 0x1c);
  pvVar1 = (void *)((long)pvVar4 + param_1 * 0x1c);
  uVar8 = param_1 * 0x1c - 0x1c;
  pvVar7 = pvVar4;
  if (0x1b < uVar8) {
    uVar8 = uVar8 / 0x1c + 1;
    uVar11 = uVar8 & 0x1ffffffffffffffe;
    pvVar7 = (void *)((long)pvVar4 + uVar11 * 0x1c);
    lVar3 = (long)pvVar2 + lVar3 * 0x1c + 0x36;
    uVar9 = uVar11;
    do {
      *(undefined4 *)(lVar3 + -0x1e) = 0;
      uVar9 = uVar9 - 2;
      *(undefined4 *)(lVar3 + -2) = 0;
      lVar3 = lVar3 + 0x38;
    } while (uVar9 != 0);
    if (uVar8 == uVar11) goto LAB_00988e04;
  }
  do {
    *(undefined4 *)((long)pvVar7 + 0x18) = 0;
    pvVar7 = (void *)((long)pvVar7 + 0x1c);
  } while (pvVar7 != pvVar1);
LAB_00988e04:
  if (0 < (long)__n) {
    memcpy((void *)((long)pvVar4 - __n),pvVar12,__n);
  }
  pvVar12 = *(void **)this;
  *(void **)this = (void *)((long)pvVar4 - __n);
  *(void **)(this + 8) = pvVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar6 * 0x1c);
  if (pvVar12 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar12);
  return;
}


