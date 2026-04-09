// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterVAImpulse
// Entry Point: 00f8074c
// Size: 156 bytes
// Signature: undefined __cdecl clusterVAImpulse(Cluster * param_1, btVector3 * param_2)


/* btSoftBody::clusterVAImpulse(btSoftBody::Cluster*, btVector3 const&) */

void btSoftBody::clusterVAImpulse(Cluster *param_1,btVector3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar4 = *(float *)param_2;
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar1 = NEON_fmadd(uVar7,*(undefined4 *)(param_1 + 0xdc),fVar4 * *(float *)(param_1 + 0xd8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0xec),uVar7,*(float *)(param_1 + 0xe8) * fVar4);
  uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 0xfc),uVar7,*(float *)(param_1 + 0xf8) * fVar4);
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  fVar4 = (float)NEON_fmadd(uVar2,*(undefined4 *)(param_1 + 0xe0),uVar1);
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xf0),uVar2,uVar5);
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),uVar2,uVar7);
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) + fVar4;
  *(float *)(param_1 + 300) = *(float *)(param_1 + 300) + fVar6;
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) + fVar3;
  *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + fVar4;
  *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) + fVar6;
  *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) + fVar3;
  return;
}


