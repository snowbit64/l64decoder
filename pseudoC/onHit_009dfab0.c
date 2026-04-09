// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 009dfab0
// Size: 76 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastReport::onHit(TransformGroup*,
   Vector3 const&, float, Vector3 const&, int, TransformGroup*, bool) */

undefined8
ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastReport::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  if (param_1[8] == (TransformGroup)0x0) {
    if ((*(byte *)((ulong)param_7 + 0x41) >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((ulong)param_7 + 0x134);
  }
  param_1[8] = (TransformGroup)0x1;
  return 0;
}


