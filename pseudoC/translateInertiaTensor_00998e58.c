// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: translateInertiaTensor
// Entry Point: 00998e58
// Size: 464 bytes
// Signature: undefined __cdecl translateInertiaTensor(btVector3 * param_1, float param_2, btVector3 * param_3, btMatrix3x3 * param_4)


/* Bt2PhysicsUtil::translateInertiaTensor(btVector3 const&, float, btVector3&, btMatrix3x3&) */

void Bt2PhysicsUtil::translateInertiaTensor
               (btVector3 *param_1,float param_2,btVector3 *param_3,btMatrix3x3 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  
  fVar5 = *(float *)(param_3 + 4);
  fVar1 = *(float *)(param_3 + 8);
  fVar4 = *(float *)param_3;
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_4 + 0xc) = 0;
  fVar6 = fVar4 + fVar6;
  fVar8 = fVar1 + fVar8;
  uVar11 = NEON_fmadd(fVar1,0x80000000,fVar1 * -0.0);
  uVar22 = NEON_fmadd(fVar5,0,fVar1 * fVar4);
  uVar24 = NEON_fmsub(fVar1,fVar1,0);
  uVar15 = NEON_fmadd(fVar1,0,fVar1 * 0.0);
  uVar17 = NEON_fmadd(fVar5,fVar1,fVar4 * -0.0);
  uVar13 = NEON_fmadd(fVar5,0x80000000,fVar1 * fVar4);
  uVar2 = NEON_fmadd(fVar1,fVar5,fVar4 * 0.0);
  fVar7 = fVar5 + fVar7;
  fVar10 = (float)NEON_fmsub(fVar5,fVar5,0.0 - fVar1 * fVar1);
  fVar12 = (float)NEON_fmadd(fVar4,fVar5,uVar11);
  fVar21 = (float)NEON_fmadd(fVar5,0,uVar22);
  fVar16 = (float)NEON_fmadd(fVar5,fVar4,uVar15);
  fVar23 = (float)NEON_fmsub(fVar4,fVar4,uVar24);
  fVar18 = (float)NEON_fmadd(fVar4,0x80000000,uVar17);
  fVar14 = (float)NEON_fmadd(fVar5,0x80000000,uVar13);
  fVar3 = (float)NEON_fmadd(fVar4,0,uVar2);
  fVar4 = (float)NEON_fmsub(fVar5,fVar5,fVar4 * -fVar4);
  uVar11 = NEON_fmadd(fVar8,0x80000000,fVar8 * -0.0);
  uVar22 = NEON_fmadd(fVar7,0,fVar6 * fVar8);
  uVar15 = NEON_fmadd(fVar8,fVar7,fVar6 * 0.0);
  fVar19 = (float)NEON_fmsub(fVar7,fVar7,fVar6 * -fVar6);
  uVar13 = NEON_fmadd(fVar8,0,fVar8 * 0.0);
  uVar17 = NEON_fmadd(fVar7,fVar8,fVar6 * -0.0);
  fVar5 = (float)NEON_fmsub(fVar7,fVar7,0.0 - fVar8 * fVar8);
  uVar2 = NEON_fmsub(fVar8,fVar8,0);
  fVar9 = (float)NEON_fmadd(fVar6,fVar7,uVar11);
  uVar11 = NEON_fmadd(fVar7,0x80000000,fVar6 * fVar8);
  fVar26 = (float)NEON_fmadd(fVar7,0,uVar22);
  fVar25 = (float)NEON_fmadd(fVar6,0,uVar15);
  fVar20 = (float)NEON_fmadd(fVar7,fVar6,uVar13);
  fVar8 = (float)NEON_fmsub(fVar6,fVar6,uVar2);
  fVar6 = (float)NEON_fmadd(fVar6,0x80000000,uVar17);
  fVar1 = (float)NEON_fmadd(fVar7,0x80000000,uVar11);
  *(float *)param_4 = *(float *)param_4 + (fVar10 - fVar5) * param_2;
  *(float *)(param_4 + 4) = *(float *)(param_4 + 4) + (fVar12 - fVar9) * param_2;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  *(float *)(param_4 + 8) = *(float *)(param_4 + 8) + (fVar21 - fVar26) * param_2;
  *(float *)(param_4 + 0x10) = *(float *)(param_4 + 0x10) + (fVar16 - fVar20) * param_2;
  *(float *)(param_4 + 0x14) = *(float *)(param_4 + 0x14) + (fVar23 - fVar8) * param_2;
  *(float *)(param_4 + 0x18) = (fVar18 - fVar6) * param_2 + *(float *)(param_4 + 0x18);
  *(float *)(param_4 + 0x20) = (fVar14 - fVar1) * param_2 + *(float *)(param_4 + 0x20);
  *(ulong *)(param_4 + 0x24) =
       CONCAT44(((fVar4 + 0.0) - (fVar19 + 0.0)) * param_2 +
                (float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20),
                (fVar3 - fVar25) * param_2 + (float)*(undefined8 *)(param_4 + 0x24));
  *(undefined4 *)(param_4 + 0x2c) = 0;
  *(float *)param_3 = *(float *)param_1 + *(float *)param_3;
  *(float *)(param_3 + 4) = *(float *)(param_1 + 4) + *(float *)(param_3 + 4);
  *(float *)(param_3 + 8) = *(float *)(param_1 + 8) + *(float *)(param_3 + 8);
  return;
}


