// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
// Entry Point: 00af7158
// Size: 1836 bytes
// Signature: void __cdecl __sort<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>(GsFileInfo * param_1, GsFileInfo * param_2, SortFileInfoByModifiedType * param_3)


/* void std::__ndk1::__sort<GiantsAdsProvider::SortFileInfoByModifiedType&,
   GsFileInfo*>(GsFileInfo*, GsFileInfo*, GiantsAdsProvider::SortFileInfoByModifiedType&) */

void std::__ndk1::__sort<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
               (GsFileInfo *param_1,GsFileInfo *param_2,SortFileInfoByModifiedType *param_3)

{
  undefined uVar1;
  undefined uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *local_a0;
  undefined2 local_72;
  undefined6 uStack_70;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  local_a0 = (undefined8 *)param_2;
LAB_00af7190:
  puVar20 = local_a0 + -6;
  puVar12 = local_a0 + -3;
  puVar19 = (undefined8 *)param_1;
LAB_00af71a8:
  param_1 = (GsFileInfo *)puVar19;
  uVar8 = (long)local_a0 - (long)param_1;
  switch(((long)uVar8 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00af7734_caseD_0;
  case 2:
    if ((ulong)local_a0[-1] < *(ulong *)((long)param_1 + 0x28)) {
      uVar9 = *(undefined8 *)((long)param_1 + 0x10);
      uVar1 = *param_1;
      uVar11 = *(undefined8 *)((long)param_1 + 2);
      uVar2 = *(undefined *)((long)param_1 + 1);
      uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 8) >> 0x10);
      uVar10 = *(undefined8 *)((long)param_1 + 0x28);
      *(undefined8 *)((long)param_1 + 8) = 0;
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      uVar22 = *(undefined8 *)((long)param_1 + 0x20);
      uVar13 = *(undefined8 *)((long)param_1 + 0x18);
      local_72 = (undefined2)((ulong)uVar11 >> 0x30);
      *(undefined8 *)param_1 = 0;
      uVar23 = local_a0[-5];
      uVar21 = *puVar20;
      *(undefined8 *)((long)param_1 + 0x10) = local_a0[-4];
      *(undefined8 *)((long)param_1 + 8) = uVar23;
      *(undefined8 *)param_1 = uVar21;
      *(undefined2 *)(local_a0 + -6) = 0;
      uVar23 = local_a0[-2];
      uVar21 = local_a0[-3];
      *(undefined8 *)((long)param_1 + 0x28) = local_a0[-1];
      *(undefined8 *)((long)param_1 + 0x20) = uVar23;
      *(undefined8 *)((long)param_1 + 0x18) = uVar21;
      if ((*(byte *)(local_a0 + -6) & 1) != 0) {
        operator_delete((void *)local_a0[-4]);
      }
      *(undefined *)(local_a0 + -6) = uVar1;
      *(undefined *)((long)local_a0 + -0x2f) = uVar2;
      local_a0[-4] = uVar9;
      local_a0[-5] = CONCAT62(uStack_70,local_72);
      *(undefined8 *)((long)local_a0 + -0x2e) = uVar11;
      local_a0[-1] = uVar10;
      local_a0[-2] = uVar22;
      *puVar12 = uVar13;
    }
    goto switchD_00af7734_caseD_0;
  case 3:
    __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              (param_1,(GsFileInfo *)((long)param_1 + 0x30),(GsFileInfo *)puVar20,param_3);
    goto switchD_00af7734_caseD_0;
  case 4:
    __sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              (param_1,(GsFileInfo *)((long)param_1 + 0x30),(GsFileInfo *)((long)param_1 + 0x60),
               (GsFileInfo *)puVar20,param_3);
    goto switchD_00af7734_caseD_0;
  case 5:
    FUN_00af7eb8(param_1,(undefined8 *)((long)param_1 + 0x30),(undefined8 *)((long)param_1 + 0x60),
                 (undefined8 *)((long)param_1 + 0x90),puVar20,param_3);
    goto switchD_00af7734_caseD_0;
  }
  if ((long)uVar8 < 0x150) {
    __insertion_sort_3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              (param_1,(GsFileInfo *)local_a0,param_3);
    goto switchD_00af7734_caseD_0;
  }
  if (uVar8 < 0xbb51) {
    puVar19 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar8 & 0xffff) / 0x60) * 6 * 8);
    uVar6 = __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
                      (param_1,(GsFileInfo *)puVar19,(GsFileInfo *)puVar20,param_3);
  }
  else {
    puVar19 = (undefined8 *)((long)param_1 + (uVar8 / 0x60) * 6 * 8);
    uVar6 = FUN_00af7eb8(param_1,(undefined8 *)((long)param_1 + (uVar8 / 0xc0) * 6 * 8),puVar19,
                         puVar19 + (uVar8 / 0xc0) * 6,puVar20,param_3);
  }
  uVar8 = *(ulong *)((long)param_1 + 0x28);
  puVar18 = puVar20;
  if ((ulong)puVar19[5] <= uVar8) {
    do {
      puVar15 = puVar18;
      puVar18 = puVar15 + -6;
      if (puVar18 == (undefined8 *)param_1) {
        puVar18 = (undefined8 *)((long)param_1 + 0x30);
        if ((ulong)local_a0[-1] <= uVar8) goto joined_r0x00af754c;
        goto LAB_00af7618;
      }
    } while ((ulong)puVar19[5] <= (ulong)puVar15[-1]);
    uVar9 = *(undefined8 *)((long)param_1 + 0x10);
    uVar1 = *param_1;
    uVar11 = *(undefined8 *)((long)param_1 + 2);
    uVar2 = *(undefined *)((long)param_1 + 1);
    uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 8) >> 0x10);
    uVar10 = *(undefined8 *)((long)param_1 + 0x28);
    *(undefined8 *)((long)param_1 + 8) = 0;
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    uVar22 = *(undefined8 *)((long)param_1 + 0x20);
    uVar13 = *(undefined8 *)((long)param_1 + 0x18);
    local_72 = (undefined2)((ulong)uVar11 >> 0x30);
    *(undefined8 *)param_1 = 0;
    uVar23 = puVar15[-5];
    uVar21 = *puVar18;
    *(undefined8 *)((long)param_1 + 0x10) = puVar15[-4];
    *(undefined8 *)((long)param_1 + 8) = uVar23;
    *(undefined8 *)param_1 = uVar21;
    *(undefined2 *)puVar18 = 0;
    uVar23 = puVar15[-2];
    uVar21 = puVar15[-3];
    *(undefined8 *)((long)param_1 + 0x28) = puVar15[-1];
    *(undefined8 *)((long)param_1 + 0x20) = uVar23;
    *(undefined8 *)((long)param_1 + 0x18) = uVar21;
    if ((*(byte *)puVar18 & 1) != 0) {
      operator_delete((void *)puVar15[-4]);
    }
    *(undefined *)puVar18 = uVar1;
    uVar6 = uVar6 + 1;
    *(undefined *)((long)puVar15 + -0x2f) = uVar2;
    puVar15[-5] = CONCAT62(uStack_70,local_72);
    puVar15[-4] = uVar9;
    *(undefined8 *)((long)puVar15 + -0x2e) = uVar11;
    puVar15[-1] = uVar10;
    puVar15[-2] = uVar22;
    puVar15[-3] = uVar13;
  }
  puVar15 = (undefined8 *)((long)param_1 + 0x30);
  puVar14 = puVar15;
  if (puVar15 < puVar18) {
    while( true ) {
      puVar15 = puVar14 + -6;
      do {
        puVar16 = puVar15;
        puVar15 = puVar16 + 6;
      } while ((ulong)puVar16[0xb] < (ulong)puVar19[5]);
      puVar14 = puVar16 + 0xc;
      do {
        puVar17 = puVar18;
        puVar18 = puVar17 + -6;
      } while ((ulong)puVar19[5] <= (ulong)puVar17[-1]);
      if (puVar18 < puVar15) break;
      uVar10 = *(undefined8 *)((long)puVar16 + 0x32);
      uVar1 = *(undefined *)puVar15;
      uVar2 = *(undefined *)((long)puVar16 + 0x31);
      uStack_70 = (undefined6)((ulong)puVar16[7] >> 0x10);
      uVar9 = puVar16[0xb];
      local_72 = (undefined2)((ulong)uVar10 >> 0x30);
      uVar22 = puVar16[10];
      uVar13 = puVar16[9];
      *puVar15 = 0;
      puVar16[7] = 0;
      uVar11 = puVar16[8];
      puVar16[8] = 0;
      uVar23 = puVar17[-5];
      uVar21 = *puVar18;
      puVar16[8] = puVar17[-4];
      puVar16[7] = uVar23;
      *puVar15 = uVar21;
      *(undefined2 *)puVar18 = 0;
      uVar23 = puVar17[-2];
      uVar21 = puVar17[-3];
      puVar16[0xb] = puVar17[-1];
      puVar16[10] = uVar23;
      puVar16[9] = uVar21;
      if ((*(byte *)puVar18 & 1) != 0) {
        operator_delete((void *)puVar17[-4]);
      }
      *(undefined *)puVar18 = uVar1;
      *(undefined *)((long)puVar17 + -0x2f) = uVar2;
      uVar6 = uVar6 + 1;
      puVar16 = puVar18;
      if (puVar15 != puVar19) {
        puVar16 = puVar19;
      }
      puVar17[-5] = CONCAT62(uStack_70,local_72);
      puVar17[-4] = uVar11;
      *(undefined8 *)((long)puVar17 + -0x2e) = uVar10;
      puVar17[-1] = uVar9;
      puVar17[-2] = uVar22;
      puVar17[-3] = uVar13;
      puVar19 = puVar16;
    }
  }
  if ((puVar15 != puVar19) && ((ulong)puVar19[5] < (ulong)puVar15[5])) {
    uVar9 = puVar15[2];
    uVar1 = *(undefined *)puVar15;
    uVar13 = *(undefined8 *)((long)puVar15 + 2);
    uVar2 = *(undefined *)((long)puVar15 + 1);
    uStack_70 = (undefined6)((ulong)puVar15[1] >> 0x10);
    uVar10 = puVar15[5];
    puVar15[1] = 0;
    puVar15[2] = 0;
    uVar23 = puVar15[4];
    uVar21 = puVar15[3];
    local_72 = (undefined2)((ulong)uVar13 >> 0x30);
    *puVar15 = 0;
    uVar22 = puVar19[1];
    uVar11 = *puVar19;
    puVar15[2] = puVar19[2];
    puVar15[1] = uVar22;
    *puVar15 = uVar11;
    uVar22 = puVar19[3];
    *(undefined2 *)puVar19 = 0;
    uVar11 = puVar19[5];
    puVar15[4] = puVar19[4];
    puVar15[3] = uVar22;
    puVar15[5] = uVar11;
    if ((*(byte *)puVar19 & 1) != 0) {
      operator_delete((void *)puVar19[2]);
    }
    *(undefined *)puVar19 = uVar1;
    uVar6 = uVar6 + 1;
    *(undefined *)((long)puVar19 + 1) = uVar2;
    puVar19[1] = CONCAT62(uStack_70,local_72);
    puVar19[2] = uVar9;
    *(undefined8 *)((long)puVar19 + 2) = uVar13;
    puVar19[4] = uVar23;
    puVar19[3] = uVar21;
    puVar19[5] = uVar10;
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
                      (param_1,(GsFileInfo *)puVar15,param_3);
    bVar5 = __insertion_sort_incomplete<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
                      ((GsFileInfo *)(puVar15 + 6),(GsFileInfo *)local_a0,param_3);
    if (bVar5) goto LAB_00af7714;
    puVar19 = puVar15 + 6;
    if (bVar4) goto LAB_00af71a8;
  }
  if (((long)local_a0 - (long)puVar15 >> 4) * -0x5555555555555555 <=
      ((long)puVar15 - (long)param_1 >> 4) * -0x5555555555555555) {
    __sort<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              ((GsFileInfo *)(puVar15 + 6),(GsFileInfo *)local_a0,param_3);
    local_a0 = puVar15;
    goto LAB_00af7190;
  }
  __sort<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
            (param_1,(GsFileInfo *)puVar15,param_3);
  puVar19 = puVar15 + 6;
  goto LAB_00af71a8;
