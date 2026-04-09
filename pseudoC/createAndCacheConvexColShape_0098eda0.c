// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAndCacheConvexColShape
// Entry Point: 0098eda0
// Size: 548 bytes
// Signature: undefined __thiscall createAndCacheConvexColShape(Bt2PhysicsColShapeCache * this, ulonglong param_1, uint param_2, btVector3 * param_3, float param_4, VolumeInfo * param_5)


/* Bt2PhysicsColShapeCache::createAndCacheConvexColShape(unsigned long long, unsigned int,
   btVector3*, float, Bt2PhysicsColShapeCache::VolumeInfo const&) */

long * __thiscall
Bt2PhysicsColShapeCache::createAndCacheConvexColShape
          (Bt2PhysicsColShapeCache *this,ulonglong param_1,uint param_2,btVector3 *param_3,
          float param_4,VolumeInfo *param_5)

{
  bool bVar1;
  long *this_00;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  this_00 = (long *)btAlignedAllocInternal(0x88,0x10);
                    /* try { // try from 0098ede4 to 0098ede7 has its CatchHandler @ 0098efd4 */
  btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
            ((btPolyhedralConvexAabbCachingShape *)this_00);
  this_00[0xf] = (long)param_3;
  *(undefined4 *)(this_00 + 1) = 5;
  *(uint *)(this_00 + 0x10) = param_2;
  *(undefined8 *)((long)this_00 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)this_00 + 0x1c) = 0x3f8000003f800000;
  *this_00 = (long)&PTR__btPolyhedralConvexShape_0101a820;
                    /* try { // try from 0098ee14 to 0098ee1b has its CatchHandler @ 0098efc4 */
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  (**(code **)(*this_00 + 0x58))(param_4,this_00);
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2 = puVar4;
  if (puVar5 == (undefined8 *)0x0) {
LAB_0098eed8:
    puVar5 = (undefined8 *)*puVar4;
  }
  else {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while (puVar2 = puVar5, uVar3 = puVar2[4], uVar3 == param_1) {
        if (*(char *)((long)puVar2 + 0x34) == '\x01') {
          fVar8 = *(float *)(puVar2 + 5);
          bVar1 = fVar8 == 1.0;
          if (bVar1) {
            fVar8 = *(float *)((long)puVar2 + 0x2c);
            bVar1 = fVar8 == 1.0;
            if (bVar1) {
              if (1.0 < *(float *)(puVar2 + 6)) goto LAB_0098ee88;
              if (*(float *)(puVar2 + 6) < 1.0) goto LAB_0098eea4;
              goto LAB_0098eed8;
            }
          }
          if (!bVar1 && 1.0 <= fVar8) goto LAB_0098ee88;
          if (1.0 <= fVar8) goto LAB_0098eed8;
        }
LAB_0098eea4:
        puVar4 = puVar2 + 1;
        puVar5 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_0098eed8;
      }
      if (uVar3 <= param_1) {
        if (uVar3 < param_1) goto LAB_0098eea4;
        goto LAB_0098eed8;
      }
LAB_0098ee88:
      puVar4 = puVar2;
      puVar5 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    puVar5 = (undefined8 *)*puVar2;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    uVar6 = NEON_fmov(0x3f800000,4);
    puVar5[4] = param_1;
    puVar5[7] = this_00;
    *(undefined4 *)(puVar5 + 6) = 0x3f800000;
    *(undefined *)((long)puVar5 + 0x34) = 1;
    puVar5[5] = uVar6;
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
  puVar4 = (undefined8 *)operator_new(0x60);
  uVar7 = *(undefined8 *)(param_5 + 8);
  uVar6 = *(undefined8 *)param_5;
  uVar10 = *(undefined8 *)(param_5 + 0x18);
  uVar9 = *(undefined8 *)(param_5 + 0x10);
  *(undefined4 *)(puVar4 + 1) = 1;
  puVar4[6] = uVar7;
  puVar4[5] = uVar6;
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  puVar4[2] = 0;
  puVar4[3] = puVar5;
  puVar4[8] = uVar10;
  puVar4[7] = uVar9;
  puVar4[4] = param_3;
  puVar4[10] = uVar7;
  puVar4[9] = uVar6;
  *puVar4 = &PTR__ConvexUserData_00fe0b70;
  *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(param_5 + 0x30);
  this_00[2] = (long)puVar4;
  return this_00;
}


