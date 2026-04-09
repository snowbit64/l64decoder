// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00877240
// Size: 732 bytes
// Signature: undefined __thiscall __append(vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalCompanionManager::AnimalData,
   std::__ndk1::allocator<AnimalCompanionManager::AnimalData> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>>
::__append(vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar6 = *(undefined4 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    lVar5 = (long)puVar6 - *(long *)this >> 3;
    uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + param_1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar9 = lVar7 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x58);
    }
    puVar13 = (undefined4 *)((long)pvVar3 + lVar5 * 8);
    puVar14 = puVar13 + param_1 * 0x16;
    puVar6 = puVar13;
    do {
      *puVar6 = 0x3f800000;
      puVar6[0x13] = 0;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)(puVar6 + 10) = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0xe) = 0;
      *(undefined *)(puVar6 + 0x12) = 0;
      *(undefined2 *)(puVar6 + 0x14) = 0x101;
      puVar6 = puVar6 + 0x16;
    } while (puVar6 != puVar14);
    pbVar11 = *(byte **)this;
    pbVar12 = *(byte **)(this + 8);
    pbVar10 = pbVar11;
    if (pbVar12 != pbVar11) {
      lVar5 = 0;
      do {
        uVar8 = *(undefined8 *)(pbVar12 + lVar5 + -0x38);
        uVar16 = *(undefined8 *)(pbVar12 + lVar5 + -0x40);
        uVar15 = *(undefined8 *)(pbVar12 + lVar5 + -0x48);
        uVar18 = *(undefined8 *)(pbVar12 + lVar5 + -0x50);
        uVar17 = *(undefined8 *)(pbVar12 + lVar5 + -0x58);
        *(undefined8 *)((long)puVar13 + lVar5 + -0x30) = *(undefined8 *)(pbVar12 + lVar5 + -0x30);
        *(undefined8 *)((long)puVar13 + lVar5 + -0x38) = uVar8;
        *(undefined8 *)((long)puVar13 + lVar5 + -0x40) = uVar16;
        *(undefined8 *)((long)puVar13 + lVar5 + -0x48) = uVar15;
        *(undefined8 *)((long)puVar13 + lVar5 + -0x50) = uVar18;
        *(undefined8 *)((long)puVar13 + lVar5 + -0x58) = uVar17;
                    /* try { // try from 00877410 to 00877413 has its CatchHandler @ 0087751c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)((long)puVar13 + lVar5 + -0x28));
        uVar8 = *(undefined8 *)(pbVar12 + lVar5 + -0x10);
        lVar7 = lVar5 + -0x58;
        *(undefined2 *)((long)puVar13 + lVar5 + -8) = *(undefined2 *)(pbVar12 + lVar5 + -8);
        *(undefined8 *)((long)puVar13 + lVar5 + -0x10) = uVar8;
        lVar5 = lVar7;
      } while (pbVar12 + lVar7 != pbVar11);
      pbVar11 = *(byte **)this;
      puVar13 = (undefined4 *)((long)puVar13 + lVar7);
      pbVar10 = *(byte **)(this + 8);
    }
    *(undefined4 **)this = puVar13;
    *(undefined4 **)(this + 8) = puVar14;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x58);
    if (pbVar10 != pbVar11) {
      pbVar10 = pbVar10 + -0x28;
      do {
        pbVar12 = pbVar10 + -0x30;
        if (*(long **)(pbVar10 + -0x18) != (long *)0x0) {
          (**(code **)(**(long **)(pbVar10 + -0x18) + 8))();
        }
        if (*(long **)(pbVar10 + -0x20) != (long *)0x0) {
          (**(code **)(**(long **)(pbVar10 + -0x20) + 8))();
        }
        if (*(long **)(pbVar10 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(pbVar10 + -0x28) + 8))();
        }
        if ((*pbVar10 & 1) != 0) {
          operator_delete(*(void **)(pbVar10 + 0x10));
        }
        pbVar10 = pbVar10 + -0x58;
      } while (pbVar12 != pbVar11);
    }
    if (pbVar11 != (byte *)0x0) {
      operator_delete(pbVar11);
    }
  }
  else {
    puVar13 = puVar6;
    if (param_1 != 0) {
      puVar13 = puVar6 + param_1 * 0x16;
      do {
        *puVar6 = 0x3f800000;
        puVar6[0x13] = 0;
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 6) = 0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 10) = 0;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 0xe) = 0;
        *(undefined *)(puVar6 + 0x12) = 0;
        *(undefined2 *)(puVar6 + 0x14) = 0x101;
        puVar6 = puVar6 + 0x16;
      } while (puVar6 != puVar13);
    }
    *(undefined4 **)(this + 8) = puVar13;
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


