// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAabb
// Entry Point: 00f43e40
// Size: 932 bytes
// Signature: undefined __cdecl setAabb(btBroadphaseProxy * param_1, btVector3 * param_2, btVector3 * param_3, btDispatcher * param_4)


/* btDbvtBroadphase::setAabb(btBroadphaseProxy*, btVector3 const&, btVector3 const&, btDispatcher*)
    */

void btDbvtBroadphase::setAabb
               (btBroadphaseProxy *param_1,btVector3 *param_2,btVector3 *param_3,
               btDispatcher *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  btVector3 **ppbVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined **local_98;
  btBroadphaseProxy *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1 + 0x70))();
  uStack_78 = *(undefined8 *)(param_3 + 8);
  local_80 = *(undefined8 *)param_3;
  local_68 = *(undefined8 *)(param_4 + 8);
  local_70 = *(undefined8 *)param_4;
  if (*(int *)(param_2 + 0x58) == 2) {
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    FUN_00f424e4(param_1 + 0x68,uVar8);
    if (*(long *)(param_1 + 0x70) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    if (puVar7 == (undefined8 *)0x0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
      puVar7[6] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    puVar7[4] = 0;
    puVar7[5] = param_2;
    puVar7[6] = 0;
    puVar7[1] = uStack_78;
    *puVar7 = local_80;
    puVar7[3] = local_68;
    puVar7[2] = local_70;
    FUN_00f42680(param_1 + 8,*(undefined8 *)(param_1 + 8),puVar7);
    uVar4 = 1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    *(undefined8 **)(param_2 + 0x40) = puVar7;
  }
  else {
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    puVar7 = *(undefined8 **)(param_2 + 0x40);
    if ((((((float)local_70 < *(float *)puVar7) || (*(float *)(puVar7 + 2) < (float)local_80)) ||
         (local_70._4_4_ = (float)((ulong)local_70 >> 0x20),
         local_70._4_4_ < *(float *)((long)puVar7 + 4))) ||
        ((local_80._4_4_ = (float)((ulong)local_80 >> 0x20),
         *(float *)((long)puVar7 + 0x14) < local_80._4_4_ ||
         ((float)local_68 < *(float *)(puVar7 + 1))))) ||
       (*(float *)(puVar7 + 3) < (float)uStack_78)) {
      plVar1 = (long *)(param_1 + 8);
      lVar3 = FUN_00f424e4(plVar1,puVar7);
      if (lVar3 != 0) {
        iVar5 = *(int *)(param_1 + 0x18);
        if (iVar5 < 0) {
          lVar3 = *plVar1;
        }
        else {
          while ((iVar5 != 0 && (*(long *)(lVar3 + 0x20) != 0))) {
            iVar5 = iVar5 + -1;
            lVar3 = *(long *)(lVar3 + 0x20);
          }
        }
      }
      puVar7[1] = uStack_78;
      *puVar7 = local_80;
      puVar7[3] = local_68;
      puVar7[2] = local_70;
      FUN_00f42680(plVar1,lVar3,puVar7);
      iVar5 = *(int *)(param_1 + 0x108);
      uVar4 = 1;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xe8) * 0.5;
      fVar9 = fVar11 * (*(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x20));
      fVar10 = fVar11 * (*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x1c));
      fVar11 = fVar11 * (*(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x24));
      if (*(float *)param_3 - *(float *)(param_2 + 0x1c) < 0.0) {
        fVar10 = -fVar10;
      }
      if (*(float *)(param_3 + 4) - *(float *)(param_2 + 0x20) < 0.0) {
        fVar9 = -fVar9;
      }
      local_98 = (undefined **)CONCAT44(fVar9,fVar10);
      if (*(float *)(param_3 + 8) - *(float *)(param_2 + 0x24) < 0.0) {
        fVar11 = -fVar11;
      }
      local_90 = (btBroadphaseProxy *)(ulong)(uint)fVar11;
      uVar4 = btDbvt::update((btDbvt *)(param_1 + 8),(btDbvtNode *)puVar7,(btDbvtAabbMm *)&local_80,
                             (btVector3 *)&local_98,0.05);
      if ((uVar4 & 1) == 0) goto LAB_00f44040;
      iVar5 = *(int *)(param_1 + 0x108);
    }
    *(int *)(param_1 + 0x108) = iVar5 + 1;
  }
LAB_00f44040:
  puVar7 = (undefined8 *)(param_1 + (long)*(int *)(param_2 + 0x58) * 8 + 200);
  if (*(long *)(param_2 + 0x48) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_2 + 0x48) + 0x50);
  }
  *puVar7 = *(undefined8 *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  uVar8 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x1c) = uVar8;
  uVar8 = *(undefined8 *)param_4;
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_2 + 0x2c) = uVar8;
  iVar5 = *(int *)(param_1 + 0xec);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(int *)(param_2 + 0x58) = iVar5;
  ppbVar6 = (btVector3 **)(param_1 + (long)iVar5 * 8 + 200);
  *(btVector3 **)(param_2 + 0x50) = *ppbVar6;
  if (*ppbVar6 != (btVector3 *)0x0) {
    *(btVector3 **)(*ppbVar6 + 0x48) = param_2;
  }
  *ppbVar6 = param_2;
  if (((uVar4 & 1) != 0) &&
     (param_1[0x11e] = (btBroadphaseProxy)0x1, param_1[0x11d] == (btBroadphaseProxy)0x0)) {
    local_98 = &PTR__ICollide_01018ed0;
    local_90 = param_1;
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_1 + 0x68),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_98);
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_1 + 8),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_98);
  }
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


