// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterAImpulse
// Entry Point: 00f80860
// Size: 296 bytes
// Signature: undefined __cdecl clusterAImpulse(Cluster * param_1, Impulse * param_2)


/* btSoftBody::clusterAImpulse(btSoftBody::Cluster*, btSoftBody::Impulse const&) */

void btSoftBody::clusterAImpulse(Cluster *param_1,Impulse *param_2)

{
  Impulse IVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  IVar1 = param_2[0x20];
  if (((byte)IVar1 & 1) != 0) {
    fVar5 = *(float *)param_2;
    uVar9 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar2 = NEON_fmadd(uVar9,*(undefined4 *)(param_1 + 0xdc),fVar5 * *(float *)(param_1 + 0xd8));
    uVar6 = NEON_fmadd(*(undefined4 *)(param_1 + 0xec),uVar9,*(float *)(param_1 + 0xe8) * fVar5);
    uVar9 = NEON_fmadd(*(undefined4 *)(param_1 + 0xfc),uVar9,*(float *)(param_1 + 0xf8) * fVar5);
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    fVar5 = (float)NEON_fmadd(uVar8,*(undefined4 *)(param_1 + 0xe0),uVar2);
    fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xf0),uVar8,uVar6);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),uVar8,uVar9);
    *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) + fVar5;
    *(float *)(param_1 + 300) = *(float *)(param_1 + 300) + fVar7;
    *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) + fVar4;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + fVar5;
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) + fVar7;
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) + fVar4;
    IVar1 = param_2[0x20];
  }
  if (((byte)IVar1 >> 1 & 1) != 0) {
    fVar5 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar10 = *(float *)(param_2 + 0x18);
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    uVar3 = NEON_rev64(CONCAT44(*(float *)(param_1 + 0xdc) * fVar7,
                                *(float *)(param_1 + 0xe8) * fVar5),4);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),fVar10,
                              *(float *)(param_1 + 0xf8) * fVar5 +
                              *(float *)(param_1 + 0xfc) * fVar7);
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    *(float *)(param_1 + 0x150) = fVar4 + *(float *)(param_1 + 0x150);
    *(ulong *)(param_1 + 0x148) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) + fVar7 * *(float *)(param_1 + 0xec) +
                  *(float *)(param_1 + 0xf0) * fVar10 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20),
                  (float)uVar3 + fVar5 * *(float *)(param_1 + 0xd8) +
                  *(float *)(param_1 + 0xe0) * fVar10 + (float)*(undefined8 *)(param_1 + 0x148));
    return;
  }
  return;
}


