// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeLineInfo
// Entry Point: 00efb498
// Size: 808 bytes
// Signature: undefined __thiscall writeLineInfo(BytecodeBuilder * this, basic_string * param_1)


/* Luau::BytecodeBuilder::writeLineInfo(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) const */

void __thiscall Luau::BytecodeBuilder::writeLineInfo(BytecodeBuilder *this,basic_string *param_1)

{
  undefined (*pauVar1) [16];
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined4 *puVar7;
  bool bVar8;
  int iVar9;
  undefined (*pauVar10) [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  undefined (*pauVar19) [16];
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined4 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar14 = *(long *)(this + 0x38);
  lVar16 = *(long *)(this + 0x40) - lVar14;
  uVar15 = lVar16 >> 2;
  if (lVar16 == 0) {
    iVar17 = 0x1000000;
  }
  else {
    uVar20 = 0;
    iVar17 = 0x1000000;
    do {
      uVar24 = uVar20 + (long)iVar17;
      if (uVar20 < uVar15) {
        iVar25 = *(int *)(lVar14 + uVar20 * 4);
        uVar11 = uVar20;
        iVar9 = iVar25;
        uVar21 = uVar20;
        if (uVar20 <= uVar24) {
          uVar21 = uVar24;
        }
        do {
          uVar22 = uVar21;
          if (uVar21 == uVar11) {
LAB_00efb55c:
            if (uVar22 - uVar20 < (ulong)(long)iVar17) {
              uVar18 = 0xffffffff;
              do {
                uVar18 = uVar18 + 1;
              } while (2 << (ulong)(uVar18 & 0x1f) <= (int)(uVar22 - uVar20));
              iVar17 = 1 << (ulong)(uVar18 & 0x1f);
              uVar24 = uVar20 + (long)iVar17;
            }
            break;
          }
          iVar4 = *(int *)(lVar14 + uVar11 * 4);
          iVar2 = iVar4;
          if (iVar9 <= iVar4) {
            iVar2 = iVar9;
          }
          if (iVar4 <= iVar25) {
            iVar4 = iVar25;
          }
          uVar22 = uVar11;
          if (0xff < iVar4 - iVar2) goto LAB_00efb55c;
          uVar11 = uVar11 + 1;
          iVar25 = iVar4;
          iVar9 = iVar2;
        } while (uVar15 != uVar11);
      }
      uVar20 = uVar24;
    } while (uVar20 < uVar15);
  }
  uVar24 = (ulong)iVar17;
  local_70 = 0;
  uVar20 = 0;
  if (uVar24 != 0) {
    uVar20 = (uVar15 - 1) / uVar24;
  }
  local_88 = (undefined4 *)0x0;
  local_80 = (undefined4 *)0x0;
  local_78 = 0;
  uVar11 = uVar20 + 1;
  if (uVar11 < 2) {
    puVar7 = &local_70;
  }
  else {
                    /* try { // try from 00efb5b0 to 00efb5bb has its CatchHandler @ 00efb7c0 */
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
              ((vector<int,std::__ndk1::allocator<int>> *)&local_88,uVar11);
    lVar14 = *(long *)(this + 0x38);
    lVar16 = *(long *)(this + 0x40) - lVar14;
    uVar15 = lVar16 >> 2;
    puVar7 = local_88;
  }
  if (lVar16 != 0) {
    lVar16 = 0;
    pauVar19 = (undefined (*) [16])(lVar14 + 0x14);
    uVar21 = 0;
    do {
      uVar23 = (uVar15 - 2) - lVar16 * uVar24;
      iVar25 = *(int *)(lVar14 + uVar21 * 4);
      uVar22 = uVar24 - 2;
      if (uVar23 <= uVar24 - 2) {
        uVar22 = uVar23;
      }
      uVar3 = 1;
      if (uVar23 != 0) {
        uVar3 = uVar22 + 1;
      }
      uVar22 = uVar21 + uVar24;
      if (((uVar21 < uVar22) && (uVar23 = uVar21 + 1, uVar23 < uVar15)) && (uVar23 < uVar22)) {
        iVar9 = iVar25;
        if (7 < uVar3) {
          auVar26._0_8_ = CONCAT44(iVar25,iVar25);
          auVar26._8_4_ = iVar25;
          auVar26._12_4_ = iVar25;
          uVar12 = uVar3 & 0xfffffffffffffff8;
          uVar23 = uVar23 + uVar12;
          auVar27._8_8_ = auVar26._8_8_;
          auVar27._0_8_ = auVar26._0_8_;
          pauVar10 = pauVar19;
          uVar13 = uVar12;
          do {
            pauVar1 = pauVar10 + -1;
            auVar6 = *pauVar10;
            uVar13 = uVar13 - 8;
            pauVar10 = pauVar10 + 2;
            auVar26 = NEON_smin(*pauVar1,auVar26,4);
            auVar27 = NEON_smin(auVar6,auVar27,4);
          } while (uVar13 != 0);
          auVar26 = NEON_smin(auVar26,auVar27,4);
          iVar25 = NEON_sminv(auVar26,4);
          iVar9 = iVar25;
          if (uVar3 == uVar12) goto LAB_00efb5fc;
        }
        do {
          iVar25 = *(int *)(lVar14 + uVar23 * 4);
          uVar23 = uVar23 + 1;
          if (iVar9 <= iVar25) {
            iVar25 = iVar9;
          }
        } while ((uVar23 < uVar15) && (iVar9 = iVar25, uVar23 < uVar22));
      }
LAB_00efb5fc:
      uVar23 = 0;
      if (uVar24 != 0) {
        uVar23 = uVar21 / uVar24;
      }
      lVar16 = lVar16 + 1;
      pauVar19 = (undefined (*) [16])(*pauVar19 + uVar24 * 4);
      puVar7[uVar23] = iVar25;
      uVar21 = uVar22;
    } while (uVar22 < uVar15);
  }
  uVar15 = 0xffffffffffffffff;
  do {
    uVar15 = uVar15 + 1;
  } while (2 << (ulong)((uint)uVar15 & 0x1f) <= iVar17);
  local_6c = CONCAT31(local_6c._1_3_,(char)uVar15);
                    /* try { // try from 00efb6dc to 00efb6eb has its CatchHandler @ 00efb7c4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_6c);
  lVar14 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x40) != lVar14) {
    uVar24 = 0;
    iVar17 = 0;
    do {
      iVar25 = *(int *)(lVar14 + uVar24 * 4) - puVar7[uVar24 >> (uVar15 & 0x3f)];
      local_6c = CONCAT31(local_6c._1_3_,(char)iVar25 - (char)iVar17);
                    /* try { // try from 00efb718 to 00efb727 has its CatchHandler @ 00efb7cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_6c);
      lVar14 = *(long *)(this + 0x38);
      uVar24 = uVar24 + 1;
      iVar17 = iVar25;
    } while (uVar24 < (ulong)(*(long *)(this + 0x40) - lVar14 >> 2));
  }
  if (uVar11 != 0) {
    iVar17 = 0;
    uVar15 = 0;
    do {
      local_6c = puVar7[uVar15] - iVar17;
                    /* try { // try from 00efb758 to 00efb767 has its CatchHandler @ 00efb7c8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_6c);
      iVar17 = puVar7[uVar15];
      bVar8 = uVar15 != uVar20;
      uVar15 = uVar15 + 1;
    } while (bVar8);
  }
  if (local_88 != (undefined4 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


