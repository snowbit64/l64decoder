// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initXboxOneProfile
// Entry Point: 00756790
// Size: 384 bytes
// Signature: undefined __thiscall initXboxOneProfile(HardwareScalability * this, bool param_1)


/* HardwareScalability::initXboxOneProfile(bool) */

void __thiscall HardwareScalability::initXboxOneProfile(HardwareScalability *this,bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = 1;
  this[0x11] = (HardwareScalability)0x0;
  this[0x1c] = (HardwareScalability)0x1;
  if (param_1) {
    uVar1 = 2;
    *(undefined4 *)(this + 0x18) = 2;
    *(undefined8 *)(this + 0x48) = 0x13f800000;
    *(undefined8 *)(this + 0x40) = 0x400000003f59999a;
    *(undefined8 *)(this + 0x58) = 0x300000010;
    *(undefined8 *)(this + 0x50) = 0x80000000000;
    *(undefined4 *)(this + 0x5c) = 3;
    *(undefined4 *)this = 4;
    *(undefined8 *)(this + 0x28) = 0x3f8ccccd3f8ccccd;
    *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x38) = 0x13fb33333;
    *(undefined8 *)(this + 0x30) = 0x3fb333333fc00000;
    *(undefined8 *)(this + 0xa8) = 0x40000000f;
    *(undefined8 *)(this + 0xa0) = 0x2000000004;
    *(undefined8 *)(this + 0xb8) = 0x3f00000000000100;
    *(undefined8 *)(this + 0xb0) = 0x300010101;
    this[0xb3] = (HardwareScalability)0x0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0x500000001;
    *(undefined8 *)(this + 0x98) = 0x1003f800000;
    *(undefined8 *)(this + 0x90) = 4;
    *(undefined8 *)(this + 0xe0) = 0;
    uVar2 = 0x3fb33333;
    *(undefined8 *)(this + 0x68) = 0x200000001;
    *(undefined8 *)(this + 0x60) = 2;
    *(undefined8 *)(this + 0x78) = 0x100000003;
    *(undefined8 *)(this + 0x70) = 0x3f80000000000005;
    uVar3 = 0x5a000000a00;
    *(undefined8 *)(this + 200) = 0x100000000;
    *(undefined8 *)(this + 0xc0) = 1;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0x3f800000459c4000;
  }
  else {
    *(undefined4 *)(this + 0x18) = 1;
    *(undefined8 *)(this + 0x28) = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x38) = 0x3f800000;
    *(undefined8 *)(this + 0x30) = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x48) = 0x3f800000;
    *(undefined8 *)(this + 0x40) = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x58) = 0x100000004;
    *(undefined8 *)(this + 0x50) = 0x80000000000;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0x100000001;
    *(undefined4 *)(this + 100) = 0;
    *(undefined8 *)(this + 0x78) = 0x100000002;
    *(undefined8 *)(this + 0x70) = 0x3f80000000000003;
    *(undefined4 *)(this + 0x30) = 0x3f59999a;
    this[0x68] = (HardwareScalability)0x1;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0x500000001;
    *(undefined8 *)(this + 0x98) = 0x803f800000;
    *(undefined8 *)(this + 0x90) = 4;
    *(undefined4 *)(this + 0x88) = 1;
    *(undefined8 *)(this + 0x28) = 0x3f59999a3f59999a;
    *(undefined8 *)(this + 0x58) = 0x200000010;
    *(undefined8 *)(this + 200) = 0xc0000000;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0x3f80000044fa0000;
    *(undefined4 *)(this + 0x48) = 0x40000000;
    uVar3 = 0x43800000780;
    *(undefined8 *)(this + 0xa8) = 0x30000000b;
    *(undefined8 *)(this + 0xa0) = 0x2000000004;
    *(undefined8 *)(this + 0xb8) = 0x3f00000000000100;
    *(undefined8 *)(this + 0xb0) = 0x200010100;
    uVar2 = 0x3f800000;
    *(undefined4 *)(this + 0x74) = 0x3f000000;
    *(undefined4 *)this = 3;
  }
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined8 *)(this + 8) = uVar3;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0xa8) = 8;
  *(undefined4 *)(this + 0x70) = 5;
  *(undefined8 *)(this + 0x7c) = 0x100000001;
  *(undefined4 *)(this + 0x78) = 3;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x38) = uVar2;
  this[0xb1] = (HardwareScalability)0x1;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined4 *)(this + 0x60) = 2;
  this[0x3c] = (HardwareScalability)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0xb4) = 2;
  return;
}


