// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMatrix4x4
// Entry Point: 00aa9d10
// Size: 132 bytes
// Signature: undefined __cdecl setMatrix4x4(Matrix4x4 * param_1, Matrix4x4 * param_2)


/* ShaderStructLayout::setMatrix4x4(Matrix4x4&, Matrix4x4 const&) */

void ShaderStructLayout::setMatrix4x4(Matrix4x4 *param_1,Matrix4x4 *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  return;
}


