// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 00a51c58
// Size: 76 bytes
// Signature: undefined __thiscall preRender(GsShape * this, RenderArgs * param_1)


/* GsShape::preRender(RenderArgs const*) const */

void __thiscall GsShape::preRender(GsShape *this,RenderArgs *param_1)

{
  long *plVar1;
  SkinningInfo *this_00;
  
  plVar1 = *(long **)(this + 0x170);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,this + 0xb8);
  }
  this_00 = *(SkinningInfo **)(this + 0x1f8);
  if (this_00 != (SkinningInfo *)0x0) {
    SkinningInfo::getSkinningDualQuats(this_00,*(float **)(this_00 + 0x10));
    return;
  }
  return;
}


