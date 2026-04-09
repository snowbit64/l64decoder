// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f8c6c0
// Size: 1108 bytes
// Signature: undefined __thiscall Process(CollideCL_SS * this, btDbvtNode * param_1, btDbvtNode * param_2)


/* btSoftColliders::CollideCL_SS::Process(btDbvtNode const*, btDbvtNode const*) */

undefined8 __thiscall
btSoftColliders::CollideCL_SS::Process(CollideCL_SS *this,btDbvtNode *param_1,btDbvtNode *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  long local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined **local_228;
  ulong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  sResults asStack_130 [56];
  undefined **local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_bc;
  long local_b0;
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
  lVar9 = *(long *)(this + 0x20);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_2 + 0x28);
  if (((lVar9 == *(long *)(this + 0x28)) && (*(int *)(lVar9 + 0x5fc) != 0)) &&
     (*(char *)(*(long *)(lVar9 + 0x608) +
               (long)*(int *)(lVar8 + 0x1a4) +
               (long)*(int *)(lVar7 + 0x1a4) * (long)*(int *)(lVar9 + 0x5dc)) != '\0')) {
    Process(btDbvtNode_const*,btDbvtNode_const*)::count =
         Process(btDbvtNode_const*,btDbvtNode_const*)::count + 1;
  }
  else {
    local_98 = 0;
    local_a0 = 0x23;
    local_f8 = &PTR__btConvexShape_0101baa8;
    uStack_84 = 0x3f800000;
    local_8c = 0x3f8000003f800000;
    local_6c = 0;
    local_90 = 0xffffffff;
    local_f0 = 0x23;
    local_e8 = 0;
    uStack_d4 = 0x3f800000;
    local_dc = 0x3f8000003f800000;
    local_e0 = 0xffffffff;
    local_bc = 0;
    local_b0 = lVar7;
    local_a8 = local_f8;
    local_60 = lVar8;
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
    local_228 = (undefined **)
                CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x108) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar7 + 0x108) >> 0x20),
                         (float)*(undefined8 *)(lVar8 + 0x108) -
                         (float)*(undefined8 *)(lVar7 + 0x108));
    local_220 = (ulong)(uint)(*(float *)(lVar8 + 0x110) - *(float *)(lVar7 + 0x110));
    uVar4 = btGjkEpaSolver2::Distance
                      ((btConvexShape *)&local_a8,
                       (btTransform *)btTransform::getIdentity()::identityTransform,
                       (btConvexShape *)&local_f8,
                       (btTransform *)btTransform::getIdentity()::identityTransform,
                       (btVector3 *)&local_228,asStack_130);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = btGjkEpaSolver2::Penetration
                          ((btConvexShape *)&local_a8,
                           (btTransform *)btTransform::getIdentity()::identityTransform,
                           (btConvexShape *)&local_f8,
                           (btTransform *)btTransform::getIdentity()::identityTransform,
                           (btVector3 *)&local_228,asStack_130,false), (uVar4 & 1) != 0)) {
      local_174 = 0;
      uStack_208 = 0;
      local_210 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      local_228 = &PTR__Joint_0101b7b0;
      uStack_218 = 0;
      local_220 = 0;
      uStack_238 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_230 = 0;
      local_258 = lVar7;
      local_240 = lVar8;
      uVar4 = ClusterBase::SolveContact
                        ((ClusterBase *)this,asStack_130,(Body)&local_240,(Body)&local_258,
                         (CJoint *)&local_228);
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
        puVar5[8] = uStack_1e8;
        puVar5[7] = uStack_1f0;
        puVar5[6] = uStack_1f8;
        puVar5[5] = local_200;
        puVar5[2] = uStack_218;
        puVar5[1] = local_220;
        puVar5[4] = uStack_208;
        puVar5[3] = local_210;
        *(undefined8 *)((long)puVar5 + 0x7c) = uStack_1ac;
        *(ulong *)((long)puVar5 + 0x74) = CONCAT44(uStack_1b0,local_1b4);
        puVar5[0xe] = CONCAT44(local_1b4,uStack_1b8);
        puVar5[0xd] = uStack_1c0;
        puVar5[0xc] = uStack_1c8;
        puVar5[0xb] = local_1d0;
        puVar5[10] = uStack_1d8;
        puVar5[9] = local_1e0;
        *(undefined8 *)((long)puVar5 + 0x8c) = uStack_19c;
        *(undefined8 *)((long)puVar5 + 0x84) = local_1a4;
        *(undefined8 *)((long)puVar5 + 0x9c) = uStack_18c;
        *(undefined8 *)((long)puVar5 + 0x94) = local_194;
        *(undefined8 *)((long)puVar5 + 0xac) = uStack_17c;
        *(undefined8 *)((long)puVar5 + 0xa4) = local_184;
        *(undefined *)((long)puVar5 + 0xb4) = local_174;
        *(undefined8 *)((long)puVar5 + 0xec) = uStack_13c;
        *(ulong *)((long)puVar5 + 0xe4) = CONCAT44(uStack_140,local_144);
        puVar5[0x1c] = CONCAT44(local_144,uStack_148);
        puVar5[0x1b] = uStack_150;
        puVar5[0x1a] = uStack_158;
        puVar5[0x19] = local_160;
        puVar5[0x18] = uStack_168;
        puVar5[0x17] = local_170;
        lVar9 = *(long *)(this + 0x20);
        uVar6 = *(uint *)(lVar9 + 0x454);
        if (uVar6 == *(uint *)(lVar9 + 0x458)) {
          uVar1 = uVar6 << 1;
          if (uVar6 == 0) {
            uVar1 = 1;
          }
          if ((int)uVar6 < (int)uVar1) {
            if (uVar1 == 0) {
              lVar7 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar7 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,
                                 0x10);
              uVar6 = *(uint *)(lVar9 + 0x454);
            }
            if (0 < (int)uVar6) {
              lVar8 = 0;
              do {
                *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)(*(long *)(lVar9 + 0x460) + lVar8);
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar6 * 8 - lVar8 != 0);
            }
            if ((*(long *)(lVar9 + 0x460) != 0) && (*(char *)(lVar9 + 0x468) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar6 = *(uint *)(lVar9 + 0x454);
            }
            *(long *)(lVar9 + 0x460) = lVar7;
            *(uint *)(lVar9 + 0x458) = uVar1;
            *(undefined *)(lVar9 + 0x468) = 1;
          }
        }
        *(undefined8 **)(*(long *)(lVar9 + 0x460) + (long)(int)uVar6 * 8) = puVar5;
        *(uint *)(lVar9 + 0x454) = uVar6 + 1;
        *(ulong *)((long)puVar5 + 0x5c) =
             CONCAT44((*(float *)(*(long *)(this + 0x28) + 0x1c0) +
                      *(float *)(*(long *)(this + 0x20) + 0x1c0)) * 0.5 *
                      (float)((ulong)*(undefined8 *)((long)puVar5 + 0x5c) >> 0x20),
                      *(float *)(*(long *)(this + 0x20) + 0x1b4) *
                      (float)*(undefined8 *)((long)puVar5 + 0x5c));
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


