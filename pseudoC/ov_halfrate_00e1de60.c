// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_halfrate
// Entry Point: 00e1de60
// Size: 352 bytes
// Signature: undefined ov_halfrate(void)


undefined8 ov_halfrate(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0xffffff7d;
  }
  if (3 < *(int *)(param_1 + 0x80)) {
    vorbis_dsp_clear(param_1 + 0x240);
    vorbis_block_clear(param_1 + 0x2d0);
    *(undefined4 *)(param_1 + 0x80) = 3;
    if (-1 < *(long *)(param_1 + 0x78)) {
      *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
      ov_pcm_seek(param_1);
    }
  }
  if (*(int *)(param_1 + 0x40) < 1) {
    return 0;
  }
  lVar2 = 0;
  lVar3 = 0;
  while (iVar1 = vorbis_synthesis_halfrate(*(long *)(param_1 + 0x68) + lVar2,param_2), iVar1 == 0) {
    lVar3 = lVar3 + 1;
    lVar2 = lVar2 + 0x38;
    if (*(int *)(param_1 + 0x40) <= lVar3) {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 0xffffff7d;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    if (3 < *(int *)(param_1 + 0x80)) {
      vorbis_dsp_clear(param_1 + 0x240);
      vorbis_block_clear(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x80) = 3;
      if (-1 < *(long *)(param_1 + 0x78)) {
        *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
        ov_pcm_seek(param_1);
      }
    }
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        iVar1 = vorbis_synthesis_halfrate(*(long *)(param_1 + 0x68) + lVar2,0);
        if (iVar1 != 0) {
          return 0xffffff7d;
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x38;
      } while (lVar3 < *(int *)(param_1 + 0x40));
      return 0xffffff7d;
    }
    return 0xffffff7d;
  }
  return 0xffffff7d;
}


