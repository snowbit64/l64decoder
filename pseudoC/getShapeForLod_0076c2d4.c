// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShapeForLod
// Entry Point: 0076c2d4
// Size: 120 bytes
// Signature: undefined __thiscall getShapeForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getShapeForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getShapeForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar2 == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    uVar3 = 6;
    lVar1 = lVar2 + 9;
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x18);
    }
    *(long *)(param_1 + 0x100) = lVar1;
    *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  }
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  return;
}


