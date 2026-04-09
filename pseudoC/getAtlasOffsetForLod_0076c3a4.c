// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAtlasOffsetForLod
// Entry Point: 0076c3a4
// Size: 104 bytes
// Signature: undefined __thiscall getAtlasOffsetForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getAtlasOffsetForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getAtlasOffsetForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    uVar2 = 4;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  return;
}


