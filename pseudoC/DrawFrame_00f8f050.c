// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DrawFrame
// Entry Point: 00f8f050
// Size: 980 bytes
// Signature: undefined __cdecl DrawFrame(btSoftBody * param_1, btIDebugDraw * param_2)


/* btSoftBodyHelpers::DrawFrame(btSoftBody*, btIDebugDraw*) */

void btSoftBodyHelpers::DrawFrame(btSoftBody *param_1,btIDebugDraw *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  if (param_1[0x259] != (btSoftBody)0x0) {
    fVar6 = *(float *)(param_1 + 0x2c0);
    uVar12 = *(undefined8 *)(param_1 + 0x2e0);
    uVar13 = *(undefined8 *)(param_1 + 0x2f0);
    fVar8 = *(float *)(param_1 + 0x2d0);
    uVar19 = NEON_rev64(uVar12,4);
    fVar14 = *(float *)(param_1 + 0x2c4);
    uVar25 = NEON_rev64(uVar13,4);
    fVar4 = *(float *)(param_1 + 0x2b0);
    fVar16 = *(float *)(param_1 + 0x2c8);
    fVar15 = *(float *)(param_1 + 0x2d4);
    fVar7 = (float)((ulong)uVar12 >> 0x20);
    uVar23 = *(undefined8 *)(param_1 + 0x300);
    fVar17 = *(float *)(param_1 + 0x2d8);
    fVar20 = *(float *)(param_1 + 0x2b4);
    uVar26 = NEON_rev64(uVar23,4);
    fVar9 = (float)((ulong)uVar13 >> 0x20);
    fVar18 = *(float *)(param_1 + 0x2b8);
    fVar10 = (float)((ulong)uVar23 >> 0x20);
    fVar27 = fVar6 * (float)uVar12 + (float)uVar13 * fVar14 + (float)uVar23 * fVar16;
    fVar28 = fVar8 * fVar7 + fVar9 * fVar15 + fVar10 * fVar17;
    fVar29 = fVar6 * (float)uVar19 + (float)uVar25 * fVar14 + (float)uVar26 * fVar16;
    fVar30 = fVar8 * (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar25 >> 0x20) * fVar15 +
             (float)((ulong)uVar26 >> 0x20) * fVar17;
    fVar22 = fVar4 * fVar7 + fVar20 * fVar9 + fVar18 * fVar10;
    fVar21 = fVar4 * (float)uVar12 + fVar20 * (float)uVar13 + fVar18 * (float)uVar23;
    local_ac = 0;
    fVar24 = (float)NEON_fmadd(fVar21,fVar21,fVar27 * fVar27);
    fVar9 = (float)NEON_fmadd(fVar22,fVar22,fVar29 * fVar29);
    fVar10 = *(float *)(param_1 + 0x2e8);
    fVar7 = *(float *)(param_1 + 0x2f8);
    fVar11 = *(float *)(param_1 + 0x308);
    uVar5 = NEON_fmadd(fVar7,fVar20,fVar10 * fVar4);
    fVar14 = fVar6 * fVar10 + fVar14 * fVar7 + fVar16 * fVar11;
    fVar7 = fVar8 * fVar10 + fVar15 * fVar7 + fVar17 * fVar11;
    fVar8 = (float)NEON_fmadd(fVar11,fVar18,uVar5);
    fVar4 = (float)NEON_fmadd(fVar8,fVar8,fVar14 * fVar14);
    fStack_d8 = (float)*(undefined8 *)(param_1 + 0x2a8);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2a8) >> 0x20);
    local_e0 = (float)*(undefined8 *)(param_1 + 0x2a0);
    fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x2a0) >> 0x20);
    fVar6 = 10.0 / SQRT(fVar24 + fVar30 * fVar30);
    local_b8 = local_e0 + fVar21 * fVar6;
    fStack_b4 = fStack_dc + fVar27 * fVar6;
    local_b0 = fStack_d8 + fVar6 * fVar30;
    fStack_c8 = 0.0;
    uStack_c4 = 0;
    local_d0 = 1.0;
    fStack_cc = 0.0;
    (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_e0,&local_b8,&local_d0);
    fVar6 = 10.0 / SQRT(fVar9 + fVar28 * fVar28);
    local_ac = 0;
    local_b8 = local_e0 + fVar22 * fVar6;
    fStack_b4 = fStack_dc + fVar29 * fVar6;
    local_b0 = fStack_d8 + fVar6 * fVar28;
    fStack_c8 = 0.0;
    uStack_c4 = 0;
    local_d0 = 0.0;
    fStack_cc = 1.0;
    (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_e0,&local_b8,&local_d0);
    fVar4 = 10.0 / SQRT(fVar4 + fVar7 * fVar7);
    local_ac = 0;
    local_b8 = local_e0 + fVar8 * fVar4;
    fStack_b4 = fStack_dc + fVar14 * fVar4;
    local_b0 = fStack_d8 + fVar4 * fVar7;
    fStack_c8 = 1.0;
    uStack_c4 = 0;
    local_d0 = 0.0;
    fStack_cc = 0.0;
    (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_e0,&local_b8,&local_d0);
    if (0 < *(int *)(param_1 + 0x264)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x270) + lVar2);
        fVar10 = *(float *)((undefined8 *)(*(long *)(param_1 + 0x270) + lVar2) + 1);
        local_ac = 0;
        uStack_c4 = 0;
        uVar13 = NEON_rev64(uVar12,4);
        fVar4 = (float)((ulong)uVar12 >> 0x20);
        fVar6 = (float)NEON_fmadd(fVar10,fVar8,fVar21 * (float)uVar12 + fVar22 * fVar4);
        fVar6 = fVar6 + local_e0;
        local_b8 = fVar6 + -0.1;
        fVar9 = (float)uVar13 * fVar29 + fVar27 * (float)uVar12 + fVar14 * fVar10 + fStack_dc;
        fVar4 = (float)((ulong)uVar13 >> 0x20) * fVar30 + fVar28 * fVar4 + fVar7 * fVar10 +
                fStack_d8;
        local_d0 = fVar6 + 0.1;
        uStack_e8 = 0x3f800000;
        uStack_f0 = 0x3f800000;
        fStack_cc = fVar9;
        fStack_c8 = fVar4;
        fStack_b4 = fVar9;
        local_b0 = fVar4;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_b8,&local_d0,&uStack_f0);
        fStack_b4 = fVar9 + -0.1;
        fStack_cc = fVar9 + 0.1;
        local_ac = 0;
        uStack_c4 = 0;
        local_d0 = fVar6;
        fStack_c8 = fVar4;
        local_b8 = fVar6;
        local_b0 = fVar4;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_b8,&local_d0,&uStack_f0);
        local_b0 = fVar4 + -0.1;
        fStack_c8 = fVar4 + 0.1;
        local_ac = 0;
        uStack_c4 = 0;
        local_d0 = fVar6;
        fStack_cc = fVar9;
        local_b8 = fVar6;
        fStack_b4 = fVar9;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_b8,&local_d0,&uStack_f0);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x10;
      } while (lVar3 < *(int *)(param_1 + 0x264));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


