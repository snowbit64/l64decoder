// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00ce5a14
// Size: 1048 bytes
// Signature: undefined __cdecl operator<<(basic_ostream * param_1, PolynomialMod2 * param_2)


/* CryptoPP::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, CryptoPP::PolynomialMod2 const&) */

basic_ostream * CryptoPP::operator<<(basic_ostream *param_1,PolynomialMod2 *param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  basic_ostream *pbVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  char local_80 [8];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  char local_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)param_1;
  if ((*(uint *)(param_1 + *(long *)(lVar12 + -0x18) + 8) & 0x4a) == 0x40) {
    cVar22 = 'o';
    uVar23 = 4;
    uVar24 = 3;
    bVar6 = true;
    uVar15 = *(ulong *)(param_2 + 0x10);
joined_r0x00ce5aa4:
    bVar5 = false;
  }
  else {
    if ((*(uint *)(param_1 + *(long *)(lVar12 + -0x18) + 8) & 0x4a) == 8) {
      bVar6 = false;
      cVar22 = 'h';
      uVar23 = 2;
      uVar24 = 4;
      uVar15 = *(ulong *)(param_2 + 0x10);
      goto joined_r0x00ce5aa4;
    }
    bVar6 = false;
    cVar22 = 'b';
    uVar23 = 8;
    bVar5 = true;
    uVar24 = 1;
    uVar15 = *(ulong *)(param_2 + 0x10);
  }
  if (uVar15 != 0) {
    lVar13 = *(long *)(param_2 + 0x18);
    uVar10 = 0;
    do {
      if (*(int *)(lVar13 + uVar10 * 4) != 0) {
        iVar9 = (int)uVar15 * -0x20;
        goto LAB_00ce5b1c;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < uVar15);
  }
  local_80[0] = '0';
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,local_80,1);
  local_80[0] = cVar22;
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,local_80,1);
  goto LAB_00ce5dd8;
  while( true ) {
    uVar10 = uVar15 - 1;
    lVar1 = uVar15 * 4;
    iVar9 = iVar9 + 0x20;
    uVar15 = uVar10;
    if (*(int *)(lVar13 + -4 + lVar1) != 0) break;
LAB_00ce5b1c:
    if (uVar15 == 0) goto LAB_00ce5b94;
  }
  if ((int)uVar10 == -1) {
LAB_00ce5b94:
    uStack_70 = 1;
LAB_00ce5b88:
    local_78 = 0xffffffffffffffff;
    pvVar8 = (void *)UnalignedAllocate(uStack_70);
    lVar12 = *(long *)param_1;
  }
  else {
    uVar11 = *(uint *)(lVar13 + (uVar10 & 0xffffffff) * 4);
    if (uVar11 == 0) {
      uVar11 = 0;
      if (uVar24 != 0) {
        uVar11 = (uint)-iVar9 / uVar24;
      }
    }
    else {
      uVar16 = 0;
      uVar14 = 0x20;
      do {
        uVar18 = uVar16 + uVar14 >> 1;
        uVar17 = uVar18;
        if (uVar11 >> (ulong)(uVar18 & 0x1f) != 0) {
          uVar17 = uVar14;
          uVar16 = uVar18;
        }
        uVar14 = uVar17;
      } while (1 < uVar17 - uVar16);
      uVar11 = 0;
      if (uVar24 != 0) {
        uVar11 = (uVar17 - iVar9) / uVar24;
      }
    }
    uStack_70 = (ulong)(uVar11 + 1);
    if (uVar11 != 0xffffffff) goto LAB_00ce5b88;
    local_78 = 0xffffffffffffffff;
    pvVar8 = (void *)0x0;
  }
  uVar16 = 0;
  uVar11 = 0xffffffff;
  pcVar2 = "0123456789abcdef";
  if (((byte)param_1[*(long *)(lVar12 + -0x18) + 9] & 0x40) != 0) {
    pcVar2 = "0123456789ABCDEF";
  }
  while( true ) {
    uVar15 = *(ulong *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    uVar14 = uVar16 * uVar24;
    iVar9 = (int)uVar15 * -0x20;
    uVar10 = uVar15;
    do {
      if (uVar10 == 0) goto LAB_00ce5d3c;
      uVar20 = uVar10 - 1;
      lVar13 = uVar10 * 4;
      iVar9 = iVar9 + 0x20;
      uVar10 = uVar20;
    } while (*(int *)(lVar12 + -4 + lVar13) == 0);
    if ((int)uVar20 == -1) break;
    uVar17 = *(uint *)(lVar12 + (uVar20 & 0xffffffff) * 4);
    if (uVar17 == 0) {
      uVar18 = -iVar9;
    }
    else {
      uVar21 = 0;
      uVar19 = 0x20;
      do {
        uVar3 = uVar21 + uVar19 >> 1;
        uVar18 = uVar3;
        if (uVar17 >> (ulong)(uVar3 & 0x1f) != 0) {
          uVar18 = uVar19;
          uVar21 = uVar3;
        }
        uVar19 = uVar18;
      } while (1 < uVar18 - uVar21);
      uVar18 = uVar18 - iVar9;
    }
    if (uVar18 <= uVar14) break;
    if (uVar14 >> 5 < uVar15) {
      uVar17 = *(uint *)(lVar12 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1;
    }
    else {
      uVar17 = 0;
    }
    if (!bVar5) {
      uVar10 = (ulong)(uVar14 + 1 >> 5);
      if (uVar10 < uVar15) {
        uVar18 = *(uint *)(lVar12 + uVar10 * 4) >> (ulong)(uVar14 + 1 & 0x1f) & 1;
        uVar10 = (ulong)(uVar14 + 2 >> 5);
        if (uVar10 < uVar15) goto LAB_00ce5ce4;
LAB_00ce5cbc:
        uVar17 = uVar17 | uVar18 << 1;
      }
      else {
        uVar18 = 0;
        uVar10 = (ulong)(uVar14 + 2 >> 5);
        if (uVar15 <= uVar10) goto LAB_00ce5cbc;
LAB_00ce5ce4:
        uVar17 = uVar17 | uVar18 << 1 |
                 (*(uint *)(lVar12 + uVar10 * 4) >> (ulong)(uVar14 + 2 & 0x1f) & 1) << 2;
      }
      if (!bVar6) {
        uVar10 = (ulong)(uVar14 + 3 >> 5);
        if (uVar10 < uVar15) {
          uVar14 = *(uint *)(lVar12 + uVar10 * 4) >> (ulong)(uVar14 + 3 & 0x1f) & 1;
        }
        else {
          uVar14 = 0;
        }
        uVar17 = uVar17 | uVar14 << 3;
      }
    }
    uVar11 = uVar11 + 1;
    *(char *)((long)pvVar8 + (ulong)uVar16) = pcVar2[uVar17];
    uVar16 = uVar16 + 1;
  }
LAB_00ce5d3c:
  local_68 = pvVar8;
  if (uVar16 != 0) {
    uVar15 = (ulong)uVar11;
    while( true ) {
      local_5c[0] = *(char *)((long)pvVar8 + uVar15);
                    /* try { // try from 00ce5d5c to 00ce5d8f has its CatchHandler @ 00ce5e34 */
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_5c,1)
      ;
      uVar24 = (uint)uVar15;
      if (uVar24 == 0) break;
      uVar11 = 0;
      if (uVar23 != 0) {
        uVar11 = uVar24 / uVar23;
      }
      if (uVar24 == uVar11 * uVar23) {
        local_5c[0] = ',';
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,local_5c,1);
      }
      uVar15 = uVar15 - 1;
    }
  }
                    /* try { // try from 00ce5d98 to 00ce5da7 has its CatchHandler @ 00ce5e30 */
  local_5c[0] = cVar22;
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,local_5c,1);
  uVar15 = local_78;
  if (uStack_70 <= local_78) {
    uVar15 = uStack_70;
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined *)((long)local_68 + (uVar15 - 1)) = 0;
  }
                    /* try { // try from 00ce5dd4 to 00ce5dd7 has its CatchHandler @ 00ce5e2c */
  UnalignedDeallocate(local_68);
LAB_00ce5dd8:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar7;
}


