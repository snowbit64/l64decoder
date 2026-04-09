// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveFinish
// Entry Point: 009b9400
// Size: 188 bytes
// Signature: undefined __cdecl solveFinish(Bt2World * param_1, btAlignedObjectArray * param_2, float param_3)


/* Bt2RaycastVehicle::solveFinish(Bt2World*, btAlignedObjectArray<btSolverBody>&, float) */

void Bt2RaycastVehicle::solveFinish(Bt2World *param_1,btAlignedObjectArray *param_2,float param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0xec) != 2) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x3c);
    if (0 < (int)*(uint *)(param_1 + 0x3c)) {
      puVar3 = (undefined4 *)(*(long *)(param_1 + 0x48) + 0x140);
      pfVar4 = (float *)(*(long *)(param_1 + 0x88) + 0x80);
      do {
        fVar6 = (float)NEON_fmadd(*puVar3,param_3,puVar3[1]);
        puVar3[1] = fVar6;
        if (6.283185 < fVar6) {
          fVar5 = -6.283185;
LAB_009b9440:
          puVar3[1] = fVar6 + fVar5;
        }
        else if (fVar6 < 0.0) {
          fVar5 = 6.283185;
          goto LAB_009b9440;
        }
        uVar2 = uVar2 - 1;
        puVar3[0x14] = -*pfVar4 / param_3;
        puVar1 = (undefined8 *)(pfVar4 + -0x1c);
        pfVar4 = pfVar4 + 0x5a;
        *(undefined8 *)(puVar3 + 0x15) = *puVar1;
        puVar3 = puVar3 + 0x68;
      } while (uVar2 != 0);
    }
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xcc) + *(float *)(param_1 + 0xd0);
  }
  return;
}


