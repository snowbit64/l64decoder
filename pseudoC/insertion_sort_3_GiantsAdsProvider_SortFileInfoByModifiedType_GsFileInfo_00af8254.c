// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
// Entry Point: 00af8254
// Size: 424 bytes
// Signature: void __cdecl __insertion_sort_3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>(GsFileInfo * param_1, GsFileInfo * param_2, SortFileInfoByModifiedType * param_3)


/* void std::__ndk1::__insertion_sort_3<GiantsAdsProvider::SortFileInfoByModifiedType&,
   GsFileInfo*>(GsFileInfo*, GsFileInfo*, GiantsAdsProvider::SortFileInfoByModifiedType&) */

void std::__ndk1::__insertion_sort_3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
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
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  GsFileInfo *pGVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined6 local_78;
  undefined2 uStack_72;
  
  lVar7 = tpidr_el0;
  lVar9 = *(long *)(lVar7 + 0x28);
  __sort3<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
            (param_1,param_1 + 0x30,param_1 + 0x60,param_3);
  if (param_1 + 0x90 != param_2) {
    lVar13 = 0;
    puVar8 = (undefined8 *)(param_1 + 0x90);
    puVar11 = (undefined8 *)(param_1 + 0x60);
    do {
      puVar10 = puVar8;
      uVar14 = puVar10[5];
      if (uVar14 < (ulong)puVar11[5]) {
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        puVar10[2] = 0;
        GVar4 = *(GsFileInfo *)puVar10;
        GVar5 = *(GsFileInfo *)((long)puVar10 + 1);
        *puVar10 = 0;
        puVar10[1] = 0;
        uVar18 = puVar10[4];
        uVar16 = puVar10[3];
        local_78 = (undefined6)*(undefined8 *)((long)puVar10 + 2);
        uStack_72 = (undefined2)uVar2;
        pGVar12 = param_1 + lVar13;
        lVar15 = lVar13;
        while( true ) {
          uVar17 = *(undefined8 *)(pGVar12 + 0x60);
          *(undefined2 *)(pGVar12 + 0x60) = 0;
          *(undefined8 *)(pGVar12 + 0x98) = *(undefined8 *)(pGVar12 + 0x68);
          *(undefined8 *)(pGVar12 + 0x90) = uVar17;
          *(undefined8 *)(pGVar12 + 0xa0) = *(undefined8 *)(pGVar12 + 0x70);
          *(undefined8 *)(pGVar12 + 0xb0) = *(undefined8 *)(pGVar12 + 0x80);
          *(undefined8 *)(pGVar12 + 0xa8) = *(undefined8 *)(pGVar12 + 0x78);
          *(undefined8 *)(pGVar12 + 0xb8) = *(undefined8 *)(pGVar12 + 0x88);
          if (lVar15 == -0x60) break;
          if (*(ulong *)(param_1 + lVar15 + 0x58) <= uVar14) {
            pGVar12 = param_1 + lVar15 + 0x60;
            GVar6 = *pGVar12;
            goto joined_r0x00af83a4;
          }
          pGVar1 = pGVar12 + 0x60;
          lVar15 = lVar15 + -0x30;
          pGVar12 = param_1 + lVar15;
          if (((byte)*pGVar1 & 1) != 0) {
            operator_delete(*(void **)(pGVar12 + 0xa0));
          }
        }
        GVar6 = *param_1;
        pGVar12 = param_1;
joined_r0x00af83a4:
        if (((byte)GVar6 & 1) != 0) {
          operator_delete(*(void **)(pGVar12 + 0x10));
        }
        *pGVar12 = GVar4;
        pGVar12[1] = GVar5;
        *(ulong *)(pGVar12 + 2) = CONCAT26(uStack_72,local_78);
        *(undefined8 *)(pGVar12 + 8) = uVar2;
        *(undefined8 *)(pGVar12 + 0x10) = uVar3;
        *(undefined8 *)(param_1 + lVar15 + 0x80) = uVar18;
        *(undefined8 *)(param_1 + lVar15 + 0x78) = uVar16;
        *(ulong *)(pGVar12 + 0x28) = uVar14;
      }
      lVar13 = lVar13 + 0x30;
      puVar8 = puVar10 + 6;
      puVar11 = puVar10;
    } while (puVar10 + 6 != (undefined8 *)param_2);
  }
  if (*(long *)(lVar7 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


