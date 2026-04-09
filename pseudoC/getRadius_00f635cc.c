// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRadius
// Entry Point: 00f635cc
// Size: 92 bytes
// Signature: undefined getRadius(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCylinderShapeX::getRadius() const */

float btCylinderShapeX::getRadius(void)

{
  long *in_x0;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 6);
  (**(code **)(*in_x0 + 0x60))();
  fVar1 = (float)(**(code **)(*in_x0 + 0x60))();
  (**(code **)(*in_x0 + 0x60))();
  return fVar1 + fVar2;
}


