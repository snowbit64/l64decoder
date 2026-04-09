// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeClosestPoints
// Entry Point: 00f6b88c
// Size: 972 bytes
// Signature: undefined __thiscall computeClosestPoints(btContinuousConvexCollision * this, btTransform * param_1, btTransform * param_2, btPointCollector * param_3)


/* btContinuousConvexCollision::computeClosestPoints(btTransform const&, btTransform const&,
   btPointCollector&) */

void __thiscall
btContinuousConvexCollision::computeClosestPoints
          (btContinuousConvexCollision *this,btTransform *param_1,btTransform *param_2,
          btPointCollector *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined **local_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long *local_f8;
  long lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined local_d8;
  undefined4 local_d0;
  undefined8 local_c4;
  long local_b8;
  
  lVar2 = tpidr_el0;
  local_b8 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    uVar36 = *(undefined8 *)(param_2 + 4);
    uVar15 = *(undefined8 *)(param_2 + 0x14);
    uVar13 = NEON_rev64(uVar36,4);
    fVar9 = *(float *)(param_1 + 8);
    fVar20 = (float)*(undefined8 *)param_1;
    fVar35 = (float)uVar36;
    fVar8 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar37 = (float)((ulong)uVar36 >> 0x20);
    uVar36 = NEON_rev64(uVar15,4);
    uVar28 = *(undefined8 *)(param_2 + 0x24);
    lVar4 = *(long *)(this + 0x28);
    fVar11 = *(float *)(param_1 + 0x18);
    uVar22 = NEON_rev64(uVar28,4);
    fVar14 = (float)uVar15;
    fVar10 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    uVar15 = *(undefined8 *)(lVar4 + 0x44);
    fVar18 = *(float *)(param_1 + 0x28);
    fVar42 = *(float *)param_2;
    uVar39 = NEON_rev64(uVar15,4);
    fVar17 = (float)*(undefined8 *)(param_1 + 0x20);
    fVar27 = (float)uVar28;
    fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar29 = (float)((ulong)uVar28 >> 0x20);
    fVar32 = fVar35 * fVar20 + fVar10 * fVar14 + fVar17 * fVar27;
    fVar33 = fVar37 * fVar8 + fVar12 * fVar16 + fVar34 * fVar29;
    fVar30 = fVar35 * fVar9 + fVar14 * fVar11 + fVar27 * fVar18;
    fVar31 = fVar37 * fVar9 + fVar16 * fVar11 + fVar29 * fVar18;
    fVar25 = (float)uVar13 * fVar20 + fVar10 * (float)uVar36 + fVar17 * (float)uVar22;
    fVar26 = (float)((ulong)uVar13 >> 0x20) * fVar8 + fVar12 * (float)((ulong)uVar36 >> 0x20) +
             fVar34 * (float)((ulong)uVar22 >> 0x20);
    fVar21 = *(float *)(param_2 + 0x10);
    fVar38 = *(float *)(param_2 + 0x20);
    uVar6 = NEON_fmadd(fVar21,fVar11,fVar42 * fVar9);
    fVar11 = (float)((ulong)uVar15 >> 0x20);
    fVar9 = *(float *)(lVar4 + 0x40);
    uVar19 = NEON_fmadd(fVar38,fVar18,uVar6);
    fVar40 = fVar20 * fVar42 + fVar10 * fVar21 + fVar17 * fVar38;
    fVar41 = fVar8 * fVar42 + fVar12 * fVar21 + fVar34 * fVar38;
    fVar18 = *(float *)(param_1 + 0x30);
    fVar12 = *(float *)(param_1 + 0x34);
    uVar7 = NEON_fnmadd(uVar19,fVar9,-((float)uVar15 * fVar30 + fVar11 * fVar31));
    fVar23 = fVar14 * fVar12;
    fVar24 = fVar16 * fVar12;
    local_1b0 = CONCAT44(-((float)((ulong)uVar39 >> 0x20) * fVar26 + fVar33 * fVar11) -
                         fVar41 * fVar9,
                         -((float)uVar39 * fVar25 + fVar32 * (float)uVar15) - fVar40 * fVar9);
    fVar17 = *(float *)(param_1 + 0x38);
    uStack_1a8 = (ulong)uVar7;
    fVar34 = *(float *)(param_2 + 0x30);
    fVar8 = *(float *)(param_2 + 0x34);
    fVar10 = *(float *)(param_2 + 0x38);
    fVar9 = fVar21 * fVar12;
    fVar20 = fVar8 * fVar21;
    fVar11 = (float)(**(code **)(**(long **)(this + 0x18) + 0x80))
                              (*(long **)(this + 0x18),&local_1b0);
    fVar18 = fVar18 - fVar34;
    uVar6 = NEON_fmadd(fVar38,fVar17,fVar9);
    fVar34 = (float)NEON_fmadd(fVar10,fVar38,fVar8 * fVar21);
    fVar9 = (float)NEON_fmadd(fVar18,fVar42,uVar6);
    fVar14 = ((fVar23 + fVar27 * fVar17 + fVar35 * fVar18) - (fVar14 * fVar8 + fVar27 * fVar10)) +
             fVar32 * fVar11 + fVar26 * fVar20 + fVar30 * fVar12;
    fVar10 = ((fVar24 + fVar29 * fVar17 + fVar37 * fVar18) - (fVar16 * fVar8 + fVar29 * fVar10)) +
             fVar25 * fVar11 + fVar33 * fVar20 + fVar31 * fVar12;
    uVar6 = NEON_fmadd(fVar12,uVar19,(fVar9 - fVar34) + fVar11 * fVar40 + fVar20 * fVar41);
    fVar11 = *(float *)(lVar4 + 0x40);
    fVar8 = (float)*(undefined8 *)(lVar4 + 0x44);
    fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0x44) >> 0x20);
    fVar20 = (float)NEON_fmadd(fVar11,uVar6,fVar8 * fVar14);
    fVar20 = (fVar20 + fVar9 * fVar10) - *(float *)(lVar4 + 0x50);
    fVar12 = (float)NEON_fmsub(fVar20,fVar11,uVar6);
    fVar14 = fVar14 - fVar20 * fVar8;
    fVar10 = fVar10 - fVar20 * fVar9;
    uVar6 = NEON_fmadd(*(float *)(param_2 + 0x24),fVar14,*(float *)(param_2 + 0x20) * fVar12);
    fVar20 = (float)NEON_fmadd(*(float *)(param_2 + 0x28),fVar10,uVar6);
    local_120 = (undefined **)
                CONCAT44(*(float *)(param_2 + 0x10) * fVar11 + *(float *)(param_2 + 0x14) * fVar8 +
                         *(float *)(param_2 + 0x18) * fVar9,
                         *(float *)param_2 * fVar11 + *(float *)(param_2 + 4) * fVar8 +
                         *(float *)(param_2 + 8) * fVar9);
    local_1b0 = CONCAT44(*(float *)(param_2 + 0x10) * fVar12 + *(float *)(param_2 + 0x14) * fVar14 +
                         *(float *)(param_2 + 0x18) * fVar10 +
                         (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                         *(float *)param_2 * fVar12 + *(float *)(param_2 + 4) * fVar14 +
                         *(float *)(param_2 + 8) * fVar10 + (float)*(undefined8 *)(param_2 + 0x30));
    local_118 = (ulong)(uint)(*(float *)(param_2 + 0x20) * fVar11 +
                              *(float *)(param_2 + 0x24) * fVar8 +
                             *(float *)(param_2 + 0x28) * fVar9);
    uStack_1a8 = (ulong)(uint)(fVar20 + *(float *)(param_2 + 0x38));
    (**(code **)(*(long *)param_3 + 0x20))(param_3,&local_120,&local_1b0);
  }
  else {
    puVar3 = *(undefined4 **)(this + 8);
    *(undefined *)(puVar3 + 0x4e) = 0;
    *puVar3 = 0;
    *(undefined *)(puVar3 + 0x59) = 1;
    *(undefined8 *)(puVar3 + 0x4b) = 0x5d5e0b6b;
    *(undefined8 *)(puVar3 + 0x49) = 0x5d5e0b6b5d5e0b6b;
    *(undefined8 *)(puVar3 + 0x54) = 0;
    *(undefined8 *)(puVar3 + 0x56) = 0;
    *(undefined *)(puVar3 + 0x58) = 0;
    *(byte *)(puVar3 + 0x53) = *(byte *)(puVar3 + 0x53) & 0xf0;
    plVar1 = *(long **)(this + 0x18);
    lVar4 = *(long *)(this + 0x20);
    uVar6 = *(undefined4 *)(plVar1 + 1);
    uVar19 = *(undefined4 *)(lVar4 + 8);
    uVar5 = (**(code **)(*plVar1 + 0x60))(plVar1);
    uStack_dc = (**(code **)(**(long **)(this + 0x20) + 0x60))();
    uStack_188 = *(undefined8 *)(param_1 + 0x28);
    local_190 = *(undefined8 *)(param_1 + 0x20);
    uStack_178 = *(undefined8 *)(param_1 + 0x38);
    uStack_180 = *(undefined8 *)(param_1 + 0x30);
    uStack_110 = 0;
    local_118 = 0x3f80000000000000;
    local_120 = &PTR__btDiscreteCollisionDetectorInterface_0101b4e0;
    local_c4 = 0x100000001;
    uStack_1a8 = *(ulong *)(param_1 + 8);
    local_1b0 = *(undefined8 *)param_1;
    uStack_198 = *(undefined8 *)(param_1 + 0x18);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x10);
    local_d8 = 0;
    local_130 = 0x5d5e0b6b;
    local_d0 = 0xffffffff;
    uStack_168 = *(undefined8 *)(param_2 + 8);
    local_170 = *(undefined8 *)param_2;
    uStack_158 = *(undefined8 *)(param_2 + 0x18);
    uStack_160 = *(undefined8 *)(param_2 + 0x10);
    uStack_148 = *(undefined8 *)(param_2 + 0x28);
    local_150 = *(undefined8 *)(param_2 + 0x20);
    uStack_138 = *(undefined8 *)(param_2 + 0x38);
    uStack_140 = *(undefined8 *)(param_2 + 0x30);
    uStack_100 = *(undefined8 *)(this + 8);
    local_108 = *(undefined8 *)(this + 0x10);
    local_f8 = plVar1;
    lStack_f0 = lVar4;
    local_e8 = uVar6;
    uStack_e4 = uVar19;
    local_e0 = uVar5;
    btGjkPairDetector::getClosestPointsNonVirtual
              ((btGjkPairDetector *)&local_120,(ClosestPointInput *)&local_1b0,(Result *)param_3,
               (btIDebugDraw *)0x0,true);
  }
  if (*(long *)(lVar2 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


