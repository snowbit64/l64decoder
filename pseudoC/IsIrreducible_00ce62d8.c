// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsIrreducible
// Entry Point: 00ce62d8
// Size: 924 bytes
// Signature: undefined IsIrreducible(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PolynomialMod2::IsIrreducible() const */

bool CryptoPP::PolynomialMod2::IsIrreducible(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  PolynomialMod2 *in_x0;
  undefined4 *__src;
  undefined4 *__dest;
  PolynomialMod2 *in_x2;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  CryptoPP aCStack_d8 [8];
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  SecBlock aSStack_b8 [8];
  ulong local_b0;
  ulong local_a8;
  int *local_a0;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> aSStack_98 [8];
  ulong local_90;
  ulong uStack_88;
  undefined4 *local_80;
  ulong local_70;
  ulong uStack_68;
  undefined4 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar8 = (int)*(ulong *)(in_x0 + 0x10) * -0x20 + 1;
  uVar11 = *(ulong *)(in_x0 + 0x10);
  do {
    if (uVar11 == 0) goto LAB_00ce6408;
    uVar13 = uVar11 - 1;
    lVar14 = uVar11 * 4;
    iVar8 = iVar8 + 0x20;
    uVar11 = uVar13;
  } while (*(int *)(*(long *)(in_x0 + 0x18) + -4 + lVar14) == 0);
  if ((int)uVar13 == -1) {
LAB_00ce6408:
    bVar6 = false;
    goto LAB_00ce640c;
  }
  uVar16 = *(uint *)(*(long *)(in_x0 + 0x18) + (uVar13 & 0xffffffff) * 4);
  if (uVar16 == 0) {
    uVar15 = -iVar8;
    if (-1 < iVar8) goto LAB_00ce6408;
  }
  else {
    uVar12 = 0;
    uVar10 = 0x20;
    do {
      uVar2 = uVar12 + uVar10 >> 1;
      uVar15 = uVar2;
      if (uVar16 >> (ulong)(uVar2 & 0x1f) != 0) {
        uVar15 = uVar10;
        uVar12 = uVar2;
      }
      uVar10 = uVar15;
    } while (1 < uVar15 - uVar12);
    uVar15 = uVar15 - iVar8;
    if ((int)uVar15 < 1) goto LAB_00ce6408;
  }
  uStack_68 = 1;
  local_70 = 0x3fffffffffffffff;
  __src = (undefined4 *)UnalignedAllocate(4);
  *__src = 2;
  uStack_88 = 1;
  local_90 = 0x3fffffffffffffff;
  local_60 = __src;
                    /* try { // try from 00ce63a4 to 00ce63b3 has its CatchHandler @ 00ce667c */
  AllocatorBase<unsigned_int>::CheckSize(1);
  __dest = (undefined4 *)UnalignedAllocate(4);
  local_80 = __dest;
  if (__dest != __src) {
    in_x2 = (PolynomialMod2 *)(uStack_88 << 2);
    memcpy(__dest,__src,(size_t)in_x2);
  }
  if (1 < uVar15) {
    bVar6 = false;
    uVar16 = 1;
LAB_00ce6450:
                    /* try { // try from 00ce6450 to 00ce645b has its CatchHandler @ 00ce66bc */
    Squared();
                    /* try { // try from 00ce645c to 00ce646b has its CatchHandler @ 00ce66ac */
    operator%(aCStack_d8,in_x0,in_x2);
                    /* try { // try from 00ce646c to 00ce6477 has its CatchHandler @ 00ce669c */
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
              (aSStack_98,aSStack_b8);
    uVar11 = local_b0;
    if (local_a8 <= local_b0) {
      uVar11 = local_a8;
    }
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      local_a0[uVar11 - 1] = 0;
    }
                    /* try { // try from 00ce64a0 to 00ce64a3 has its CatchHandler @ 00ce6698 */
    UnalignedDeallocate(local_a0);
    uVar11 = local_d0;
    if (uStack_c8 <= local_d0) {
      uVar11 = uStack_c8;
    }
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)((long)local_c0 + uVar11 * 4 + -4) = 0;
    }
                    /* try { // try from 00ce64cc to 00ce64cf has its CatchHandler @ 00ce6694 */
    UnalignedDeallocate(local_c0);
                    /* try { // try from 00ce64d0 to 00ce64df has its CatchHandler @ 00ce6690 */
    Xor((PolynomialMod2 *)aSStack_98);
                    /* try { // try from 00ce64e0 to 00ce64ef has its CatchHandler @ 00ce668c */
    Gcd((PolynomialMod2 *)aCStack_d8,in_x0,in_x2);
    uVar13 = DAT_021207e8;
    piVar9 = DAT_021207f0;
    piVar4 = local_a0;
    uVar11 = DAT_021207e8;
    if (local_a8 <= DAT_021207e8) {
      uVar13 = local_a8;
      uVar11 = local_a8;
    }
    for (; uVar5 = local_b0, uVar13 != 0; uVar13 = uVar13 - 1) {
      if (*piVar4 != *piVar9) goto LAB_00ce6588;
      piVar9 = piVar9 + 1;
      piVar4 = piVar4 + 1;
    }
    if (DAT_021207e8 < local_a8) {
      lVar14 = local_a8 - DAT_021207e8;
      piVar9 = local_a0 + DAT_021207e8;
      do {
        if (*piVar9 != 0) goto LAB_00ce6588;
        lVar14 = lVar14 + -1;
        piVar9 = piVar9 + 1;
      } while (lVar14 != 0);
    }
    if (local_a8 < DAT_021207e8) {
      piVar9 = DAT_021207f0 + uVar11;
      lVar14 = ~uVar11 + DAT_021207e8;
      do {
        bVar7 = *piVar9 == 0;
        if (*piVar9 != 0) break;
        bVar1 = lVar14 != 0;
        piVar9 = piVar9 + 1;
        lVar14 = lVar14 + -1;
      } while (bVar1);
      goto LAB_00ce658c;
    }
    bVar7 = true;
    if (local_a8 <= local_b0) {
      uVar5 = local_a8;
    }
    goto joined_r0x00ce6598;
  }
  bVar6 = true;
  uVar11 = local_90;
  if (uStack_88 <= local_90) {
    uVar11 = uStack_88;
  }
