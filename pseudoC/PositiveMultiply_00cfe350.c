// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PositiveMultiply
// Entry Point: 00cfe350
// Size: 840 bytes
// Signature: undefined __cdecl PositiveMultiply(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::PositiveMultiply(CryptoPP::Integer&, CryptoPP::Integer const&, CryptoPP::Integer
   const&) */

void CryptoPP::PositiveMultiply(Integer *param_1,Integer *param_2,Integer *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  uVar7 = *(ulong *)(param_2 + 0x18);
  do {
    if (uVar7 == 0) goto LAB_00cfe3b0;
    uVar10 = uVar7 - 1;
    lVar1 = uVar7 * 4;
    uVar7 = uVar10;
  } while (*(int *)(*(long *)(param_2 + 0x20) + -4 + lVar1) == 0);
  uVar9 = (int)uVar10 + 1;
  uVar7 = (ulong)uVar9;
  if (uVar9 < 9) {
LAB_00cfe3b0:
    uVar7 = (ulong)(uint)(&DAT_005443f4)[uVar7];
  }
  else if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  else if (uVar7 < 0x21) {
    uVar7 = 0x20;
  }
  else if (uVar7 < 0x41) {
    uVar7 = 0x40;
  }
  else {
    uVar9 = 0;
    uVar10 = 0x40;
    do {
      uVar3 = uVar9 + (uint)uVar10 >> 1;
      uVar2 = uVar3;
      if (uVar7 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
        uVar2 = (uint)uVar10;
        uVar9 = uVar3;
      }
      uVar10 = (ulong)uVar2;
    } while (1 < uVar2 - uVar9);
    uVar7 = 1L << (uVar10 & 0x3f);
  }
  uVar10 = *(ulong *)(param_3 + 0x18);
  do {
    if (uVar10 == 0) goto LAB_00cfe3e4;
    uVar11 = uVar10 - 1;
    lVar1 = uVar10 * 4;
    uVar10 = uVar11;
  } while (*(int *)(*(long *)(param_3 + 0x20) + -4 + lVar1) == 0);
  uVar9 = (int)uVar11 + 1;
  uVar10 = (ulong)uVar9;
  if (uVar9 < 9) {
LAB_00cfe3e4:
    uVar10 = (ulong)(uint)(&DAT_005443f4)[uVar10];
  }
  else if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  else if (uVar10 < 0x21) {
    uVar10 = 0x20;
  }
  else if (uVar10 < 0x41) {
    uVar10 = 0x40;
  }
  else {
    uVar9 = 0;
    uVar11 = 0x40;
    do {
      uVar3 = uVar9 + (uint)uVar11 >> 1;
      uVar2 = uVar3;
      if (uVar10 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
        uVar2 = (uint)uVar11;
        uVar9 = uVar3;
      }
      uVar11 = (ulong)uVar2;
    } while (1 < uVar2 - uVar9);
    uVar10 = 1L << (uVar11 & 0x3f);
  }
  uVar11 = uVar10 + uVar7;
  if (uVar11 < 9) {
    uVar12 = (ulong)(uint)(&DAT_005443f4)[uVar11];
    uVar8 = *(ulong *)(param_1 + 0x18);
    __s = *(void **)(param_1 + 0x20);
    if (uVar8 != uVar12) goto LAB_00cfe504;
  }
  else if (uVar11 < 0x11) {
    uVar12 = 0x10;
    uVar8 = *(ulong *)(param_1 + 0x18);
    __s = *(void **)(param_1 + 0x20);
    if (uVar8 != 0x10) goto LAB_00cfe504;
  }
  else if (uVar11 < 0x21) {
    uVar12 = 0x20;
    uVar8 = *(ulong *)(param_1 + 0x18);
    __s = *(void **)(param_1 + 0x20);
    if (uVar8 != 0x20) goto LAB_00cfe504;
  }
  else if (uVar11 < 0x41) {
    uVar12 = 0x40;
    uVar8 = *(ulong *)(param_1 + 0x18);
    __s = *(void **)(param_1 + 0x20);
    if (uVar8 != 0x40) {
LAB_00cfe504:
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)__s + uVar8 * 4 + -4) = 0;
      }
      UnalignedDeallocate(__s);
      AllocatorBase<unsigned_int>::CheckSize(uVar12);
      if (uVar12 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        goto LAB_00cfe550;
      }
      __s = (void *)UnalignedAllocate(uVar12 << 2);
    }
  }
  else {
    uVar9 = 0;
    uVar8 = 0x40;
    do {
      uVar3 = uVar9 + (uint)uVar8 >> 1;
      uVar2 = uVar3;
      if (uVar11 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
        uVar2 = (uint)uVar8;
        uVar9 = uVar3;
      }
      uVar8 = (ulong)uVar2;
    } while (1 < uVar2 - uVar9);
    uVar12 = 1L << (uVar8 & 0x3f);
    uVar8 = *(ulong *)(param_1 + 0x18);
    __s = *(void **)(param_1 + 0x20);
    if (uVar8 != uVar12) goto LAB_00cfe504;
  }
  *(ulong *)(param_1 + 0x18) = uVar12;
  *(void **)(param_1 + 0x20) = __s;
  if (__s != (void *)0x0) {
    memset(__s,0,uVar12 << 2);
  }
LAB_00cfe550:
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3fffffffffffffff;
  AllocatorBase<unsigned_int>::CheckSize(uVar11);
  if (uVar11 == 0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)UnalignedAllocate(uVar11 * 4);
  }
                    /* try { // try from 00cfe590 to 00cfe59f has its CatchHandler @ 00cfe69c */
  AsymmetricMultiply(*(uint **)(param_1 + 0x20),puVar5,*(uint **)(param_2 + 0x20),uVar7,
                     *(uint **)(param_3 + 0x20),uVar10);
  if (0x3ffffffffffffffe < uVar11) {
    uVar11 = 0x3fffffffffffffff;
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    puVar5[uVar11 - 1] = 0;
  }
                    /* try { // try from 00cfe5c4 to 00cfe5cb has its CatchHandler @ 00cfe698 */
  UnalignedDeallocate(puVar5);
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


