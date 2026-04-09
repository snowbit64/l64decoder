// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PositiveDivide
// Entry Point: 00cfe90c
// Size: 1204 bytes
// Signature: undefined __cdecl PositiveDivide(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::PositiveDivide(CryptoPP::Integer&, CryptoPP::Integer&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) */

void CryptoPP::PositiveDivide(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  DivideByZero *this;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  uint uVar20;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar19 = *(ulong *)(param_3 + 0x18);
  uVar11 = uVar19 & 0xffffffff;
  lVar15 = 0;
  do {
    lVar10 = lVar15;
    uVar20 = (uint)uVar11;
    if (uVar19 + lVar10 == 0) break;
    uVar11 = (ulong)(uVar20 + 1);
    lVar15 = lVar10 + -1;
  } while (*(int *)(*(long *)(param_3 + 0x20) + uVar19 * 4 + -4 + lVar10 * 4) == 0);
  iVar5 = (int)uVar19;
  iVar6 = (int)lVar10;
  uVar16 = (int)*(long *)(param_4 + 0x18) + 1;
  uVar19 = (ulong)uVar16;
  lVar15 = *(long *)(param_4 + 0x18);
  do {
    lVar12 = lVar15;
    if (lVar12 == 0) goto LAB_00cfed94;
    lVar15 = lVar12 + -1;
    uVar1 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar1;
    uVar16 = uVar16 - 1;
  } while (*(int *)(*(long *)(param_4 + 0x20) + -4 + lVar12 * 4) == 0);
  if ((int)lVar15 == -1) {
LAB_00cfed94:
    this = (DivideByZero *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfeda0 to 00cfeda3 has its CatchHandler @ 00cfedd8 */
    Integer::DivideByZero::DivideByZero(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&Integer::DivideByZero::typeinfo,Exception::~Exception);
  }
  if ((uint)(iVar5 + iVar6) < (uint)lVar12) {
    Integer::operator=(param_1,param_3);
    *(undefined4 *)(param_1 + 0x28) = 0;
    Integer::operator=(param_2,(Integer *)&DAT_02120810);
    goto LAB_00cfed64;
  }
  uVar11 = (uVar19 & 1) + lVar15 + 1;
  uVar13 = uVar11 & 0xffffffff;
  uVar8 = (uint)uVar11;
  if (uVar8 < 9) {
    uVar17 = (ulong)(uint)(&DAT_005443f4)[uVar13];
    uVar11 = *(ulong *)(param_1 + 0x18);
    pvVar7 = *(void **)(param_1 + 0x20);
    if (uVar11 != uVar17) goto LAB_00cfeae0;
LAB_00cfeb10:
    *(ulong *)(param_1 + 0x18) = uVar17;
    *(void **)(param_1 + 0x20) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      memset(pvVar7,0,uVar17 << 2);
    }
  }
  else {
    if (uVar8 < 0x11) {
      uVar17 = 0x10;
      uVar11 = *(ulong *)(param_1 + 0x18);
      pvVar7 = *(void **)(param_1 + 0x20);
      if (uVar11 != 0x10) goto LAB_00cfeae0;
      goto LAB_00cfeb10;
    }
    if (uVar8 < 0x21) {
      uVar17 = 0x20;
      uVar11 = *(ulong *)(param_1 + 0x18);
      pvVar7 = *(void **)(param_1 + 0x20);
      if (uVar11 != 0x20) goto LAB_00cfeae0;
      goto LAB_00cfeb10;
    }
    if (0x40 < uVar8) {
      uVar8 = 0;
      uVar11 = 0x40;
      do {
        uVar3 = uVar8 + (uint)uVar11 >> 1;
        uVar2 = uVar3;
        if (uVar13 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
          uVar2 = (uint)uVar11;
          uVar8 = uVar3;
        }
        uVar11 = (ulong)uVar2;
      } while (1 < uVar2 - uVar8);
      uVar17 = 1L << (uVar11 & 0x3f);
      uVar11 = *(ulong *)(param_1 + 0x18);
      pvVar7 = *(void **)(param_1 + 0x20);
      if (uVar11 != uVar17) goto LAB_00cfeae0;
      goto LAB_00cfeb10;
    }
    uVar17 = 0x40;
    uVar11 = *(ulong *)(param_1 + 0x18);
    pvVar7 = *(void **)(param_1 + 0x20);
    if (uVar11 == 0x40) goto LAB_00cfeb10;
LAB_00cfeae0:
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)((long)pvVar7 + uVar11 * 4 + -4) = 0;
    }
    UnalignedDeallocate(pvVar7);
    AllocatorBase<unsigned_int>::CheckSize(uVar17);
    if (uVar17 != 0) {
      pvVar7 = (void *)UnalignedAllocate(uVar17 << 2);
      goto LAB_00cfeb10;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar11 = ((ulong)(iVar5 + (uVar20 & 1) + iVar6 + 1) - (uVar19 & 1)) - lVar15;
  uVar19 = uVar11 & 0xffffffff;
  uVar8 = (uint)uVar11;
  *(undefined8 *)(param_1 + 0x10) = 0x3fffffffffffffff;
  if (uVar8 < 9) {
    uVar11 = (ulong)(uint)(&DAT_005443f4)[uVar19];
    uVar19 = *(ulong *)(param_2 + 0x18);
    pvVar7 = *(void **)(param_2 + 0x20);
    if (uVar19 != uVar11) goto LAB_00cfec3c;
LAB_00cfec6c:
    *(ulong *)(param_2 + 0x18) = uVar11;
    *(void **)(param_2 + 0x20) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      memset(pvVar7,0,uVar11 << 2);
    }
  }
  else {
    if (uVar8 < 0x11) {
      uVar11 = 0x10;
      uVar19 = *(ulong *)(param_2 + 0x18);
      pvVar7 = *(void **)(param_2 + 0x20);
      if (uVar19 != 0x10) goto LAB_00cfec3c;
      goto LAB_00cfec6c;
    }
    if (uVar8 < 0x21) {
      uVar11 = 0x20;
      uVar19 = *(ulong *)(param_2 + 0x18);
      pvVar7 = *(void **)(param_2 + 0x20);
      if (uVar19 != 0x20) goto LAB_00cfec3c;
      goto LAB_00cfec6c;
    }
    if (0x40 < uVar8) {
      uVar8 = 0;
      uVar11 = 0x40;
      do {
        uVar3 = uVar8 + (uint)uVar11 >> 1;
        uVar2 = uVar3;
        if (uVar19 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
          uVar2 = (uint)uVar11;
          uVar8 = uVar3;
        }
        uVar11 = (ulong)uVar2;
      } while (1 < uVar2 - uVar8);
      uVar11 = 1L << (uVar11 & 0x3f);
      uVar19 = *(ulong *)(param_2 + 0x18);
      pvVar7 = *(void **)(param_2 + 0x20);
      if (uVar19 != uVar11) goto LAB_00cfec3c;
      goto LAB_00cfec6c;
    }
    uVar11 = 0x40;
    uVar19 = *(ulong *)(param_2 + 0x18);
    pvVar7 = *(void **)(param_2 + 0x20);
    if (uVar19 == 0x40) goto LAB_00cfec6c;
LAB_00cfec3c:
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined4 *)((long)pvVar7 + uVar19 * 4 + -4) = 0;
    }
    UnalignedDeallocate(pvVar7);
    AllocatorBase<unsigned_int>::CheckSize(uVar11);
    if (uVar11 != 0) {
      pvVar7 = (void *)UnalignedAllocate(uVar11 << 2);
      goto LAB_00cfec6c;
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  iVar14 = (uVar16 + (uVar1 & 1)) * 3;
  uVar19 = (ulong)(iVar14 + iVar5 + (uVar20 & 1) + iVar6 + 6);
  *(undefined8 *)(param_2 + 0x10) = 0x3fffffffffffffff;
  *(undefined4 *)(param_2 + 0x28) = 0;
  iVar14 = (uVar20 & 1) + iVar14 + iVar5 + iVar6;
  AllocatorBase<unsigned_int>::CheckSize(uVar19);
  if (iVar14 == -6) {
    puVar18 = (uint *)0x0;
  }
  else {
    puVar18 = (uint *)UnalignedAllocate(uVar19 << 2);
  }
                    /* try { // try from 00cfed14 to 00cfed1b has its CatchHandler @ 00cfedc4 */
  Divide(*(uint **)(param_1 + 0x20),*(uint **)(param_2 + 0x20),puVar18,*(uint **)(param_3 + 0x20),
         (ulong)(iVar5 + (uVar20 & 1)) + lVar10 & 0xffffffff,*(uint **)(param_4 + 0x20),uVar13);
  if (iVar14 != -6) {
    lVar15 = (ulong)((uVar16 + (uVar1 & 1)) * 3 + iVar5 + (uVar20 & 1) + iVar6 + 6) << 2;
    do {
      *(undefined4 *)((long)puVar18 + lVar15 + -4) = 0;
      lVar15 = lVar15 + -4;
    } while (lVar15 != 0);
  }
                    /* try { // try from 00cfed58 to 00cfed5f has its CatchHandler @ 00cfedc0 */
  UnalignedDeallocate(puVar18);
LAB_00cfed64:
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


