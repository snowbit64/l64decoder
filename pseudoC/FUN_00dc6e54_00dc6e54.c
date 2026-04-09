// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc6e54
// Entry Point: 00dc6e54
// Size: 88 bytes
// Signature: undefined FUN_00dc6e54(void)


void FUN_00dc6e54(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x140);
  uVar1 = *(ulong *)(lVar2 + 0x50);
  if (!CARRY8(uVar1,param_3)) {
    if (param_3 != 0) {
      if (uVar1 + param_3 <= *(ulong *)(lVar2 + 0x48)) {
        memcpy((void *)(*(long *)(lVar2 + 0x40) + uVar1),param_2,param_3);
      }
      *(ulong *)(lVar2 + 0x50) = uVar1 + param_3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"png_image_write_to_memory: PNG too big");
}


