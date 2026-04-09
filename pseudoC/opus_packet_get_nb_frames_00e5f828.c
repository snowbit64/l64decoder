// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_get_nb_frames
// Entry Point: 00e5f828
// Size: 80 bytes
// Signature: undefined opus_packet_get_nb_frames(void)


uint opus_packet_get_nb_frames(byte *param_1,uint param_2)

{
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((*param_1 & 3) == 0) {
    return 1;
  }
  if ((*param_1 & 3) != 3) {
    return 2;
  }
  if (param_2 < 2) {
    return 0xfffffffc;
  }
  return param_1[1] & 0x3f;
}


