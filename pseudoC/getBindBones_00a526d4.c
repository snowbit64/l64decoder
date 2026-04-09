// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBindBones
// Entry Point: 00a526d4
// Size: 44 bytes
// Signature: undefined __thiscall getBindBones(GsShape * this, RawTransformGroup * * * param_1, uint * param_2)


/* GsShape::getBindBones(RawTransformGroup**&, unsigned int&) */

void __thiscall GsShape::getBindBones(GsShape *this,RawTransformGroup ***param_1,uint *param_2)

{
  if (*(undefined8 **)(this + 0x1f8) != (undefined8 *)0x0) {
    *param_1 = (RawTransformGroup **)**(undefined8 **)(this + 0x1f8);
    *param_2 = *(uint *)(*(long *)(this + 0x1f8) + 0x20);
    return;
  }
  *param_1 = (RawTransformGroup **)0x0;
  *param_2 = 0;
  return;
}


