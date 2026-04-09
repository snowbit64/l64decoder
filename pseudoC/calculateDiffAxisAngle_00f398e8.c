// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateDiffAxisAngle
// Entry Point: 00f398e8
// Size: 548 bytes
// Signature: undefined __cdecl calculateDiffAxisAngle(btTransform * param_1, btTransform * param_2, btVector3 * param_3, float * param_4)


/* btTransformUtil::calculateDiffAxisAngle(btTransform const&, btTransform const&, btVector3&,
   float&) */

void btTransformUtil::calculateDiffAxisAngle
               (btTransform *param_1,btTransform *param_2,btVector3 *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar14 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x10);
  local_7c = 0;
  fVar2 = *(float *)(param_1 + 0x20);
  local_6c = 0;
  uVar17 = *(undefined8 *)param_1;
  local_5c = 0;
  uVar24 = *(undefined8 *)param_2;
  uVar22 = NEON_rev64(uVar17,4);
  fVar7 = (float)NEON_fnmsub(fVar14,fVar11,fVar3 * fVar12);
  fVar4 = (float)NEON_fnmsub(fVar2,fVar12,fVar16 * fVar14);
  fVar6 = (float)NEON_fnmsub(fVar16,fVar3,fVar2 * fVar11);
  fVar8 = *(float *)(param_1 + 8);
  fVar21 = (float)uVar17;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  fVar19 = (float)((ulong)uVar17 >> 0x20);
  fVar20 = (float)NEON_fmadd(fVar8,fVar6,fVar7 * fVar21 + fVar4 * fVar19);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  fVar20 = 1.0 / fVar20;
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  uVar25 = NEON_rev64(uVar18,4);
  fVar7 = fVar20 * fVar7;
  uVar17 = NEON_rev64(uVar24,4);
  fVar9 = (-(fVar2 * fVar8) + fVar14 * fVar21) * fVar20;
  fVar10 = (-(fVar11 * fVar8) + fVar12 * fVar19) * fVar20;
  uVar13 = NEON_rev64(uVar15,4);
  fVar4 = fVar20 * fVar4;
  fVar14 = (-((float)uVar22 * fVar14) + fVar3 * fVar8) * fVar20;
  fVar8 = (-(fVar23 * fVar12) + fVar16 * fVar8) * fVar20;
  fVar6 = fVar20 * fVar6;
  fVar3 = (-(fVar21 * fVar3) + fVar2 * (float)uVar22) * fVar20;
  fVar20 = (-(fVar19 * fVar16) + fVar11 * fVar23) * fVar20;
  fVar21 = *(float *)(param_2 + 8);
  fVar19 = (float)((ulong)uVar24 >> 0x20);
  fVar12 = (float)((ulong)uVar15 >> 0x20);
  fVar16 = (float)((ulong)uVar18 >> 0x20);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar2 = *(float *)(param_2 + 0x28);
  local_88 = NEON_fmadd(fVar21,fVar6,fVar7 * (float)uVar24 + fVar4 * fVar19);
  local_84 = CONCAT44(fVar10 * (float)((ulong)uVar17 >> 0x20) + fVar19 * fVar8 + fVar20 * fVar21,
                      fVar9 * (float)uVar17 + (float)uVar24 * fVar14 + fVar3 * fVar21);
  local_78 = NEON_fmadd(fVar11,fVar6,fVar7 * (float)uVar15 + fVar4 * fVar12);
  local_74 = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar10 + fVar8 * fVar12 + fVar20 * fVar11,
                      (float)uVar13 * fVar9 + fVar14 * (float)uVar15 + fVar3 * fVar11);
  local_68 = NEON_fmadd(fVar2,fVar6,fVar7 * (float)uVar18 + fVar4 * fVar16);
  local_64 = CONCAT44((float)((ulong)uVar25 >> 0x20) * fVar10 + fVar8 * fVar16 + fVar20 * fVar2,
                      (float)uVar25 * fVar9 + fVar14 * (float)uVar18 + fVar3 * fVar2);
  btMatrix3x3::getRotation((btMatrix3x3 *)&local_88,(btQuaternion *)&local_98);
  uVar5 = NEON_fmadd(fStack_94,fStack_94,local_98 * local_98);
  uVar5 = NEON_fmadd(local_90,local_90,uVar5);
  fVar2 = (float)NEON_fmadd(fStack_8c,fStack_8c,uVar5);
  fVar2 = 1.0 / SQRT(fVar2);
  fStack_8c = fVar2 * fStack_8c;
  local_98 = fVar2 * local_98;
  fStack_94 = fVar2 * fStack_94;
  fVar2 = fVar2 * local_90;
  if (fStack_8c <= -1.0) {
    fStack_8c = -1.0;
  }
  fVar4 = (float)NEON_fminnm(fStack_8c,0x3f800000);
  fVar4 = acosf(fVar4);
  uVar5 = NEON_fmadd(fStack_94,fStack_94,local_98 * local_98);
  *param_4 = fVar4 + fVar4;
  *(undefined4 *)(param_3 + 0xc) = 0;
  fVar4 = (float)NEON_fmadd(fVar2,fVar2,uVar5);
  if (1.421085e-14 <= fVar4) {
    fVar4 = 1.0 / SQRT(fVar4);
    fVar2 = fVar4 * fVar2;
    *(float *)param_3 = fVar4 * local_98;
    *(float *)(param_3 + 4) = fVar4 * fStack_94;
  }
  else {
    fVar2 = 0.0;
    *(undefined8 *)param_3 = 0x3f800000;
  }
  *(float *)(param_3 + 8) = fVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


