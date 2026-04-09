// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShapeForState
// Entry Point: 0076b970
// Size: 72 bytes
// Signature: undefined __thiscall createShapeForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::createShapeForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::createShapeForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  State *this_00;
  
  this_00 = (State *)FoliageSystemDesc::getState
                               ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10)
                                ,*(uint *)(param_1 + 0x20),true);
  if (this_00 != (State *)0x0) {
    uVar1 = FoliageSystemDesc::State::createShape(this_00,true);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  return;
}


