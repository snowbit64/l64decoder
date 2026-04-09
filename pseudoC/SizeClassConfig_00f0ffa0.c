// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SizeClassConfig
// Entry Point: 00f0ffa0
// Size: 220 bytes
// Signature: undefined __thiscall SizeClassConfig(SizeClassConfig * this)


/* SizeClassConfig::SizeClassConfig() */

void __thiscall SizeClassConfig::SizeClassConfig(SizeClassConfig *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  memset(this + 0x80,0xff,0x201);
  this[0x88] = (SizeClassConfig)0x0;
  *(undefined8 *)(this + 8) = 0x2000000018;
  *(undefined8 *)this = 0x1000000008;
  *(undefined8 *)(this + 0x18) = 0x4000000038;
  *(undefined8 *)(this + 0x10) = 0x3000000028;
  *(undefined8 *)(this + 0x28) = 0x8000000070;
  *(undefined8 *)(this + 0x20) = 0x6000000050;
  *(undefined8 *)(this + 0x38) = 0xc0000000b0;
  *(undefined8 *)(this + 0x30) = 0xa000000090;
  *(undefined4 *)(this + 0x284) = 0x1c;
  lVar1 = 1;
  *(undefined8 *)(this + 0x48) = 0x100000000f0;
  *(undefined8 *)(this + 0x40) = 0xe0000000d0;
  *(undefined8 *)(this + 0x58) = 0x18000000160;
  *(undefined8 *)(this + 0x50) = 0x14000000120;
  *(undefined8 *)(this + 0x68) = 0x200000001e0;
  *(undefined8 *)(this + 0x60) = 0x1c0000001a0;
  do {
    this[(long)*(int *)(this + lVar1 * 4) + 0x80] = SUB81(lVar1,0);
    lVar1 = lVar1 + 1;
  } while (lVar1 < *(int *)(this + 0x284));
  lVar1 = 0x200;
  do {
    if ((char)this[lVar1 + 0x7f] < '\0') {
      this[lVar1 + 0x7f] = this[lVar1 + 0x80];
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}


