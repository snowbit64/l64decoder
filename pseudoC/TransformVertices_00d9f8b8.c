// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransformVertices
// Entry Point: 00d9f8b8
// Size: 80 bytes
// Signature: undefined __cdecl TransformVertices(float * param_1, float * param_2, float * param_3, uint param_4, VertexLayout * param_5)


/* MaskedOcclusionCulling::TransformVertices(float const*, float const*, float*, unsigned int,
   MaskedOcclusionCulling::VertexLayout const&) */

void MaskedOcclusionCulling::TransformVertices
               (float *param_1,float *param_2,float *param_3,uint param_4,VertexLayout *param_5)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar3 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 6);
    uVar5 = *(undefined8 *)(param_1 + 4);
    uVar8 = *(undefined8 *)(param_1 + 10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)(param_1 + 0xe);
    uVar9 = *(undefined8 *)(param_1 + 0xc);
    iVar1 = *(int *)param_5;
    do {
      fVar2 = *param_2;
      param_4 = param_4 - 1;
      fVar11 = *(float *)((long)param_2 + (long)*(int *)(param_5 + 0xc));
      fVar12 = *(float *)((long)param_2 + (long)*(int *)(param_5 + 4));
      *(ulong *)((long)param_3 + 8) =
           CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar2 +
                    (float)((ulong)uVar6 >> 0x20) * fVar12 +
                    (float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar8 >> 0x20) * fVar11,
                    (float)uVar4 * fVar2 +
                    (float)uVar6 * fVar12 + (float)uVar10 + (float)uVar8 * fVar11);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar2 +
                    (float)((ulong)uVar5 >> 0x20) * fVar12 +
                    (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * fVar11,
                    (float)uVar3 * fVar2 +
                    (float)uVar5 * fVar12 + (float)uVar9 + (float)uVar7 * fVar11);
      param_3 = (float *)((long)param_3 + 0x10);
      param_2 = (float *)(long)iVar1;
    } while (param_4 != 0);
  }
  return;
}


