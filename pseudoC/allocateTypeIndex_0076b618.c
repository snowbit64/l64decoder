// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateTypeIndex
// Entry Point: 0076b618
// Size: 152 bytes
// Signature: undefined __thiscall allocateTypeIndex(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::allocateTypeIndex(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::allocateTypeIndex
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  MultiLayer *this_00;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (MultiLayer *)
            FoliageSystemDesc::getMultiLayer((FoliageSystemDesc *)this,*(uint *)param_1,true);
  if (this_00 == (MultiLayer *)0x0) {
    param_1[0x100] = (MethodInvocation)0x0;
    *(undefined4 *)(param_1 + 0x118) = 1;
    *(undefined4 *)(param_1 + 0x108) = 3;
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  }
  else {
    FoliageSystemDesc::MultiLayer::allocateTypeIndex(this_00,&local_3c,true);
    *(uint *)(param_1 + 0x100) = local_3c;
    *(undefined4 *)(param_1 + 0x108) = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


