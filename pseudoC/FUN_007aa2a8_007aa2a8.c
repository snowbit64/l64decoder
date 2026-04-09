// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa2a8
// Entry Point: 007aa2a8
// Size: 132 bytes
// Signature: undefined FUN_007aa2a8(void)


void FUN_007aa2a8(GsShape *param_1,uint *param_2)

{
  long lVar1;
  RawTransformGroup *pRVar2;
  uint local_34;
  RawTransformGroup **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GsShape::getBindBones(param_1,&local_30,&local_34);
  if (*param_2 < local_34) {
    pRVar2 = local_30[(int)*param_2];
    if (pRVar2 != (RawTransformGroup *)0x0) {
      pRVar2 = (RawTransformGroup *)(ulong)*(uint *)(pRVar2 + 0x18);
    }
  }
  else {
    pRVar2 = (RawTransformGroup *)0x0;
  }
  param_2[0x40] = (uint)pRVar2;
  param_2[0x42] = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


