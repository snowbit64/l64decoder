// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: defaultNearCallback
// Entry Point: 00f47988
// Size: 344 bytes
// Signature: undefined __cdecl defaultNearCallback(btBroadphasePair * param_1, btCollisionDispatcher * param_2, btDispatcherInfo * param_3)


/* btCollisionDispatcher::defaultNearCallback(btBroadphasePair&, btCollisionDispatcher&,
   btDispatcherInfo const&) */

void btCollisionDispatcher::defaultNearCallback
               (btBroadphasePair *param_1,btCollisionDispatcher *param_2,btDispatcherInfo *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = **(long **)param_1;
  lVar4 = **(long **)(param_1 + 8);
  uVar2 = (**(code **)(*(long *)param_2 + 0x30))(param_2,lVar5,lVar4);
  if ((uVar2 & 1) != 0) {
    uStack_a0 = *(undefined8 *)(lVar5 + 200);
    lStack_90 = lVar5 + 8;
    plVar3 = *(long **)(param_1 + 0x10);
    local_a8 = 0;
    uStack_c8 = *(undefined8 *)(lVar4 + 200);
    lStack_b8 = lVar4 + 8;
    local_88 = 0xffffffffffffffff;
    local_d0 = 0;
    local_b0 = 0xffffffffffffffff;
    local_c0 = lVar4;
    local_98 = lVar5;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)(**(code **)(*(long *)param_2 + 0x10))(param_2,&local_a8,&local_d0,0);
      *(long **)(param_1 + 0x10) = plVar3;
      if (plVar3 == (long *)0x0) goto LAB_00f47ab4;
    }
    local_70 = &local_a8;
    local_80 = &PTR__Result_01019d38;
    local_50 = 1;
    uStack_78 = 0;
    if (*(int *)(param_3 + 8) == 1) {
      puStack_68 = &local_d0;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_a8,&local_d0,param_3,&local_80);
    }
    else {
      puStack_68 = &local_d0;
      fVar6 = (float)(**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar4,param_3,&local_80);
      if (fVar6 < *(float *)(param_3 + 0xc)) {
        *(float *)(param_3 + 0xc) = fVar6;
      }
    }
  }
LAB_00f47ab4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


