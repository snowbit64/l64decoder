// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f424e4
// Entry Point: 00f424e4
// Size: 412 bytes
// Signature: undefined FUN_00f424e4(void)


float * FUN_00f424e4(float **param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*param_1 == param_2) {
    pfVar4 = (float *)0x0;
    *param_1 = (float *)0x0;
  }
  else {
    pfVar6 = *(float **)(param_2 + 8);
    pfVar5 = *(float **)(pfVar6 + 8);
    pfVar4 = *(float **)(pfVar6 + (ulong)(*(float **)(pfVar6 + 0xc) != param_2) * 2 + 10);
    if (pfVar5 == (float *)0x0) {
      pfVar5 = param_1[1];
      *param_1 = pfVar4;
      *(undefined8 *)(pfVar4 + 8) = 0;
      if (pfVar5 != (float *)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        pfVar4 = *param_1;
      }
      param_1[1] = pfVar6;
    }
    else {
      *(float **)(pfVar5 + (ulong)(*(float **)(pfVar5 + 0xc) == pfVar6) * 2 + 10) = pfVar4;
      pfVar3 = param_1[1];
      *(float **)(pfVar4 + 8) = pfVar5;
      if (pfVar3 != (float *)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      param_1[1] = pfVar6;
      do {
        puVar1 = *(undefined4 **)(pfVar5 + 10);
        puVar2 = *(undefined4 **)(pfVar5 + 0xc);
        fVar18 = *pfVar5;
        fVar11 = pfVar5[1];
        fVar17 = pfVar5[2];
        fVar13 = (float)NEON_fminnm(*puVar1,*puVar2);
        *pfVar5 = fVar13;
        fVar7 = (float)puVar1[4];
        fVar14 = pfVar5[6];
        fVar9 = pfVar5[4];
        fVar8 = pfVar5[5];
        pfVar5[4] = fVar7;
        fVar15 = (float)NEON_fminnm(puVar1[1],puVar2[1]);
        pfVar5[1] = fVar15;
        fVar10 = (float)puVar1[5];
        if ((float)puVar1[5] <= (float)puVar2[5]) {
          fVar10 = (float)puVar2[5];
        }
        pfVar5[5] = fVar10;
        fVar16 = (float)NEON_fminnm(puVar1[2],puVar2[2]);
        pfVar5[2] = fVar16;
        fVar12 = (float)puVar1[6];
        if ((float)puVar1[6] <= (float)puVar2[6]) {
          fVar12 = (float)puVar2[6];
        }
        pfVar5[6] = fVar12;
        if ((((fVar18 == fVar13) && (fVar11 == fVar15)) && (fVar17 == fVar16)) &&
           (((fVar9 == fVar7 && (fVar8 == fVar10)) && (fVar14 == fVar12)))) {
          return pfVar5;
        }
        pfVar5 = *(float **)(pfVar5 + 8);
      } while (pfVar5 != (float *)0x0);
      pfVar4 = *param_1;
    }
  }
  return pfVar4;
}