joined_r0x00af754c:
  if (puVar18 == puVar20) goto switchD_00af7734_caseD_0;
  if (uVar8 < (ulong)puVar18[5]) goto LAB_00af756c;
  puVar18 = puVar18 + 6;
  goto joined_r0x00af754c;
LAB_00af756c:
  uVar10 = *(undefined8 *)((long)puVar18 + 2);
  uVar1 = *(undefined *)puVar18;
  uVar2 = *(undefined *)((long)puVar18 + 1);
  uStack_70 = (undefined6)((ulong)puVar18[1] >> 0x10);
  uVar9 = puVar18[5];
  local_72 = (undefined2)((ulong)uVar10 >> 0x30);
  uVar22 = puVar18[4];
  uVar13 = puVar18[3];
  *puVar18 = 0;
  puVar18[1] = 0;
  uVar11 = puVar18[2];
  puVar18[2] = 0;
  uVar23 = local_a0[-5];
  uVar21 = *puVar20;
  puVar18[2] = local_a0[-4];
  puVar18[1] = uVar23;
  *puVar18 = uVar21;
  *(undefined2 *)puVar20 = 0;
  uVar23 = local_a0[-2];
  uVar21 = *puVar12;
  puVar18[5] = local_a0[-1];
  puVar18[4] = uVar23;
  puVar18[3] = uVar21;
  if ((*(byte *)puVar20 & 1) != 0) {
    operator_delete((void *)local_a0[-4]);
  }
  puVar18 = puVar18 + 6;
  *(undefined *)(local_a0 + -6) = uVar1;
  *(undefined *)((long)local_a0 + -0x2f) = uVar2;
  local_a0[-4] = uVar11;
  local_a0[-5] = CONCAT62(uStack_70,local_72);
  *(undefined8 *)((long)local_a0 + -0x2e) = uVar10;
  local_a0[-1] = uVar9;
  local_a0[-2] = uVar22;
  *puVar12 = uVar13;
