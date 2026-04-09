// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
// Entry Point: 00a02290
// Size: 612 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, CompareLightSourceShadowsFirst * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<LightList::CompareLightSourceShadowsFirst&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*,
   LightList::CompareLightSourceShadowsFirst&) */

bool std::__ndk1::
     __insertion_sort_incomplete<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               CompareLightSourceShadowsFirst *param_3)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 local_70;
  
  lVar2 = tpidr_el0;
  uVar4 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  lVar7 = *(long *)(lVar2 + 0x28);
  if (5 < uVar4) {
    __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
    if (param_1 + 0x78 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar13 = (undefined8 *)(param_1 + 0x78);
      puVar15 = (undefined8 *)(param_1 + 0x50);
      do {
        puVar8 = puVar13;
        lVar9 = puVar8[1];
        if ((lVar9 != 0) &&
           ((puVar15[1] == 0 ||
            (*(uint *)(*(long *)(puVar15[1] + 8) + 8) < *(uint *)(*(long *)(lVar9 + 8) + 8))))) {
          uVar14 = puVar8[4];
          uVar18 = puVar8[3];
          uVar17 = puVar8[2];
          uVar10 = *puVar8;
          uVar21 = puVar15[1];
          uVar20 = *puVar15;
          uVar19 = puVar15[3];
          uVar16 = puVar15[2];
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar15 + 4);
          puVar8[1] = uVar21;
          *puVar8 = uVar20;
          puVar8[3] = uVar19;
          puVar8[2] = uVar16;
          lVar12 = lVar5;
          puVar13 = (undefined8 *)param_1;
          if (puVar15 != (undefined8 *)param_1) {
            do {
              if ((*(long *)(param_1 + lVar12 + 0x30) != 0) &&
                 (*(uint *)(*(long *)(lVar9 + 8) + 8) <=
                  *(uint *)(*(long *)(*(long *)(param_1 + lVar12 + 0x30) + 8) + 8))) {
                puVar13 = (undefined8 *)(param_1 + lVar12 + 0x50);
                break;
              }
              lVar11 = lVar12 + -0x28;
              *(undefined8 *)(param_1 + lVar12 + 0x58) = *(undefined8 *)(param_1 + lVar12 + 0x30);
              *(undefined8 *)(param_1 + lVar12 + 0x50) = *(undefined8 *)(param_1 + lVar12 + 0x28);
              *(undefined8 *)(param_1 + lVar12 + 0x68) = *(undefined8 *)(param_1 + lVar12 + 0x40);
              *(undefined8 *)(param_1 + lVar12 + 0x60) = *(undefined8 *)(param_1 + lVar12 + 0x38);
              *(undefined4 *)(param_1 + lVar12 + 0x70) = *(undefined4 *)(param_1 + lVar12 + 0x48);
              lVar12 = lVar11;
            } while (lVar11 != -0x50);
          }
          iVar6 = iVar6 + 1;
          local_70 = (undefined4)uVar14;
          *puVar13 = uVar10;
          puVar13[1] = lVar9;
          puVar13[3] = uVar18;
          puVar13[2] = uVar17;
          *(undefined4 *)(puVar13 + 4) = local_70;
          if (iVar6 == 8) {
            bVar3 = puVar8 + 5 == (undefined8 *)param_2;
            goto switchD_00a022f0_caseD_0;
          }
        }
        lVar5 = lVar5 + 0x28;
        puVar13 = puVar8 + 5;
        puVar15 = puVar8;
      } while (puVar8 + 5 != (undefined8 *)param_2);
    }
    goto LAB_00a024b8;
  }
  bVar3 = true;
  switch(uVar4) {
  case 2:
    if ((*(long *)(param_2 + -0x20) != 0) &&
       ((*(long *)(param_1 + 8) == 0 ||
        (*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8) <
         *(uint *)(*(long *)(*(long *)(param_2 + -0x20) + 8) + 8))))) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar19 = *(undefined8 *)(param_1 + 8);
      uVar18 = *(undefined8 *)param_1;
      uVar21 = *(undefined8 *)(param_1 + 0x18);
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      bVar3 = true;
      uVar16 = *(undefined8 *)(param_2 + -0x28);
      uVar17 = *(undefined8 *)(param_2 + -0x10);
      uVar14 = *(undefined8 *)(param_2 + -0x18);
      uVar1 = *(undefined4 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)param_1 = uVar16;
      *(undefined8 *)(param_1 + 0x18) = uVar17;
      *(undefined8 *)(param_1 + 0x10) = uVar14;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_2 + -0x20) = uVar19;
      *(undefined8 *)(param_2 + -0x28) = uVar18;
      *(undefined8 *)(param_2 + -0x10) = uVar21;
      *(undefined8 *)(param_2 + -0x18) = uVar20;
      *(int *)(param_2 + -8) = (int)uVar10;
      break;
    }
    goto LAB_00a024b8;
  case 3:
    __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
              (param_1,param_1 + 0x28,param_2 + -0x28,param_3);
    bVar3 = true;
    break;
  case 4:
    __sort4<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28,param_3);
LAB_00a024b8:
    bVar3 = true;
    break;
  case 5:
    FUN_00a020ec(param_1,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_2 + -0x28);
    bVar3 = true;
  }
switchD_00a022f0_caseD_0:
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


