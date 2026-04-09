// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encoder_create
// Entry Point: 00e7d274
// Size: 364 bytes
// Signature: undefined opus_encoder_create(void)


void * opus_encoder_create(int param_1,int param_2,int param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 < 16000) {
    if ((param_1 == 8000) || (param_1 == 12000)) goto LAB_00e7d2f4;
LAB_00e7d300:
    if (param_4 == (int *)0x0) {
LAB_00e7d3ac:
      __ptr = (void *)0x0;
      goto LAB_00e7d3b0;
    }
    iVar2 = -1;
  }
  else {
    if ((param_1 != 16000) && ((param_1 != 48000 && (param_1 != 24000)))) goto LAB_00e7d300;
LAB_00e7d2f4:
    if ((param_2 - 3U < 0xfffffffe) || ((3 < param_3 - 0x800U || (param_3 - 0x800U == 2))))
    goto LAB_00e7d300;
    iVar2 = silk_Get_Encoder_Size(&local_4c);
    if (iVar2 != 0) {
      __ptr = malloc(0);
      if (__ptr == (void *)0x0) goto LAB_00e7d3a0;
LAB_00e7d340:
      iVar2 = opus_encoder_init(__ptr,param_1,param_2,param_3);
      if (param_4 != (int *)0x0) {
        *param_4 = iVar2;
      }
      if (iVar2 == 0) goto LAB_00e7d3b0;
      free(__ptr);
      goto LAB_00e7d3ac;
    }
    local_4c = local_4c + 7 & 0xfffffff8;
    iVar2 = celt_encoder_get_size(param_2);
    __ptr = malloc((long)(int)(iVar2 + local_4c + 0x3f60));
    if (__ptr != (void *)0x0) goto LAB_00e7d340;
LAB_00e7d3a0:
    if (param_4 == (int *)0x0) goto LAB_00e7d3ac;
    iVar2 = -7;
  }
  __ptr = (void *)0x0;
  *param_4 = iVar2;
LAB_00e7d3b0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __ptr;
}


