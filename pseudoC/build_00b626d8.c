// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: build
// Entry Point: 00b626d8
// Size: 48 bytes
// Signature: undefined __thiscall build(BoundingVolumeFactory * this, uchar * param_1, uint param_2, uint param_3)


/* BoundingVolumeFactory::build(unsigned char const*, unsigned int, unsigned int) */

void __thiscall
BoundingVolumeFactory::build(BoundingVolumeFactory *this,uchar *param_1,uint param_2,uint param_3)

{
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xd8) = 0xbf800000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(BoundingVolumeFactory **)(this + 0xd0) = this + 0x8c;
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(this + 0xf8);
  pivotMB(this,param_1,param_1 + param_3 * param_2,param_3);
  return;
}


