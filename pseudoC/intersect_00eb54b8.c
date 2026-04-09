// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersect
// Entry Point: 00eb54b8
// Size: 660 bytes
// Signature: undefined __cdecl intersect(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* FLOAT_MATH::intersect(float const*, float const*, float const*, float const*, float*) */

undefined8
FLOAT_MATH::intersect(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar3 = *param_2;
  fVar5 = *param_4;
  if (fVar3 <= fVar1) {
    if (fVar5 < fVar3) {
      return 0;
    }
    fVar8 = *param_3;
    if (fVar1 < fVar8) {
      return 0;
    }
    fVar2 = 0.0;
    if (fVar5 < fVar1) {
      fVar2 = (fVar5 - fVar1) / (fVar3 - fVar1);
    }
    fVar4 = 1.0;
    if (fVar3 < fVar8) {
      fVar4 = (fVar8 - fVar1) / (fVar3 - fVar1);
    }
  }
  else {
    if (fVar5 < fVar1) {
      return 0;
    }
    fVar8 = *param_3;
    if (fVar3 < fVar8) {
      return 0;
    }
    fVar2 = 0.0;
    if (fVar1 < fVar8) {
      fVar2 = (fVar8 - fVar1) / (fVar3 - fVar1);
    }
    fVar4 = 1.0;
    if (fVar5 < fVar3) {
      fVar4 = (fVar5 - fVar1) / (fVar3 - fVar1);
    }
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = (float)NEON_fminnm(fVar4,0x3f800000);
  if (fVar1 < fVar2) {
    return 0;
  }
  fVar3 = param_1[1];
  fVar5 = param_2[1];
  fVar8 = param_4[1];
  if (fVar5 <= fVar3) {
    if (fVar8 < fVar5) {
      return 0;
    }
    fVar4 = param_3[1];
    if (fVar3 < fVar4) {
      return 0;
    }
    fVar7 = 0.0;
    if (fVar8 < fVar3) {
      fVar7 = (fVar8 - fVar3) / (fVar5 - fVar3);
    }
    fVar6 = 1.0;
    if (fVar5 < fVar4) {
      fVar6 = (fVar4 - fVar3) / (fVar5 - fVar3);
    }
  }
  else {
    if (fVar8 < fVar3) {
      return 0;
    }
    fVar4 = param_3[1];
    if (fVar5 < fVar4) {
      return 0;
    }
    fVar7 = 0.0;
    if (fVar3 < fVar4) {
      fVar7 = (fVar4 - fVar3) / (fVar5 - fVar3);
    }
    fVar6 = 1.0;
    if (fVar8 < fVar5) {
      fVar6 = (fVar8 - fVar3) / (fVar5 - fVar3);
    }
  }
  if (fVar7 <= fVar2) {
    fVar7 = fVar2;
  }
  if (fVar1 <= fVar6) {
    fVar6 = fVar1;
  }
  if (fVar6 < fVar7) {
    return 0;
  }
  fVar1 = param_1[2];
  fVar3 = param_2[2];
  fVar5 = param_4[2];
  if (fVar3 <= fVar1) {
    if (fVar5 < fVar3) {
      return 0;
    }
    fVar8 = param_3[2];
    if (fVar1 < fVar8) {
      return 0;
    }
    fVar2 = 0.0;
    if (fVar5 < fVar1) {
      fVar2 = (fVar5 - fVar1) / (fVar3 - fVar1);
    }
    fVar4 = 1.0;
    if (fVar3 < fVar8) {
      fVar4 = (fVar8 - fVar1) / (fVar3 - fVar1);
    }
  }
  else {
    if (fVar5 < fVar1) {
      return 0;
    }
    fVar8 = param_3[2];
    if (fVar3 < fVar8) {
      return 0;
    }
    fVar2 = 0.0;
    if (fVar1 < fVar8) {
      fVar2 = (fVar8 - fVar1) / (fVar3 - fVar1);
    }
    fVar4 = 1.0;
    if (fVar5 < fVar3) {
      fVar4 = (fVar5 - fVar1) / (fVar3 - fVar1);
    }
  }
  if (fVar2 <= fVar7) {
    fVar2 = fVar7;
  }
  if (fVar6 <= fVar4) {
    fVar4 = fVar6;
  }
  if (fVar4 < fVar2) {
    return 0;
  }
  *param_5 = fVar2;
  return 1;
}


