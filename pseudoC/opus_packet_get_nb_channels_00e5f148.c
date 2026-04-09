// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_get_nb_channels
// Entry Point: 00e5f148
// Size: 20 bytes
// Signature: undefined opus_packet_get_nb_channels(void)


undefined4 opus_packet_get_nb_channels(byte *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*param_1 & 4) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}


