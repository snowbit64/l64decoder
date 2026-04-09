// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_insideTriangleXZ
// Entry Point: 00ebd094
// Size: 288 bytes
// Signature: undefined __cdecl fm_insideTriangleXZ(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_insideTriangleXZ(double const*, double const*, double const*, double const*) */

bool FLOAT_MATH::fm_insideTriangleXZ
               (double *param_1,double *param_2,double *param_3,double *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_2[2];
  dVar6 = param_1[2];
  dVar7 = param_3[2];
  if (((dVar6 < dVar5 || dVar7 <= dVar6) && (dVar6 < dVar7 || dVar5 <= dVar6)) ||
     (*param_2 + ((dVar6 - dVar5) * (*param_3 - *param_2)) / (dVar7 - dVar5) <= *param_1)) {
    bVar1 = false;
    bVar3 = false;
    bVar2 = true;
    bVar4 = true;
    dVar8 = param_4[2];
    if (dVar6 < dVar7) goto LAB_00ebd118;
LAB_00ebd110:
    if (dVar8 <= dVar6) goto LAB_00ebd118;
  }
  else {
    bVar2 = false;
    bVar4 = false;
    bVar1 = true;
    bVar3 = true;
    dVar8 = param_4[2];
    if (dVar7 <= dVar6) goto LAB_00ebd110;
LAB_00ebd118:
    if ((dVar6 < dVar8) || (dVar7 <= dVar6)) goto LAB_00ebd158;
  }
  if (*param_1 < *param_3 + ((dVar6 - dVar7) * (*param_4 - *param_3)) / (dVar8 - dVar7)) {
    bVar3 = bVar4;
    bVar1 = bVar2;
  }
LAB_00ebd158:
  if ((((dVar8 <= dVar6) && (dVar6 < dVar5)) || ((dVar5 <= dVar6 && (dVar6 < dVar8)))) &&
     (*param_1 < *param_4 + ((dVar6 - dVar8) * (*param_2 - *param_4)) / (dVar5 - dVar8))) {
    bVar3 = !bVar1;
  }
  return bVar3;
}


