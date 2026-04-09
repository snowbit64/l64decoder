// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDisplayDeltaOrientation
// Entry Point: 00a9af14
// Size: 44 bytes
// Signature: undefined __thiscall getDisplayDeltaOrientation(Display2D * this, Matrix4x4 * param_1)


/* Display2D::getDisplayDeltaOrientation(Matrix4x4&) const */

void __thiscall Display2D::getDisplayDeltaOrientation(Display2D *this,Matrix4x4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


