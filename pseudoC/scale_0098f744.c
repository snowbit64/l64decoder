// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scale
// Entry Point: 0098f744
// Size: 200 bytes
// Signature: undefined __thiscall scale(VolumeInfo * this, Vector3 * param_1)


/* Bt2PhysicsColShapeCache::VolumeInfo::scale(Vector3 const&) */

void __thiscall Bt2PhysicsColShapeCache::VolumeInfo::scale(VolumeInfo *this,Vector3 *param_1)

{
  *(float *)this =
       *(float *)this * *(float *)param_1 * *(float *)(param_1 + 4) * *(float *)(param_1 + 8);
  *(float *)(this + 4) = *(float *)param_1 * *(float *)(this + 4);
  *(float *)(this + 8) = *(float *)(param_1 + 4) * *(float *)(this + 8);
  *(float *)(this + 0xc) = *(float *)(param_1 + 8) * *(float *)(this + 0xc);
  *(float *)(this + 0x10) = *(float *)param_1 * *(float *)(this + 0x10);
  *(float *)(this + 0x14) = *(float *)(param_1 + 4) * *(float *)(this + 0x14);
  *(float *)(this + 0x18) = *(float *)(param_1 + 8) * *(float *)(this + 0x18);
  *(float *)(this + 0x1c) = *(float *)param_1 * *(float *)(this + 0x1c);
  *(float *)(this + 0x20) = *(float *)(param_1 + 4) * *(float *)(this + 0x20);
  *(float *)(this + 0x24) = *(float *)(param_1 + 8) * *(float *)(this + 0x24);
  *(float *)(this + 0x28) = *(float *)param_1 * *(float *)(this + 0x28);
  *(float *)(this + 0x2c) = *(float *)(param_1 + 4) * *(float *)(this + 0x2c);
  *(float *)(this + 0x30) = *(float *)(param_1 + 8) * *(float *)(this + 0x30);
  return;
}


