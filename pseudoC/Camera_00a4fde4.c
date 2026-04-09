// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Camera
// Entry Point: 00a4fde4
// Size: 144 bytes
// Signature: undefined __thiscall Camera(Camera * this, char * param_1, float param_2, float param_3, float param_4, bool param_5, float param_6, uint param_7)


/* Camera::Camera(char const*, float, float, float, bool, float, unsigned int) */

void __thiscall
Camera::Camera(Camera *this,char *param_1,float param_2,float param_3,float param_4,bool param_5,
              float param_6,uint param_7)

{
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(float *)(this + 0x15c) = param_4;
  this[0x16c] = (Camera)param_5;
  *(float *)(this + 0x168) = param_6;
  *(short *)(this + 0x16e) = (short)param_7;
  *(float *)(this + 0x154) = param_2;
  *(undefined ***)this = &PTR__Camera_00fe35b8;
  *(float *)(this + 0x158) = param_3;
  *(undefined8 *)(this + 0x160) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x8000;
  this[0x16d] = (Camera)!param_5;
  return;
}


