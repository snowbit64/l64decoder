// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNameForState
// Entry Point: 0076bf54
// Size: 108 bytes
// Signature: undefined __thiscall getNameForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getNameForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getNameForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)FoliageSystemDesc::getState
                             ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                              *(uint *)(param_1 + 0x20),true);
  if (pbVar1 == (byte *)0x0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    pbVar3 = *(byte **)(pbVar1 + 0x10);
    uVar2 = 6;
    if ((*pbVar1 & 1) == 0) {
      pbVar3 = pbVar1 + 1;
    }
    *(byte **)(param_1 + 0x100) = pbVar3;
    *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  }
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  return;
}


