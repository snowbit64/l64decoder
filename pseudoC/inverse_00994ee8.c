// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inverse
// Entry Point: 00994ee8
// Size: 140 bytes
// Signature: undefined inverse(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btTransform::inverse() const */

void btTransform::inverse(void)

{
  undefined4 *in_x0;
  undefined4 *in_x8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  
  uVar3 = in_x0[0xc];
  fVar4 = (float)in_x0[0xd];
  fVar5 = (float)in_x0[4];
  fVar7 = (float)in_x0[5];
  fVar11 = (float)in_x0[6];
  in_x8[3] = 0;
  uVar1 = *in_x0;
  uVar2 = in_x0[1];
  fVar4 = -fVar4;
  uVar10 = in_x0[2];
  uVar8 = in_x0[8];
  uVar9 = in_x0[9];
  in_x8[1] = fVar5;
  uVar12 = in_x0[0xe];
  *in_x8 = uVar1;
  in_x8[4] = uVar2;
  in_x8[7] = 0;
  in_x8[0xb] = 0;
  uVar1 = NEON_fmsub(uVar1,uVar3,fVar5 * fVar4);
  uVar6 = NEON_fmsub(uVar2,uVar3,fVar7 * fVar4);
  uVar2 = NEON_fmsub(uVar10,uVar3,fVar11 * fVar4);
  uVar3 = in_x0[10];
  in_x8[2] = uVar8;
  in_x8[5] = fVar7;
  uVar1 = NEON_fmsub(uVar8,uVar12,uVar1);
  uVar6 = NEON_fmsub(uVar9,uVar12,uVar6);
  uVar2 = NEON_fmsub(uVar3,uVar12,uVar2);
  in_x8[6] = uVar9;
  in_x8[8] = uVar10;
  in_x8[9] = fVar11;
  in_x8[10] = uVar3;
  in_x8[0xc] = uVar1;
  in_x8[0xd] = uVar6;
  in_x8[0xe] = uVar2;
  in_x8[0xf] = 0;
  return;
}


