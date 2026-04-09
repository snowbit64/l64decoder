// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
// Entry Point: 00af7c18
// Size: 672 bytes
// Signature: uint __cdecl __sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>(GsFileInfo * param_1, GsFileInfo * param_2, GsFileInfo * param_3, GsFileInfo * param_4, SortFileInfoByModifiedType * param_5)


/* unsigned int std::__ndk1::__sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,
   GsFileInfo*>(GsFileInfo*, GsFileInfo*, GsFileInfo*, GsFileInfo*,
   GiantsAdsProvider::SortFileInfoByModifiedType&) */

uint std::__ndk1::__sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
               (GsFileInfo *param_1,GsFileInfo *param_2,GsFileInfo *param_3,GsFileInfo *param_4,
               SortFileInfoByModifiedType *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  GsFileInfo GVar3;
  GsFileInfo GVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined6 local_78;
  undefined2 uStack_72;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  uVar6 = __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
                    (param_1,param_2,param_3,param_5);
  if (*(ulong *)(param_4 + 0x28) < *(ulong *)(param_3 + 0x28)) {
    GVar3 = *param_3;
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    GVar4 = param_3[1];
    *(undefined8 *)param_3 = 0;
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    uVar10 = *(undefined8 *)param_4;
    local_78 = (undefined6)*(undefined8 *)(param_3 + 2);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    uStack_72 = (undefined2)uVar1;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar10;
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    uVar10 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = uVar8;
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    *(undefined2 *)param_4 = 0;
    uVar8 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = uVar12;
    *(undefined8 *)(param_3 + 0x28) = uVar8;
    if (((byte)*param_4 & 1) != 0) {
      operator_delete(*(void **)(param_4 + 0x10));
    }
    *param_4 = GVar3;
    param_4[1] = GVar4;
    *(ulong *)(param_4 + 2) = CONCAT26(uStack_72,local_78);
    *(undefined8 *)(param_4 + 8) = uVar1;
    *(undefined8 *)(param_4 + 0x10) = uVar2;
    *(undefined8 *)(param_4 + 0x20) = uVar11;
    *(undefined8 *)(param_4 + 0x18) = uVar10;
    *(undefined8 *)(param_4 + 0x28) = uVar9;
    if (*(ulong *)(param_3 + 0x28) < *(ulong *)(param_2 + 0x28)) {
      GVar3 = *param_2;
      uVar1 = *(undefined8 *)(param_2 + 8);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      GVar4 = param_2[1];
      *(undefined8 *)param_2 = 0;
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      uVar10 = *(undefined8 *)param_3;
      local_78 = (undefined6)*(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      uStack_72 = (undefined2)uVar1;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar10;
      uVar11 = *(undefined8 *)(param_2 + 0x20);
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      uVar12 = *(undefined8 *)(param_3 + 0x18);
      *(undefined2 *)param_3 = 0;
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x18) = uVar12;
      *(undefined8 *)(param_2 + 0x28) = uVar8;
      if (((byte)*param_3 & 1) != 0) {
        operator_delete(*(void **)(param_3 + 0x10));
      }
      *param_3 = GVar3;
      param_3[1] = GVar4;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
      *(ulong *)(param_3 + 2) = CONCAT26(uStack_72,local_78);
      *(undefined8 *)(param_3 + 8) = uVar1;
      *(undefined8 *)(param_3 + 0x20) = uVar11;
      *(undefined8 *)(param_3 + 0x18) = uVar10;
      *(undefined8 *)(param_3 + 0x28) = uVar9;
      if (*(ulong *)(param_2 + 0x28) < *(ulong *)(param_1 + 0x28)) {
        GVar3 = *param_1;
        uVar1 = *(undefined8 *)(param_1 + 8);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        GVar4 = param_1[1];
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        uVar10 = *(undefined8 *)param_2;
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
        uStack_72 = (undefined2)uVar1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar10;
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x10) = uVar8;
        uVar12 = *(undefined8 *)(param_2 + 0x18);
        *(undefined2 *)param_2 = 0;
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 0x18) = uVar12;
        *(undefined8 *)(param_1 + 0x28) = uVar8;
        if (((byte)*param_2 & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x10));
        }
        uVar6 = uVar6 + 3;
        *param_2 = GVar3;
        param_2[1] = GVar4;
        *(ulong *)(param_2 + 2) = CONCAT26(uStack_72,local_78);
        *(undefined8 *)(param_2 + 8) = uVar1;
        *(undefined8 *)(param_2 + 0x10) = uVar2;
        *(undefined8 *)(param_2 + 0x20) = uVar11;
        *(undefined8 *)(param_2 + 0x18) = uVar10;
        *(undefined8 *)(param_2 + 0x28) = uVar9;
      }
      else {
        uVar6 = uVar6 + 2;
      }
    }
    else {
      uVar6 = uVar6 + 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


