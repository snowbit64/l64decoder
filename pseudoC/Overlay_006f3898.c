// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Overlay
// Entry Point: 006f3898
// Size: 192 bytes
// Signature: undefined __thiscall Overlay(Overlay * this, char * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9)


/* Overlay::Overlay(char const*, float, float, float, float, float, float, float, float) */

void __thiscall
Overlay::Overlay(Overlay *this,char *param_1,float param_2,float param_3,float param_4,float param_5
                ,float param_6,float param_7,float param_8,float param_9)

{
  Entity::Entity((Entity *)this,param_1,true);
  *(float *)(this + 0x20) = param_4;
  *(float *)(this + 0x24) = param_5;
  *(float *)(this + 0x30) = param_6;
  *(float *)(this + 0x34) = param_7;
  *(float *)(this + 0x38) = param_6;
  *(float *)(this + 0x3c) = param_9;
  *(undefined ***)this = &PTR__Overlay_00fd9800;
  *(float *)(this + 0x40) = param_8;
  *(float *)(this + 0x44) = param_7;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x200000000;
  *(float *)(this + 0x48) = param_8;
  *(float *)(this + 0x4c) = param_9;
  *(float *)(this + 0x28) = param_2;
  *(float *)(this + 0x2c) = param_3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x68) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


