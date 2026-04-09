// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_get_samples_per_frame
// Entry Point: 00e7c9c4
// Size: 176 bytes
// Signature: undefined opus_packet_get_samples_per_frame(void)


int opus_packet_get_samples_per_frame(byte *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *param_1;
  if ((char)bVar2 < '\0') {
    return (param_2 << (ulong)(bVar2 >> 3 & 3)) / 400;
  }
  if ((~bVar2 & 0x60) == 0) {
    iVar1 = param_2 / 100;
    if ((bVar2 & 8) != 0) {
      iVar1 = param_2 / 0x32;
    }
    return iVar1;
  }
  uVar3 = bVar2 >> 3 & 3;
  iVar1 = (param_2 << (ulong)uVar3) / 100;
  if (uVar3 == 3) {
    iVar1 = (param_2 * 0x3c) / 1000;
  }
  return iVar1;
}


