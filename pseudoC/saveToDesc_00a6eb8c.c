// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 00a6eb8c
// Size: 24 bytes
// Signature: undefined __thiscall saveToDesc(LocalGeometryTransformGroup * this, LocalGeometryTransformGroupDesc * param_1)


/* LocalGeometryTransformGroup::saveToDesc(LocalGeometryTransformGroupDesc&) */

void __thiscall
LocalGeometryTransformGroup::saveToDesc
          (LocalGeometryTransformGroup *this,LocalGeometryTransformGroupDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(this + 0x120);
  uVar2 = *(undefined4 *)(this + 0x16c);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x160);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}


