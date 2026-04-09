// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityChannelsForLayer
// Entry Point: 0076be48
// Size: 92 bytes
// Signature: undefined __thiscall getDensityChannelsForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getDensityChannelsForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getDensityChannelsForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar1 + 0x50);
  }
  uVar2 = (uint)(lVar1 != 0);
  *(uint *)(param_1 + 0x108) = uVar2;
  *(uint *)(param_1 + 0x118) = uVar2;
  return;
}


