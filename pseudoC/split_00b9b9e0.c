// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: split
// Entry Point: 00b9b9e0
// Size: 2128 bytes
// Signature: undefined __cdecl split(basic_string * param_1, basic_string * param_2, vector * param_3, bool param_4, bool param_5)


/* StringUtil::split(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&, bool, bool) */

void StringUtil::split(basic_string *param_1,basic_string *param_2,vector *param_3,bool param_4,
                      bool param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  basic_string *pbVar3;
  int **ppiVar4;
  ulong *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  size_t __n;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int *__dest;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  size_t sVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 local_b8;
  ulong uStack_b0;
  byte *local_a8;
  ulong local_a0;
  ulong uStack_98;
  byte *local_90;
  undefined8 local_80;
  int *piStack_78;
  int *local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  bVar6 = *(byte *)param_1;
  sVar29 = *(size_t *)(param_2 + 2);
  pbVar20 = *(byte **)(param_2 + 4);
  bVar7 = *(byte *)param_2;
  pbVar23 = *(byte **)(param_1 + 4);
  pbVar19 = pbVar23;
  if ((bVar6 & 1) == 0) {
    pbVar19 = (byte *)((long)param_1 + 1);
  }
  pbVar2 = pbVar20;
  __n = sVar29;
  if ((bVar7 & 1) == 0) {
    pbVar2 = (byte *)((long)param_2 + 1);
    __n = (ulong)(bVar7 >> 1);
  }
  if (__n == 0) {
LAB_00b9bbe0:
    local_80 = (int *)0x0;
    piStack_78 = (int *)0x0;
    local_70 = (int *)0x0;
                    /* try { // try from 00b9bbe8 to 00b9bbef has its CatchHandler @ 00b9c254 */
    piVar27 = (int *)operator_new(4);
    iVar12 = (int)__n;
    uVar16 = (ulong)iVar12;
    if (!param_5) {
      uVar16 = 0;
    }
    uVar30 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar30 = *(ulong *)(param_1 + 2);
    }
    piVar28 = piVar27 + 1;
    *piVar27 = -iVar12;
    local_80 = piVar27;
    piStack_78 = piVar28;
    local_70 = piVar28;
    if (uVar30 < uVar16) {
      uVar13 = 1;
      piVar25 = piVar28;
      __dest = piVar27;
    }
    else {
      pbVar19 = (byte *)((long)param_2 + 1);
      uVar31 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        pbVar19 = pbVar20;
        uVar31 = sVar29;
      }
      uVar13 = 1;
      piVar26 = piVar28;
      pbVar20 = (byte *)((long)param_1 + 1);
      if ((bVar6 & 1) != 0) {
        pbVar20 = pbVar23;
      }
      do {
        if (uVar31 != 0) {
          pbVar23 = pbVar20 + uVar16;
          pbVar2 = pbVar20 + uVar30;
          lVar18 = (long)pbVar2 - (long)pbVar23;
          pbVar15 = pbVar2;
          if ((long)uVar31 <= lVar18) {
            bVar6 = *pbVar19;
            do {
              pbVar15 = pbVar2;
              if (((0xfffffffffffffffe < lVar18 - uVar31) ||
                  (pbVar23 = (byte *)memchr(pbVar23,(uint)bVar6,(lVar18 - uVar31) + 1),
                  pbVar23 == (byte *)0x0)) ||
                 (iVar14 = memcmp(pbVar23,pbVar19,uVar31), pbVar15 = pbVar23, iVar14 == 0)) break;
              pbVar23 = pbVar23 + 1;
              lVar18 = (long)pbVar2 - (long)pbVar23;
              pbVar15 = pbVar2;
            } while ((long)uVar31 <= lVar18);
          }
          uVar16 = (long)pbVar15 - (long)pbVar20;
          if (pbVar15 == pbVar2) {
            uVar16 = 0xffffffffffffffff;
          }
        }
        iVar14 = (int)uVar16;
        piVar25 = piVar26;
        __dest = piVar27;
        if (iVar14 == -1) break;
        if (piVar26 == piVar28) {
          uVar30 = (long)piVar28 - (long)piVar27;
          uVar16 = ((long)uVar30 >> 2) + 1;
          if (uVar16 >> 0x3e != 0) {
                    /* try { // try from 00b9c204 to 00b9c217 has its CatchHandler @ 00b9c29c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar16 <= (ulong)((long)uVar30 >> 1)) {
            uVar16 = (long)uVar30 >> 1;
          }
          if (0x7ffffffffffffffb < uVar30) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 == 0) {
            __dest = (int *)0x0;
          }
          else {
            if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00b9bdbc to 00b9bdbf has its CatchHandler @ 00b9c25c */
            __dest = (int *)operator_new(uVar16 << 2);
          }
          piVar25 = __dest + ((long)uVar30 >> 2) + 1;
          __dest[(long)uVar30 >> 2] = iVar14;
          if (0 < (long)uVar30) {
            memcpy(__dest,piVar27,uVar30);
          }
          piVar28 = __dest + uVar16;
          local_80 = __dest;
          piStack_78 = piVar25;
          local_70 = piVar28;
          if (piVar27 != (int *)0x0) {
            operator_delete(piVar27);
          }
        }
        else {
          piVar25 = piVar26 + 1;
          *piVar26 = iVar14;
          piStack_78 = piVar25;
        }
        uVar13 = uVar13 + 1;
        uVar16 = (ulong)(iVar14 + iVar12);
        bVar11 = (*(byte *)param_1 & 1) != 0;
        uVar30 = (ulong)(*(byte *)param_1 >> 1);
        if (bVar11) {
          uVar30 = *(ulong *)(param_1 + 2);
        }
        pbVar20 = (byte *)((long)param_1 + 1);
        if (bVar11) {
          pbVar20 = *(byte **)(param_1 + 4);
        }
        pbVar19 = (byte *)((long)param_2 + 1);
        uVar31 = (ulong)(*(byte *)param_2 >> 1);
        if ((*(byte *)param_2 & 1) != 0) {
          pbVar19 = *(byte **)(param_2 + 4);
          uVar31 = *(ulong *)(param_2 + 2);
        }
        piVar26 = piVar25;
        piVar27 = __dest;
      } while (uVar16 <= uVar30);
    }
    if (piVar25 < piVar28) {
      piVar28 = piVar25 + 1;
      *piVar25 = (int)uVar30;
      piVar27 = __dest;
      piStack_78 = piVar28;
    }
    else {
      sVar29 = (long)piVar25 - (long)__dest;
      uVar16 = ((long)sVar29 >> 2) + 1;
      if (uVar16 >> 0x3e != 0) {
                    /* try { // try from 00b9c218 to 00b9c22b has its CatchHandler @ 00b9c258 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar31 = (long)piVar28 - (long)__dest >> 1;
      if (uVar16 <= uVar31) {
        uVar16 = uVar31;
      }
      if (0x7ffffffffffffffb < (ulong)((long)piVar28 - (long)__dest)) {
        uVar16 = 0x3fffffffffffffff;
      }
      if (uVar16 == 0) {
        piVar27 = (int *)0x0;
      }
      else {
        if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00b9be60 to 00b9be63 has its CatchHandler @ 00b9c258 */
        piVar27 = (int *)operator_new(uVar16 << 2);
      }
      piVar28 = piVar27 + ((long)sVar29 >> 2) + 1;
      piVar27[(long)sVar29 >> 2] = (int)uVar30;
      if (0 < (long)sVar29) {
        memcpy(piVar27,__dest,sVar29);
      }
      local_80 = piVar27;
      piStack_78 = piVar28;
      local_70 = piVar27 + uVar16;
      if (__dest != (int *)0x0) {
        operator_delete(__dest);
      }
    }
    if ((int)((ulong)((long)piVar28 - (long)piVar27) >> 2) != 1) {
      uVar16 = 0;
      pbVar19 = (byte *)((ulong)&local_b8 | 1);
      do {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (byte *)0x0;
        piVar28 = piVar27 + uVar16;
        uVar16 = uVar16 + 1;
        uVar21 = piVar27[uVar16] - (*piVar28 + iVar12);
        if (0 < (int)uVar21) {
                    /* try { // try from 00b9bf78 to 00b9bf87 has its CatchHandler @ 00b9c2c0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_b8,(ulong)param_1,(long)(*piVar28 + iVar12),
                       (allocator *)(ulong)uVar21);
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          uStack_98 = uStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
        }
        if (param_4) {
          pbVar20 = (byte *)((ulong)&local_a0 | 1);
          if ((local_a0 & 1) != 0) {
            pbVar20 = local_90;
          }
          if ((pbVar20 == (byte *)0x0) || (bVar6 = *pbVar20, bVar6 == 0)) {
LAB_00b9c030:
            local_b8 = (ulong)local_b8._1_7_ << 8;
            pbVar20 = pbVar19;
          }
          else {
            uVar21 = 0;
            while (bVar6 < 0x21) {
              if ((1L << ((ulong)bVar6 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar6 == 0) goto LAB_00b9c030;
                break;
              }
              uVar21 = uVar21 + 1;
              bVar6 = pbVar20[uVar21];
            }
            uVar10 = uVar21;
            iVar14 = -1;
            do {
              iVar24 = iVar14;
              uVar22 = uVar10;
              uVar10 = uVar22 + 1;
              iVar14 = iVar24 + -1;
            } while (pbVar20[uVar22 + 1] != 0);
            while (pbVar20[uVar22] < 0x21 &&
                   (1L << ((ulong)pbVar20[uVar22] & 0x3f) & 0x100002600U) != 0) {
              iVar24 = iVar24 + 1;
              uVar22 = uVar22 - 1;
            }
            uVar30 = (ulong)(uint)-iVar24;
            if ((uint)-iVar24 < 0x17) {
              local_b8 = CONCAT71(local_b8._1_7_,(char)iVar24 * -2);
              pbVar23 = pbVar19;
              if (iVar24 != 0) goto LAB_00b9c134;
            }
            else {
              uVar31 = uVar30 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00b9c10c to 00b9c113 has its CatchHandler @ 00b9c250 */
              pbVar23 = (byte *)operator_new(uVar31);
              local_b8 = uVar31 | 1;
              uStack_b0 = uVar30;
              local_a8 = pbVar23;
LAB_00b9c134:
              memcpy(pbVar23,pbVar20 + uVar21,uVar30);
            }
            pbVar20 = pbVar23 + uVar30;
          }
          *pbVar20 = 0;
          puVar5 = *(ulong **)(param_3 + 8);
          if (puVar5 < *(ulong **)(param_3 + 0x10)) {
            puVar5[2] = (ulong)local_a8;
            puVar5[1] = uStack_b0;
            *puVar5 = local_b8;
            *(ulong **)(param_3 + 8) = puVar5 + 3;
          }
          else {
                    /* try { // try from 00b9c064 to 00b9c06f has its CatchHandler @ 00b9c264 */
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)param_3,(basic_string *)&local_b8);
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
          }
        }
        else {
          pbVar3 = *(basic_string **)(param_3 + 8);
          if (pbVar3 == *(basic_string **)(param_3 + 0x10)) {
                    /* try { // try from 00b9c01c to 00b9c027 has its CatchHandler @ 00b9c260 */
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((basic_string *)param_3);
          }
          else {
                    /* try { // try from 00b9c004 to 00b9c00f has its CatchHandler @ 00b9c2ac */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar3);
            *(basic_string **)(param_3 + 8) = pbVar3 + 6;
          }
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        piVar27 = local_80;
      } while (uVar16 < (int)((ulong)((long)piStack_78 - (long)local_80) >> 2) - 1);
    }
    if (piVar27 != (int *)0x0) {
      piStack_78 = piVar27;
      operator_delete(piVar27);
    }
    goto LAB_00b9bedc;
  }
  uVar16 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 2);
  }
  if ((long)__n <= (long)uVar16) {
    pbVar1 = pbVar19 + uVar16;
    bVar8 = *pbVar2;
    pbVar15 = pbVar19;
    do {
      if ((0xfffffffffffffffe < uVar16 - __n) ||
         (pbVar15 = (byte *)memchr(pbVar15,(uint)bVar8,(uVar16 - __n) + 1), pbVar15 == (byte *)0x0))
      break;
      iVar12 = memcmp(pbVar15,pbVar2,__n);
      if (iVar12 == 0) {
        if ((pbVar15 != pbVar1) && (-1 < (int)pbVar15 - (int)pbVar19)) goto LAB_00b9bbe0;
        break;
      }
      pbVar15 = pbVar15 + 1;
      uVar16 = (long)pbVar1 - (long)pbVar15;
    } while ((long)__n <= (long)uVar16);
  }
  if (param_4) {
    if ((pbVar19 == (byte *)0x0) || (bVar6 = *pbVar19, bVar6 == 0)) {
LAB_00b9bb58:
      local_80 = (int *)((ulong)local_80._1_7_ << 8);
      puVar17 = (undefined *)((ulong)&local_80 | 1);
    }
    else {
      uVar16 = 1;
      uVar13 = 1;
      while (bVar6 < 0x21) {
        uVar13 = (uint)uVar16;
        if ((1L << ((ulong)bVar6 & 0x3f) & 0x100002600U) == 0) {
          if ((ulong)bVar6 == 0) goto LAB_00b9bb58;
          break;
        }
        pbVar20 = pbVar19 + uVar16;
        uVar13 = uVar13 + 1;
        uVar16 = (ulong)uVar13;
        bVar6 = *pbVar20;
      }
      iVar12 = 0;
      do {
        uVar21 = uVar13 + iVar12;
        iVar12 = iVar12 + 1;
      } while (pbVar19[uVar21] != 0);
      iVar14 = -iVar12;
      uVar21 = (uVar13 + iVar12) - 2;
      while (pbVar19[uVar21] < 0x21 && (1L << ((ulong)pbVar19[uVar21] & 0x3f) & 0x100002600U) != 0)
      {
        iVar14 = iVar14 + 1;
        uVar21 = uVar21 - 1;
      }
      piVar27 = (int *)(ulong)(uint)-iVar14;
      if ((uint)-iVar14 < 0x17) {
        piVar28 = (int *)((ulong)&local_80 | 1);
        local_80 = (int *)CONCAT71(local_80._1_7_,(char)iVar14 * -2);
        if (iVar14 != 0) goto LAB_00b9c1ec;
      }
      else {
        piVar28 = (int *)operator_new((ulong)(piVar27 + 4) & 0x1fffffff0);
        local_80 = (int *)((ulong)(piVar27 + 4) & 0x1fffffff0 | 1);
        piStack_78 = piVar27;
        local_70 = piVar28;
LAB_00b9c1ec:
        memcpy(piVar28,pbVar19 + (uVar13 - 1),(size_t)piVar27);
      }
      puVar17 = (undefined *)((long)piVar28 + (long)piVar27);
    }
    *puVar17 = 0;
    ppiVar4 = *(int ***)(param_3 + 8);
    if (ppiVar4 < *(int ***)(param_3 + 0x10)) {
      ppiVar4[2] = local_70;
      ppiVar4[1] = piStack_78;
      *ppiVar4 = local_80;
      *(int ***)(param_3 + 8) = ppiVar4 + 3;
    }
    else {
                    /* try { // try from 00b9bb90 to 00b9bb9b has its CatchHandler @ 00b9c230 */
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)param_3,(basic_string *)&local_80);
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
    pbVar3 = *(basic_string **)(param_3 + 8);
    if (pbVar3 == *(basic_string **)(param_3 + 0x10)) {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)param_3);
    }
    else {
                    /* try { // try from 00b9bb2c to 00b9bb37 has its CatchHandler @ 00b9c244 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar3);
      *(basic_string **)(param_3 + 8) = pbVar3 + 6;
    }
  }
  bVar6 = **(byte **)param_3;
  uVar16 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar16 = *(ulong *)(*(byte **)param_3 + 8);
  }
  uVar13 = (uint)(uVar16 != 0);
LAB_00b9bedc:
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