LAB_00af7618:
  puVar15 = puVar20;
  if (puVar18 == puVar20) goto switchD_00af7734_caseD_0;
  while( true ) {
    puVar19 = puVar18 + -6;
    do {
      puVar14 = puVar19;
      puVar19 = puVar14 + 6;
    } while ((ulong)puVar14[0xb] <= *(ulong *)((long)param_1 + 0x28));
    puVar18 = puVar14 + 0xc;
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + -6;
    } while (*(ulong *)((long)param_1 + 0x28) < (ulong)puVar16[-1]);
    if (puVar15 <= puVar19) break;
    uVar10 = *(undefined8 *)((long)puVar14 + 0x32);
    uVar1 = *(undefined *)puVar19;
    uVar2 = *(undefined *)((long)puVar14 + 0x31);
    uStack_70 = (undefined6)((ulong)puVar14[7] >> 0x10);
    uVar9 = puVar14[0xb];
    local_72 = (undefined2)((ulong)uVar10 >> 0x30);
    uVar22 = puVar14[10];
    uVar13 = puVar14[9];
    *puVar19 = 0;
    puVar14[7] = 0;
    uVar11 = puVar14[8];
    puVar14[8] = 0;
    uVar23 = puVar16[-5];
    uVar21 = *puVar15;
    puVar14[8] = puVar16[-4];
    puVar14[7] = uVar23;
    *puVar19 = uVar21;
    *(undefined2 *)puVar15 = 0;
    uVar23 = puVar16[-2];
    uVar21 = puVar16[-3];
    puVar14[0xb] = puVar16[-1];
    puVar14[10] = uVar23;
    puVar14[9] = uVar21;
    if ((*(byte *)puVar15 & 1) != 0) {
      operator_delete((void *)puVar16[-4]);
    }
    *(undefined *)puVar15 = uVar1;
    *(undefined *)((long)puVar16 + -0x2f) = uVar2;
    puVar16[-5] = CONCAT62(uStack_70,local_72);
    puVar16[-4] = uVar11;
    *(undefined8 *)((long)puVar16 + -0x2e) = uVar10;
    puVar16[-1] = uVar9;
    puVar16[-2] = uVar22;
    puVar16[-3] = uVar13;
  }
  goto LAB_00af71a8;
LAB_00af7714:
  local_a0 = puVar15;
  if (bVar4) {
switchD_00af7734_caseD_0:
    if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00af7190;
}


