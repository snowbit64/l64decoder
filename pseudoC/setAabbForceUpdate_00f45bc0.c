// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAabbForceUpdate
// Entry Point: 00f45bc0
// Size: 648 bytes
// Signature: undefined __cdecl setAabbForceUpdate(btBroadphaseProxy * param_1, btVector3 * param_2, btVector3 * param_3, btDispatcher * param_4)


/* btDbvtBroadphase::setAabbForceUpdate(btBroadphaseProxy*, btVector3 const&, btVector3 const&,
   btDispatcher*) */

void btDbvtBroadphase::setAabbForceUpdate
               (btBroadphaseProxy *param_1,btVector3 *param_2,btVector3 *param_3,
               btDispatcher *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  btVector3 **ppbVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined **local_98;
  btBroadphaseProxy *pbStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  (**(code **)(*(long *)param_1 + 0x70))();
  uStack_78 = *(undefined8 *)(param_3 + 8);
  local_80 = *(undefined8 *)param_3;
  uStack_68 = *(undefined8 *)(param_4 + 8);
  uStack_70 = *(undefined8 *)param_4;
  if (*(int *)(param_2 + 0x58) == 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    FUN_00f424e4(param_1 + 0x68,uVar7);
    if (*(long *)(param_1 + 0x70) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    if (puVar6 == (undefined8 *)0x0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar6 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    puVar6[4] = 0;
    puVar6[5] = param_2;
    puVar6[6] = 0;
    puVar6[1] = uStack_78;
    *puVar6 = local_80;
    puVar6[3] = uStack_68;
    puVar6[2] = uStack_70;
    FUN_00f42680(param_1 + 8,*(undefined8 *)(param_1 + 8),puVar6);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    *(undefined8 **)(param_2 + 0x40) = puVar6;
  }
  else {
    plVar1 = (long *)(param_1 + 8);
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    lVar4 = FUN_00f424e4(plVar1,puVar6);
    if (lVar4 != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 < 0) {
        lVar4 = *plVar1;
      }
      else {
        while ((iVar2 != 0 && (*(long *)(lVar4 + 0x20) != 0))) {
          iVar2 = iVar2 + -1;
          lVar4 = *(long *)(lVar4 + 0x20);
        }
      }
    }
    puVar6[1] = uStack_78;
    *puVar6 = local_80;
    puVar6[3] = uStack_68;
    puVar6[2] = uStack_70;
    FUN_00f42680(plVar1,lVar4,puVar6);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  }
  puVar6 = (undefined8 *)(param_1 + (long)*(int *)(param_2 + 0x58) * 8 + 200);
  if (*(long *)(param_2 + 0x48) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_2 + 0x48) + 0x50);
  }
  *puVar6 = *(undefined8 *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  uVar7 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x1c) = uVar7;
  uVar7 = *(undefined8 *)param_4;
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_2 + 0x2c) = uVar7;
  iVar2 = *(int *)(param_1 + 0xec);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(int *)(param_2 + 0x58) = iVar2;
  ppbVar5 = (btVector3 **)(param_1 + (long)iVar2 * 8 + 200);
  *(btVector3 **)(param_2 + 0x50) = *ppbVar5;
  if (*ppbVar5 != (btVector3 *)0x0) {
    *(btVector3 **)(*ppbVar5 + 0x48) = param_2;
  }
  *ppbVar5 = param_2;
  param_1[0x11e] = (btBroadphaseProxy)0x1;
  if (param_1[0x11d] == (btBroadphaseProxy)0x0) {
    local_98 = &PTR__ICollide_01018ed0;
    pbStack_90 = param_1;
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_1 + 0x68),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_98);
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_1 + 8),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_98);
  }
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


