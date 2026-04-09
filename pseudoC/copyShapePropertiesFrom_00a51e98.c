// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyShapePropertiesFrom
// Entry Point: 00a51e98
// Size: 156 bytes
// Signature: undefined __thiscall copyShapePropertiesFrom(GsShape * this, GsShape * param_1)


/* GsShape::copyShapePropertiesFrom(GsShape&) */

void __thiscall GsShape::copyShapePropertiesFrom(GsShape *this,GsShape *param_1)

{
  GsMaterial **ppGVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  setShapeFlags(this,*(uint *)(param_1 + 400));
  uVar2 = (ulong)*(ushort *)(param_1 + 0x196);
  if (*(ushort *)(param_1 + 0x196) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      ppGVar1 = (GsMaterial **)(param_1 + 0x178);
      if ((int)uVar2 != 1) {
        ppGVar1 = (GsMaterial **)(*(long *)(param_1 + 0x178) + lVar4);
      }
      addMaterial(this,*ppGVar1);
      uVar2 = (ulong)*(ushort *)(param_1 + 0x196);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined8 *)(this + 0x1b8) = uVar3;
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,(TransformGroup *)param_1)
  ;
  return;
}


