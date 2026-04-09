// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterDAImpulse
// Entry Point: 00f807e8
// Size: 120 bytes
// Signature: undefined __cdecl clusterDAImpulse(Cluster * param_1, btVector3 * param_2)


/* btSoftBody::clusterDAImpulse(btSoftBody::Cluster*, btVector3 const&) */

void btSoftBody::clusterDAImpulse(Cluster *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)*(undefined8 *)param_2;
  fVar5 = *(float *)(param_2 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar1 = NEON_rev64(CONCAT44(*(float *)(param_1 + 0xdc) * fVar4,*(float *)(param_1 + 0xe8) * fVar2)
                     ,4);
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),fVar5,
                            *(float *)(param_1 + 0xf8) * fVar2 + *(float *)(param_1 + 0xfc) * fVar4)
  ;
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  *(float *)(param_1 + 0x150) = fVar3 + *(float *)(param_1 + 0x150);
  *(ulong *)(param_1 + 0x148) =
       CONCAT44((float)((ulong)uVar1 >> 0x20) + fVar4 * *(float *)(param_1 + 0xec) +
                *(float *)(param_1 + 0xf0) * fVar5 +
                (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20),
                (float)uVar1 + fVar2 * *(float *)(param_1 + 0xd8) +
                *(float *)(param_1 + 0xe0) * fVar5 + (float)*(undefined8 *)(param_1 + 0x148));
  return;
}


