// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Raycast
// Entry Point: 00d5cd7c
// Size: 32 bytes
// Signature: undefined __thiscall Raycast(RaycastMesh * this, Vec3 * param_1, Vec3 * param_2, long * param_3, double * param_4, Vec3 * param_5, Vec3 * param_6)


/* HACD::RaycastMesh::Raycast(HACD::Vec3<double> const&, HACD::Vec3<double> const&, long&, double&,
   HACD::Vec3<double>&, HACD::Vec3<double>&) const */

undefined8 __thiscall
HACD::RaycastMesh::Raycast
          (RaycastMesh *this,Vec3 *param_1,Vec3 *param_2,long *param_3,double *param_4,Vec3 *param_5
          ,Vec3 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x58);
  *param_4 = 1.797693134862316e+308;
  if (lVar2 != 0) {
    uVar1 = RMNode::Raycast(*(RMNode **)(this + 0x20),param_1,param_2,param_3,param_4,param_5,
                            param_6);
    return uVar1;
  }
  return 0;
}


