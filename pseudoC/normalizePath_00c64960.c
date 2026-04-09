// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: normalizePath
// Entry Point: 00c64960
// Size: 1552 bytes
// Signature: undefined __cdecl normalizePath(basic_string * param_1, basic_string * param_2)


/* PathUtil::normalizePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::normalizePath(basic_string *param_1,basic_string *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  bVar1 = *(byte *)param_1;
  uVar17 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar17 = *(ulong *)(param_1 + 2);
  }
  if (uVar17 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_2);
    goto LAB_00c64f3c;
  }
  pcVar11 = *(char **)(param_1 + 4);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  if ((bVar1 & 1) == 0) {
    pcVar11 = (char *)((long)param_1 + 1);
  }
  cVar2 = *pcVar11;
  if (cVar2 != '\0') {
    bVar8 = false;
    do {
      pcVar11 = pcVar11 + 1;
      bVar6 = cVar2 == '/';
      bVar7 = cVar2 == '\\';
      if ((bVar7) || (cVar2 == '/')) {
        if (!bVar8) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&stack0xffffffffffffffa0 + -0x20);
        }
      }
      else {
                    /* try { // try from 00c649d4 to 00c64a17 has its CatchHandler @ 00c64f9c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)&stack0xffffffffffffffa0 + -0x20);
      }
      cVar2 = *pcVar11;
      bVar8 = bVar7 || bVar6;
    } while (cVar2 != '\0');
  }
  local_98 = (byte *)0x0;
  local_90 = (byte *)0x0;
  local_88 = 0;
  uVar17 = (ulong)local_b0 >> 0x10;
  local_b0 = (undefined8 *)CONCAT62((uint6)uVar17 & 0xffffffffff00,0x2f02);
                    /* try { // try from 00c64a30 to 00c64a47 has its CatchHandler @ 00c64f74 */
  StringUtil::split((basic_string *)&local_80,(basic_string *)&local_b0,(vector *)&local_98,false,
                    false);
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  if (local_90 != local_98) {
    uVar17 = 0;
    do {
      puVar16 = local_a8;
      pbVar9 = local_98 + uVar17 * 0x18;
      bVar1 = *pbVar9;
      uVar12 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar12 = *(ulong *)(pbVar9 + 8);
      }
      if (uVar12 != 0) {
        if (uVar12 == 1) {
          pbVar10 = *(byte **)(local_98 + uVar17 * 0x18 + 0x10);
          if ((bVar1 & 1) == 0) {
            pbVar10 = pbVar9 + 1;
          }
          if (*pbVar10 == 0x2e) goto LAB_00c64a88;
        }
        if (local_a8 == local_a0) {
                    /* try { // try from 00c64a80 to 00c64a87 has its CatchHandler @ 00c64f8c */
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((basic_string *)&local_b0);
        }
        else {
                    /* try { // try from 00c64af0 to 00c64af7 has its CatchHandler @ 00c64f90 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)local_a8);
          local_a8 = puVar16 + 3;
        }
      }
LAB_00c64a88:
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar12 = ((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555;
    } while (uVar17 <= uVar12 && uVar12 - uVar17 != 0);
  }
  pcVar11 = (char *)((long)param_1 + 1);
  if ((*(byte *)param_1 & 1) != 0) {
    pcVar11 = *(char **)(param_1 + 4);
  }
  cVar2 = *pcVar11;
  if (local_a8 == local_b0) {
LAB_00c64dc0:
    if (cVar2 == '/') goto LAB_00c64de0;
                    /* try { // try from 00c64dc8 to 00c64dff has its CatchHandler @ 00c64f70 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_2);
    puVar16 = local_b0;
  }
  else {
    iVar15 = 0;
    puVar16 = local_a8;
    uVar17 = 0;
    do {
      puVar18 = local_b0 + uVar17 * 3;
      bVar1 = *(byte *)puVar18;
      uVar12 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar12 = puVar18[1];
      }
      if (uVar12 == 2) {
        pcVar11 = (char *)local_b0[uVar17 * 3 + 2];
        if ((bVar1 & 1) == 0) {
          pcVar11 = (char *)((long)puVar18 + 1);
        }
        if (*pcVar11 != '.') goto LAB_00c64be4;
        bVar8 = pcVar11[1] == '.';
        if (iVar15 != 0) goto LAB_00c64bec;
LAB_00c64c44:
        bVar6 = false;
        uVar12 = (ulong)(iVar15 + 1);
        if (bVar8) {
LAB_00c64c50:
          if ((!(bool)(iVar15 == 0 | bVar6)) || (iVar15 == 0 && cVar2 == '/')) {
            puVar13 = puVar18 + 3;
            puVar19 = puVar16;
            if (puVar18 + 3 == puVar16) {
LAB_00c64ce0:
              do {
                puVar16 = puVar18;
                puVar13 = puVar19 + -3;
                if ((*(byte *)puVar13 & 1) != 0) {
                  operator_delete((void *)puVar19[-1]);
                }
                puVar19 = puVar13;
                puVar18 = puVar16;
              } while (puVar13 != puVar16);
            }
            else {
              while( true ) {
                if ((bVar1 & 1) != 0) {
                  operator_delete((void *)puVar13[-1]);
                }
                puVar13[-2] = puVar13[1];
                puVar13[-3] = *puVar13;
                puVar13[-1] = puVar13[2];
                *(undefined2 *)puVar13 = 0;
                if (puVar13 + 3 == puVar16) break;
                bVar1 = *(byte *)puVar13;
                puVar13 = puVar13 + 3;
              }
              puVar16 = puVar13;
              puVar19 = local_a8;
              puVar18 = puVar13;
              if (puVar13 != local_a8) goto LAB_00c64ce0;
            }
            local_a8 = puVar16;
            if (cVar2 == '/') {
              if (iVar15 == 0) {
                uVar12 = 0;
              }
              else {
LAB_00c64d10:
                puVar18 = local_b0 + uVar17 * 3 + -3;
                puVar13 = puVar18;
                if (local_b0 + uVar17 * 3 == puVar16) {
LAB_00c64d8c:
                  do {
                    puVar13 = puVar16 + -3;
                    if ((*(byte *)puVar13 & 1) != 0) {
                      operator_delete((void *)puVar16[-1]);
                    }
                    puVar16 = puVar13;
                  } while (puVar13 != puVar18);
                }
                else {
                  do {
                    if ((*(byte *)puVar13 & 1) != 0) {
                      operator_delete((void *)puVar13[2]);
                    }
                    uVar20 = puVar13[3];
                    puVar18 = puVar13 + 3;
                    *(undefined2 *)(puVar13 + 3) = 0;
                    puVar13[1] = puVar13[4];
                    *puVar13 = uVar20;
                    puVar13[2] = puVar13[5];
                    puVar19 = puVar13 + 6;
                    puVar13 = puVar18;
                  } while (puVar19 != puVar16);
                  puVar16 = local_a8;
                  if (puVar18 != local_a8) goto LAB_00c64d8c;
                }
                puVar16 = puVar18;
                uVar12 = (ulong)(iVar15 - 1);
                local_a8 = puVar16;
              }
            }
            else {
              if (iVar15 != 0) goto LAB_00c64d10;
              uVar12 = 0;
            }
          }
        }
      }
      else {
LAB_00c64be4:
        bVar8 = false;
        if (iVar15 == 0) goto LAB_00c64c44;
LAB_00c64bec:
        puVar13 = local_b0 + (ulong)(iVar15 - 1) * 3;
        bVar3 = *(byte *)puVar13;
        uVar12 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar12 = puVar13[1];
        }
        if (uVar12 != 2) goto LAB_00c64c44;
        pcVar11 = (char *)local_b0[(ulong)(iVar15 - 1) * 3 + 2];
        if ((bVar3 & 1) == 0) {
          pcVar11 = (char *)((long)puVar13 + 1);
        }
        if (*pcVar11 != '.') goto LAB_00c64c44;
        bVar6 = pcVar11[1] == '.';
        uVar12 = (ulong)(iVar15 + 1);
        if (bVar8) goto LAB_00c64c50;
      }
      iVar15 = (int)uVar12;
      uVar14 = ((long)puVar16 - (long)local_b0 >> 3) * -0x5555555555555555;
      uVar17 = uVar12;
    } while (uVar12 <= uVar14 && uVar14 - uVar12 != 0);
    if ((long)puVar16 - (long)local_b0 == 0) goto LAB_00c64dc0;
LAB_00c64de0:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_2);
    puVar16 = local_a8;
    if (local_a8 != local_b0) {
      uVar17 = 0;
      do {
        puVar16 = local_b0 + uVar17 * 3;
        uVar12 = puVar16[2];
        if ((*(byte *)puVar16 & 1) == 0) {
          uVar12 = (long)puVar16 + 1;
        }
                    /* try { // try from 00c64e5c to 00c64e8b has its CatchHandler @ 00c64fa4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_2,uVar12);
        uVar12 = ((long)local_a8 - (long)local_b0 >> 3) * -0x5555555555555555;
        if (uVar17 < uVar12 - 1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)param_2);
          uVar12 = ((long)local_a8 - (long)local_b0 >> 3) * -0x5555555555555555;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
        puVar16 = local_b0;
      } while (uVar17 < uVar12);
    }
  }
  puVar18 = puVar16;
  puVar13 = local_a8;
  if (puVar16 != (undefined8 *)0x0) {
    while (puVar19 = puVar13, puVar19 != puVar16) {
      puVar13 = puVar19 + -3;
      puVar18 = local_b0;
      if ((*(byte *)puVar13 & 1) != 0) {
        operator_delete((void *)puVar19[-1]);
        puVar18 = local_b0;
      }
    }
    local_a8 = puVar16;
    operator_delete(puVar18);
  }
  pbVar9 = local_98;
  pbVar10 = local_90;
  if (local_98 != (byte *)0x0) {
    while (pbVar5 = pbVar10, pbVar5 != pbVar9) {
      pbVar10 = pbVar5 + -0x18;
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
    }
    local_90 = pbVar9;
    operator_delete(local_98);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00c64f3c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


