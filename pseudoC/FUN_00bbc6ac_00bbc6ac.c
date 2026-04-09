// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bbc6ac
// Entry Point: 00bbc6ac
// Size: 960 bytes
// Signature: undefined FUN_00bbc6ac(void)


uint FUN_00bbc6ac(pair *param_1,pair *param_2,pair *param_3,pair *param_4,uint *param_5,
                 linesCmp *param_6)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  void *pvVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar8 = tpidr_el0;
  lVar11 = *(long *)(lVar8 + 0x28);
  uVar9 = std::__ndk1::
          __sort4<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar4 = *param_5;
  uVar5 = *param_4;
  uVar16 = uVar9;
  if (uVar4 == uVar5) {
    bVar6 = *(byte *)(param_4 + 2);
    bVar7 = *(byte *)(param_5 + 2);
    uVar1 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar1 = *(ulong *)(param_4 + 4);
    }
    uVar2 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar2 = *(ulong *)(param_5 + 4);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 != 0) {
      pvVar14 = *(void **)(param_4 + 6);
      pvVar15 = *(void **)(param_5 + 6);
      if ((bVar6 & 1) == 0) {
        pvVar14 = (void *)((long)param_4 + 9);
      }
      if ((bVar7 & 1) == 0) {
        pvVar15 = (void *)((long)param_5 + 9);
      }
      iVar10 = memcmp(pvVar15,pvVar14,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbca24;
        goto LAB_00bbc79c;
      }
    }
    if (uVar1 <= uVar2) goto LAB_00bbca24;
  }
  else if (uVar4 < uVar5) goto LAB_00bbca24;
LAB_00bbc79c:
  *param_4 = uVar4;
  uVar16 = uVar9 + 1;
  *param_5 = uVar5;
  uVar17 = *(undefined8 *)(param_5 + 2);
  uVar12 = *(undefined8 *)(param_5 + 6);
  uVar19 = *(undefined8 *)(param_4 + 4);
  uVar18 = *(undefined8 *)(param_4 + 2);
  uVar13 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_5 + 4);
  *(undefined8 *)(param_4 + 2) = uVar17;
  *(undefined8 *)(param_4 + 6) = uVar12;
  *(undefined8 *)(param_5 + 4) = uVar19;
  *(undefined8 *)(param_5 + 2) = uVar18;
  *(undefined8 *)(param_5 + 6) = uVar13;
  uVar4 = *param_4;
  uVar5 = *param_3;
  if (uVar4 == uVar5) {
    bVar7 = *(byte *)(param_4 + 2);
    bVar6 = *(byte *)(param_3 + 2);
    uVar1 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 4);
    }
    uVar2 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar2 = *(ulong *)(param_4 + 4);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 != 0) {
      pvVar14 = *(void **)(param_3 + 6);
      pvVar15 = *(void **)(param_4 + 6);
      if ((bVar6 & 1) == 0) {
        pvVar14 = (void *)((long)param_3 + 9);
      }
      if ((bVar7 & 1) == 0) {
        pvVar15 = (void *)((long)param_4 + 9);
      }
      iVar10 = memcmp(pvVar15,pvVar14,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbca24;
        goto LAB_00bbc868;
      }
    }
    if (uVar1 <= uVar2) goto LAB_00bbca24;
  }
  else if (uVar4 < uVar5) goto LAB_00bbca24;
LAB_00bbc868:
  *param_3 = uVar4;
  uVar16 = uVar9 + 2;
  *param_4 = uVar5;
  uVar17 = *(undefined8 *)(param_4 + 2);
  uVar12 = *(undefined8 *)(param_4 + 6);
  uVar19 = *(undefined8 *)(param_3 + 4);
  uVar18 = *(undefined8 *)(param_3 + 2);
  uVar13 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
  *(undefined8 *)(param_3 + 2) = uVar17;
  *(undefined8 *)(param_3 + 6) = uVar12;
  *(undefined8 *)(param_4 + 4) = uVar19;
  *(undefined8 *)(param_4 + 2) = uVar18;
  *(undefined8 *)(param_4 + 6) = uVar13;
  uVar4 = *param_3;
  uVar5 = *param_2;
  if (uVar4 == uVar5) {
    bVar7 = *(byte *)(param_3 + 2);
    bVar6 = *(byte *)(param_2 + 2);
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
      iVar10 = memcmp(pvVar15,pvVar14,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbca24;
        goto LAB_00bbc934;
      }
    }
    if (uVar1 <= uVar2) goto LAB_00bbca24;
  }
  else if (uVar4 < uVar5) goto LAB_00bbca24;
LAB_00bbc934:
  *param_2 = uVar4;
  *param_3 = uVar5;
  uVar17 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 6);
  uVar19 = *(undefined8 *)(param_2 + 4);
  uVar18 = *(undefined8 *)(param_2 + 2);
  uVar16 = uVar9 + 3;
  uVar13 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = uVar17;
  *(undefined8 *)(param_2 + 6) = uVar12;
  *(undefined8 *)(param_3 + 4) = uVar19;
  *(undefined8 *)(param_3 + 2) = uVar18;
  *(undefined8 *)(param_3 + 6) = uVar13;
  uVar4 = *param_2;
  uVar5 = *param_1;
  if (uVar4 == uVar5) {
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
      iVar10 = memcmp(pvVar15,pvVar14,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbca24;
        goto LAB_00bbc9f4;
      }
    }
    if (uVar1 <= uVar2) goto LAB_00bbca24;
  }
  else if (uVar4 < uVar5) goto LAB_00bbca24;
LAB_00bbc9f4:
  *param_1 = uVar4;
  *param_2 = uVar5;
  uVar17 = *(undefined8 *)(param_2 + 2);
  uVar12 = *(undefined8 *)(param_2 + 6);
  uVar19 = *(undefined8 *)(param_1 + 4);
  uVar18 = *(undefined8 *)(param_1 + 2);
  uVar13 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar17;
  *(undefined8 *)(param_1 + 6) = uVar12;
  *(undefined8 *)(param_2 + 4) = uVar19;
  *(undefined8 *)(param_2 + 2) = uVar18;
  *(undefined8 *)(param_2 + 6) = uVar13;
  uVar16 = uVar9 + 4;
LAB_00bbca24:
  if (*(long *)(lVar8 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


