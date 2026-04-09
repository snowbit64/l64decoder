// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0a74
// Entry Point: 007b0a74
// Size: 104 bytes
// Signature: undefined FUN_007b0a74(void)


void FUN_007b0a74(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
  }
  else {
    uVar2 = 4;
    param_2[0x40] = *(uint *)(lVar1 + 0x24);
    param_2[0x44] = *(uint *)(lVar1 + 0x28);
  }
  param_2[0x42] = uVar2;
  param_2[0x46] = uVar2;
  return;
}


