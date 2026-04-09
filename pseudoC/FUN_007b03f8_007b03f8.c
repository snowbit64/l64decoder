// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b03f8
// Entry Point: 007b03f8
// Size: 104 bytes
// Signature: undefined FUN_007b03f8(void)


void FUN_007b03f8(FoliageSystemDesc *param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (pbVar1 == (byte *)0x0) {
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    pbVar3 = *(byte **)(pbVar1 + 0x10);
    uVar2 = 6;
    if ((*pbVar1 & 1) == 0) {
      pbVar3 = pbVar1 + 1;
    }
    *(byte **)(param_2 + 0x40) = pbVar3;
    *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
  }
  param_2[0x42] = uVar2;
  return;
}


