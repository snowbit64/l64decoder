// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dct_4___un_3C_vyf_3E_uni
// Entry Point: 00e52fc0
// Size: 744 bytes
// Signature: undefined dct_4___un_3C_vyf_3E_uni(void)


/* WARNING: Type propagation algorithm not settling */

float dct_4___un_3C_vyf_3E_uni(undefined param_1 [16],undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  
  puVar1 = param_2 + (long)(param_3 * 3) * 2;
  puVar2 = param_2 + (long)param_3 * 2;
  puVar3 = param_2 + (long)(param_3 * 2) * 2;
  uVar24 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
           (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  fVar8 = (float)*param_2;
  fVar4 = (float)*puVar1;
  fVar16 = fVar8 + fVar4;
  fVar9 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = (float)((ulong)*puVar1 >> 0x20);
  fVar17 = fVar9 + fVar5;
  fVar10 = (float)param_2[1];
  fVar6 = (float)puVar1[1];
  fVar18 = fVar10 + fVar6;
  fVar11 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = (float)((ulong)puVar1[1] >> 0x20);
  fVar19 = fVar11 + fVar7;
  fVar8 = fVar8 - fVar4;
  fVar9 = fVar9 - fVar5;
  fVar10 = fVar10 - fVar6;
  fVar11 = fVar11 - fVar7;
  fVar4 = (float)*puVar2;
  fVar20 = (float)*puVar3;
  fVar12 = fVar4 + fVar20;
  fVar5 = (float)((ulong)*puVar2 >> 0x20);
  fVar21 = (float)((ulong)*puVar3 >> 0x20);
  fVar13 = fVar5 + fVar21;
  fVar6 = (float)puVar2[1];
  fVar22 = (float)puVar3[1];
  fVar14 = fVar6 + fVar22;
  fVar7 = (float)((ulong)puVar2[1] >> 0x20);
  fVar23 = (float)((ulong)puVar3[1] >> 0x20);
  fVar15 = fVar7 + fVar23;
  fVar4 = fVar4 - fVar20;
  fVar5 = fVar5 - fVar21;
  fVar6 = fVar6 - fVar22;
  fVar7 = fVar7 - fVar23;
  fVar20 = (fVar17 + 0.0 + fVar13) * 0.5;
  fVar21 = (fVar18 + 0.0 + fVar14) * 0.5;
  fVar22 = (fVar19 + 0.0 + fVar15) * 0.5;
  if ((uVar24 & 1) == 0) {
    if ((uVar24 >> 1 & 1) != 0) {
      *(float *)((long)param_2 + 4) = fVar20;
    }
    if ((uVar24 >> 2 & 1) != 0) {
      *(float *)(param_2 + 1) = fVar21;
    }
    if ((uVar24 >> 3 & 1) != 0) {
      *(float *)((long)param_2 + 0xc) = fVar22;
    }
    if ((uVar24 >> 1 & 1) != 0) {
      *(float *)((long)puVar2 + 4) = (fVar9 * 0.9238795 + 0.0 + fVar5 * 0.3826834) * 0.7071068;
    }
    if ((uVar24 >> 2 & 1) != 0) {
      *(float *)(puVar2 + 1) = (fVar10 * 0.9238795 + 0.0 + fVar6 * 0.3826834) * 0.7071068;
    }
    if ((uVar24 >> 3 & 1) != 0) {
      *(float *)((long)puVar2 + 0xc) = (fVar11 * 0.9238795 + 0.0 + fVar7 * 0.3826834) * 0.7071068;
    }
    if ((uVar24 >> 1 & 1) != 0) {
      *(float *)((long)puVar3 + 4) = (fVar17 * 0.7071068 + 0.0 + fVar13 * -0.7071068) * 0.7071068;
    }
    if ((uVar24 >> 2 & 1) != 0) {
      *(float *)(puVar3 + 1) = (fVar18 * 0.7071068 + 0.0 + fVar14 * -0.7071068) * 0.7071068;
    }
    if ((uVar24 >> 3 & 1) != 0) {
      *(float *)((long)puVar3 + 0xc) = (fVar19 * 0.7071068 + 0.0 + fVar15 * -0.7071068) * 0.7071068;
    }
    fVar5 = fVar9 * 0.3826834 + 0.0 + fVar5 * -0.9238795;
    fVar6 = fVar10 * 0.3826834 + 0.0 + fVar6 * -0.9238795;
    fVar7 = fVar11 * 0.3826834 + 0.0 + fVar7 * -0.9238795;
    fVar4 = (fVar8 * 0.3826834 + 0.0 + fVar4 * -0.9238795) * 0.7071068;
  }
  else {
    *(float *)param_2 = (fVar16 + 0.0 + fVar12) * 0.5;
    if ((uVar24 >> 1 & 1) != 0) {
      *(float *)((long)param_2 + 4) = fVar20;
    }
    if ((uVar24 >> 2 & 1) != 0) {
      *(float *)(param_2 + 1) = fVar21;
    }
    if ((uVar24 >> 3 & 1) != 0) {
      *(float *)((long)param_2 + 0xc) = fVar22;
    }
    *(float *)puVar2 = (fVar8 * 0.9238795 + 0.0 + fVar4 * 0.3826834) * 0.7071068;
    if ((uVar24 >> 1 & 1) != 0) {
      *(float *)((long)puVar2 + 4) = (fVar9 * 0.9238795 + 0.0 + fVar5 * 0.3826834) * 0.7071068;
    }
    if ((uVar24 >> 2 & 1) != 0) {
      *(float *)(puVar2 + 1) = (fVar10 * 0.9238795 + 0.0 + fVar6 * 0.3826834) * 0.7071068;
    }
    if ((uVar24 >> 3 & 1) != 0) {
      *(float *)((long)puVar2 + 0xc) = (fVar11 * 0.9238795 + 0.0 + fVar7 * 0.3826834) * 0.7071068;
    }
    *(float *)puVar3 = (fVar16 * 0.7071068 + 0.0 + fVar12 * -0.7071068) * 0.7071068;
    if ((uVar24 >> 1 & 1) != 0) {
      *(float *)((long)puVar3 + 4) = (fVar17 * 0.7071068 + 0.0 + fVar13 * -0.7071068) * 0.7071068;
    }
    if ((uVar24 >> 2 & 1) != 0) {
      *(float *)(puVar3 + 1) = (fVar18 * 0.7071068 + 0.0 + fVar14 * -0.7071068) * 0.7071068;
    }
    if ((uVar24 >> 3 & 1) != 0) {
      *(float *)((long)puVar3 + 0xc) = (fVar19 * 0.7071068 + 0.0 + fVar15 * -0.7071068) * 0.7071068;
    }
    fVar5 = fVar9 * 0.3826834 + 0.0 + fVar5 * -0.9238795;
    fVar6 = fVar10 * 0.3826834 + 0.0 + fVar6 * -0.9238795;
    fVar7 = fVar11 * 0.3826834 + 0.0 + fVar7 * -0.9238795;
    fVar4 = (fVar8 * 0.3826834 + 0.0 + fVar4 * -0.9238795) * 0.7071068;
    *(float *)puVar1 = fVar4;
  }
  if ((uVar24 >> 1 & 1) != 0) {
    *(float *)((long)puVar1 + 4) = fVar5 * 0.7071068;
  }
  if ((uVar24 >> 2 & 1) != 0) {
    *(float *)(puVar1 + 1) = fVar6 * 0.7071068;
  }
  if ((uVar24 >> 3 & 1) != 0) {
    *(float *)((long)puVar1 + 0xc) = fVar7 * 0.7071068;
  }
  return fVar4;
}


