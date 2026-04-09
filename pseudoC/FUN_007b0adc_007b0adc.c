// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0adc
// Entry Point: 007b0adc
// Size: 136 bytes
// Signature: undefined FUN_007b0adc(void)


void FUN_007b0adc(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
  }
  else {
    uVar2 = 4;
    param_2[0x40] = *(uint *)(lVar1 + 0x2c);
    param_2[0x44] = *(uint *)(lVar1 + 0x30);
    param_2[0x48] = *(uint *)(lVar1 + 0x34);
    param_2[0x4c] = *(uint *)(lVar1 + 0x38);
  }
  param_2[0x42] = uVar2;
  param_2[0x46] = uVar2;
  param_2[0x4a] = uVar2;
  param_2[0x4e] = uVar2;
  return;
}


