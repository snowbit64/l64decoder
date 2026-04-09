// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CustomStreamCipher
// Entry Point: 00be3b10
// Size: 136 bytes
// Signature: undefined __thiscall CustomStreamCipher(CustomStreamCipher * this, uchar * param_1)


/* CustomStreamCipher::CustomStreamCipher(unsigned char const*) */

void __thiscall CustomStreamCipher::CustomStreamCipher(CustomStreamCipher *this,uchar *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}


