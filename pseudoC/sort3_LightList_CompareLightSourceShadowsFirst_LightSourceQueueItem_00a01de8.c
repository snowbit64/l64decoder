// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
// Entry Point: 00a01de8
// Size: 432 bytes
// Signature: uint __cdecl __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, LightSourceQueueItem * param_3, CompareLightSourceShadowsFirst * param_4)


/* unsigned int std::__ndk1::__sort3<LightList::CompareLightSourceShadowsFirst&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*, LightSourceQueueItem*,
   LightList::CompareLightSourceShadowsFirst&) */

uint std::__ndk1::__sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               LightSourceQueueItem *param_3,CompareLightSourceShadowsFirst *param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
LAB_00a01f74:
      uVar3 = 0;
      goto LAB_00a01f78;
    }
LAB_00a01efc:
    uVar9 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar9;
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar11;
    *(undefined8 *)param_3 = uVar10;
    *(undefined8 *)(param_3 + 0x18) = uVar13;
    *(undefined8 *)(param_3 + 0x10) = uVar12;
    *(int *)(param_3 + 0x20) = (int)uVar7;
    if ((*(long *)(param_2 + 8) != 0) &&
       ((*(long *)(param_1 + 8) == 0 ||
        (*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8) <
         *(uint *)(*(long *)(*(long *)(param_2 + 8) + 8) + 8))))) {
      uVar9 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar3 = 2;
      *(undefined8 *)(param_2 + 8) = uVar11;
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar13;
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      *(int *)(param_2 + 0x20) = (int)uVar7;
      goto LAB_00a01f78;
    }
  }
  else {
    if ((*(long *)(param_1 + 8) != 0) &&
       (uVar3 = *(uint *)(*(long *)(lVar5 + 8) + 8),
       uVar3 <= *(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8))) {
      if ((*(long *)(param_3 + 8) == 0) ||
         (*(uint *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8) <= uVar3)) goto LAB_00a01f74;
      goto LAB_00a01efc;
    }
    if ((*(long *)(param_3 + 8) != 0) &&
       (*(uint *)(*(long *)(lVar5 + 8) + 8) < *(uint *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8)))
    {
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar6 = (undefined4)*(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar3 = 1;
LAB_00a01ed8:
      *(undefined8 *)(param_3 + 8) = uVar11;
      *(undefined8 *)param_3 = uVar10;
      *(undefined8 *)(param_3 + 0x18) = uVar13;
      *(undefined8 *)(param_3 + 0x10) = uVar12;
      *(undefined4 *)(param_3 + 0x20) = uVar6;
      goto LAB_00a01f78;
    }
    uVar9 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)param_1;
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar11;
    *(undefined8 *)param_2 = uVar10;
    *(undefined8 *)(param_2 + 0x18) = uVar13;
    *(undefined8 *)(param_2 + 0x10) = uVar12;
    *(int *)(param_2 + 0x20) = (int)uVar7;
    if ((*(long *)(param_3 + 8) != 0) &&
       ((*(long *)(param_2 + 8) == 0 ||
        (*(uint *)(*(long *)(*(long *)(param_2 + 8) + 8) + 8) <
         *(uint *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8))))) {
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar3 = 2;
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      uVar6 = (undefined4)*(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      goto LAB_00a01ed8;
    }
  }
  uVar3 = 1;
LAB_00a01f78:
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


