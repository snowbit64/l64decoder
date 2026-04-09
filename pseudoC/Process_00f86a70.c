// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f86a70
// Size: 112 bytes
// Signature: undefined __thiscall Process(RayFromToCaster * this, btDbvtNode * param_1)


/* btSoftBody::RayFromToCaster::Process(btDbvtNode const*) */

undefined8 __thiscall
btSoftBody::RayFromToCaster::Process(RayFromToCaster *this,btDbvtNode *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  fVar2 = (float)rayFromToTriangle((btVector3 *)(this + 8),(btVector3 *)(this + 0x18),
                                   (btVector3 *)(this + 0x28),
                                   (btVector3 *)(*(long *)(lVar1 + 0x10) + 0x10),
                                   (btVector3 *)(*(long *)(lVar1 + 0x18) + 0x10),
                                   (btVector3 *)(*(long *)(lVar1 + 0x20) + 0x10),
                                   *(float *)(this + 0x38));
  if (0.0 < fVar2 && fVar2 < *(float *)(this + 0x38)) {
    *(float *)(this + 0x38) = fVar2;
    *(long *)(this + 0x40) = lVar1;
  }
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  return 1;
}


