// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEffect
// Entry Point: 00b0d84c
// Size: 28 bytes
// Signature: undefined __cdecl getEffect(uint param_1)


/* SoftAudioDevice::getEffect(unsigned int) */

void SoftAudioDevice::getEffect(uint param_1)

{
  uint in_w1;
  undefined8 *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = (ulong)param_1 + (ulong)in_w1 * 0x18;
  uVar3 = *(undefined8 *)(lVar1 + 0xea0);
  uVar2 = *(undefined8 *)(lVar1 + 0xeb0);
  in_x8[1] = *(undefined8 *)(lVar1 + 0xea8);
  *in_x8 = uVar3;
  in_x8[2] = uVar2;
  return;
}


