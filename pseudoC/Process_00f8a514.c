// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f8a514
// Size: 996 bytes
// Signature: undefined __thiscall Process(CollideCL_RS * this, btDbvtNode * param_1)


/* btSoftColliders::CollideCL_RS::Process(btDbvtNode const*) */

undefined8 __thiscall btSoftColliders::CollideCL_RS::Process(CollideCL_RS *this,btDbvtNode *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  float *pfVar8;
  long lVar9;
  btConvexShape *pbVar10;
  btTransform *pbVar11;
  long lVar12;
  float fVar13;
  undefined8 local_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  sResults asStack_e0 [56];
  undefined **local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_6c;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar12 = *(long *)(param_1 + 0x28);
  local_98 = 0;
  local_90 = 0xffffffff;
  uStack_84 = 0x3f800000;
  local_8c = 0x3f8000003f800000;
  local_6c = 0;
  local_a0 = 0x23;
  pbVar10 = *(btConvexShape **)(*(long *)(this + 0x28) + 8);
  local_a8 = &PTR__btConvexShape_0101baa8;
  local_60 = lVar12;
  if (((*(byte *)(*(long *)(*(long *)(this + 0x28) + 0x10) + 0xe0) & 3) == 0) ||
     (*(char *)(lVar12 + 0x1a0) == '\0')) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar3 != 0)) {
      puVar5 = (undefined8 *)btMatrix3x3::getIdentity();
      btTransform::getIdentity()::identityTransform._8_8_ = puVar5[1];
      btTransform::getIdentity()::identityTransform._0_8_ = *puVar5;
      btTransform::getIdentity()::identityTransform._24_8_ = puVar5[3];
      btTransform::getIdentity()::identityTransform._16_8_ = puVar5[2];
      btTransform::getIdentity()::identityTransform._40_8_ = puVar5[5];
      btTransform::getIdentity()::identityTransform._32_8_ = puVar5[4];
      btTransform::getIdentity()::identityTransform._48_8_ = 0;
      btTransform::getIdentity()::identityTransform._56_8_ = 0;
      __cxa_guard_release(&btTransform::getIdentity()::identityTransform);
    }
    pbVar11 = *(btTransform **)(*(long *)(this + 0x28) + 0x18);
    uStack_1d8 = 0;
    local_1e0 = (undefined **)0x3f800000;
    uVar4 = btGjkEpaSolver2::Distance
                      ((btConvexShape *)&local_a8,
                       (btTransform *)btTransform::getIdentity()::identityTransform,pbVar10,pbVar11,
                       (btVector3 *)&local_1e0,asStack_e0);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = btGjkEpaSolver2::Penetration
                          ((btConvexShape *)&local_a8,
                           (btTransform *)btTransform::getIdentity()::identityTransform,pbVar10,
                           pbVar11,(btVector3 *)&local_1e0,asStack_e0,false), (uVar4 & 1) != 0)) {
      local_12c = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1b0 = 0;
      local_1b8 = 0;
      uStack_1c0 = 0;
      local_1c8 = 0;
      local_1e0 = &PTR__Joint_0101b7b0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      local_200 = *(long *)(*(long *)(this + 0x28) + 0x10);
      lStack_208 = 0;
      if ((*(uint *)(local_200 + 0x100) & 2) != 0) {
        lStack_208 = local_200;
      }
      local_210 = 0;
      lStack_1f8 = lVar12;
      uVar4 = ClusterBase::SolveContact
                        ((ClusterBase *)this,asStack_e0,(Body)&lStack_1f8,(Body)&local_210,
                         (CJoint *)&local_1e0);
      if ((uVar4 & 1) != 0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar5 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0xf8,0x10);
        *puVar5 = &PTR__Joint_0101b7b0;
        puVar5[2] = 0;
        puVar5[1] = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0x10] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x11] = 0;
        puVar5[0x14] = 0;
        puVar5[0x13] = 0;
        puVar5[0x16] = 0;
        puVar5[0x15] = 0;
        puVar5[0x18] = 0;
        puVar5[0x17] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1d] = 0;
        puVar5[8] = uStack_1a0;
        puVar5[7] = local_1a8;
        puVar5[6] = uStack_1b0;
        puVar5[5] = local_1b8;
        puVar5[4] = uStack_1c0;
        puVar5[3] = local_1c8;
        puVar5[2] = uStack_1d0;
        puVar5[1] = uStack_1d8;
        *(undefined8 *)((long)puVar5 + 0x7c) = uStack_164;
        *(ulong *)((long)puVar5 + 0x74) = CONCAT44(uStack_168,local_16c);
        puVar5[0xe] = CONCAT44(local_16c,uStack_170);
        puVar5[0xd] = uStack_178;
        puVar5[0xc] = uStack_180;
        puVar5[0xb] = local_188;
        puVar5[10] = uStack_190;
        puVar5[9] = local_198;
        *(undefined8 *)((long)puVar5 + 0x8c) = uStack_154;
        *(undefined8 *)((long)puVar5 + 0x84) = local_15c;
        *(undefined8 *)((long)puVar5 + 0x9c) = uStack_144;
        *(undefined8 *)((long)puVar5 + 0x94) = local_14c;
        *(undefined8 *)((long)puVar5 + 0xac) = uStack_134;
        *(undefined8 *)((long)puVar5 + 0xa4) = local_13c;
        *(undefined *)((long)puVar5 + 0xb4) = local_12c;
        *(undefined8 *)((long)puVar5 + 0xec) = uStack_f4;
        *(ulong *)((long)puVar5 + 0xe4) = CONCAT44(uStack_f8,local_fc);
        puVar5[0x1c] = CONCAT44(local_fc,uStack_100);
        puVar5[0x1b] = uStack_108;
        puVar5[0x1a] = uStack_110;
        puVar5[0x19] = local_118;
        puVar5[0x18] = uStack_120;
        puVar5[0x17] = local_128;
        lVar12 = *(long *)(this + 0x20);
        uVar7 = *(uint *)(lVar12 + 0x454);
        if (uVar7 == *(uint *)(lVar12 + 0x458)) {
          uVar1 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar1 = 1;
          }
          if ((int)uVar7 < (int)uVar1) {
            if (uVar1 == 0) {
              lVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar6 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,
                                 0x10);
              uVar7 = *(uint *)(lVar12 + 0x454);
            }
            if (0 < (int)uVar7) {
              lVar9 = 0;
              do {
                *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(*(long *)(lVar12 + 0x460) + lVar9);
                lVar9 = lVar9 + 8;
              } while ((ulong)uVar7 * 8 - lVar9 != 0);
            }
            if ((*(long *)(lVar12 + 0x460) != 0) && (*(char *)(lVar12 + 0x468) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar7 = *(uint *)(lVar12 + 0x454);
            }
            *(long *)(lVar12 + 0x460) = lVar6;
            *(uint *)(lVar12 + 0x458) = uVar1;
            *(undefined *)(lVar12 + 0x468) = 1;
          }
        }
        *(undefined8 **)(*(long *)(lVar12 + 0x460) + (long)(int)uVar7 * 8) = puVar5;
        *(uint *)(lVar12 + 0x454) = uVar7 + 1;
        lVar12 = *(long *)(this + 0x20);
        if ((*(byte *)(*(long *)(*(long *)(this + 0x28) + 0x10) + 0xe0) & 3) == 0) {
          fVar13 = *(float *)(lVar12 + 0x1ac);
          pfVar8 = (float *)(lVar12 + 0x1b8);
        }
        else {
          fVar13 = *(float *)(lVar12 + 0x1b0);
          pfVar8 = (float *)(lVar12 + 0x1bc);
        }
        *(float *)((long)puVar5 + 0x5c) = *(float *)((long)puVar5 + 0x5c) * fVar13;
        *(float *)(puVar5 + 0xc) = *(float *)(puVar5 + 0xc) * *pfVar8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


