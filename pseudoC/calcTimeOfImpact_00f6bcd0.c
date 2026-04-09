// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcTimeOfImpact
// Entry Point: 00f6bcd0
// Size: 908 bytes
// Signature: undefined __thiscall calcTimeOfImpact(btGjkConvexCast * this, btTransform * param_1, btTransform * param_2, btTransform * param_3, btTransform * param_4, CastResult * param_5)


/* btGjkConvexCast::calcTimeOfImpact(btTransform const&, btTransform const&, btTransform const&,
   btTransform const&, btConvexCast::CastResult&) */

void __thiscall
btGjkConvexCast::calcTimeOfImpact
          (btGjkConvexCast *this,btTransform *param_1,btTransform *param_2,btTransform *param_3,
          btTransform *param_4,CastResult *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long *local_140;
  long *plStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined local_120;
  undefined4 local_118;
  undefined8 local_10c;
  undefined **local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  char local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_b8;
  
  lVar1 = tpidr_el0;
  local_b8 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined4 **)(this + 8);
  *(undefined *)(puVar2 + 0x59) = 1;
  *(undefined *)(puVar2 + 0x4e) = 0;
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x4b) = 0x5d5e0b6b;
  *(undefined8 *)(puVar2 + 0x49) = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(puVar2 + 0x54) = 0;
  *(undefined8 *)(puVar2 + 0x56) = 0;
  *(undefined *)(puVar2 + 0x58) = 0;
  *(byte *)(puVar2 + 0x53) = *(byte *)(puVar2 + 0x53) & 0xf0;
  uStack_148 = *(undefined8 *)(this + 8);
  local_140 = *(long **)(this + 0x10);
  local_d8 = 1e+18;
  local_100 = &PTR__Result_0101b478;
  local_d4 = '\0';
  uStack_158 = 0;
  local_160 = 0x3f80000000000000;
  plVar3 = *(long **)(this + 0x18);
  local_150 = 0;
  local_168 = &PTR__btDiscreteCollisionDetectorInterface_0101b4e0;
  fVar12 = *(float *)(param_2 + 0x30);
  fVar14 = *(float *)(param_1 + 0x30);
  local_130 = *(undefined4 *)(local_140 + 1);
  uVar13 = *(undefined8 *)(param_2 + 0x34);
  uVar15 = *(undefined8 *)(param_1 + 0x34);
  fVar8 = *(float *)(param_4 + 0x30);
  local_12c = *(undefined4 *)(plVar3 + 1);
  fVar9 = *(float *)(param_3 + 0x30);
  uVar10 = *(undefined8 *)(param_4 + 0x34);
  uVar11 = *(undefined8 *)(param_3 + 0x34);
  plStack_138 = plVar3;
  local_128 = (**(code **)(*local_140 + 0x60))(local_140);
  local_124 = (**(code **)(*plVar3 + 0x60))(plVar3);
  uStack_1e8 = *(undefined8 *)(param_1 + 8);
  local_1f0 = *(undefined8 *)param_1;
  uStack_1d8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x10);
  local_10c = 0x100000001;
  local_120 = 0;
  local_118 = 0xffffffff;
  uStack_1c8 = *(undefined8 *)(param_1 + 0x28);
  local_1d0 = *(undefined8 *)(param_1 + 0x20);
  local_1b8 = *(undefined8 *)(param_1 + 0x38);
  local_1c0 = *(undefined8 *)(param_1 + 0x30);
  local_170 = 0x5d5e0b6b;
  uStack_1a8 = *(undefined8 *)(param_3 + 8);
  local_1b0 = *(undefined8 *)param_3;
  uStack_198 = *(undefined8 *)(param_3 + 0x18);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x10);
  uStack_188 = *(undefined8 *)(param_3 + 0x28);
  local_190 = *(undefined8 *)(param_3 + 0x20);
  local_178 = *(undefined8 *)(param_3 + 0x38);
  local_180 = *(undefined8 *)(param_3 + 0x30);
  btGjkPairDetector::getClosestPointsNonVirtual
            ((btGjkPairDetector *)&local_168,(ClosestPointInput *)&local_1f0,(Result *)&local_100,
             (btIDebugDraw *)0x0,true);
  uStack_c8 = uStack_e0;
  local_d0 = local_e8;
  if (local_d4 != '\0') {
    fVar8 = (fVar9 - fVar8) + (fVar12 - fVar14);
    fVar9 = ((float)uVar11 - (float)uVar10) + ((float)uVar13 - (float)uVar15);
    fVar12 = ((float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar10 >> 0x20)) +
             ((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar15 >> 0x20));
    uVar10 = CONCAT44(uStack_f0,uStack_f4);
    if (local_d8 <= 0.001) {
      fVar14 = 0.0;
    }
    else {
      iVar4 = 0x21;
      fVar5 = 0.0;
      do {
        iVar4 = iVar4 + -1;
        local_d0 = local_e8;
        uStack_c8 = uStack_e0;
        if (iVar4 == 0) goto LAB_00f6bff4;
        uVar11 = 0;
        fVar14 = (float)NEON_fmadd(local_f8,fVar8,(float)uVar10 * fVar9);
        fVar14 = fVar5 - local_d8 / (fVar14 + (float)((ulong)uVar10 >> 0x20) * fVar12);
        if ((1.0 < fVar14) || ((fVar14 < 0.0 || fVar14 == fVar5) || fVar14 >= 0.0 && fVar14 < fVar5)
           ) goto LAB_00f6bff8;
        (***(code ***)param_5)(param_5);
        fVar5 = 1.0 - fVar14;
        local_1c0 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar5 +
                             (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) * fVar14,
                             (float)*(undefined8 *)(param_1 + 0x30) * fVar5 +
                             (float)*(undefined8 *)(param_2 + 0x30) * fVar14);
        uVar7 = NEON_fmadd(*(undefined4 *)(param_2 + 0x38),fVar14,*(float *)(param_1 + 0x38) * fVar5
                          );
        local_180 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) * fVar5 +
                             (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20) * fVar14,
                             (float)*(undefined8 *)(param_3 + 0x30) * fVar5 +
                             (float)*(undefined8 *)(param_4 + 0x30) * fVar14);
        uVar6 = NEON_fmadd(*(undefined4 *)(param_4 + 0x38),fVar14,*(float *)(param_3 + 0x38) * fVar5
                          );
        local_1b8 = CONCAT44(local_1b8._4_4_,uVar7);
        local_178 = CONCAT44(local_178._4_4_,uVar6);
        btGjkPairDetector::getClosestPointsNonVirtual
                  ((btGjkPairDetector *)&local_168,(ClosestPointInput *)&local_1f0,
                   (Result *)&local_100,(btIDebugDraw *)0x0,true);
        if (local_d4 == '\0') goto LAB_00f6bff4;
        if (local_d8 < 0.0) {
          uVar11 = 1;
          *(ulong *)(param_5 + 0x90) = CONCAT44(uStack_ec,uStack_f0);
          *(ulong *)(param_5 + 0x88) = CONCAT44(uStack_f4,local_f8);
          *(undefined8 *)(param_5 + 0xa0) = uStack_e0;
          *(undefined8 *)(param_5 + 0x98) = local_e8;
          *(float *)(param_5 + 0xa8) = fVar14;
          goto LAB_00f6bff8;
        }
        uVar10 = CONCAT44(uStack_f0,uStack_f4);
        uStack_c8 = uStack_e0;
        local_d0 = local_e8;
        fVar5 = fVar14;
      } while (0.001 < local_d8);
    }
    fVar8 = (float)NEON_fmadd(local_f8,fVar8,(float)uVar10 * fVar9);
    if (fVar8 + (float)((ulong)uVar10 >> 0x20) * fVar12 < -*(float *)(param_5 + 0xb8)) {
      *(undefined4 *)(param_5 + 0x88) = local_f8;
      uVar11 = 1;
      *(float *)(param_5 + 0xa8) = fVar14;
      *(undefined8 *)(param_5 + 0x8c) = uVar10;
      *(undefined4 *)(param_5 + 0x94) = uStack_ec;
      *(undefined8 *)(param_5 + 0xa0) = uStack_c8;
      *(undefined8 *)(param_5 + 0x98) = local_d0;
      goto LAB_00f6bff8;
    }
  }
LAB_00f6bff4:
  uVar11 = 0;
LAB_00f6bff8:
  if (*(long *)(lVar1 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


