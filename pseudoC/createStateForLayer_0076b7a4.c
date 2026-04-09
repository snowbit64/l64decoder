// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStateForLayer
// Entry Point: 0076b7a4
// Size: 68 bytes
// Signature: undefined __thiscall createStateForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::createStateForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::createStateForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  Layer *this_00;
  
  this_00 = (Layer *)FoliageSystemDesc::getLayer
                               ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10)
                                ,true);
  if (this_00 != (Layer *)0x0) {
    uVar1 = FoliageSystemDesc::Layer::createState(this_00,true);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  return;
}


