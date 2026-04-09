// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxPhysicalSurfaceAngle
// Entry Point: 008c9694
// Size: 80 bytes
// Signature: undefined __thiscall setMaxPhysicalSurfaceAngle(FillPlaneGeometry * this, float param_1)


/* FillPlaneGeometry::setMaxPhysicalSurfaceAngle(float) */

void __thiscall FillPlaneGeometry::setMaxPhysicalSurfaceAngle(FillPlaneGeometry *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 400);
  if (param_1 <= *(float *)(this + 400)) {
    fVar1 = param_1;
  }
  *(float *)(this + 0x194) = fVar1;
  fVar1 = tanf(fVar1);
  *(float *)(this + 0x124) =
       fVar1 / (*(float *)(this + 0x11c) *
               (float)(unkuint9)(ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 5));
  return;
}


