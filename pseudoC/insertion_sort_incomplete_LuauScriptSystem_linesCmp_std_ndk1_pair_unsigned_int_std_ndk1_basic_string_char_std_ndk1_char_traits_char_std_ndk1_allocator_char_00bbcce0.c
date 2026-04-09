// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
// Entry Point: 00bbcce0
// Size: 996 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>(pair * param_1, pair * param_2, linesCmp * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<LuauScriptSystem::linesCmp&,
   std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >*>(std::__ndk1::pair<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >*, std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*, LuauScriptSystem::linesCmp&)
    */

bool std::__ndk1::
     __insertion_sort_incomplete<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
               (pair *param_1,pair *param_2,linesCmp *param_3)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  pair *ppVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  pair *ppVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined8 uVar17;
  void *pvVar18;
  void *pvVar19;
  pair *ppVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_98;
  ulong uStack_90;
  void *local_88;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar12 = (long)param_2 - (long)param_1 >> 5;
  if (5 < uVar12) {
    __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              (param_1,param_1 + 8,param_1 + 0x10,param_3);
    if (param_1 + 0x18 != param_2) {
      lVar21 = 0;
      iVar10 = 0;
      ppVar8 = param_1 + 0x18;
      ppVar20 = param_1 + 0x10;
      do {
        ppVar14 = ppVar8;
        uVar3 = *ppVar14;
        if (uVar3 == *ppVar20) {
          bVar5 = *(byte *)(ppVar20 + 2);
          bVar6 = *(byte *)(ppVar14 + 2);
          uVar12 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar12 = *(ulong *)(ppVar20 + 4);
          }
          uVar1 = (ulong)(bVar6 >> 1);
          if ((bVar6 & 1) != 0) {
            uVar1 = *(ulong *)(ppVar14 + 4);
          }
          sVar2 = uVar12;
          if (uVar1 <= uVar12) {
            sVar2 = uVar1;
          }
          if (sVar2 != 0) {
            pvVar18 = *(void **)(ppVar20 + 6);
            pvVar19 = *(void **)(ppVar14 + 6);
            if ((bVar5 & 1) == 0) {
              pvVar18 = (void *)((long)ppVar20 + 9);
            }
            if ((bVar6 & 1) == 0) {
              pvVar19 = (void *)((long)ppVar14 + 9);
            }
            iVar11 = memcmp(pvVar19,pvVar18,sVar2);
            if (iVar11 != 0) {
              if (iVar11 < 0) goto LAB_00bbcee8;
              goto LAB_00bbce4c;
            }
          }
          if (uVar1 < uVar12) {
LAB_00bbcee8:
            uStack_90 = *(ulong *)(ppVar14 + 4);
            local_98 = *(ulong *)(ppVar14 + 2);
            local_88 = *(void **)(ppVar14 + 6);
            *(undefined8 *)(ppVar14 + 2) = 0;
            *(undefined8 *)(ppVar14 + 4) = 0;
            *(undefined8 *)(ppVar14 + 6) = 0;
            *ppVar14 = *ppVar20;
            uVar17 = *(undefined8 *)(ppVar20 + 4);
            uVar15 = *(undefined8 *)(ppVar20 + 2);
            *(undefined8 *)(ppVar14 + 6) = *(undefined8 *)(ppVar20 + 6);
            *(undefined8 *)(ppVar14 + 4) = uVar17;
            *(undefined8 *)(ppVar14 + 2) = uVar15;
            *(undefined2 *)(ppVar20 + 2) = 0;
            lVar23 = lVar21;
            puVar16 = param_1;
            if (ppVar20 == param_1) {
              puVar13 = (ulong *)(ppVar20 + 2);
            }
            else {
              do {
                uVar4 = *(uint *)((long)param_1 + lVar23 + 0x20);
                if (uVar3 == uVar4) {
                  bVar5 = *(byte *)((long)param_1 + lVar23 + 0x28);
                  uVar12 = (ulong)(bVar5 >> 1);
                  if ((bVar5 & 1) != 0) {
                    uVar12 = *(ulong *)((long)param_1 + lVar23 + 0x30);
                  }
                  uVar1 = local_98 >> 1 & 0x7f;
                  if ((local_98 & 1) != 0) {
                    uVar1 = uStack_90;
                  }
                  sVar2 = uVar12;
                  if (uVar1 <= uVar12) {
                    sVar2 = uVar1;
                  }
                  if (sVar2 != 0) {
                    pvVar18 = (void *)((long)param_1 + lVar23 + 0x29);
                    if ((bVar5 & 1) != 0) {
                      pvVar18 = *(void **)((long)param_1 + lVar23 + 0x38);
                    }
                    pvVar19 = (void *)((long)&local_98 + 1);
                    if ((local_98 & 1) != 0) {
                      pvVar19 = local_88;
                    }
                    iVar11 = memcmp(pvVar19,pvVar18,sVar2);
                    if (iVar11 != 0) {
                      if (-1 < iVar11) goto LAB_00bbcfe4;
                      goto LAB_00bbcf38;
                    }
                  }
                  if (uVar12 <= uVar1) {
LAB_00bbcfe4:
                    puVar13 = (ulong *)((long)param_1 + lVar23 + 0x48);
                    puVar16 = (uint *)((long)param_1 + lVar23 + 0x40);
                    goto LAB_00bbce28;
                  }
                }
                else if (uVar3 < uVar4) goto LAB_00bbcfe4;
LAB_00bbcf38:
                lVar22 = lVar23 + -0x20;
                uVar15 = *(undefined8 *)((long)param_1 + lVar23 + 0x28);
                *(uint *)((long)param_1 + lVar23 + 0x40) = uVar4;
                *(undefined2 *)((long)param_1 + lVar23 + 0x28) = 0;
                *(undefined8 *)((long)param_1 + lVar23 + 0x50) =
                     *(undefined8 *)((long)param_1 + lVar23 + 0x30);
                *(undefined8 *)((long)param_1 + lVar23 + 0x48) = uVar15;
                *(undefined8 *)((long)param_1 + lVar23 + 0x58) =
                     *(undefined8 *)((long)param_1 + lVar23 + 0x38);
                lVar23 = lVar22;
              } while (lVar22 != -0x40);
              puVar13 = (ulong *)(param_1 + 2);
            }
LAB_00bbce28:
            iVar10 = iVar10 + 1;
            *puVar16 = uVar3;
            puVar13[2] = (ulong)local_88;
            puVar13[1] = uStack_90;
            *puVar13 = local_98;
            if (iVar10 == 8) {
              bVar9 = ppVar14 + 8 == param_2;
              goto switchD_00bbcd40_caseD_0;
            }
          }
        }
        else if (*ppVar20 <= uVar3) goto LAB_00bbcee8;
LAB_00bbce4c:
        lVar21 = lVar21 + 0x20;
        ppVar8 = ppVar14 + 8;
        ppVar20 = ppVar14;
      } while (ppVar14 + 8 != param_2);
      bVar9 = true;
      goto switchD_00bbcd40_caseD_0;
    }
    goto LAB_00bbd038;
  }
  bVar9 = true;
  switch(uVar12) {
  case 2:
    uVar4 = param_2[-8];
    uVar3 = *param_1;
    if (uVar4 == uVar3) {
      bVar5 = *(byte *)(param_1 + 2);
      bVar6 = *(byte *)(param_2 + -6);
      uVar12 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar12 = *(ulong *)(param_1 + 4);
      }
      uVar1 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + -4);
      }
      sVar2 = uVar12;
      if (uVar1 <= uVar12) {
        sVar2 = uVar1;
      }
      if (sVar2 != 0) {
        pvVar18 = *(void **)(param_1 + 6);
        pvVar19 = *(void **)(param_2 + -2);
        if ((bVar5 & 1) == 0) {
          pvVar18 = (void *)((long)param_1 + 9);
        }
        if ((bVar6 & 1) == 0) {
          pvVar19 = (void *)((long)param_2 + -0x17);
        }
        iVar10 = memcmp(pvVar19,pvVar18,sVar2);
        if (iVar10 != 0) {
          if (iVar10 < 0) goto LAB_00bbd050;
          goto LAB_00bbd038;
        }
      }
      if (uVar1 < uVar12) {
LAB_00bbd050:
        *param_1 = uVar4;
        bVar9 = true;
        param_2[-8] = uVar3;
        uVar24 = *(undefined8 *)(param_2 + -6);
        uVar15 = *(undefined8 *)(param_2 + -2);
        uVar26 = *(undefined8 *)(param_1 + 4);
        uVar25 = *(undefined8 *)(param_1 + 2);
        uVar17 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 2) = uVar24;
        *(undefined8 *)(param_1 + 6) = uVar15;
        *(undefined8 *)(param_2 + -4) = uVar26;
        *(undefined8 *)(param_2 + -6) = uVar25;
        *(undefined8 *)(param_2 + -2) = uVar17;
        break;
      }
    }
    else if (uVar3 <= uVar4) goto LAB_00bbd050;
LAB_00bbd038:
    bVar9 = true;
    break;
  case 3:
    __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              (param_1,param_1 + 8,param_2 + -8,param_3);
    bVar9 = true;
    break;
  case 4:
    __sort4<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    bVar9 = true;
    break;
  case 5:
    FUN_00bbc6ac(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
    bVar9 = true;
  }
switchD_00bbcd40_caseD_0:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}


