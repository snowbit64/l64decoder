// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae134
// Entry Point: 007ae134
// Size: 204 bytes
// Signature: undefined FUN_007ae134(void)


void FUN_007ae134(float *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float local_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_2 + 0x118) = 1;
  *(undefined4 *)(param_2 + 0x120) = 0;
  *(undefined4 *)(param_2 + 0x128) = 4;
  if (((ulong)*(TransformGroup **)(param_1 + 10) | (ulong)*(TransformGroup **)(param_1 + 0xc)) != 0)
  {
    lVar2 = TensionBeltGeometryUtil::create
                      (*param_1,param_1[1],param_1[3],param_1[2],(vector *)(param_1 + 4),
                       *(TransformGroup **)(param_1 + 10),*(TransformGroup **)(param_1 + 0xc),
                       (vector *)(param_1 + 0x12),*(GsMaterial **)(param_1 + 0x10),
                       *(TransformGroup **)(param_1 + 0xe),(vector *)(param_1 + 0x18),&local_2c,
                       &local_30);
    if (lVar2 != 0) {
      *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(param_2 + 0x108) = 1;
      *(uint *)(param_2 + 0x110) = local_2c;
      *(undefined4 *)(param_2 + 0x118) = 1;
      *(float *)(param_2 + 0x120) = local_30;
      *(undefined4 *)(param_2 + 0x128) = 4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


