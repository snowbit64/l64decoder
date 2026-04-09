// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellSize
// Entry Point: 0076bb84
// Size: 20 bytes
// Signature: undefined __thiscall getCellSize(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getCellSize(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getCellSize
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


