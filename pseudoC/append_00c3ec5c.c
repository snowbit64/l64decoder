// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00c3ec5c
// Size: 484 bytes
// Signature: undefined __thiscall __append(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> * this, ulong param_1)


/* std::__ndk1::vector<IR_RegisterSet::RegisterInfo,
   std::__ndk1::allocator<IR_RegisterSet::RegisterInfo> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>::__append
          (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar6 = *(undefined **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 3) * -0x3333333333333333) < param_1) {
    lVar5 = (long)puVar6 - *(long *)this >> 3;
    uVar1 = lVar5 * -0x3333333333333333 + param_1;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar10 = lVar7 * -0x6666666666666666;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 * 0x28);
    }
    puVar8 = (undefined *)((long)pvVar4 + lVar5 * 8);
    pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x28);
    puVar9 = puVar8 + param_1 * 0x28;
    puVar6 = puVar8;
    do {
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      puVar6 = puVar6 + 0x28;
    } while (puVar6 != puVar9);
    pvVar2 = *(void **)this;
    pvVar3 = *(void **)(this + 8);
    if (pvVar3 == pvVar2) {
      *(undefined **)this = puVar8;
      *(undefined **)(this + 8) = puVar9;
      *(void **)(this + 0x10) = pvVar4;
    }
    else {
      lVar5 = 0;
      do {
        lVar7 = lVar5 + -0x28;
        puVar8[lVar5 + -0x28] = *(undefined *)((long)pvVar3 + lVar5 + -0x28);
        uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
        uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
        *(undefined8 *)(puVar8 + lVar5 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x10);
        *(undefined8 *)(puVar8 + lVar5 + -0x18) = uVar12;
        *(undefined8 *)(puVar8 + lVar5 + -0x20) = uVar11;
        *(undefined8 *)((long)pvVar3 + lVar5 + -0x18) = 0;
        *(undefined8 *)((long)pvVar3 + lVar5 + -0x10) = 0;
        *(undefined8 *)((long)pvVar3 + lVar5 + -0x20) = 0;
        *(undefined8 *)(puVar8 + lVar5 + -8) = *(undefined8 *)((long)pvVar3 + lVar5 + -8);
        lVar5 = lVar7;
      } while ((void *)((long)pvVar3 + lVar7) != pvVar2);
      *(void **)(this + 0x10) = pvVar4;
      pvVar2 = *(void **)this;
      pvVar4 = *(void **)(this + 8);
      *(undefined **)this = puVar8 + lVar7;
      *(undefined **)(this + 8) = puVar9;
      while (pvVar3 = pvVar4, pvVar3 != pvVar2) {
        pvVar4 = (void *)((long)pvVar3 + -0x28);
        if ((*(byte *)((long)pvVar3 + -0x20) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -0x10));
        }
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  else {
    puVar8 = puVar6;
    if (param_1 != 0) {
      puVar8 = puVar6 + param_1 * 0x28;
      do {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 0x20) = 0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
        puVar6 = puVar6 + 0x28;
      } while (puVar6 != puVar8);
    }
    *(undefined **)(this + 8) = puVar8;
  }
  return;
}


