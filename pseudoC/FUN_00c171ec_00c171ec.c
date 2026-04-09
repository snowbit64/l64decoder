// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c171ec
// Entry Point: 00c171ec
// Size: 216 bytes
// Signature: undefined FUN_00c171ec(void)


void FUN_00c171ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    *puVar2 = *param_2;
    param_1[1] = (long)(puVar2 + 1);
  }
  else {
    lVar9 = (long)puVar2 - *param_1 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)(undefined8 *)param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = SHC_PoolAllocator::allocate((SHC_PoolAllocator *)param_1[3],uVar1 << 3);
    }
    puVar2 = (undefined8 *)(lVar4 + lVar9 * 8);
    *puVar2 = *param_2;
    puVar3 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    puVar7 = puVar2;
    while (puVar8 != puVar3) {
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar8;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar4 + uVar1 * 8;
  }
  return;
}


