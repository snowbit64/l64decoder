// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
// Entry Point: 00bbca6c
// Size: 628 bytes
// Signature: void __cdecl __insertion_sort_3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>(pair * param_1, pair * param_2, linesCmp * param_3)


/* void std::__ndk1::__insertion_sort_3<LuauScriptSystem::linesCmp&, std::__ndk1::pair<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >*>(std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*, std::__ndk1::pair<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >*, LuauScriptSystem::linesCmp&) */

void std::__ndk1::
     __insertion_sort_3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
               (pair *param_1,pair *param_2,linesCmp *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  pair *ppVar9;
  uint uVar10;
  ulong *puVar11;
  pair *ppVar12;
  uint *puVar13;
  void *pvVar14;
  void *pvVar15;
  pair *ppVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar10 = __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
                     (param_1,param_1 + 8,param_1 + 0x10,param_3);
  if (param_1 + 0x18 != param_2) {
    lVar17 = 0;
    ppVar9 = param_1 + 0x18;
    ppVar16 = param_1 + 0x10;
    do {
      ppVar12 = ppVar9;
      uVar4 = *ppVar12;
      if (uVar4 == *ppVar16) {
        bVar6 = *(byte *)(ppVar16 + 2);
        bVar7 = *(byte *)(ppVar12 + 2);
        uVar1 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          uVar1 = *(ulong *)(ppVar16 + 4);
        }
        uVar2 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          uVar2 = *(ulong *)(ppVar12 + 4);
        }
        sVar3 = uVar1;
        if (uVar2 <= uVar1) {
          sVar3 = uVar2;
        }
        if (sVar3 != 0) {
          pvVar14 = *(void **)(ppVar16 + 6);
          pvVar15 = *(void **)(ppVar12 + 6);
          if ((bVar6 & 1) == 0) {
            pvVar14 = (void *)((long)ppVar16 + 9);
          }
          if ((bVar7 & 1) == 0) {
            pvVar15 = (void *)((long)ppVar12 + 9);
          }
          uVar10 = memcmp(pvVar15,pvVar14,sVar3);
          if (uVar10 != 0) {
            if ((int)uVar10 < 0) goto LAB_00bbcba0;
            goto LAB_00bbcb04;
          }
        }
        if (uVar2 < uVar1) {
LAB_00bbcba0:
          uStack_78 = *(ulong *)(ppVar12 + 4);
          local_80 = *(ulong *)(ppVar12 + 2);
          local_70 = *(void **)(ppVar12 + 6);
          *(undefined8 *)(ppVar12 + 2) = 0;
          *(undefined8 *)(ppVar12 + 4) = 0;
          *(undefined8 *)(ppVar12 + 6) = 0;
          *ppVar12 = *ppVar16;
          uVar21 = *(undefined8 *)(ppVar16 + 4);
          uVar20 = *(undefined8 *)(ppVar16 + 2);
          *(undefined8 *)(ppVar12 + 6) = *(undefined8 *)(ppVar16 + 6);
          *(undefined8 *)(ppVar12 + 4) = uVar21;
          *(undefined8 *)(ppVar12 + 2) = uVar20;
          *(undefined2 *)(ppVar16 + 2) = 0;
          lVar19 = lVar17;
          puVar13 = param_1;
          if (ppVar16 == param_1) {
            puVar11 = (ulong *)(ppVar16 + 2);
          }
          else {
            do {
              uVar5 = *(uint *)((long)param_1 + lVar19 + 0x20);
              if (uVar4 == uVar5) {
                bVar6 = *(byte *)((long)param_1 + lVar19 + 0x28);
                uVar1 = (ulong)(bVar6 >> 1);
                if ((bVar6 & 1) != 0) {
                  uVar1 = *(ulong *)((long)param_1 + lVar19 + 0x30);
                }
                uVar2 = local_80 >> 1 & 0x7f;
                if ((local_80 & 1) != 0) {
                  uVar2 = uStack_78;
                }
                sVar3 = uVar1;
                if (uVar2 <= uVar1) {
                  sVar3 = uVar2;
                }
                if (sVar3 != 0) {
                  pvVar14 = (void *)((long)param_1 + lVar19 + 0x29);
                  if ((bVar6 & 1) != 0) {
                    pvVar14 = *(void **)((long)param_1 + lVar19 + 0x38);
                  }
                  pvVar15 = (void *)((long)&local_80 + 1);
                  if ((local_80 & 1) != 0) {
                    pvVar15 = local_70;
                  }
                  uVar10 = memcmp(pvVar15,pvVar14,sVar3);
                  if (uVar10 != 0) {
                    if (-1 < (int)uVar10) goto LAB_00bbcc98;
                    goto LAB_00bbcbf0;
                  }
                }
                if (uVar1 <= uVar2) {
LAB_00bbcc98:
                  puVar11 = (ulong *)((long)param_1 + lVar19 + 0x48);
                  puVar13 = (uint *)((long)param_1 + lVar19 + 0x40);
                  goto LAB_00bbcaec;
                }
              }
              else if (uVar4 < uVar5) goto LAB_00bbcc98;
LAB_00bbcbf0:
              lVar18 = lVar19 + -0x20;
              uVar20 = *(undefined8 *)((long)param_1 + lVar19 + 0x28);
              *(uint *)((long)param_1 + lVar19 + 0x40) = uVar5;
              *(undefined2 *)((long)param_1 + lVar19 + 0x28) = 0;
              *(undefined8 *)((long)param_1 + lVar19 + 0x50) =
                   *(undefined8 *)((long)param_1 + lVar19 + 0x30);
              *(undefined8 *)((long)param_1 + lVar19 + 0x48) = uVar20;
              *(undefined8 *)((long)param_1 + lVar19 + 0x58) =
                   *(undefined8 *)((long)param_1 + lVar19 + 0x38);
              lVar19 = lVar18;
            } while (lVar18 != -0x40);
            puVar11 = (ulong *)(param_1 + 2);
          }
LAB_00bbcaec:
          *puVar13 = uVar4;
          puVar11[2] = (ulong)local_70;
          puVar11[1] = uStack_78;
          *puVar11 = local_80;
        }
      }
      else if (*ppVar16 <= uVar4) goto LAB_00bbcba0;
LAB_00bbcb04:
      lVar17 = lVar17 + 0x20;
      ppVar9 = ppVar12 + 8;
      ppVar16 = ppVar12;
    } while (ppVar12 + 8 != param_2);
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


