// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransformGroup
// Entry Point: 00a5ca60
// Size: 96 bytes
// Signature: undefined __thiscall TransformGroup(TransformGroup * this, char * param_1)


/* TransformGroup::TransformGroup(char const*) */

void __thiscall TransformGroup::TransformGroup(TransformGroup *this,char *param_1)

{
  undefined8 uVar1;
  
  RawTransformGroup::RawTransformGroup((RawTransformGroup *)this,param_1);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = uVar1;
  *(undefined ***)this = &PTR__TransformGroup_00fe3a08;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x20;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xfffff7ff;
  return;
}


