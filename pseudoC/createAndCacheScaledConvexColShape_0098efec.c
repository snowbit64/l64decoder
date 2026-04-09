// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAndCacheScaledConvexColShape
// Entry Point: 0098efec
// Size: 744 bytes
// Signature: undefined __thiscall createAndCacheScaledConvexColShape(Bt2PhysicsColShapeCache * this, ulonglong param_1, btConvexPointCloudShape * param_2, Vector3 * param_3)


/* Bt2PhysicsColShapeCache::createAndCacheScaledConvexColShape(unsigned long long,
   btConvexPointCloudShape*, Vector3 const&) */

long * __thiscall
Bt2PhysicsColShapeCache::createAndCacheScaledConvexColShape
          (Bt2PhysicsColShapeCache *this,ulonglong param_1,btConvexPointCloudShape *param_2,
          Vector3 *param_3)

{
  long *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_88;
  
  uVar18 = *(undefined8 *)param_3;
  uVar17 = *(undefined4 *)(param_3 + 8);
  (**(code **)(*(long *)param_2 + 0x60))(param_2);
  uVar14 = *(undefined4 *)param_3;
  fVar16 = *(float *)(param_3 + 4);
  uVar15 = *(undefined4 *)(param_3 + 8);
  this_00 = (long *)btAlignedAllocInternal(0x88,0x10);
  lVar3 = *(long *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x80);
                    /* try { // try from 0098f060 to 0098f063 has its CatchHandler @ 0098f2e4 */
  btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
            ((btPolyhedralConvexAabbCachingShape *)this_00);
  *(undefined8 *)((long)this_00 + 0x1c) = uVar18;
  *(undefined4 *)((long)this_00 + 0x24) = uVar17;
  *(undefined4 *)(this_00 + 5) = 0;
  this_00[0xf] = lVar3;
  *(undefined4 *)(this_00 + 1) = 5;
  *(undefined4 *)(this_00 + 0x10) = uVar6;
  *this_00 = (long)&PTR__btPolyhedralConvexShape_0101a820;
                    /* try { // try from 0098f090 to 0098f097 has its CatchHandler @ 0098f2d4 */
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  uVar6 = NEON_fmadd(uVar14,uVar14,fVar16 * fVar16);
  NEON_fmadd(uVar15,uVar15,uVar6);
  (**(code **)(*this_00 + 0x58))(this_00);
  uVar18 = *(undefined8 *)param_3;
  fVar16 = (float)uVar18;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar20 = *(float *)(param_3 + 8);
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar1 = puVar4;
  if (puVar5 == (undefined8 *)0x0) {
LAB_0098f184:
    puVar5 = (undefined8 *)*puVar4;
  }
  else {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while (puVar1 = puVar5, uVar2 = puVar1[4], uVar2 != param_1) {
        if (param_1 < uVar2) goto LAB_0098f114;
        if (param_1 <= uVar2) goto LAB_0098f184;
LAB_0098f130:
        puVar4 = puVar1 + 1;
        puVar5 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_0098f184;
      }
      if (*(char *)((long)puVar1 + 0x34) != '\x01') goto LAB_0098f130;
      fVar9 = *(float *)(puVar1 + 5);
      if (fVar9 != fVar16) {
        if (fVar16 < fVar9) goto LAB_0098f114;
        if (fVar9 < fVar16) goto LAB_0098f130;
        goto LAB_0098f184;
      }
      fVar9 = *(float *)((long)puVar1 + 0x2c);
      if (fVar9 == fVar19) {
        if (fVar20 < *(float *)(puVar1 + 6)) goto LAB_0098f114;
        if (*(float *)(puVar1 + 6) < fVar20) goto LAB_0098f130;
        goto LAB_0098f184;
      }
      if (fVar9 <= fVar19) {
        if (fVar9 < fVar19) goto LAB_0098f130;
        goto LAB_0098f184;
      }
LAB_0098f114:
      puVar4 = puVar1;
      puVar5 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    puVar5 = (undefined8 *)*puVar1;
  }
  if (puVar5 == (undefined8 *)0x0) {
    uStack_88 = 0;
    puVar5 = (undefined8 *)operator_new(0x40);
    puVar5[4] = param_1;
    puVar5[7] = this_00;
    puVar5[5] = uVar18;
    *(undefined *)((long)puVar5 + 0x34) = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(float *)(puVar5 + 6) = fVar20;
    puVar5[2] = puVar1;
    *puVar4 = puVar5;
    puVar1 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar1 = (undefined8 *)*puVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar1);
    fVar16 = (float)*(undefined8 *)param_3;
    fVar19 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar20 = *(float *)(param_3 + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(lVar3 + 0x38);
  uVar11 = *(undefined8 *)(lVar3 + 0x40);
  auVar8 = ZEXT416((uint)(fVar16 * fVar19 * fVar20));
  uVar18 = *(undefined8 *)(lVar3 + 0x28);
  uVar12 = *(undefined8 *)(lVar3 + 0x48);
  uVar13 = *(undefined8 *)(lVar3 + 0x50);
  auVar7 = NEON_ext(auVar8,auVar8,4,1);
  fVar9 = *(float *)(lVar3 + 0x58);
  auVar8._4_4_ = fVar19;
  auVar8._0_4_ = fVar16;
  auVar8._8_8_ = 0;
  auVar8 = NEON_ext(auVar7,auVar8,0xc,1);
  puVar4 = (undefined8 *)operator_new(0x60);
  *(undefined4 *)(puVar4 + 1) = 1;
  puVar4[2] = param_2;
  puVar4[3] = puVar5;
  puVar4[4] = 0;
  puVar4[7] = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar19,(float)uVar10 * fVar16);
  puVar4[8] = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar16,(float)uVar11 * fVar20);
  puVar4[6] = uStack_88;
  puVar4[5] = CONCAT44((float)((ulong)uVar18 >> 0x20) * auVar8._4_4_,(float)uVar18 * auVar8._0_4_);
  puVar4[9] = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar20,(float)uVar12 * fVar19);
  *puVar4 = &PTR__ConvexUserData_00fe0b70;
  puVar4[10] = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar19,(float)uVar13 * fVar16);
  *(float *)(puVar4 + 0xb) = fVar9 * fVar20;
  this_00[2] = (long)puVar4;
  return this_00;
}


