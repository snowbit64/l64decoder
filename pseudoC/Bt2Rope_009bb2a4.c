// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2Rope
// Entry Point: 009bb2a4
// Size: 52 bytes
// Signature: undefined __thiscall Bt2Rope(Bt2Rope * this, uint param_1, TransformGroup * * param_2, float param_3, float param_4, float param_5, uint param_6)


/* Bt2Rope::Bt2Rope(unsigned int, TransformGroup**, float, float, float, unsigned int) */

void __thiscall
Bt2Rope::Bt2Rope(Bt2Rope *this,uint param_1,TransformGroup **param_2,float param_3,float param_4,
                float param_5,uint param_6)

{
  *(undefined8 *)this = 0;
  *(uint *)(this + 8) = param_1;
  *(TransformGroup ***)(this + 0x10) = param_2;
  *(float *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(float *)(this + 0x24) = param_4;
  *(float *)(this + 0x28) = param_5;
  *(uint *)(this + 0x2c) = param_6;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (Bt2Rope)((byte)this[0x34] & 0xfe);
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


