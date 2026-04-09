// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 0088f8b4
// Size: 48 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* PedestrianSystem::RayCastGroundReport::onHit(TransformGroup*, Vector3 const&, float, Vector3
   const&, int, TransformGroup*, bool) */

undefined8
PedestrianSystem::RayCastGroundReport::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  if ((param_3 != 3.402823e+38) && (-1 < (int)*(uint *)(param_1 + 0xc))) {
    *(float *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0xc) * 0x108 + 0x5c) = param_3
    ;
  }
  return 0;
}


