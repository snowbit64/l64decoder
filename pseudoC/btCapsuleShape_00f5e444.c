// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCapsuleShape
// Entry Point: 00f5e444
// Size: 88 bytes
// Signature: undefined __thiscall btCapsuleShape(btCapsuleShape * this, float param_1, float param_2)


/* btCapsuleShape::btCapsuleShape(float, float) */

void __thiscall btCapsuleShape::btCapsuleShape(btCapsuleShape *this,float param_1,float param_2)

{
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 8) = 10;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x24) = 0x3f800000;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined ***)this = &PTR__btConvexShape_0101a0d8;
  *(float *)(this + 0x2c) = param_1;
  *(float *)(this + 0x30) = param_2 * 0.5;
  *(float *)(this + 0x34) = param_1;
  *(undefined8 *)(this + 0x38) = 0x3d23d70a00000000;
  return;
}


