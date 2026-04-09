// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_get_nb_samples
// Entry Point: 00e5f878
// Size: 156 bytes
// Signature: undefined opus_packet_get_nb_samples(void)


int opus_packet_get_nb_samples(byte *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int)param_2 < 1) {
    return -1;
  }
  if ((*param_1 & 3) == 0) {
    uVar3 = 1;
  }
  else if ((*param_1 & 3) == 3) {
    if (param_2 < 2) {
      return -4;
    }
    uVar3 = param_1[1] & 0x3f;
  }
  else {
    uVar3 = 2;
  }
  iVar2 = opus_packet_get_samples_per_frame(param_1,param_3);
  iVar1 = -4;
  if ((int)(iVar2 * uVar3 * 0x19) <= param_3 * 3) {
    iVar1 = iVar2 * uVar3;
  }
  return iVar1;
}


