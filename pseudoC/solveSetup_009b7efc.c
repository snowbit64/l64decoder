// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveSetup
// Entry Point: 009b7efc
// Size: 548 bytes
// Signature: undefined __cdecl solveSetup(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)


/* Bt2RaycastVehicle::CVTTransmission::solveSetup(float, float, float, float, float, float, float,
   float, float, float, float) */

void Bt2RaycastVehicle::CVTTransmission::solveSetup
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10,float param_11)

{
  float *in_x0;
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar7 = param_4;
  if (param_4 <= *in_x0) {
    fVar7 = *in_x0;
  }
  if (in_x0[1] <= param_5) {
    param_5 = in_x0[1];
  }
  fVar8 = in_x0[2];
  fVar9 = param_5;
  if (fVar8 <= param_5) {
    fVar9 = fVar8;
  }
  fVar10 = fVar7;
  if (fVar7 <= fVar8) {
    fVar10 = fVar9;
  }
  fVar9 = (float)NEON_fmadd(param_2,param_3,param_6);
  if (param_7 <= param_4) {
    param_7 = param_4;
  }
  fVar8 = (float)NEON_fmadd(param_11,param_1,param_7);
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  fVar5 = param_5;
  if (fVar9 <= param_5) {
    fVar5 = fVar9;
  }
  fVar6 = in_x0[10];
  fVar4 = fVar7;
  if (fVar7 <= fVar9) {
    fVar4 = fVar5;
  }
  if (fVar10 <= fVar4) {
    fVar4 = fVar10;
  }
  local_4 = 0.0;
  if (param_3 != 0.0 && fVar6 != 0.0) {
    local_4 = param_9;
    if (param_9 == 0.0) {
      local_4 = 3.402823e+38;
    }
    if (fVar6 < 0.0) {
      local_4 = -local_4;
    }
  }
  fVar9 = param_8 - param_1 * param_10;
  if ((local_4 < fVar9) || (fVar9 = param_1 * param_10 + param_8, fVar9 < local_4)) {
    local_4 = fVar9;
  }
  if (0.0 <= fVar6) {
    local_8 = 0.0;
    pfVar1 = &local_4;
    if (local_4 <= 0.0) {
      pfVar1 = &local_8;
    }
  }
  else {
    local_c = 0.0;
    pfVar1 = &local_4;
    if (0.0 <= local_4) {
      pfVar1 = &local_c;
    }
  }
  local_4 = *pfVar1;
  if (0.0 <= local_4) {
    pfVar1 = &local_4;
    if (param_9 <= local_4) {
      pfVar1 = (float *)register0x00000008;
    }
  }
  else {
    local_10 = -param_9;
    pfVar1 = &local_4;
    if (local_4 <= -param_9) {
      pfVar1 = &local_10;
    }
  }
  uVar2 = NEON_fmadd(param_1,0x40555555,in_x0[4]);
  fVar10 = (float)NEON_fminnm(uVar2,0x3f800000);
  fVar9 = *pfVar1;
  in_x0[0xb] = fVar10;
  in_x0[4] = fVar10;
  if (param_3 != 0.0 && fVar6 != 0.0) {
    fVar10 = fVar9 * in_x0[9];
    if (fVar4 <= fVar10) {
      fVar4 = fVar10;
    }
    in_x0[6] = fVar4;
    fVar10 = fVar7;
    if ((fVar4 < fVar7) || (fVar10 = param_5, param_5 < fVar4)) {
      fVar4 = fVar10;
      in_x0[6] = fVar4;
    }
    fVar5 = (float)NEON_fmadd(param_2 * 0.5,param_3,param_6);
    fVar10 = (float)NEON_fmadd(param_2 * 0.1,param_3,param_6);
    if (fVar8 <= fVar5) {
      fVar5 = fVar8;
    }
    fVar6 = fVar4;
    if (fVar5 <= fVar4) {
      fVar6 = fVar5;
    }
    fVar3 = fVar7;
    if (fVar7 <= fVar5) {
      fVar3 = fVar6;
    }
    if (fVar8 <= fVar10) {
      fVar10 = fVar8;
    }
    in_x0[7] = fVar3;
    if (fVar10 <= fVar4) {
      fVar4 = fVar10;
    }
    if (fVar7 <= fVar10) {
      fVar7 = fVar4;
    }
  }
  else {
    if ((local_4 * in_x0[3] < fVar7) || (fVar6 == 0.0)) {
      in_x0[4] = 0.0;
    }
    in_x0[6] = fVar7;
    in_x0[7] = fVar7;
  }
  in_x0[8] = fVar7;
  in_x0[5] = fVar9;
  return;
}


