// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VSolve_Links
// Entry Point: 00f88410
// Size: 172 bytes
// Signature: undefined __cdecl VSolve_Links(btSoftBody * param_1, float param_2)


/* btSoftBody::VSolve_Links(btSoftBody*, float) */

void btSoftBody::VSolve_Links(btSoftBody *param_1,float param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x394);
  if (0 < (int)*(uint *)(param_1 + 0x394)) {
    puVar4 = (undefined4 *)(*(long *)(param_1 + 0x3a0) + 0x40);
    do {
      lVar1 = *(long *)(puVar4 + -0xc);
      lVar2 = *(long *)(puVar4 + -10);
      uVar3 = uVar3 - 1;
      uVar5 = NEON_fmadd(puVar4[-1],*(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34),
                         (float)puVar4[-2] * (*(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30)));
      fVar6 = (float)NEON_fmadd(*puVar4,*(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38),uVar5);
      fVar6 = (float)puVar4[-3] * -param_2 * fVar6;
      fVar9 = fVar6 * *(float *)(lVar1 + 0x60);
      uVar5 = NEON_fmadd(fVar9,puVar4[-2],*(float *)(lVar1 + 0x30));
      uVar7 = NEON_fmadd(fVar9,puVar4[-1],*(float *)(lVar1 + 0x34));
      uVar8 = NEON_fmadd(fVar9,*puVar4,*(float *)(lVar1 + 0x38));
      *(undefined4 *)(lVar1 + 0x30) = uVar5;
      *(undefined4 *)(lVar1 + 0x34) = uVar7;
      *(undefined4 *)(lVar1 + 0x38) = uVar8;
      fVar6 = *(float *)(lVar2 + 0x60) * fVar6;
      uVar5 = NEON_fmsub(*puVar4,fVar6,*(undefined4 *)(lVar2 + 0x38));
      *(ulong *)(lVar2 + 0x30) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(puVar4 + -2) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar2 + 0x30) -
                    (float)*(undefined8 *)(puVar4 + -2) * fVar6);
      *(undefined4 *)(lVar2 + 0x38) = uVar5;
      puVar4 = puVar4 + 0x12;
    } while (uVar3 != 0);
  }
  return;
}


