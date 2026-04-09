// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
// Entry Point: 00bbbff0
// Size: 976 bytes
// Signature: uint __cdecl __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>(pair * param_1, pair * param_2, pair * param_3, linesCmp * param_4)


/* unsigned int std::__ndk1::__sort3<LuauScriptSystem::linesCmp&, std::__ndk1::pair<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >*>(std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*, std::__ndk1::pair<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >*, std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*, LuauScriptSystem::linesCmp&)
    */

uint std::__ndk1::
     __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
               (pair *param_1,pair *param_2,pair *param_3,linesCmp *param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar8 = tpidr_el0;
  lVar11 = *(long *)(lVar8 + 0x28);
  uVar10 = *param_2;
  uVar4 = *param_1;
  if (uVar10 != uVar4) {
    if (uVar4 <= uVar10) goto LAB_00bbc118;
LAB_00bbc0a0:
    uVar4 = *param_3;
    if (uVar4 == uVar10) {
      bVar6 = *(byte *)(param_2 + 2);
      bVar7 = *(byte *)(param_3 + 2);
      uVar1 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 4);
      }
      uVar2 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        uVar2 = *(ulong *)(param_3 + 4);
      }
      sVar3 = uVar1;
      if (uVar2 <= uVar1) {
        sVar3 = uVar2;
      }
      if (sVar3 != 0) {
        pvVar14 = *(void **)(param_2 + 6);
        pvVar15 = *(void **)(param_3 + 6);
        if ((bVar6 & 1) == 0) {
          pvVar14 = (void *)((long)param_2 + 9);
        }
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)((long)param_3 + 9);
        }
        iVar9 = memcmp(pvVar15,pvVar14,sVar3);
        if (iVar9 != 0) {
          if (-1 < iVar9) goto LAB_00bbc18c;
          goto LAB_00bbc23c;
        }
      }
      if (uVar1 <= uVar2) {
LAB_00bbc18c:
        uVar10 = 0;
        goto LAB_00bbc38c;
      }
    }
    else if (uVar4 < uVar10) goto LAB_00bbc18c;
LAB_00bbc23c:
    *param_2 = uVar4;
    *param_3 = uVar10;
    uVar16 = *(undefined8 *)(param_3 + 2);
    uVar12 = *(undefined8 *)(param_3 + 6);
    uVar18 = *(undefined8 *)(param_2 + 4);
    uVar17 = *(undefined8 *)(param_2 + 2);
    uVar13 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 2) = uVar16;
    *(undefined8 *)(param_2 + 6) = uVar12;
    *(undefined8 *)(param_3 + 4) = uVar18;
    *(undefined8 *)(param_3 + 2) = uVar17;
    *(undefined8 *)(param_3 + 6) = uVar13;
    uVar10 = *param_2;
    uVar4 = *param_1;
    if (uVar10 == uVar4) {
      bVar7 = *(byte *)(param_2 + 2);
      bVar6 = *(byte *)(param_1 + 2);
      uVar1 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 4);
      }
      uVar2 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 4);
      }
      sVar3 = uVar1;
      if (uVar2 <= uVar1) {
        sVar3 = uVar2;
      }
      if (sVar3 != 0) {
        pvVar14 = *(void **)(param_1 + 6);
        pvVar15 = *(void **)(param_2 + 6);
        if ((bVar6 & 1) == 0) {
          pvVar14 = (void *)((long)param_1 + 9);
        }
        if ((bVar7 & 1) == 0) {
          pvVar15 = (void *)((long)param_2 + 9);
        }
        iVar9 = memcmp(pvVar15,pvVar14,sVar3);
        if (iVar9 != 0) {
          if (iVar9 < 0) goto LAB_00bbc358;
          goto LAB_00bbc388;
        }
      }
      if (uVar2 < uVar1) {
LAB_00bbc358:
        *param_1 = uVar10;
        uVar10 = 2;
        *param_2 = uVar4;
        uVar16 = *(undefined8 *)(param_2 + 2);
        uVar12 = *(undefined8 *)(param_2 + 6);
        uVar18 = *(undefined8 *)(param_1 + 4);
        uVar17 = *(undefined8 *)(param_1 + 2);
        uVar13 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 2) = uVar16;
        *(undefined8 *)(param_1 + 6) = uVar12;
        *(undefined8 *)(param_2 + 4) = uVar18;
        *(undefined8 *)(param_2 + 2) = uVar17;
        *(undefined8 *)(param_2 + 6) = uVar13;
        goto LAB_00bbc38c;
      }
    }
    else if (uVar4 <= uVar10) goto LAB_00bbc358;
    goto LAB_00bbc388;
  }
  bVar6 = *(byte *)(param_1 + 2);
  bVar7 = *(byte *)(param_2 + 2);
  uVar1 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 4);
  }
  uVar2 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 4);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    pvVar14 = *(void **)(param_1 + 6);
    pvVar15 = *(void **)(param_2 + 6);
    if ((bVar6 & 1) == 0) {
      pvVar14 = (void *)((long)param_1 + 9);
    }
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 9);
    }
    iVar9 = memcmp(pvVar15,pvVar14,sVar3);
    if (iVar9 != 0) {
      if (-1 < iVar9) goto LAB_00bbc0a0;
      goto LAB_00bbc118;
    }
  }
  if (uVar1 <= uVar2) goto LAB_00bbc0a0;
