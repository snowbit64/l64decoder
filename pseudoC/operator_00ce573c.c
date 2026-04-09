// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator>>
// Entry Point: 00ce573c
// Size: 536 bytes
// Signature: undefined __thiscall operator>>(PolynomialMod2 * this, uint param_1)


/* CryptoPP::PolynomialMod2::TEMPNAMEPLACEHOLDERVALUE(unsigned int) const */

void __thiscall CryptoPP::PolynomialMod2::operator>>(PolynomialMod2 *this,uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 *__dest;
  undefined8 *puVar7;
  long in_x8;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong __n;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_70;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  uVar16 = *(ulong *)(this + 0x10);
  local_70 = 0x3fffffffffffffff;
  AllocatorBase<unsigned_int>::CheckSize(uVar16);
  __n = uVar16 << 2;
  if (uVar16 == 0) {
    __dest = (undefined8 *)0x0;
    puVar7 = *(undefined8 **)(this + 0x18);
    if (puVar7 != (undefined8 *)0x0) goto LAB_00ce57a8;
  }
  else {
    __dest = (undefined8 *)UnalignedAllocate(__n);
    puVar7 = *(undefined8 **)(this + 0x18);
    if (__dest != puVar7) {
LAB_00ce57a8:
      memcpy(__dest,puVar7,__n);
    }
  }
  if (uVar16 != 0) {
    if ((param_1 & 0x1f) != 0) {
      uVar9 = 0;
      uVar12 = uVar16;
      do {
        lVar15 = uVar12 * 4;
        uVar12 = uVar12 - 1;
        uVar2 = *(uint *)((long)__dest + lVar15 + -4);
        uVar3 = uVar2 >> (ulong)(param_1 & 0x1f) | uVar9;
        uVar9 = uVar2 << (ulong)(0x20 - (param_1 & 0x1f) & 0x1f);
        *(uint *)((long)__dest + lVar15 + -4) = uVar3;
      } while (uVar12 != 0);
    }
    if (0x1f < param_1) {
      uVar5 = (ulong)(param_1 >> 5);
      uVar12 = uVar16 - uVar5;
      if (uVar12 != 0) {
        if ((uVar12 < 8) ||
           ((__dest < (undefined8 *)((long)__dest + uVar16 * 4) &&
            ((void *)((long)__dest + uVar5 * 4) < (void *)((long)__dest + uVar12 * 4))))) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar12 & 0xfffffffffffffff8;
          uVar14 = uVar10;
          puVar7 = __dest;
          do {
            puVar1 = (undefined8 *)((long)puVar7 + uVar5 * 4);
            uVar14 = uVar14 - 8;
            uVar17 = *puVar1;
            uVar19 = puVar1[3];
            uVar18 = puVar1[2];
            puVar7[1] = puVar1[1];
            *puVar7 = uVar17;
            puVar7[3] = uVar19;
            puVar7[2] = uVar18;
            puVar7 = puVar7 + 4;
          } while (uVar14 != 0);
          if (uVar12 == uVar10) goto LAB_00ce5850;
        }
        lVar15 = (uVar10 + uVar5) - uVar16;
        puVar11 = (undefined4 *)((long)__dest + uVar10 * 4);
        puVar13 = (undefined4 *)((long)__dest + (uVar10 + uVar5) * 4);
        do {
          bVar6 = lVar15 != -1;
          lVar15 = lVar15 + 1;
          *puVar11 = *puVar13;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (bVar6);
      }
LAB_00ce5850:
      if (uVar12 < uVar16) {
        memset((void *)((long)__dest + uVar12 * 4),0,uVar5 << 2);
      }
    }
  }
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar16;
                    /* try { // try from 00ce5870 to 00ce5883 has its CatchHandler @ 00ce5958 */
  AllocatorBase<unsigned_int>::CheckSize(uVar16);
  if (uVar16 == 0) {
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)(in_x8 + 0x18) = 0;
    if (__dest == (undefined8 *)0x0) goto LAB_00ce589c;
  }
  else {
    puVar7 = (undefined8 *)UnalignedAllocate(__n);
    *(undefined8 **)(in_x8 + 0x18) = puVar7;
    if (puVar7 == __dest) goto LAB_00ce589c;
  }
  memcpy(puVar7,__dest,__n);
LAB_00ce589c:
  if (uVar16 < 0x4000000000000000) {
    local_70 = uVar16;
  }
  for (; local_70 != 0; local_70 = local_70 - 1) {
    *(undefined4 *)((long)__dest + local_70 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce58c0 to 00ce58c7 has its CatchHandler @ 00ce5954 */
  UnalignedDeallocate(__dest);
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


