// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
// Entry Point: 00af7884
// Size: 916 bytes
// Signature: uint __cdecl __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>(GsFileInfo * param_1, GsFileInfo * param_2, GsFileInfo * param_3, SortFileInfoByModifiedType * param_4)


/* unsigned int std::__ndk1::__sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,
   GsFileInfo*>(GsFileInfo*, GsFileInfo*, GsFileInfo*,
   GiantsAdsProvider::SortFileInfoByModifiedType&) */

uint std::__ndk1::__sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
               (GsFileInfo *param_1,GsFileInfo *param_2,GsFileInfo *param_3,
               SortFileInfoByModifiedType *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  GsFileInfo GVar3;
  GsFileInfo GVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined6 uStack_78;
  undefined2 local_72;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  uVar8 = *(ulong *)(param_2 + 0x28);
  if (uVar8 < *(ulong *)(param_1 + 0x28)) {
    if (*(ulong *)(param_3 + 0x28) < uVar8) {
      GVar3 = *param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      GVar4 = param_1[1];
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar12 = *(undefined8 *)param_3;
      uVar10 = *(undefined8 *)(param_3 + 0x10);
      uStack_78 = (undefined6)*(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar12;
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      uVar14 = *(undefined8 *)(param_3 + 0x18);
      *(undefined2 *)param_3 = 0;
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      local_72 = (undefined2)uVar9;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      *(undefined8 *)(param_1 + 0x28) = uVar10;
      if (((byte)*param_3 & 1) != 0) {
        operator_delete(*(void **)(param_3 + 0x10));
      }
      *param_3 = GVar3;
      param_3[1] = GVar4;
      uVar6 = 1;
      *(ulong *)(param_3 + 2) = CONCAT26(local_72,uStack_78);
      *(undefined8 *)(param_3 + 8) = uVar9;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
      *(undefined8 *)(param_3 + 0x20) = uVar13;
      *(undefined8 *)(param_3 + 0x18) = uVar12;
      *(undefined8 *)(param_3 + 0x28) = uVar11;
      goto LAB_00af7be4;
    }
    GVar3 = *param_1;
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    GVar4 = param_1[1];
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    uStack_78 = (undefined6)*(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar12;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    uVar14 = *(undefined8 *)(param_2 + 0x18);
    *(undefined2 *)param_2 = 0;
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    local_72 = (undefined2)uVar9;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar14;
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    puVar1 = (undefined8 *)(param_2 + 0x18);
    if (((byte)*param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 0x10));
    }
    *param_2 = GVar3;
    param_2[1] = GVar4;
    *(ulong *)(param_2 + 2) = CONCAT26(local_72,uStack_78);
    *(undefined8 *)(param_2 + 8) = uVar9;
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    *(undefined8 *)(param_2 + 0x20) = uVar13;
    *puVar1 = uVar12;
    *(undefined8 *)(param_2 + 0x28) = uVar11;
    if (*(ulong *)(param_3 + 0x28) < *(ulong *)(param_2 + 0x28)) {
      uVar9 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)param_2 = 0;
      uVar11 = *(undefined8 *)(param_2 + 0x28);
      uVar12 = *(undefined8 *)param_3;
      uVar10 = *(undefined8 *)(param_3 + 0x10);
      uStack_78 = (undefined6)*(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar12;
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      uVar12 = *puVar1;
      *(undefined8 *)(param_2 + 0x10) = uVar10;
      uVar14 = *(undefined8 *)(param_3 + 0x18);
      *(undefined2 *)param_3 = 0;
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      local_72 = (undefined2)uVar9;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *puVar1 = uVar14;
      *(undefined8 *)(param_2 + 0x28) = uVar10;
      if (((byte)*param_3 & 1) != 0) {
        operator_delete(*(void **)(param_3 + 0x10));
      }
      uVar6 = 2;
      *param_3 = GVar3;
      param_3[1] = GVar4;
      *(ulong *)(param_3 + 2) = CONCAT26(local_72,uStack_78);
      *(undefined8 *)(param_3 + 8) = uVar9;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
      *(undefined8 *)(param_3 + 0x20) = uVar13;
      *(undefined8 *)(param_3 + 0x18) = uVar12;
      *(undefined8 *)(param_3 + 0x28) = uVar11;
      goto LAB_00af7be4;
    }
  }
  else {
    if (uVar8 <= *(ulong *)(param_3 + 0x28)) {
      uVar6 = 0;
      goto LAB_00af7be4;
    }
    GVar3 = *param_2;
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    GVar4 = param_2[1];
    *(undefined8 *)param_2 = 0;
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    uVar12 = *(undefined8 *)param_3;
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    uStack_78 = (undefined6)*(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar12;
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = uVar10;
    uVar14 = *(undefined8 *)(param_3 + 0x18);
    *(undefined2 *)param_3 = 0;
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    local_72 = (undefined2)uVar9;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar14;
    *(undefined8 *)(param_2 + 0x28) = uVar10;
    if (((byte)*param_3 & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x10));
    }
    *param_3 = GVar3;
    param_3[1] = GVar4;
    *(ulong *)(param_3 + 2) = CONCAT26(local_72,uStack_78);
    *(undefined8 *)(param_3 + 8) = uVar9;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
    *(undefined8 *)(param_3 + 0x20) = uVar13;
    *(undefined8 *)(param_3 + 0x18) = uVar12;
    *(undefined8 *)(param_3 + 0x28) = uVar11;
    if (*(ulong *)(param_2 + 0x28) < *(ulong *)(param_1 + 0x28)) {
      GVar3 = *param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      GVar4 = param_1[1];
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar12 = *(undefined8 *)param_2;
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      uStack_78 = (undefined6)*(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar12;
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      *(undefined2 *)param_2 = 0;
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      local_72 = (undefined2)uVar9;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      *(undefined8 *)(param_1 + 0x28) = uVar10;
      if (((byte)*param_2 & 1) != 0) {
        operator_delete(*(void **)(param_2 + 0x10));
      }
      *param_2 = GVar3;
      param_2[1] = GVar4;
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      *(ulong *)(param_2 + 2) = CONCAT26(local_72,uStack_78);
      *(undefined8 *)(param_2 + 8) = uVar9;
      uVar6 = 2;
      *(undefined8 *)(param_2 + 0x20) = uVar13;
      *(undefined8 *)(param_2 + 0x18) = uVar12;
      *(undefined8 *)(param_2 + 0x28) = uVar11;
      goto LAB_00af7be4;
    }
  }
  uVar6 = 1;
LAB_00af7be4:
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


