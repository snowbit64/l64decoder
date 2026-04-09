// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamedSample
// Entry Point: 008bfa5c
// Size: 100 bytes
// Signature: undefined __thiscall StreamedSample(StreamedSample * this, char * param_1, bool param_2)


/* StreamedSample::StreamedSample(char const*, bool) */

void __thiscall StreamedSample::StreamedSample(StreamedSample *this,char *param_1,bool param_2)

{
  Entity::Entity((Entity *)this,param_1,true);
  this[0x28] = (StreamedSample)0x0;
  this[0x29] = (StreamedSample)param_2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__StreamedSample_00fddd78;
  *(undefined ***)(this + 0x20) = &PTR__StreamedSample_00fdddb0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x20000000000;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  return;
}


