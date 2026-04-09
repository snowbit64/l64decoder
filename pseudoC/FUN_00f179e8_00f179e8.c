// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f179e8
// Entry Point: 00f179e8
// Size: 196 bytes
// Signature: undefined FUN_00f179e8(void)


undefined * FUN_00f179e8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar3 = *(undefined **)(param_2 + 0x20);
  uVar4 = *(uint *)(param_3 + 0x10) & (-1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f) ^ 0xffffffffU);
  while( true ) {
    puVar3 = puVar3 + (long)(int)uVar4 * 0x20;
    uVar1 = *(uint *)(puVar3 + 0x1c);
    if (((uVar1 & 0xf) == 5) && (*(long *)(puVar3 + 0x10) == param_3)) break;
    uVar4 = (int)uVar1 >> 4;
    if (uVar1 < 0x10) {
      *(undefined *)(param_2 + 3) = 0;
LAB_00f17a6c:
      local_2c = 5;
      local_38 = param_3;
      puVar3 = (undefined *)FUN_00f17668(param_1,param_2,&local_38);
LAB_00f17a84:
      if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return puVar3;
    }
  }
  *(undefined *)(param_2 + 3) = 0;
  if (puVar3 == &DAT_0056fdf8) goto LAB_00f17a6c;
  goto LAB_00f17a84;
}


