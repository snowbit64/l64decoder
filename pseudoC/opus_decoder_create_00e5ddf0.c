// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decoder_create
// Entry Point: 00e5ddf0
// Size: 344 bytes
// Signature: undefined opus_decoder_create(void)


void * opus_decoder_create(int param_1,int param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 < 16000) {
    if ((param_1 == 8000) || (param_1 == 12000)) goto LAB_00e5de6c;
LAB_00e5de78:
    if (param_3 == (int *)0x0) {
LAB_00e5df30:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return (void *)0x0;
      }
      goto LAB_00e5df44;
    }
    iVar2 = -1;
LAB_00e5defc:
    __ptr = (void *)0x0;
    *param_3 = iVar2;
  }
  else {
    if ((param_1 != 16000) && ((param_1 != 48000 && (param_1 != 24000)))) goto LAB_00e5de78;
LAB_00e5de6c:
    if (param_2 - 3U < 0xfffffffe) goto LAB_00e5de78;
    iVar2 = silk_Get_Decoder_Size(&local_4c);
    if (iVar2 != 0) {
      __ptr = malloc(0);
      if (__ptr != (void *)0x0) goto LAB_00e5de9c;
LAB_00e5def4:
      if (param_3 == (int *)0x0) goto LAB_00e5df30;
      iVar2 = -7;
      goto LAB_00e5defc;
    }
    local_4c = local_4c + 7 & 0xfffffff8;
    iVar2 = celt_decoder_get_size(param_2);
    __ptr = malloc((long)(int)(iVar2 + local_4c + 0x50));
    if (__ptr == (void *)0x0) goto LAB_00e5def4;
LAB_00e5de9c:
    iVar2 = opus_decoder_init(__ptr,param_1,param_2);
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    if (iVar2 != 0) {
      free(__ptr);
      goto LAB_00e5df30;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return __ptr;
  }
LAB_00e5df44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


