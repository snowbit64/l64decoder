// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afe00
// Entry Point: 007afe00
// Size: 148 bytes
// Signature: undefined FUN_007afe00(void)


void FUN_007afe00(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  MultiLayer *this;
  uint uVar2;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (MultiLayer *)FoliageSystemDesc::getMultiLayer(param_1,*param_2,true);
  if (this == (MultiLayer *)0x0) {
    *(undefined *)(param_2 + 0x40) = 0;
    uVar2 = 3;
    param_2[0x46] = 1;
    param_2[0x44] = 0xffffffff;
  }
  else {
    FoliageSystemDesc::MultiLayer::allocateTypeIndex(this,&local_3c,true);
    uVar2 = 2;
    param_2[0x40] = local_3c;
  }
  param_2[0x42] = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


