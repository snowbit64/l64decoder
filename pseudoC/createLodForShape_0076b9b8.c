// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLodForShape
// Entry Point: 0076b9b8
// Size: 76 bytes
// Signature: undefined __thiscall createLodForShape(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::createLodForShape(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::createLodForShape
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  Shape *this_00;
  
  this_00 = (Shape *)FoliageSystemDesc::getShape
                               ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10)
                                ,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),true);
  if (this_00 != (Shape *)0x0) {
    uVar1 = FoliageSystemDesc::Shape::createLod(this_00,true);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  return;
}


