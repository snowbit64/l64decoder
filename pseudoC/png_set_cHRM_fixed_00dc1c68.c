// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_cHRM_fixed
// Entry Point: 00dc1c68
// Size: 156 bytes
// Signature: undefined png_set_cHRM_fixed(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10)


void png_set_cHRM_fixed(long param_1,long param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  long lVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    local_48 = param_9;
    uStack_44 = param_10;
    local_58 = param_5;
    uStack_54 = param_6;
    local_50 = param_7;
    uStack_4c = param_8;
    local_40 = param_3;
    uStack_3c = param_4;
    iVar2 = png_colorspace_set_chromaticities(param_1,param_2 + 0x34,&local_58,2);
    if (iVar2 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


