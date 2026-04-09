// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: integrateTransform
// Entry Point: 00f2ecc8
// Size: 580 bytes
// Signature: undefined __cdecl integrateTransform(btTransform * param_1, btVector3 * param_2, btVector3 * param_3, float param_4, btTransform * param_5)


/* btTransformUtil::integrateTransform(btTransform const&, btVector3 const&, btVector3 const&,
   float, btTransform&) */

void btTransformUtil::integrateTransform
               (btTransform *param_1,btVector3 *param_2,btVector3 *param_3,float param_4,
               btTransform *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)param_2;
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_5 + 0x3c) = 0;
  uVar6 = NEON_fmadd(uVar6,param_4,uVar10);
  *(ulong *)(param_5 + 0x30) =
       CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * param_4,
                (float)uVar9 + (float)uVar5 * param_4);
  *(undefined4 *)(param_5 + 0x38) = uVar6;
  fVar13 = *(float *)param_3;
  fVar14 = *(float *)(param_3 + 4);
  fVar15 = *(float *)(param_3 + 8);
  uVar6 = NEON_fmadd(fVar14,fVar14,fVar13 * fVar13);
  fVar4 = (float)NEON_fmadd(fVar15,fVar15,uVar6);
  fVar3 = 0.7853982 / param_4;
  if (SQRT(fVar4) * param_4 <= 0.7853982) {
    fVar3 = SQRT(fVar4);
  }
  fVar4 = param_4 * 0.5;
  if (0.001 <= fVar3) {
    fVar2 = sinf(fVar4 * fVar3);
    fVar2 = fVar2 / fVar3;
  }
  else {
    fVar2 = (float)NEON_fmadd(fVar3 * param_4 * fVar3 * param_4,param_4 * -0.02083333,fVar4);
  }
  fVar14 = fVar2 * fVar14;
  fVar13 = fVar2 * fVar13;
  fVar2 = fVar2 * fVar15;
  fVar3 = cosf(fVar4 * fVar3);
  btMatrix3x3::getRotation((btMatrix3x3 *)param_1,(btQuaternion *)&local_68);
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(undefined4 *)(param_5 + 0x1c) = 0;
  *(undefined4 *)(param_5 + 0x2c) = 0;
  uVar7 = NEON_fnmsub(fStack_64,fVar13,local_68 * fVar14);
  uVar8 = NEON_fmadd(fStack_64,fVar14,local_68 * fVar13);
  uVar6 = NEON_fnmsub(local_68,fVar3,fStack_64 * fVar2);
  uVar10 = NEON_fmadd(fStack_64,fVar3,local_68 * fVar2);
  uVar7 = NEON_fmadd(local_60,fVar3,uVar7);
  uVar8 = NEON_fmadd(local_60,fVar2,uVar8);
  uVar6 = NEON_fmadd(local_60,fVar14,uVar6);
  uVar10 = NEON_fmsub(local_60,fVar13,uVar10);
  fVar15 = (float)NEON_fmadd(uStack_5c,fVar2,uVar7);
  fVar2 = (float)NEON_fnmsub(uStack_5c,fVar3,uVar8);
  fVar3 = (float)NEON_fmadd(uStack_5c,fVar13,uVar6);
  fVar4 = (float)NEON_fmadd(uStack_5c,fVar14,uVar10);
  uVar6 = NEON_fmadd(fVar2,fVar2,fVar15 * fVar15);
  uVar6 = NEON_fmadd(fVar3,fVar3,uVar6);
  fVar13 = (float)NEON_fmadd(fVar4,fVar4,uVar6);
  fVar14 = 1.0 / SQRT(fVar13);
  fVar11 = fVar14 * fVar3;
  fVar12 = fVar14 * fVar4;
  fVar15 = fVar14 * fVar15;
  fVar2 = fVar14 * fVar2;
  uVar6 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
  uVar6 = NEON_fmadd(fVar15,fVar15,uVar6);
  fVar16 = (float)NEON_fmadd(fVar2,fVar2,uVar6);
  fVar16 = 2.0 / fVar16;
  fVar17 = fVar16 * fVar12;
  fVar18 = fVar16 * fVar15;
  fVar4 = fVar17 * -(fVar14 * fVar4);
  fVar13 = (float)NEON_fmsub(fVar18,fVar15,0x3f800000);
  fVar3 = fVar16 * fVar11 * -(fVar14 * fVar3);
  fVar14 = fVar16 * fVar11 * fVar2;
  *(float *)param_5 = fVar13 + fVar4;
  *(float *)(param_5 + 4) = fVar17 * fVar11 - fVar18 * fVar2;
  *(float *)(param_5 + 8) = fVar18 * fVar11 + fVar17 * fVar2;
  *(float *)(param_5 + 0x10) = fVar17 * fVar11 + fVar18 * fVar2;
  *(float *)(param_5 + 0x14) = fVar13 + fVar3;
  *(float *)(param_5 + 0x18) = fVar18 * fVar12 - fVar14;
  *(float *)(param_5 + 0x20) = fVar18 * fVar11 - fVar17 * fVar2;
  *(float *)(param_5 + 0x24) = fVar18 * fVar12 + fVar14;
  *(float *)(param_5 + 0x28) = fVar4 + 1.0 + fVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


