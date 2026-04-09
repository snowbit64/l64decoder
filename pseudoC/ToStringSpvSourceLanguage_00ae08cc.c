// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringSpvSourceLanguage
// Entry Point: 00ae08cc
// Size: 284 bytes
// Signature: undefined __cdecl ToStringSpvSourceLanguage(SpvSourceLanguage_ param_1)


/* ToStringSpvSourceLanguage(SpvSourceLanguage_) */

void ToStringSpvSourceLanguage(SpvSourceLanguage_ param_1)

{
  undefined *in_x8;
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    in_x8[8] = 0;
    *in_x8 = 0xe;
    *(undefined4 *)(in_x8 + 1) = 0x6e6b6e55;
    *(undefined4 *)(in_x8 + 4) = 0x6e776f6e;
    return;
  case 1:
    uVar1 = 0x4c535345;
    break;
  case 2:
    uVar1 = 0x4c534c47;
    break;
  case 3:
    in_x8[9] = 0;
    *in_x8 = 0x10;
    *(undefined8 *)(in_x8 + 1) = 0x435f4c436e65704f;
    return;
  case 4:
    in_x8[0xb] = 0;
    *in_x8 = 0x14;
    *(undefined2 *)(in_x8 + 9) = 0x5050;
    *(undefined8 *)(in_x8 + 1) = 0x435f4c436e65704f;
    return;
  case 5:
    uVar1 = 0x4c534c48;
    break;
  case 6:
    in_x8[0xf] = 0;
    *in_x8 = 0x1c;
    *(undefined8 *)(in_x8 + 1) = 0x5f726f665f505043;
    *(undefined8 *)(in_x8 + 7) = 0x4c436e65704f5f72;
    return;
  default:
    *in_x8 = 6;
    *(undefined4 *)(in_x8 + 1) = 0x3f3f3f;
    return;
  }
  *in_x8 = 8;
  *(undefined4 *)(in_x8 + 1) = uVar1;
  in_x8[5] = 0;
  return;
}


