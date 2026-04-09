// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNameForLayer
// Entry Point: 0076bd28
// Size: 104 bytes
// Signature: undefined __thiscall getNameForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getNameForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getNameForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)FoliageSystemDesc::getLayer
                             ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                              true);
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


