// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
// Entry Point: 00a01f98
// Size: 340 bytes
// Signature: uint __cdecl __sort4<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, LightSourceQueueItem * param_3, LightSourceQueueItem * param_4, CompareLightSourceShadowsFirst * param_5)


/* unsigned int std::__ndk1::__sort4<LightList::CompareLightSourceShadowsFirst&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*, LightSourceQueueItem*,
   LightSourceQueueItem*, LightList::CompareLightSourceShadowsFirst&) */

uint std::__ndk1::__sort4<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               LightSourceQueueItem *param_3,LightSourceQueueItem *param_4,
               CompareLightSourceShadowsFirst *param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar3 = __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                    (param_1,param_2,param_3,param_5);
  uVar4 = uVar3;
  if ((*(long *)(param_4 + 8) != 0) &&
     ((*(long *)(param_3 + 8) == 0 ||
      (*(uint *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8) <
       *(uint *)(*(long *)(*(long *)(param_4 + 8) + 8) + 8))))) {
    uVar8 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    uVar10 = *(undefined8 *)(param_3 + 8);
    uVar9 = *(undefined8 *)param_3;
    uVar12 = *(undefined8 *)(param_3 + 0x18);
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar7;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    uVar4 = uVar3 + 1;
    *(undefined8 *)(param_4 + 8) = uVar10;
    *(undefined8 *)param_4 = uVar9;
    *(undefined8 *)(param_4 + 0x18) = uVar12;
    *(undefined8 *)(param_4 + 0x10) = uVar11;
    *(int *)(param_4 + 0x20) = (int)uVar6;
    if ((*(long *)(param_3 + 8) != 0) &&
       ((*(long *)(param_2 + 8) == 0 ||
        (*(uint *)(*(long *)(*(long *)(param_2 + 8) + 8) + 8) <
         *(uint *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8))))) {
      uVar8 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar9 = *(undefined8 *)param_2;
      uVar12 = *(undefined8 *)(param_2 + 0x18);
      uVar11 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar8;
      *(undefined8 *)(param_2 + 0x18) = uVar7;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      uVar4 = uVar3 + 2;
      *(undefined8 *)(param_3 + 8) = uVar10;
      *(undefined8 *)param_3 = uVar9;
      *(undefined8 *)(param_3 + 0x18) = uVar12;
      *(undefined8 *)(param_3 + 0x10) = uVar11;
      *(int *)(param_3 + 0x20) = (int)uVar6;
      if ((*(long *)(param_2 + 8) != 0) &&
         ((*(long *)(param_1 + 8) == 0 ||
          (*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8) <
           *(uint *)(*(long *)(*(long *)(param_2 + 8) + 8) + 8))))) {
        uVar8 = *(undefined8 *)param_2;
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x20);
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar9 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar8;
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = uVar1;
        uVar4 = uVar3 + 3;
        *(undefined8 *)(param_2 + 8) = uVar10;
        *(undefined8 *)param_2 = uVar9;
        *(undefined8 *)(param_2 + 0x18) = uVar12;
        *(undefined8 *)(param_2 + 0x10) = uVar11;
        *(int *)(param_2 + 0x20) = (int)uVar6;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


