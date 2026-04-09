// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_insideTriangleXZ
// Entry Point: 00eb5008
// Size: 288 bytes
// Signature: undefined __cdecl fm_insideTriangleXZ(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_insideTriangleXZ(float const*, float const*, float const*, float const*) */

bool FLOAT_MATH::fm_insideTriangleXZ(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  fVar7 = param_3[2];
  if (((fVar6 < fVar5 || fVar7 <= fVar6) && (fVar6 < fVar7 || fVar5 <= fVar6)) ||
     (*param_2 + ((fVar6 - fVar5) * (*param_3 - *param_2)) / (fVar7 - fVar5) <= *param_1)) {
    bVar1 = false;
    bVar3 = false;
    bVar2 = true;
    bVar4 = true;
    fVar8 = param_4[2];
    if (fVar6 < fVar7) goto LAB_00eb508c;
LAB_00eb5084:
    if (fVar8 <= fVar6) goto LAB_00eb508c;
  }
  else {
    bVar2 = false;
    bVar4 = false;
    bVar1 = true;
    bVar3 = true;
    fVar8 = param_4[2];
    if (fVar7 <= fVar6) goto LAB_00eb5084;
LAB_00eb508c:
    if ((fVar6 < fVar8) || (fVar7 <= fVar6)) goto LAB_00eb50cc;
  }
  if (*param_1 < *param_3 + ((fVar6 - fVar7) * (*param_4 - *param_3)) / (fVar8 - fVar7)) {
    bVar3 = bVar4;
    bVar1 = bVar2;
  }
LAB_00eb50cc:
  if ((((fVar8 <= fVar6) && (fVar6 < fVar5)) || ((fVar5 <= fVar6 && (fVar6 < fVar8)))) &&
     (*param_1 < *param_4 + ((fVar6 - fVar8) * (*param_2 - *param_4)) / (fVar5 - fVar8))) {
    bVar3 = !bVar1;
  }
  return bVar3;
}


