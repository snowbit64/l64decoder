// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_free
// Entry Point: 00dae2b8
// Size: 208 bytes
// Signature: undefined png_image_free(void)


void png_image_free(long **param_1)

{
  long lVar1;
  FILE *__stream;
  long lVar2;
  long *plVar3;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  ulong uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_1 != (long **)0x0) && (plVar3 = *param_1, plVar3 != (long *)0x0)) && (plVar3[2] == 0))
  {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      if ((*(byte *)(plVar3 + 5) >> 1 & 1) != 0) {
        __stream = *(FILE **)(lVar2 + 0x140);
        *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) & 0xfd;
        if (__stream != (FILE *)0x0) {
          *(undefined8 *)(lVar2 + 0x140) = 0;
          fclose(__stream);
        }
      }
      lStack_68 = plVar3[1];
      local_70 = *plVar3;
      lStack_58 = plVar3[3];
      lStack_60 = plVar3[2];
      uStack_48 = plVar3[5];
      local_50 = plVar3[4];
      *param_1 = &local_70;
      png_free(local_70,plVar3);
      if ((uStack_48 & 1) == 0) {
        png_destroy_read_struct(&local_70,(ulong)&local_70 | 8,0);
      }
      else {
        png_destroy_write_struct(&local_70,(ulong)&local_70 | 8);
      }
    }
    *param_1 = (long *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


