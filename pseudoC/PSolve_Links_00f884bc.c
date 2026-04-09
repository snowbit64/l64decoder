// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PSolve_Links
// Entry Point: 00f884bc
// Size: 212 bytes
// Signature: undefined __cdecl PSolve_Links(btSoftBody * param_1, float param_2, float param_3)


/* btSoftBody::PSolve_Links(btSoftBody*, float, float) */

void btSoftBody::PSolve_Links(btSoftBody *param_1,float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x394);
  if (0 < (int)*(uint *)(param_1 + 0x394)) {
    pfVar4 = (float *)(*(long *)(param_1 + 0x3a0) + 0x30);
    do {
      if (0.0 < pfVar4[-2]) {
        lVar1 = *(long *)(pfVar4 + -8);
        lVar2 = *(long *)(pfVar4 + -6);
        fVar8 = (float)*(undefined8 *)(lVar1 + 0x10);
        fVar5 = (float)*(undefined8 *)(lVar2 + 0x10) - fVar8;
        fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
        fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) - fVar9;
        fVar7 = *(float *)(lVar2 + 0x18) - *(float *)(lVar1 + 0x18);
        fVar11 = (float)NEON_fmadd(fVar7,fVar7,fVar5 * fVar5 + fVar6 * fVar6);
        fVar13 = fVar11 + pfVar4[-1];
        if (1.192093e-07 < fVar13) {
          fVar14 = pfVar4[-1] - fVar11;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar12 = *pfVar4 - fVar11;
          if (fVar11 <= *pfVar4) {
            fVar12 = fVar14;
          }
          fVar11 = (fVar12 * param_2) / (fVar13 * pfVar4[-2]);
          fVar13 = fVar11 * *(float *)(lVar1 + 0x60);
          uVar10 = NEON_fmsub(fVar13,fVar7,*(float *)(lVar1 + 0x18));
          *(ulong *)(lVar1 + 0x10) = CONCAT44(fVar9 - fVar6 * fVar13,fVar8 - fVar5 * fVar13);
          *(undefined4 *)(lVar1 + 0x18) = uVar10;
          fVar11 = *(float *)(lVar2 + 0x60) * fVar11;
          uVar10 = NEON_fmadd(fVar11,fVar7,*(undefined4 *)(lVar2 + 0x18));
          *(ulong *)(lVar2 + 0x10) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) + fVar6 * fVar11,
                        (float)*(undefined8 *)(lVar2 + 0x10) + fVar5 * fVar11);
          *(undefined4 *)(lVar2 + 0x18) = uVar10;
        }
      }
      uVar3 = uVar3 - 1;
      pfVar4 = pfVar4 + 0x12;
    } while (uVar3 != 0);
  }
  return;
}


