// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlocksPerUnitForState
// Entry Point: 0076c048
// Size: 96 bytes
// Signature: undefined __thiscall getBlocksPerUnitForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getBlocksPerUnitForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getBlocksPerUnitForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  else {
    uVar2 = 4;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x34);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  return;
}