LAB_00bbc118:
  uVar5 = *param_3;
  if (uVar5 == uVar10) {
    bVar6 = *(byte *)(param_2 + 2);
    bVar7 = *(byte *)(param_3 + 2);
    uVar1 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 4);
    }
    uVar2 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar2 = *(ulong *)(param_3 + 4);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 != 0) {
      pvVar14 = *(void **)(param_2 + 6);
      pvVar15 = *(void **)(param_3 + 6);
      if ((bVar6 & 1) == 0) {
        pvVar14 = (void *)((long)param_2 + 9);
      }
      if ((bVar7 & 1) == 0) {
        pvVar15 = (void *)((long)param_3 + 9);
      }
      iVar9 = memcmp(pvVar15,pvVar14,sVar3);
      if (iVar9 != 0) {
        if (iVar9 < 0) goto LAB_00bbc2e0;
        goto LAB_00bbc198;
      }
    }
    if (uVar1 <= uVar2) goto LAB_00bbc198;
LAB_00bbc2e0:
    *param_1 = uVar5;
    uVar10 = 1;
    uVar16 = *(undefined8 *)(param_3 + 2);
    *param_3 = uVar4;
    uVar12 = *(undefined8 *)(param_3 + 6);
    uVar18 = *(undefined8 *)(param_1 + 4);
    uVar17 = *(undefined8 *)(param_1 + 2);
    uVar13 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 2) = uVar16;
    *(undefined8 *)(param_1 + 6) = uVar12;
  }
  else {
    if (uVar10 <= uVar5) goto LAB_00bbc2e0;
LAB_00bbc198:
    *param_1 = uVar10;
    *param_2 = uVar4;
    uVar16 = *(undefined8 *)(param_2 + 2);
    uVar12 = *(undefined8 *)(param_2 + 6);
    uVar18 = *(undefined8 *)(param_1 + 4);
    uVar17 = *(undefined8 *)(param_1 + 2);
    uVar13 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = uVar16;
    *(undefined8 *)(param_1 + 6) = uVar12;
    *(undefined8 *)(param_2 + 4) = uVar18;
    *(undefined8 *)(param_2 + 2) = uVar17;
    uVar4 = *param_2;
    *(undefined8 *)(param_2 + 6) = uVar13;
    uVar10 = *param_3;
    if (uVar10 == uVar4) {
      bVar7 = *(byte *)(param_2 + 2);
      bVar6 = *(byte *)(param_3 + 2);
      uVar1 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 4);
      }
      uVar2 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar2 = *(ulong *)(param_3 + 4);
      }
      sVar3 = uVar1;
      if (uVar2 <= uVar1) {
        sVar3 = uVar2;
      }
      if (sVar3 != 0) {
        pvVar14 = *(void **)(param_2 + 6);
        pvVar15 = *(void **)(param_3 + 6);
        if ((bVar7 & 1) == 0) {
          pvVar14 = (void *)((long)param_2 + 9);
        }
        if ((bVar6 & 1) == 0) {
          pvVar15 = (void *)((long)param_3 + 9);
        }
        iVar9 = memcmp(pvVar15,pvVar14,sVar3);
        if (iVar9 != 0) {
          if (-1 < iVar9) goto LAB_00bbc388;
          goto LAB_00bbc320;
        }
      }
      if (uVar1 <= uVar2) {
LAB_00bbc388:
        uVar10 = 1;
        goto LAB_00bbc38c;
      }
    }
    else if (uVar10 < uVar4) goto LAB_00bbc388;
LAB_00bbc320:
    *param_2 = uVar10;
    uVar10 = 2;
    *param_3 = uVar4;
    uVar16 = *(undefined8 *)(param_3 + 2);
    uVar12 = *(undefined8 *)(param_3 + 6);
    uVar18 = *(undefined8 *)(param_2 + 4);
    uVar17 = *(undefined8 *)(param_2 + 2);
    uVar13 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 2) = uVar16;
    *(undefined8 *)(param_2 + 6) = uVar12;
  }
  *(undefined8 *)(param_3 + 4) = uVar18;
  *(undefined8 *)(param_3 + 2) = uVar17;
  *(undefined8 *)(param_3 + 6) = uVar13;
LAB_00bbc38c:
  if (*(long *)(lVar8 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


