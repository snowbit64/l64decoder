// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterVImpulse
// Entry Point: 00f803b8
// Size: 276 bytes
// Signature: undefined __cdecl clusterVImpulse(Cluster * param_1, btVector3 * param_2, btVector3 * param_3)


/* btSoftBody::clusterVImpulse(btSoftBody::Cluster*, btVector3 const&, btVector3 const&) */

void btSoftBody::clusterVImpulse(Cluster *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 8);
  fVar8 = *(float *)(param_1 + 0xa4);
  fVar6 = (float)NEON_fnmsub(*(float *)(param_2 + 4),fVar3,*(float *)(param_2 + 8) * fVar2);
  uVar5 = NEON_fnmsub(*(float *)param_2,fVar2,*(float *)(param_2 + 4) * fVar1);
  uVar4 = NEON_fnmsub(*(float *)(param_2 + 8),fVar1,*(float *)param_2 * fVar3);
  uVar10 = NEON_fmadd(uVar4,*(undefined4 *)(param_1 + 0xdc),fVar6 * *(float *)(param_1 + 0xd8));
  uVar11 = NEON_fmadd(*(undefined4 *)(param_1 + 0xec),uVar4,*(float *)(param_1 + 0xe8) * fVar6);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0xfc),uVar4,*(float *)(param_1 + 0xf8) * fVar6);
  *(float *)(param_1 + 0x11c) = *(float *)(param_1 + 0x11c) + fVar2 * fVar8;
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xe0),uVar5,uVar10);
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xf0),uVar5,uVar11);
  *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x120) + fVar3 * fVar8;
  *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) + fVar8 * fVar1;
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),uVar5,uVar4);
  *(float *)(param_1 + 0x164) = *(float *)(param_1 + 0x164) + fVar2 * fVar8;
  *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) + fVar3 * fVar8;
  *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x118) + fVar8 * fVar1;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) + fVar7;
  *(float *)(param_1 + 300) = *(float *)(param_1 + 300) + fVar9;
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) + fVar6;
  *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + fVar7;
  *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) + fVar9;
  *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) + fVar6;
  return;
}


