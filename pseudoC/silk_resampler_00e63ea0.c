// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler
// Entry Point: 00e63ea0
// Size: 352 bytes
// Signature: undefined silk_resampler(void)


undefined8 silk_resampler(long param_1,void *param_2,void *param_3,int param_4)

{
  void *__src;
  int iVar1;
  uint uVar2;
  long lVar3;
  
  __src = (void *)(param_1 + 0xa8);
  uVar2 = *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x124);
  lVar3 = (long)(int)uVar2;
  memcpy((void *)((long)__src + (long)*(int *)(param_1 + 0x124) * 2),param_3,
         -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 == 3) {
    silk_resampler_private_down_FIR(param_1,param_2,__src,*(undefined4 *)(param_1 + 0x11c));
    silk_resampler_private_down_FIR
              (param_1,(void *)((long)param_2 + (long)*(int *)(param_1 + 0x120) * 2),
               (void *)((long)param_3 + lVar3 * 2),param_4 - *(int *)(param_1 + 0x11c));
  }
  else if (iVar1 == 2) {
    silk_resampler_private_IIR_FIR(param_1,param_2,__src,*(undefined4 *)(param_1 + 0x11c));
    silk_resampler_private_IIR_FIR
              (param_1,(void *)((long)param_2 + (long)*(int *)(param_1 + 0x120) * 2),
               (void *)((long)param_3 + lVar3 * 2),param_4 - *(int *)(param_1 + 0x11c));
  }
  else if (iVar1 == 1) {
    silk_resampler_private_up2_HQ_wrapper(param_1,param_2,__src,*(undefined4 *)(param_1 + 0x11c));
    silk_resampler_private_up2_HQ_wrapper
              (param_1,(void *)((long)param_2 + (long)*(int *)(param_1 + 0x120) * 2),
               (void *)((long)param_3 + lVar3 * 2),param_4 - *(int *)(param_1 + 0x11c));
  }
  else {
    memcpy(param_2,__src,(long)*(int *)(param_1 + 0x11c) << 1);
    uVar2 = param_4 - *(int *)(param_1 + 0x11c);
    memcpy((void *)((long)param_2 + (long)*(int *)(param_1 + 0x120) * 2),
           (void *)((long)param_3 + lVar3 * 2),
           -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
  }
  memcpy(__src,(void *)((long)param_3 + (long)(param_4 - *(int *)(param_1 + 0x124)) * 2),
         (long)*(int *)(param_1 + 0x124) << 1);
  return 0;
}


