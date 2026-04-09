// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d0e0
// Entry Point: 0078d0e0
// Size: 112 bytes
// Signature: undefined FUN_0078d0e0(void)


void FUN_0078d0e0(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = EnvUtil::getTimeAt(*param_1,param_1[4],param_1[8],param_1[0xc],param_1[0x10],param_1[0x14]
                            );
  lVar2 = EnvUtil::getTimeAt(param_1[0x18],param_1[0x1c],param_1[0x20],param_1[0x24],param_1[0x28],
                             param_1[0x2c]);
  uVar3 = EnvUtil::getTimeDiffSeconds(lVar1,lVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  param_1[0x42] = 5;
  return;
}


