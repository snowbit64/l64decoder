// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RawTransformGroup
// Entry Point: 00a5a5c0
// Size: 188 bytes
// Signature: undefined __thiscall RawTransformGroup(RawTransformGroup * this, char * param_1)


/* RawTransformGroup::RawTransformGroup(char const*) */

void __thiscall RawTransformGroup::RawTransformGroup(RawTransformGroup *this,char *param_1)

{
  undefined8 *puVar1;
  
  ScenegraphNode::ScenegraphNode((ScenegraphNode *)this,param_1);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0x3f800000;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(this + 0xa0) = 0x3f800000;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)this = &PTR__RawTransformGroup_00fe3950;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x10;
  *(undefined8 *)(this + 0xb0) = 0x3f80000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x100;
                    /* try { // try from 00a5a62c to 00a5a633 has its CatchHandler @ 00a5a67c */
  puVar1 = (undefined8 *)operator_new(0x10);
  *(undefined8 **)(this + 0x108) = puVar1;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined2 *)(this + 300) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0x49742400;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__PhysicsObject_00fe0d88;
  *(undefined8 *)(this + 0x124) = 0x49742400;
  *(undefined4 *)(this + 0x120) = 0xff00ff;
  return;
}


