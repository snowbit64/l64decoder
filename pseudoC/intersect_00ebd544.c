// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersect
// Entry Point: 00ebd544
// Size: 660 bytes
// Signature: undefined __cdecl intersect(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5)


/* FLOAT_MATH::intersect(double const*, double const*, double const*, double const*, double*) */

undefined8
FLOAT_MATH::intersect
          (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_1;
  dVar3 = *param_2;
  dVar5 = *param_4;
  if (dVar3 <= dVar1) {
    if (dVar5 < dVar3) {
      return 0;
    }
    dVar8 = *param_3;
    if (dVar1 < dVar8) {
      return 0;
    }
    dVar2 = 0.0;
    if (dVar5 < dVar1) {
      dVar2 = (dVar5 - dVar1) / (dVar3 - dVar1);
    }
    dVar4 = 1.0;
    if (dVar3 < dVar8) {
      dVar4 = (dVar8 - dVar1) / (dVar3 - dVar1);
    }
  }
  else {
    if (dVar5 < dVar1) {
      return 0;
    }
    dVar8 = *param_3;
    if (dVar3 < dVar8) {
      return 0;
    }
    dVar2 = 0.0;
    if (dVar1 < dVar8) {
      dVar2 = (dVar8 - dVar1) / (dVar3 - dVar1);
    }
    dVar4 = 1.0;
    if (dVar5 < dVar3) {
      dVar4 = (dVar5 - dVar1) / (dVar3 - dVar1);
    }
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar1 = (double)NEON_fminnm(dVar4,0x3ff0000000000000);
  if (dVar1 < dVar2) {
    return 0;
  }
  dVar3 = param_1[1];
  dVar5 = param_2[1];
  dVar8 = param_4[1];
  if (dVar5 <= dVar3) {
    if (dVar8 < dVar5) {
      return 0;
    }
    dVar4 = param_3[1];
    if (dVar3 < dVar4) {
      return 0;
    }
    dVar7 = 0.0;
    if (dVar8 < dVar3) {
      dVar7 = (dVar8 - dVar3) / (dVar5 - dVar3);
    }
    dVar6 = 1.0;
    if (dVar5 < dVar4) {
      dVar6 = (dVar4 - dVar3) / (dVar5 - dVar3);
    }
  }
  else {
    if (dVar8 < dVar3) {
      return 0;
    }
    dVar4 = param_3[1];
    if (dVar5 < dVar4) {
      return 0;
    }
    dVar7 = 0.0;
    if (dVar3 < dVar4) {
      dVar7 = (dVar4 - dVar3) / (dVar5 - dVar3);
    }
    dVar6 = 1.0;
    if (dVar8 < dVar5) {
      dVar6 = (dVar8 - dVar3) / (dVar5 - dVar3);
    }
  }
  if (dVar7 <= dVar2) {
    dVar7 = dVar2;
  }
  if (dVar1 <= dVar6) {
    dVar6 = dVar1;
  }
  if (dVar6 < dVar7) {
    return 0;
  }
  dVar1 = param_1[2];
  dVar3 = param_2[2];
  dVar5 = param_4[2];
  if (dVar3 <= dVar1) {
    if (dVar5 < dVar3) {
      return 0;
    }
    dVar8 = param_3[2];
    if (dVar1 < dVar8) {
      return 0;
    }
    dVar2 = 0.0;
    if (dVar5 < dVar1) {
      dVar2 = (dVar5 - dVar1) / (dVar3 - dVar1);
    }
    dVar4 = 1.0;
    if (dVar3 < dVar8) {
      dVar4 = (dVar8 - dVar1) / (dVar3 - dVar1);
    }
  }
  else {
    if (dVar5 < dVar1) {
      return 0;
    }
    dVar8 = param_3[2];
    if (dVar3 < dVar8) {
      return 0;
    }
    dVar2 = 0.0;
    if (dVar1 < dVar8) {
      dVar2 = (dVar8 - dVar1) / (dVar3 - dVar1);
    }
    dVar4 = 1.0;
    if (dVar5 < dVar3) {
      dVar4 = (dVar5 - dVar1) / (dVar3 - dVar1);
    }
  }
  if (dVar2 <= dVar7) {
    dVar2 = dVar7;
  }
  if (dVar6 <= dVar4) {
    dVar4 = dVar6;
  }
  if (dVar4 < dVar2) {
    return 0;
  }
  *param_5 = dVar2;
  return 1;
}


