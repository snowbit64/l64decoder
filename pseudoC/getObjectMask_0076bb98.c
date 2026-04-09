// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getObjectMask
// Entry Point: 0076bb98
// Size: 20 bytes
// Signature: undefined __thiscall getObjectMask(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getObjectMask(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getObjectMask
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


