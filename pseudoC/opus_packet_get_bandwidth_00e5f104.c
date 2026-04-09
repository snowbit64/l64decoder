// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_get_bandwidth
// Entry Point: 00e5f104
// Size: 68 bytes
// Signature: undefined opus_packet_get_bandwidth(void)


int opus_packet_get_bandwidth(byte *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *param_1;
  iVar3 = 0x450;
  if ((bVar2 & 0x10) != 0) {
    iVar3 = 0x451;
  }
  iVar1 = (bVar2 >> 5 & 3) + 0x44d;
  if ((~bVar2 & 0x60) == 0) {
    iVar1 = iVar3;
  }
  iVar3 = 0x44d;
  if ((bVar2 >> 5 & 3) != 0) {
    iVar3 = (bVar2 >> 5 & 3) + 0x44e;
  }
  if ((bVar2 & 0x80) != 0) {
    iVar1 = iVar3;
  }
  return iVar1;
}


