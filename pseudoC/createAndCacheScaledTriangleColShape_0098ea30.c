// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAndCacheScaledTriangleColShape
// Entry Point: 0098ea30
// Size: 520 bytes
// Signature: undefined __thiscall createAndCacheScaledTriangleColShape(Bt2PhysicsColShapeCache * this, ulonglong param_1, btBvhTriangleMeshShape * param_2, Vector3 * param_3)


/* Bt2PhysicsColShapeCache::createAndCacheScaledTriangleColShape(unsigned long long,
   btBvhTriangleMeshShape*, Vector3 const&) */

btScaledBvhTriangleMeshShape * __thiscall
Bt2PhysicsColShapeCache::createAndCacheScaledTriangleColShape
          (Bt2PhysicsColShapeCache *this,ulonglong param_1,btBvhTriangleMeshShape *param_2,
          Vector3 *param_3)

{
  long lVar1;
  btScaledBvhTriangleMeshShape *this_00;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_88 = *(undefined8 *)param_3;
  local_7c = 0;
  local_80 = *(undefined4 *)(param_3 + 8);
  this_00 = (btScaledBvhTriangleMeshShape *)btAlignedAllocInternal(0x38,0x10);
                    /* try { // try from 0098ea94 to 0098ea9f has its CatchHandler @ 0098ec38 */
  btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(this_00,param_2,(btVector3 *)&local_88)
  ;
  fVar8 = *(float *)(param_3 + 8);
  fVar9 = *(float *)param_3;
  fVar7 = *(float *)(param_3 + 4);
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2 = puVar4;
  if (puVar5 == (undefined8 *)0x0) {
LAB_0098eb60:
    puVar5 = (undefined8 *)*puVar4;
  }
  else {
    puVar4 = (undefined8 *)(this + 8);
LAB_0098eab8:
    do {
      puVar2 = puVar5;
      uVar3 = puVar2[4];
      if (uVar3 == param_1) {
        if (*(char *)((long)puVar2 + 0x34) == '\0') {
          fVar6 = *(float *)(puVar2 + 5);
          if (fVar6 == fVar9) {
            fVar6 = *(float *)((long)puVar2 + 0x2c);
            if (fVar6 == fVar7) {
              if (fVar8 < *(float *)(puVar2 + 6)) goto LAB_0098eaf0;
              if (fVar8 <= *(float *)(puVar2 + 6)) goto LAB_0098eb60;
            }
            else {
              if (fVar7 < fVar6) goto LAB_0098eaf0;
              if (fVar7 <= fVar6) goto LAB_0098eb60;
            }
LAB_0098eb0c:
            puVar4 = puVar2 + 1;
            puVar5 = (undefined8 *)*puVar4;
            if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_0098eb60;
            goto LAB_0098eab8;
          }
          if (fVar6 <= fVar9) {
            if (fVar6 < fVar9) goto LAB_0098eb0c;
            goto LAB_0098eb60;
          }
        }
      }
      else if (uVar3 <= param_1) {
        if (uVar3 < param_1) goto LAB_0098eb0c;
        goto LAB_0098eb60;
      }
LAB_0098eaf0:
      puVar4 = puVar2;
      puVar5 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    puVar5 = (undefined8 *)*puVar2;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    puVar5[4] = param_1;
    *(float *)(puVar5 + 5) = fVar9;
    *(float *)((long)puVar5 + 0x2c) = fVar7;
    *(float *)(puVar5 + 6) = fVar8;
    *(undefined *)((long)puVar5 + 0x34) = 0;
    puVar5[7] = this_00;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    *puVar4 = puVar5;
    puVar2 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x20);
  *(undefined4 *)(puVar4 + 1) = 1;
  puVar4[2] = param_2;
  puVar4[3] = puVar5;
  *puVar4 = &PTR__BaseUserData_00fe0b90;
  *(undefined8 **)(this_00 + 0x10) = puVar4;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


