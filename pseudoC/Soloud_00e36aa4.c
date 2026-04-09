// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Soloud
// Entry Point: 00e36aa4
// Size: 464 bytes
// Signature: undefined __thiscall Soloud(Soloud * this)


/* SoLoud::Soloud::Soloud() */

void __thiscall SoLoud::Soloud::Soloud(Soloud *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  Fader::Fader((Fader *)(this + 0x20d0));
  lVar2 = 0;
  do {
    AudioSourceInstance3dData::AudioSourceInstance3dData
              ((AudioSourceInstance3dData *)(this + lVar2 + 0x34e0));
    lVar2 = lVar2 + 0x78;
  } while (lVar2 != 0x1e000);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x20c8) = 0x100000000;
  this[0x10] = (Soloud)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x20c0) = 0;
  *(undefined8 *)(this + 0x20a0) = 0x200000000;
  *(undefined8 *)(this + 0x2100) = 0;
  *(undefined8 *)(this + 0x2110) = 0;
  *(undefined8 *)(this + 0x2108) = 0;
  *(undefined8 *)(this + 0x20b8) = 0;
  *(undefined8 *)(this + 0x20b0) = 0;
  *(undefined4 *)(this + 0x20ac) = 0;
  memset(this + 0x2848,0,0x400);
  *(undefined8 *)(this + 0x2120) = 0;
  *(undefined8 *)(this + 0x2118) = 0;
  *(undefined8 *)(this + 0x2130) = 0;
  *(undefined8 *)(this + 0x2128) = 0;
  *(undefined8 *)(this + 0x2140) = 0;
  *(undefined8 *)(this + 0x2138) = 0;
  *(undefined8 *)(this + 0x2150) = 0;
  *(undefined8 *)(this + 0x2148) = 0;
  *(undefined8 *)(this + 0x2160) = 0;
  *(undefined8 *)(this + 0x2158) = 0;
  *(undefined8 *)(this + 0x2170) = 0;
  *(undefined8 *)(this + 0x2168) = 0;
  *(undefined8 *)(this + 0x2180) = 0;
  *(undefined8 *)(this + 0x2178) = 0;
  *(undefined8 *)(this + 0x2190) = 0;
  *(undefined8 *)(this + 0x2188) = 0;
  memset(this + 0x214ec,0,0x1004);
  puVar1 = (undefined8 *)(this + 0x2c48);
  lVar2 = 0x100;
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    lVar2 = lVar2 + -4;
    puVar1[0x81] = 0;
    puVar1[0x80] = 0;
    puVar1 = puVar1 + 2;
  } while (lVar2 != 0);
  *(undefined8 *)(this + 0x2830) = 0;
  *(undefined8 *)(this + 0x2828) = 0;
  *(undefined8 *)(this + 0x2840) = 0;
  *(undefined8 *)(this + 0x2838) = 0;
  memset(this + 0xa0,0,0x2000);
  *(undefined8 *)(this + 0x214e0) = 0;
  *(undefined8 *)(this + 0x3450) = 0;
  *(undefined8 *)(this + 0x3448) = 0;
  *(undefined4 *)(this + 0x214e8) = 0;
  *(undefined8 *)(this + 0x345c) = 0xbf800000;
  *(undefined4 *)(this + 0x3464) = 0x3f800000;
  *(undefined4 *)(this + 0x3458) = 0;
  *(undefined8 *)(this + 0x50) = 0x10;
  this[0x224f0] = (Soloud)0x1;
  *(undefined8 *)(this + 0x3470) = 0;
  *(undefined8 *)(this + 0x3468) = 0;
  *(undefined4 *)(this + 0x3478) = 0x43aba666;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x2820) = 0xffffffff00000000;
  memset(this + 0x23a0,0,0x480);
  createAllMixMatrices();
  *(undefined4 *)(this + 0x2398) = 0;
  return;
}


