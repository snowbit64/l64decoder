// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_analysis_init
// Entry Point: 00e04930
// Size: 144 bytes
// Signature: undefined vorbis_analysis_init(void)


undefined8 vorbis_analysis_init(long param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  
  iVar1 = FUN_00e049c0(param_1,param_2,1);
  if (iVar1 != 0) {
    return 1;
  }
  ppvVar3 = *(void ***)(param_1 + 0x88);
  pvVar2 = (void *)_vp_global_look(param_2);
  ppvVar3[0xe] = pvVar2;
  pvVar2 = calloc(1,0x118);
  *ppvVar3 = pvVar2;
  _ve_envelope_init(pvVar2,param_2);
  vorbis_bitrate_init(param_2,ppvVar3 + 0x12);
  *(undefined8 *)(param_1 + 0x60) = 3;
  return 0;
}


