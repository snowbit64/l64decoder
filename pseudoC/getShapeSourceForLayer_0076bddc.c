// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShapeSourceForLayer
// Entry Point: 0076bddc
// Size: 108 bytes
// Signature: undefined __thiscall getShapeSourceForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getShapeSourceForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getShapeSourceForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar2 == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    uVar3 = 6;
    lVar1 = lVar2 + 0x31;
    if ((*(byte *)(lVar2 + 0x30) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x40);
    }
    *(long *)(param_1 + 0x100) = lVar1;
    *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  }
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  return;
}


