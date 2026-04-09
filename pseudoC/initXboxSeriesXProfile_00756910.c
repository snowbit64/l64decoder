// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initXboxSeriesXProfile
// Entry Point: 00756910
// Size: 272 bytes
// Signature: undefined __thiscall initXboxSeriesXProfile(HardwareScalability * this, bool param_1)


/* HardwareScalability::initXboxSeriesXProfile(bool) */

void __thiscall HardwareScalability::initXboxSeriesXProfile(HardwareScalability *this,bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  this[0x11] = (HardwareScalability)0x0;
  *(undefined4 *)(this + 0x18) = 3;
  this[0x1c] = (HardwareScalability)0x1;
  *(undefined8 *)(this + 0x78) = 0x100000003;
  *(undefined8 *)(this + 0x70) = 0x3f80000000000005;
  *(undefined8 *)(this + 0x58) = 0x500000010;
  *(undefined8 *)(this + 0x50) = 0x80000000001;
  *(undefined8 *)(this + 0x68) = 0x400000001;
  *(undefined8 *)(this + 0x60) = 3;
  *(undefined8 *)(this + 0x48) = 0x240000000;
  *(undefined8 *)(this + 0x40) = 0x408000003f400000;
  *(undefined8 *)(this + 0x28) = 0x3fa666663fa66666;
  *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x38) = 0x13fcccccd;
  *(undefined8 *)(this + 0x30) = 0x3fcccccd40000000;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0x500000001;
  *(undefined8 *)(this + 0x98) = 0x1003f800000;
  *(undefined8 *)(this + 0x90) = 4;
  *(undefined8 *)(this + 0x7c) = 0x100000001;
  *(undefined8 *)(this + 200) = 0x100000000;
  *(undefined8 *)(this + 0xc0) = 2;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0x3f800000459c4000;
  *(undefined8 *)(this + 0xa8) = 0x500000013;
  *(undefined8 *)(this + 0xa0) = 0x2000000004;
  *(undefined8 *)(this + 0xb8) = 0x3f00000000000100;
  *(undefined8 *)(this + 0xb0) = 0x400010101;
  *(undefined8 *)(this + 0xe0) = 0;
  if (param_1) {
    uVar3 = 0x3fcccccd;
    uVar1 = 0xf;
    uVar4 = 0x87000000f00;
    uVar2 = 3;
  }
  else {
    uVar3 = 0x3f99999a;
    *(undefined4 *)(this + 0x88) = 1;
    *(undefined8 *)(this + 0x5c) = 0x200000003;
    uVar4 = 0x5a000000a00;
    uVar2 = 2;
    uVar1 = 8;
    *(undefined4 *)(this + 0x34) = 0x3f99999a;
    *(undefined8 *)(this + 0x70) = 0x3f3504f300000004;
    *(undefined8 *)(this + 0x2c) = 0x3fb333333f8ccccd;
  }
  *(undefined8 *)(this + 8) = uVar4;
  uVar4 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xb4) = uVar2;
  *(undefined4 *)(this + 0x14) = 3;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x38) = uVar3;
  this[0xb1] = (HardwareScalability)0x1;
  *(undefined4 *)(this + 0x78) = 3;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined4 *)this = 4;
  return;
}


