// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLayer
// Entry Point: 0076b6b0
// Size: 72 bytes
// Signature: undefined __thiscall createLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::createLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::createLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  MultiLayer *this_00;
  
  this_00 = (MultiLayer *)
            FoliageSystemDesc::getMultiLayer((FoliageSystemDesc *)this,*(uint *)param_1,true);
  if (this_00 != (MultiLayer *)0x0) {
    uVar1 = FoliageSystemDesc::MultiLayer::createLayer
                      (this_00,*(uint *)(param_1 + 0x10),*(char **)(param_1 + 0x20),true);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  return;
}


