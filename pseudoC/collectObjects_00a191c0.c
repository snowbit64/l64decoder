// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectObjects
// Entry Point: 00a191c0
// Size: 104 bytes
// Signature: undefined __thiscall collectObjects(RenderList * this, RenderStats * param_1)


/* RenderList::collectObjects(RenderStats&) */

void __thiscall RenderList::collectObjects(RenderList *this,RenderStats *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(this + 0x28);
  uVar2 = *(uint *)(lVar1 + 0x3a8);
  if ((uVar2 & 1) != 0) {
    collectLights(this,(Vector3 *)(lVar1 + 900),param_1);
    lVar1 = *(long *)(this + 0x28);
    uVar2 = *(uint *)(lVar1 + 0x3a8);
  }
  if ((uVar2 >> 9 & 1) == 0) {
    collectShapes(this,(Vector3 *)(lVar1 + 900),param_1);
    return;
  }
  collectDecals(this,param_1);
  return;
}


