// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FillWithErrorColors
// Entry Point: 00a7cec4
// Size: 16 bytes
// Signature: undefined __cdecl FillWithErrorColors(LDRColorA * param_1)


/* BC6BC7Util::FillWithErrorColors(BC6BC7Util::LDRColorA*) */

void BC6BC7Util::FillWithErrorColors(LDRColorA *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0xff000000ff000000;
  *(undefined8 *)param_1 = 0xff000000ff000000;
  *(undefined8 *)(param_1 + 0x18) = 0xff000000ff000000;
  *(undefined8 *)(param_1 + 0x10) = 0xff000000ff000000;
  *(undefined8 *)(param_1 + 0x28) = 0xff000000ff000000;
  *(undefined8 *)(param_1 + 0x20) = 0xff000000ff000000;
  *(undefined8 *)(param_1 + 0x38) = 0xff000000ff000000;
  *(undefined8 *)(param_1 + 0x30) = 0xff000000ff000000;
  return;
}


