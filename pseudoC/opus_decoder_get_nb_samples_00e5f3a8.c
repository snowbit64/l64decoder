// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decoder_get_nb_samples
// Entry Point: 00e5f3a8
// Size: 160 bytes
// Signature: undefined opus_decoder_get_nb_samples(void)


int opus_decoder_get_nb_samples(long param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_3 < 1) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*param_2 & 3) == 0) {
    uVar4 = 1;
  }
  else if ((*param_2 & 3) == 3) {
    if (param_3 < 2) {
      return -4;
    }
    uVar4 = param_2[1] & 0x3f;
  }
  else {
    uVar4 = 2;
  }
  iVar3 = opus_packet_get_samples_per_frame(param_2,iVar2);
  iVar1 = -4;
  if ((int)(iVar3 * uVar4 * 0x19) <= iVar2 * 3) {
    iVar1 = iVar3 * uVar4;
  }
  return iVar1;
}


