// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d774ec
// Entry Point: 00d774ec
// Size: 164 bytes
// Signature: undefined FUN_00d774ec(void)


void FUN_00d774ec(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x228);
  uVar2 = *(uint *)(lVar3 + 100);
  if (uVar2 <= *(uint *)(lVar3 + 0x60)) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x230) + 0x18))(param_1,lVar3 + 0x10);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(uint *)(lVar3 + 100);
    *(undefined4 *)(lVar3 + 0x60) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00d77578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x238) + 8))
            (param_1,lVar3 + 0x10,(uint *)(lVar3 + 0x60),uVar2,param_2,param_3,param_4);
  return;
}


