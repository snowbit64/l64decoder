// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nearCallback2
// Entry Point: 009b0684
// Size: 1072 bytes
// Signature: undefined __cdecl nearCallback2(btBroadphasePair * param_1, btCollisionObject * param_2, btCollisionObject * param_3, btCollisionDispatcher * param_4, btDispatcherInfo * param_5)


/* Bt2PhysicsContextManager::nearCallback2(btBroadphasePair&, btCollisionObject*,
   btCollisionObject*, btCollisionDispatcher&, btDispatcherInfo const&) */

void Bt2PhysicsContextManager::nearCallback2
               (btBroadphasePair *param_1,btCollisionObject *param_2,btCollisionObject *param_3,
               btCollisionDispatcher *param_4,btDispatcherInfo *param_5)

{
  btCollisionObject *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  StopWatch aSStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  btCollisionObject *local_e0;
  btCollisionObject *pbStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  btCollisionObject *local_b8;
  btCollisionObject *pbStack_b0;
  undefined8 local_a8;
  btManifoldResult abStack_a0 [56];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((*(int *)(param_2 + 0x120) != 0) &&
      (uVar3 = (**(code **)(*(long *)param_2 + 0x18))(param_2,param_3), (uVar3 & 1) == 0)) ||
     ((*(int *)(param_3 + 0x120) != 0 &&
      (uVar3 = (**(code **)(*(long *)param_3 + 0x18))(param_3,param_2), (uVar3 & 1) == 0))))
  goto LAB_009b09f0;
  uStack_c0 = *(undefined8 *)(param_2 + 200);
  pbStack_b0 = param_2 + 8;
  local_c8 = 0;
  uStack_e8 = *(undefined8 *)(param_3 + 200);
  pbStack_d8 = param_3 + 8;
  local_a8 = 0xffffffffffffffff;
  local_f0 = 0;
  local_d0 = 0xffffffffffffffff;
  local_e0 = param_3;
  local_b8 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar4 = (**(code **)(*(long *)param_4 + 0x10))(param_4,&local_c8,&local_f0,0);
    *(long *)(param_1 + 0x10) = lVar4;
    if (lVar4 == 0) goto LAB_009b09f0;
  }
  btManifoldResult::btManifoldResult
            (abStack_a0,(btCollisionObjectWrapper *)&local_c8,(btCollisionObjectWrapper *)&local_f0)
  ;
  uStack_118 = *(undefined8 *)(param_5 + 8);
  local_120 = *(undefined8 *)param_5;
  uStack_108 = *(undefined8 *)(param_5 + 0x18);
  uStack_110 = *(undefined8 *)(param_5 + 0x10);
  uStack_f8 = *(undefined8 *)(param_5 + 0x28);
  uVar11 = *(undefined8 *)(param_5 + 0x20);
  if ((((byte)param_2[0xe0] >> 2 & 1) != 0) ||
     (local_100 = uVar11, ((byte)param_3[0xe0] >> 2 & 1) != 0)) {
    local_100._0_3_ = (uint3)(ushort)uVar11;
  }
  if (s_timeCollisions_Bg == '\0') {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
              (*(long **)(param_1 + 0x10),&local_c8,&local_f0,&local_120,abStack_a0);
    goto LAB_009b09f0;
  }
  StopWatch::StopWatch(aSStack_138);
  lVar4 = Watch::getCurrentTicks();
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),&local_c8,&local_f0,&local_120,abStack_a0);
  lVar5 = Watch::getCurrentTicks();
  pbVar1 = param_3;
  if (param_2 <= param_3) {
    pbVar1 = param_2;
    param_2 = param_3;
  }
  if (DAT_0211dce8 == (undefined8 *)0x0) {
LAB_009b0848:
    dVar10 = (double)Watch::convertTicksToMs(lVar5 - lVar4);
    puVar8 = &DAT_0211dce8;
    puVar6 = puVar8;
    if (DAT_0211dce8 == (undefined8 *)0x0) {
LAB_009b0908:
      puVar7 = (undefined8 *)operator_new(0x38);
      puVar7[4] = pbVar1;
      puVar7[5] = param_2;
      *(undefined4 *)(puVar7 + 6) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = puVar6;
      *puVar8 = puVar7;
      puVar6 = puVar7;
      if (*s_collisionTimeMap_Bg != (long *)0x0) {
        puVar6 = (undefined8 *)*puVar8;
        s_collisionTimeMap_Bg = (long **)*s_collisionTimeMap_Bg;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_0211dce8,(__tree_node_base *)puVar6);
      DAT_0211dcf0 = DAT_0211dcf0 + 1;
    }
    else {
      puVar7 = DAT_0211dce8;
      puVar8 = &DAT_0211dce8;
LAB_009b0880:
      do {
        puVar6 = puVar7;
        if ((btCollisionObject *)puVar6[4] <= pbVar1) {
          if ((btCollisionObject *)puVar6[4] < pbVar1) {
LAB_009b0870:
            puVar8 = puVar6 + 1;
            puVar7 = (undefined8 *)*puVar8;
            if ((undefined8 *)*puVar8 != (undefined8 *)0x0) goto LAB_009b0880;
          }
          else {
            if (param_2 < (btCollisionObject *)puVar6[5]) goto LAB_009b088c;
            if ((btCollisionObject *)puVar6[5] < param_2) goto LAB_009b0870;
          }
          puVar7 = (undefined8 *)*puVar8;
          goto joined_r0x009b0904;
        }
LAB_009b088c:
        puVar7 = (undefined8 *)*puVar6;
        puVar8 = puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      puVar7 = (undefined8 *)*puVar6;
joined_r0x009b0904:
      if (puVar7 == (undefined8 *)0x0) goto LAB_009b0908;
    }
    fVar9 = (float)(dVar10 * 1000.0);
  }
  else {
    puVar8 = &DAT_0211dce8;
    puVar6 = DAT_0211dce8;
    do {
      while ((pbVar1 <= (btCollisionObject *)puVar6[4] &&
             ((pbVar1 < (btCollisionObject *)puVar6[4] ||
              (param_2 <= (btCollisionObject *)puVar6[5]))))) {
        puVar7 = (undefined8 *)*puVar6;
        puVar8 = puVar6;
        puVar6 = puVar7;
        if (puVar7 == (undefined8 *)0x0) goto LAB_009b0830;
      }
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != (undefined8 *)0x0);
LAB_009b0830:
    if ((((undefined8 **)puVar8 == &DAT_0211dce8) || (pbVar1 < (btCollisionObject *)puVar8[4])) ||
       ((pbVar1 <= (btCollisionObject *)puVar8[4] && (param_2 < (btCollisionObject *)puVar8[5]))))
    goto LAB_009b0848;
    dVar10 = (double)Watch::convertTicksToMs(lVar5 - lVar4);
    puVar8 = &DAT_0211dce8;
    puVar6 = puVar8;
    if (DAT_0211dce8 != (undefined8 *)0x0) {
      puVar7 = DAT_0211dce8;
      puVar8 = &DAT_0211dce8;
      do {
        while (puVar6 = puVar7, (btCollisionObject *)puVar6[4] <= pbVar1) {
          if (pbVar1 <= (btCollisionObject *)puVar6[4]) {
            if (param_2 < (btCollisionObject *)puVar6[5]) break;
            if (param_2 <= (btCollisionObject *)puVar6[5]) goto LAB_009b0a38;
          }
          puVar8 = puVar6 + 1;
          puVar7 = (undefined8 *)*puVar8;
          if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_009b0a38;
        }
        puVar7 = (undefined8 *)*puVar6;
        puVar8 = puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
LAB_009b0a38:
    puVar7 = (undefined8 *)*puVar8;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)operator_new(0x38);
      puVar7[4] = pbVar1;
      puVar7[5] = param_2;
      *(undefined4 *)(puVar7 + 6) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = puVar6;
      *puVar8 = puVar7;
      puVar6 = puVar7;
      if (*s_collisionTimeMap_Bg != (long *)0x0) {
        puVar6 = (undefined8 *)*puVar8;
        s_collisionTimeMap_Bg = (long **)*s_collisionTimeMap_Bg;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_0211dce8,(__tree_node_base *)puVar6);
      DAT_0211dcf0 = DAT_0211dcf0 + 1;
    }
    fVar9 = *(float *)(puVar7 + 6) + (float)(dVar10 * 1000.0);
  }
  *(float *)(puVar7 + 6) = fVar9;
LAB_009b09f0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


