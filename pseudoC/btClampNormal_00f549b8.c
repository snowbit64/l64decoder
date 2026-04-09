// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btClampNormal
// Entry Point: 00f549b8
// Size: 496 bytes
// Signature: undefined __cdecl btClampNormal(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, float param_4, btVector3 * param_5)


/* btClampNormal(btVector3 const&, btVector3 const&, btVector3 const&, float, btVector3&) */

undefined8
btClampNormal(btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float param_4,
             btVector3 *param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_68;
  float fStack_64;
  float local_8;
  float fStack_4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar14 = *(float *)(param_1 + 4);
  fVar15 = *(float *)(param_1 + 8);
  fVar13 = *(float *)param_1;
  fVar5 = *(float *)param_2;
  fVar10 = *(float *)(param_3 + 4);
  uVar11 = *(undefined4 *)(param_3 + 8);
  fVar12 = *(float *)param_3;
  fVar3 = (float)NEON_fnmsub(fVar14,fVar4,fVar15 * fVar1);
  fVar6 = (float)NEON_fnmsub(fVar15,fVar5,fVar13 * fVar4);
  uVar7 = NEON_fnmsub(fVar13,fVar1,fVar14 * fVar5);
  uVar2 = NEON_fmadd(fVar10,fVar1,fVar12 * fVar5);
  uVar9 = NEON_fmadd(fVar6,fVar6,fVar3 * fVar3);
  fVar1 = (float)NEON_fmadd(uVar11,fVar4,uVar2);
  fVar4 = (float)NEON_fmadd(uVar7,uVar7,uVar9);
  uVar2 = NEON_fmadd(uVar11,uVar7,fVar10 * fVar6);
  fVar3 = (float)NEON_fmadd(fVar12,fVar3,uVar2);
  fVar1 = atan2f(fVar3 / SQRT(fVar4),fVar1);
  if ((0.0 <= param_4) || (param_4 <= fVar1)) {
    if (param_4 < 0.0) {
      return 0;
    }
    if (fVar1 <= param_4) {
      return 0;
    }
    uVar2 = NEON_fmadd(fVar15,fVar15,fVar14 * fVar14);
    fVar3 = (float)NEON_fmadd(fVar13,fVar13,uVar2);
    sincosf((param_4 - fVar1) * 0.5,&fStack_4,&local_8);
    fStack_64 = fStack_4;
    local_68 = local_8;
  }
  else {
    uVar2 = NEON_fmadd(fVar15,fVar15,fVar14 * fVar14);
    fVar3 = (float)NEON_fmadd(fVar13,fVar13,uVar2);
    sincosf((param_4 - fVar1) * 0.5,&fStack_64,&local_68);
  }
  fStack_64 = fStack_64 / SQRT(fVar3);
  fVar5 = fStack_64 * fVar13;
  fVar6 = fStack_64 * fVar14;
  fVar15 = fStack_64 * fVar15;
  uVar2 = NEON_fmadd(fVar5,fVar5,local_68 * local_68);
  *(undefined4 *)(param_5 + 0xc) = 0;
  uVar2 = NEON_fmadd(fVar6,fVar6,uVar2);
  fVar3 = (float)NEON_fmadd(fVar15,fVar15,uVar2);
  fVar3 = 2.0 / fVar3;
  fVar16 = fVar3 * fVar15;
  fVar4 = fVar3 * fVar6;
  fVar15 = (float)NEON_fmsub(fVar16,fVar15,0x3f800000);
  fVar17 = fVar3 * fVar5 * local_68;
  fVar1 = fVar4 * -(fStack_64 * fVar14);
  fVar3 = fVar3 * fVar5 * -(fStack_64 * fVar13);
  uVar2 = NEON_fmadd(fVar16 * fVar5 + fVar4 * local_68,uVar11,
                     (fVar4 * fVar5 - fVar16 * local_68) * fVar10);
  uVar9 = NEON_fmadd(fVar16 * fVar6 - fVar17,uVar11,(fVar4 * fVar5 + fVar16 * local_68) * fVar12);
  uVar8 = NEON_fmadd(fVar16 * fVar6 + fVar17,fVar10,(fVar16 * fVar5 - fVar4 * local_68) * fVar12);
  uVar7 = NEON_fmadd(fVar15 + fVar1,fVar12,uVar2);
  uVar9 = NEON_fmadd(fVar15 + fVar3,fVar10,uVar9);
  uVar2 = NEON_fmadd(fVar1 + fVar3 + 1.0,uVar11,uVar8);
  *(undefined4 *)param_5 = uVar7;
  *(undefined4 *)(param_5 + 4) = uVar9;
  *(undefined4 *)(param_5 + 8) = uVar2;
  return 1;
}


