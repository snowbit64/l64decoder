// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFruitTypeFromXml
// Entry Point: 0076b5dc
// Size: 60 bytes
// Signature: undefined __thiscall loadFruitTypeFromXml(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::loadFruitTypeFromXml(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::loadFruitTypeFromXml
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  byte bVar1;
  
  bVar1 = FoliageSystemDesc::loadFruitTypeFromXml
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(char **)(param_1 + 0x10),
                     *(char **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x108) = 3;
  param_1[0x100] = (MethodInvocation)(bVar1 & 1);
  return;
}


