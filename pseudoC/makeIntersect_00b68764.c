// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeIntersect
// Entry Point: 00b68764
// Size: 116 bytes
// Signature: undefined __cdecl makeIntersect(Plane * param_1, Plane * param_2)


/* makeIntersect(Plane const&, Plane const&) */

void makeIntersect(Plane *param_1,Plane *param_2)

{
  undefined4 *in_x8;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 8);
  fVar8 = *(float *)(param_1 + 0xc);
  fVar1 = *(float *)param_2;
  fVar11 = *(float *)(param_2 + 4);
  fVar9 = *(float *)(param_2 + 8);
  fVar10 = *(float *)(param_2 + 0xc);
  uVar2 = NEON_fmadd(fVar7,fVar1,fVar9 * -fVar5);
  uVar6 = NEON_fmadd(fVar5,fVar11,fVar1 * -fVar3);
  uVar4 = NEON_fmadd(fVar3,fVar9,fVar11 * -fVar7);
  in_x8[1] = fVar1 * fVar8 - fVar5 * fVar10;
  in_x8[3] = fVar11 * fVar8 - fVar3 * fVar10;
  *in_x8 = uVar4;
  in_x8[2] = uVar2;
  in_x8[4] = uVar6;
  in_x8[5] = fVar9 * fVar8 - fVar7 * fVar10;
  return;
}


