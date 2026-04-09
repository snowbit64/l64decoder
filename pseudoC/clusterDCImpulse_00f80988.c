// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterDCImpulse
// Entry Point: 00f80988
// Size: 52 bytes
// Signature: undefined __cdecl clusterDCImpulse(Cluster * param_1, btVector3 * param_2)


/* btSoftBody::clusterDCImpulse(btSoftBody::Cluster*, btVector3 const&) */

void btSoftBody::clusterDCImpulse(Cluster *param_1,btVector3 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(param_1 + 0xa4);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar1,*(undefined4 *)(param_1 + 0x140));
  *(ulong *)(param_1 + 0x138) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) +
                (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_1 + 0x138) + (float)*(undefined8 *)param_2 * fVar1);
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  return;
}


