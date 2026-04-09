// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveSplitImpulseIteration
// Entry Point: 009b91e4
// Size: 540 bytes
// Signature: undefined __cdecl solveSplitImpulseIteration(Bt2World * param_1, btAlignedObjectArray * param_2, float param_3)


/* Bt2RaycastVehicle::solveSplitImpulseIteration(Bt2World*, btAlignedObjectArray<btSolverBody>&,
   float) */

undefined8
Bt2RaycastVehicle::solveSplitImpulseIteration
          (Bt2World *param_1,btAlignedObjectArray *param_2,float param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 in_register_00005004;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  uVar7 = CONCAT44(in_register_00005004,param_3);
  if ((*(int *)(*(long *)(param_1 + 8) + 0xec) != 2) &&
     (uVar1 = (ulong)*(uint *)(param_1 + 0x3c), 0 < (int)*(uint *)(param_1 + 0x3c))) {
    uVar7 = 0;
    plVar2 = (long *)(*(long *)(param_1 + 0x48) + 0x20);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x88) + 0x54);
    do {
      if ((*plVar2 != 0) && (*(float *)((long)puVar3 + 0x3c) != 0.0)) {
        lVar5 = *(long *)((long)puVar3 + -0x54);
        lVar4 = *(long *)((long)puVar3 + -0x4c);
        lVar6 = *(long *)(lVar5 + 0xf0);
        fVar8 = (float)((ulong)puVar3[-2] >> 0x20);
        uVar11 = NEON_fmadd(*(undefined4 *)(puVar3 + -6),*(undefined4 *)(lVar5 + 0xa0),
                            *(float *)((long)puVar3 + -0x2c) * *(float *)(lVar5 + 0xa4));
        fVar9 = *(float *)(puVar3 + -1);
        fVar13 = (float)puVar3[-2];
        uVar16 = NEON_fmadd(*(undefined4 *)(puVar3 + -4),*(undefined4 *)(lVar4 + 0xa0),
                            *(float *)((long)puVar3 + -0x1c) * *(float *)(lVar4 + 0xa4));
        fVar10 = (float)NEON_fmadd(*(undefined4 *)(puVar3 + -5),*(undefined4 *)(lVar5 + 0xa8),uVar11
                                  );
        fVar12 = (float)NEON_fmadd(fVar9,*(undefined4 *)(lVar5 + 0x98),
                                   *(float *)(lVar5 + 0x94) * fVar8 +
                                   *(float *)(lVar5 + 0x90) * fVar13);
        fVar14 = (float)NEON_fmadd(fVar9,*(undefined4 *)(lVar4 + 0x98),
                                   *(float *)(lVar4 + 0x94) * fVar8 +
                                   *(float *)(lVar4 + 0x90) * fVar13);
        fVar15 = (float)NEON_fmadd(*(undefined4 *)(puVar3 + -3),*(undefined4 *)(lVar4 + 0xa8),uVar16
                                  );
        fVar12 = (float)NEON_fmadd(*(float *)(puVar3 + 9) * -((fVar12 + fVar10) - (fVar14 + fVar15))
                                   ,*(undefined4 *)((long)puVar3 + 0x34),
                                   *(float *)((long)puVar3 + 0x3c));
        fVar14 = *(float *)(puVar3 + 8) + fVar12;
        fVar10 = 0.0 - *(float *)(puVar3 + 8);
        if (fVar14 <= 0.0) {
          fVar10 = fVar12;
        }
        uVar11 = NEON_fmin(fVar14,0);
        fVar10 = *(float *)((long)puVar3 + 0x44) * fVar10;
        *(undefined4 *)(puVar3 + 8) = uVar11;
        if (lVar6 != 0) {
          *(ulong *)(lVar5 + 0x90) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x70) >> 0x20) *
                        fVar8 * (float)((ulong)*(undefined8 *)(lVar5 + 0x80) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(lVar5 + 0x90) >> 0x20),
                        (float)*(undefined8 *)(lVar5 + 0x70) *
                        fVar13 * (float)*(undefined8 *)(lVar5 + 0x80) * fVar10 +
                        (float)*(undefined8 *)(lVar5 + 0x90));
          *(float *)(lVar5 + 0x98) =
               fVar10 * fVar9 * *(float *)(lVar5 + 0x88) * *(float *)(lVar5 + 0x78) +
               *(float *)(lVar5 + 0x98);
          fVar13 = *(float *)(puVar3 + 1);
          *(ulong *)(lVar5 + 0xa0) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x60) >> 0x20) * fVar10 *
                        (float)((ulong)*puVar3 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar5 + 0xa0) >> 0x20),
                        (float)*(undefined8 *)(lVar5 + 0x60) * fVar10 * (float)*puVar3 +
                        (float)*(undefined8 *)(lVar5 + 0xa0));
          *(float *)(lVar5 + 0xa8) =
               fVar10 * *(float *)(lVar5 + 0x68) * fVar13 + *(float *)(lVar5 + 0xa8);
        }
        if (*(long *)(lVar4 + 0xf0) != 0) {
          fVar13 = *(float *)(puVar3 + -1);
          fVar10 = -fVar10;
          *(ulong *)(lVar4 + 0x90) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) *
                        (float)((ulong)puVar3[-2] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x80) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x90) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 0x70) *
                        (float)puVar3[-2] * (float)*(undefined8 *)(lVar4 + 0x80) * fVar10 +
                        (float)*(undefined8 *)(lVar4 + 0x90));
          *(float *)(lVar4 + 0x98) =
               fVar13 * *(float *)(lVar4 + 0x88) * fVar10 * *(float *)(lVar4 + 0x78) +
               *(float *)(lVar4 + 0x98);
          fVar13 = *(float *)(puVar3 + 3);
          *(ulong *)(lVar4 + 0xa0) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) * fVar10 *
                        (float)((ulong)puVar3[2] >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 0x60) * fVar10 * (float)puVar3[2] +
                        (float)*(undefined8 *)(lVar4 + 0xa0));
          *(float *)(lVar4 + 0xa8) =
               *(float *)(lVar4 + 0x68) * fVar10 * fVar13 + *(float *)(lVar4 + 0xa8);
        }
      }
      plVar2 = plVar2 + 0x34;
      uVar1 = uVar1 - 1;
      puVar3 = puVar3 + 0x2d;
    } while (uVar1 != 0);
  }
  return uVar7;
}


