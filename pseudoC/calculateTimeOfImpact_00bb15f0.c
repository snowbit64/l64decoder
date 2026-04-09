// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTimeOfImpact
// Entry Point: 00bb15f0
// Size: 1128 bytes
// Signature: undefined __cdecl calculateTimeOfImpact(btCollisionObject * param_1, btCollisionObject * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* Bt2SoftBodyHeightfieldCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject*,
   btCollisionObject*, btDispatcherInfo const&, btManifoldResult*) */

float Bt2SoftBodyHeightfieldCollisionAlgorithm::calculateTimeOfImpact
                (btCollisionObject *param_1,btCollisionObject *param_2,btDispatcherInfo *param_3,
                btManifoldResult *param_4)

{
  btCollisionObject *pbVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined **local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pbVar1 = (btCollisionObject *)param_3;
  if (param_1[0x10] != (btCollisionObject)0x0) {
    pbVar1 = param_2;
    param_2 = (btCollisionObject *)param_3;
  }
  fVar5 = *(float *)(param_2 + 0x38);
  fVar6 = *(float *)(param_2 + 0x3c);
  fVar4 = *(float *)(param_2 + 0x40);
  uVar7 = NEON_fmadd(*(float *)(param_2 + 0x78) - fVar5,*(float *)(param_2 + 0x78) - fVar5,
                     (*(float *)(param_2 + 0x7c) - fVar6) * (*(float *)(param_2 + 0x7c) - fVar6));
  fVar8 = (float)NEON_fmadd(*(float *)(param_2 + 0x80) - fVar4,*(float *)(param_2 + 0x80) - fVar4,
                            uVar7);
  fVar10 = 1.0;
  if ((*(float *)(param_2 + 0x11c) * *(float *)(param_2 + 0x11c) <= fVar8) &&
     (plVar3 = *(long **)(pbVar1 + 200), fVar10 = 1.0, *(int *)(plVar3 + 1) - 0x15U < 9)) {
    uVar7 = *(undefined4 *)(pbVar1 + 0x38);
    fVar8 = *(float *)(pbVar1 + 0x18);
    fVar24 = *(float *)(pbVar1 + 0x1c);
    fVar20 = *(float *)(param_2 + 0x18);
    fVar23 = *(float *)(param_2 + 0x1c);
    fVar25 = *(float *)(pbVar1 + 0x20);
    local_7c = 0;
    fVar10 = -*(float *)(pbVar1 + 0x3c);
    fVar27 = *(float *)(param_2 + 0x20);
    uVar22 = *(undefined4 *)(pbVar1 + 8);
    uVar21 = *(undefined4 *)(pbVar1 + 0xc);
    uVar35 = *(undefined4 *)(pbVar1 + 0x40);
    uVar13 = *(undefined4 *)(pbVar1 + 0x10);
    uVar28 = NEON_fmsub(uVar21,uVar7,fVar24 * fVar10);
    uVar19 = *(undefined4 *)(param_2 + 0x30);
    uVar32 = NEON_fmsub(uVar22,uVar7,fVar8 * fVar10);
    uVar7 = NEON_fmsub(uVar13,uVar7,fVar25 * fVar10);
    uVar16 = *(undefined4 *)(param_2 + 0x70);
    uVar17 = *(undefined4 *)(param_2 + 0x28);
    uVar18 = *(undefined4 *)(param_2 + 0x2c);
    uVar14 = *(undefined4 *)(param_2 + 0x68);
    uVar15 = *(undefined4 *)(param_2 + 0x6c);
    uVar12 = *(undefined4 *)(pbVar1 + 0x28);
    uVar11 = *(undefined4 *)(pbVar1 + 0x2c);
    uVar9 = *(undefined4 *)(pbVar1 + 0x30);
    fStack_ec = (float)NEON_fmsub(uVar11,uVar35,uVar28);
    local_e8 = (float)NEON_fmsub(uVar9,uVar35,uVar7);
    local_f0 = (float)NEON_fmsub(uVar12,uVar35,uVar32);
    uVar32 = NEON_fmadd(fVar5,uVar21,fVar24 * fVar6);
    uVar38 = *(undefined4 *)(param_2 + 0x10);
    uVar28 = NEON_fmadd(fVar5,uVar22,fVar8 * fVar6);
    uVar7 = NEON_fmadd(fVar5,uVar13,fVar25 * fVar6);
    fStack_12c = (float)NEON_fmadd(fVar4,uVar11,uVar32);
    fVar6 = *(float *)(param_2 + 0x60);
    fVar30 = *(float *)(param_2 + 0x58);
    fVar5 = *(float *)(param_2 + 0x5c);
    local_130 = (float)NEON_fmadd(fVar4,uVar12,uVar28);
    local_128 = (float)NEON_fmadd(fVar4,uVar9,uVar7);
    uVar36 = *(undefined4 *)(param_2 + 0x78);
    fVar4 = *(float *)(param_2 + 0x7c);
    uVar7 = NEON_fmadd(uVar36,uVar22,fVar8 * fVar4);
    uVar28 = *(undefined4 *)(param_2 + 0x80);
    uVar26 = *(undefined4 *)(param_2 + 8);
    uVar40 = *(undefined4 *)(param_2 + 0xc);
    fVar10 = (float)NEON_fmadd(uVar28,uVar12,uVar7);
    uVar35 = *(undefined4 *)(param_2 + 0x50);
    uVar32 = NEON_fmadd(uVar36,uVar13,fVar25 * fVar4);
    local_130 = local_f0 + local_130;
    uVar7 = NEON_fmadd(uVar36,uVar21,fVar24 * fVar4);
    local_f0 = local_f0 + fVar10;
    uVar36 = *(undefined4 *)(param_2 + 0x48);
    uVar37 = *(undefined4 *)(param_2 + 0x4c);
    fVar4 = (float)NEON_fmadd(uVar28,uVar9,uVar32);
    fVar10 = (float)NEON_fmadd(uVar28,uVar11,uVar7);
    fStack_12c = fStack_ec + fStack_12c;
    fStack_ec = fStack_ec + fVar10;
    local_88 = local_130;
    if (local_f0 < local_130) {
      local_88 = local_f0;
    }
    uVar42 = NEON_fmadd(uVar38,uVar21,fVar24 * fVar27);
    uVar29 = NEON_fmadd(uVar36,uVar22,fVar8 * fVar30);
    uVar28 = NEON_fmadd(uVar38,uVar22,fVar8 * fVar27);
    uVar32 = NEON_fmadd(uVar26,uVar22,fVar8 * fVar20);
    uVar31 = NEON_fmadd(uVar40,uVar22,fVar8 * fVar23);
    uVar7 = NEON_fmadd(uVar26,uVar21,fVar24 * fVar20);
    uVar26 = NEON_fmadd(uVar26,uVar13,fVar25 * fVar20);
    uVar43 = NEON_fmadd(uVar40,uVar21,fVar24 * fVar23);
    uVar41 = NEON_fmadd(uVar40,uVar13,fVar25 * fVar23);
    uVar39 = NEON_fmadd(uVar38,uVar13,fVar25 * fVar27);
    uVar38 = NEON_fmadd(uVar37,uVar22,fVar8 * fVar5);
    uVar22 = NEON_fmadd(uVar35,uVar22,fVar8 * fVar6);
    uVar33 = NEON_fmadd(uVar37,uVar21,fVar24 * fVar5);
    uVar40 = NEON_fmadd(uVar36,uVar21,fVar24 * fVar30);
    uVar34 = NEON_fmadd(uVar35,uVar21,fVar24 * fVar6);
    uVar36 = NEON_fmadd(uVar36,uVar13,fVar25 * fVar30);
    uVar21 = NEON_fmadd(uVar37,uVar13,fVar25 * fVar5);
    uVar13 = NEON_fmadd(uVar35,uVar13,fVar25 * fVar6);
    local_128 = local_e8 + local_128;
    local_e8 = local_e8 + fVar4;
    local_84 = fStack_12c;
    if (fStack_ec < fStack_12c) {
      local_84 = fStack_ec;
    }
    local_160 = NEON_fmadd(uVar17,uVar12,uVar32);
    uStack_15c = NEON_fmadd(uVar18,uVar12,uVar31);
    local_158 = NEON_fmadd(uVar19,uVar12,uVar28);
    local_150 = NEON_fmadd(uVar17,uVar11,uVar7);
    uStack_14c = NEON_fmadd(uVar18,uVar11,uVar43);
    local_148 = NEON_fmadd(uVar19,uVar11,uVar42);
    local_140 = NEON_fmadd(uVar17,uVar9,uVar26);
    uStack_13c = NEON_fmadd(uVar18,uVar9,uVar41);
    local_138 = NEON_fmadd(uVar19,uVar9,uVar39);
    local_120 = NEON_fmadd(uVar14,uVar12,uVar29);
    local_118 = NEON_fmadd(uVar16,uVar12,uVar22);
    local_110 = NEON_fmadd(uVar14,uVar11,uVar40);
    local_108 = NEON_fmadd(uVar16,uVar11,uVar34);
    uStack_11c = NEON_fmadd(uVar15,uVar12,uVar38);
    uStack_10c = NEON_fmadd(uVar15,uVar11,uVar33);
    local_100 = NEON_fmadd(uVar14,uVar9,uVar36);
    uStack_fc = NEON_fmadd(uVar15,uVar9,uVar21);
    local_f8 = NEON_fmadd(uVar16,uVar9,uVar13);
    local_80 = local_128;
    if (local_e8 < local_128) {
      local_80 = local_e8;
    }
    local_a0 = *(float *)(param_2 + 0x118);
    local_84 = local_84 - local_a0;
    local_98 = local_f0;
    if (local_f0 <= local_130) {
      local_98 = local_130;
    }
    local_88 = local_88 - local_a0;
    local_9c = *(float *)(param_2 + 0x114);
    local_8c = 0;
    local_98 = local_a0 + local_98;
    local_168 = &PTR__btTriangleCallback_00feb260;
    fStack_94 = fStack_ec;
    if (fStack_ec <= fStack_12c) {
      fStack_94 = fStack_12c;
    }
    local_80 = local_80 - local_a0;
    local_90 = local_e8;
    if (local_e8 <= local_128) {
      local_90 = local_128;
    }
    fStack_94 = local_a0 + fStack_94;
    local_154 = 0;
    local_90 = local_a0 + local_90;
    local_144 = 0;
    local_134 = 0;
    local_124 = 0;
    local_114 = 0;
    local_104 = 0;
    local_f4 = 0;
    local_e4 = 0;
                    /* try { // try from 00bb19e0 to 00bb19ef has its CatchHandler @ 00bb1a58 */
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_168,&local_88,&local_98);
    fVar10 = local_9c;
    if (*(float *)(param_2 + 0x114) <= local_9c) {
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_168);
      fVar10 = 1.0;
    }
    else {
      *(float *)(param_2 + 0x114) = local_9c;
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_168);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar10;
}


