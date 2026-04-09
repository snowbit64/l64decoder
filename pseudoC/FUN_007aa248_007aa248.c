// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa248
// Entry Point: 007aa248
// Size: 96 bytes
// Signature: undefined FUN_007aa248(void)


void FUN_007aa248(GsShape *param_1,long param_2)

{
  long lVar1;
  uint local_34;
  RawTransformGroup **ppRStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GsShape::getBindBones(param_1,&ppRStack_30,&local_34);
  *(uint *)(param_2 + 0x100) = local_34;
  *(undefined4 *)(param_2 + 0x108) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


