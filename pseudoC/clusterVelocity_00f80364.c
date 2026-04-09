// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterVelocity
// Entry Point: 00f80364
// Size: 84 bytes
// Signature: undefined __cdecl clusterVelocity(Cluster * param_1, btVector3 * param_2)


/* btSoftBody::clusterVelocity(btSoftBody::Cluster const*, btVector3 const&) */

undefined  [16] btSoftBody::clusterVelocity(Cluster *param_1,btVector3 *param_2)

{
  float fVar2;
  undefined auVar1 [16];
  float fVar3;
  
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x174) >> 0x20);
  auVar1._0_4_ = -(fVar2 * (float)*(undefined8 *)(param_2 + 4)) +
                 (float)*(undefined8 *)(param_1 + 0x174) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x160);
  auVar1._4_4_ = -(*(float *)(param_1 + 0x170) * fVar3) + fVar2 * *(float *)param_2 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20);
  auVar1._8_8_ = 0;
  return auVar1;
}


