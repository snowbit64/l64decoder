// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterDImpulse
// Entry Point: 00f804cc
// Size: 172 bytes
// Signature: undefined __cdecl clusterDImpulse(Cluster * param_1, btVector3 * param_2, btVector3 * param_3)


/* btSoftBody::clusterDImpulse(btSoftBody::Cluster*, btVector3 const&, btVector3 const&) */

void btSoftBody::clusterDImpulse(Cluster *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = *(float *)(param_3 + 8);
  fVar2 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar8 = (float)NEON_fnmsub(*(float *)(param_2 + 4),fVar5,*(float *)(param_2 + 8) * fVar2);
  fVar1 = (float)*(undefined8 *)param_3;
  fVar9 = -(*(float *)param_2 * fVar5) + *(float *)(param_2 + 8) * fVar1;
  fVar7 = -(*(float *)(param_2 + 4) * fVar1) + *(float *)param_2 * fVar2;
  fVar6 = *(float *)(param_1 + 0xa4);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0xfc),fVar9,*(float *)(param_1 + 0xf8) * fVar8);
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),fVar7,uVar3);
  *(ulong *)(param_1 + 0x138) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) + fVar2 * fVar6,
                (float)*(undefined8 *)(param_1 + 0x138) + fVar1 * fVar6);
  uVar3 = NEON_fmadd(fVar5,fVar6,*(undefined4 *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x140) = uVar3;
  *(ulong *)(param_1 + 0x148) =
       CONCAT44(*(float *)(param_1 + 0xe8) * fVar8 + *(float *)(param_1 + 0xec) * fVar9 +
                *(float *)(param_1 + 0xf0) * fVar7 +
                (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20),
                *(float *)(param_1 + 0xd8) * fVar8 + *(float *)(param_1 + 0xdc) * fVar9 +
                *(float *)(param_1 + 0xe0) * fVar7 + (float)*(undefined8 *)(param_1 + 0x148));
  *(float *)(param_1 + 0x150) = fVar4 + *(float *)(param_1 + 0x150);
  return;
}


