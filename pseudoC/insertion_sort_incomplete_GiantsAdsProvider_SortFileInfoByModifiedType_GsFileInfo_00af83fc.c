// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
// Entry Point: 00af83fc
// Size: 800 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>(GsFileInfo * param_1, GsFileInfo * param_2, SortFileInfoByModifiedType * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<GiantsAdsProvider::SortFileInfoByModifiedType&,
   GsFileInfo*>(GsFileInfo*, GsFileInfo*, GiantsAdsProvider::SortFileInfoByModifiedType&) */

bool std::__ndk1::
     __insertion_sort_incomplete<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
               (GsFileInfo *param_1,GsFileInfo *param_2,SortFileInfoByModifiedType *param_3)

{
  GsFileInfo *pGVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  GsFileInfo GVar4;
  GsFileInfo GVar5;
  GsFileInfo GVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  GsFileInfo *pGVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined6 local_78;
  undefined2 uStack_72;
  
  lVar7 = tpidr_el0;
  uVar10 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  lVar12 = *(long *)(lVar7 + 0x28);
  if (5 < uVar10) {
    __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              (param_1,param_1 + 0x30,param_1 + 0x60,param_3);
    if (param_1 + 0x90 != param_2) {
      lVar16 = 0;
      iVar18 = 0;
      puVar8 = (undefined8 *)(param_1 + 0x90);
      puVar15 = (undefined8 *)(param_1 + 0x60);
      do {
        puVar11 = puVar8;
        uVar10 = puVar11[5];
        if (uVar10 < (ulong)puVar15[5]) {
          uVar2 = puVar11[1];
          uVar3 = puVar11[2];
          puVar11[2] = 0;
          GVar4 = *(GsFileInfo *)puVar11;
          GVar5 = *(GsFileInfo *)((long)puVar11 + 1);
          *puVar11 = 0;
          puVar11[1] = 0;
          uVar14 = puVar11[4];
          uVar13 = puVar11[3];
          local_78 = (undefined6)*(undefined8 *)((long)puVar11 + 2);
          uStack_72 = (undefined2)uVar2;
          pGVar19 = param_1 + lVar16;
          lVar17 = lVar16;
          while( true ) {
            uVar20 = *(undefined8 *)(pGVar19 + 0x60);
            *(undefined2 *)(pGVar19 + 0x60) = 0;
            *(undefined8 *)(pGVar19 + 0x98) = *(undefined8 *)(pGVar19 + 0x68);
            *(undefined8 *)(pGVar19 + 0x90) = uVar20;
            *(undefined8 *)(pGVar19 + 0xa0) = *(undefined8 *)(pGVar19 + 0x70);
            *(undefined8 *)(pGVar19 + 0xb0) = *(undefined8 *)(pGVar19 + 0x80);
            *(undefined8 *)(pGVar19 + 0xa8) = *(undefined8 *)(pGVar19 + 0x78);
            *(undefined8 *)(pGVar19 + 0xb8) = *(undefined8 *)(pGVar19 + 0x88);
            if (lVar17 == -0x60) break;
            if (*(ulong *)(param_1 + lVar17 + 0x58) <= uVar10) {
              pGVar19 = param_1 + lVar17 + 0x60;
              GVar6 = *pGVar19;
              goto joined_r0x00af8678;
            }
            pGVar1 = pGVar19 + 0x60;
            lVar17 = lVar17 + -0x30;
            pGVar19 = param_1 + lVar17;
            if (((byte)*pGVar1 & 1) != 0) {
              operator_delete(*(void **)(pGVar19 + 0xa0));
            }
          }
          GVar6 = *param_1;
          pGVar19 = param_1;
joined_r0x00af8678:
          if (((byte)GVar6 & 1) != 0) {
            operator_delete(*(void **)(pGVar19 + 0x10));
          }
          iVar18 = iVar18 + 1;
          *(ulong *)(pGVar19 + 2) = CONCAT26(uStack_72,local_78);
          *pGVar19 = GVar4;
          pGVar19[1] = GVar5;
          *(undefined8 *)(pGVar19 + 8) = uVar2;
          *(undefined8 *)(pGVar19 + 0x10) = uVar3;
          *(undefined8 *)(param_1 + lVar17 + 0x80) = uVar14;
          *(undefined8 *)(param_1 + lVar17 + 0x78) = uVar13;
          *(ulong *)(pGVar19 + 0x28) = uVar10;
          if (iVar18 == 8) {
            bVar9 = puVar11 + 6 == (undefined8 *)param_2;
            goto switchD_00af8468_caseD_0;
          }
        }
        lVar16 = lVar16 + 0x30;
        puVar8 = puVar11 + 6;
        puVar15 = puVar11;
      } while (puVar11 + 6 != (undefined8 *)param_2);
      bVar9 = true;
      goto switchD_00af8468_caseD_0;
    }
    goto LAB_00af86c8;
  }
  bVar9 = true;
  switch(uVar10) {
  case 2:
    if (*(ulong *)(param_2 + -8) < *(ulong *)(param_1 + 0x28)) {
      GVar4 = *param_1;
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      GVar5 = param_1[1];
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      uVar20 = *(undefined8 *)(param_2 + -0x30);
      uVar13 = *(undefined8 *)(param_2 + -0x20);
      local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
      uStack_72 = (undefined2)uVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)param_1 = uVar20;
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      uVar20 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar13;
      uVar22 = *(undefined8 *)(param_2 + -0x18);
      *(undefined2 *)(param_2 + -0x30) = 0;
      uVar13 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar22;
      *(undefined8 *)(param_1 + 0x28) = uVar13;
      if (((byte)param_2[-0x30] & 1) != 0) {
        operator_delete(*(void **)(param_2 + -0x20));
      }
      param_2[-0x30] = GVar4;
      param_2[-0x2f] = GVar5;
      *(undefined8 *)(param_2 + -0x20) = uVar3;
      *(ulong *)(param_2 + -0x2e) = CONCAT26(uStack_72,local_78);
      *(undefined8 *)(param_2 + -0x28) = uVar2;
      bVar9 = true;
      *(undefined8 *)(param_2 + -0x10) = uVar21;
      *(undefined8 *)(param_2 + -0x18) = uVar20;
      *(undefined8 *)(param_2 + -8) = uVar14;
      break;
    }
    goto LAB_00af86c8;
  case 3:
    __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              (param_1,param_1 + 0x30,param_2 + -0x30,param_3);
    bVar9 = true;
    break;
  case 4:
    __sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
              (param_1,param_1 + 0x30,param_1 + 0x60,param_2 + -0x30,param_3);
LAB_00af86c8:
    bVar9 = true;
    break;
  case 5:
    FUN_00af7eb8(param_1,param_1 + 0x30,param_1 + 0x60,param_1 + 0x90,param_2 + -0x30);
    bVar9 = true;
  }
switchD_00af8468_caseD_0:
  if (*(long *)(lVar7 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}


