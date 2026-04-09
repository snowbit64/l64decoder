// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRadius
// Entry Point: 00f638d8
// Size: 92 bytes
// Signature: undefined getRadius(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCylinderShapeZ::getRadius() const */

float btCylinderShapeZ::getRadius(void)

{
  long *in_x0;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)((long)in_x0 + 0x2c);
  fVar1 = (float)(**(code **)(*in_x0 + 0x60))();
  (**(code **)(*in_x0 + 0x60))();
  (**(code **)(*in_x0 + 0x60))();
  return fVar1 + fVar2;
}