joined_r0x00ce6620:
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    __dest[uVar11 - 1] = 0;
  }
                    /* try { // try from 00ce6638 to 00ce663f has its CatchHandler @ 00ce6678 */
  UnalignedDeallocate(__dest);
  uVar11 = local_70;
  if (uStack_68 <= local_70) {
    uVar11 = uStack_68;
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    __src[uVar11 - 1] = 0;
  }
                    /* try { // try from 00ce6664 to 00ce666b has its CatchHandler @ 00ce6674 */
  UnalignedDeallocate(__src);
LAB_00ce640c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00ce6588:
  bVar7 = false;
LAB_00ce658c:
  if (local_a8 <= local_b0) {
    uVar5 = local_a8;
  }
joined_r0x00ce6598:
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    local_a0[uVar5 - 1] = 0;
  }
                    /* try { // try from 00ce65c8 to 00ce65cb has its CatchHandler @ 00ce6688 */
  UnalignedDeallocate(local_a0);
  uVar11 = local_d0;
  if (uStack_c8 <= local_d0) {
    uVar11 = uStack_c8;
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)((long)local_c0 + uVar11 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce65f4 to 00ce65f7 has its CatchHandler @ 00ce6684 */
  UnalignedDeallocate(local_c0);
  if (!bVar7) goto LAB_00ce6610;
  bVar6 = uVar15 >> 1 <= uVar16;
  bVar7 = uVar16 == uVar15 >> 1;
  uVar16 = uVar16 + 1;
  if (bVar7) goto LAB_00ce6610;
  goto LAB_00ce6450;
LAB_00ce6610:
  uVar11 = local_90;
  __dest = local_80;
  if (uStack_88 <= local_90) {
    uVar11 = uStack_88;
  }
  goto joined_r0x00ce6620;
}


