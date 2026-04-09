// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f6b0e0
// Size: 152 bytes
// Signature: undefined __cdecl processTriangle(btVector3 * param_1, int param_2, int param_3)


/* SupportVertexCallback::processTriangle(btVector3*, int, int) */

undefined8 SupportVertexCallback::processTriangle(btVector3 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  puVar2 = (undefined8 *)(ulong)(uint)param_2;
  fVar3 = *(float *)(param_1 + 0x5c);
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar6 = *(undefined4 *)(param_1 + 100);
  uVar8 = NEON_fmadd(*(float *)((long)puVar2 + 4),uVar5,*(float *)puVar2 * fVar3);
  fVar9 = (float)NEON_fmadd(*(float *)(puVar2 + 1),uVar6,uVar8);
  fVar7 = *(float *)(param_1 + 0x58);
  if (*(float *)(param_1 + 0x58) < fVar9) {
    *(float *)(param_1 + 0x58) = fVar9;
    uVar4 = *puVar2;
    *(undefined8 *)(param_1 + 0x10) = puVar2[1];
    *puVar1 = uVar4;
    fVar7 = fVar9;
  }
  uVar8 = NEON_fmadd(*(float *)((long)puVar2 + 0x14),uVar5,*(float *)(puVar2 + 2) * fVar3);
  fVar9 = (float)NEON_fmadd(*(float *)(puVar2 + 3),uVar6,uVar8);
  if (fVar7 < fVar9) {
    *(float *)(param_1 + 0x58) = fVar9;
    uVar4 = puVar2[2];
    *(undefined8 *)(param_1 + 0x10) = puVar2[3];
    *puVar1 = uVar4;
    fVar7 = fVar9;
  }
  uVar5 = NEON_fmadd(*(float *)((long)puVar2 + 0x24),uVar5,*(float *)(puVar2 + 4) * fVar3);
  fVar3 = (float)NEON_fmadd(*(float *)(puVar2 + 5),uVar6,uVar5);
  if (fVar7 < fVar3) {
    *(float *)(param_1 + 0x58) = fVar3;
    uVar4 = puVar2[4];
    *(undefined8 *)(param_1 + 0x10) = puVar2[5];
    *puVar1 = uVar4;
  }
  return 1;
}


