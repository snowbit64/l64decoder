// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GiantsAdPlacement
// Entry Point: 00af1a84
// Size: 56 bytes
// Signature: undefined __thiscall GiantsAdPlacement(GiantsAdPlacement * this, GiantsAdsProvider * param_1, uchar * param_2, uint param_3, ASPECT_RATIO param_4)


/* GiantsAdPlacement::GiantsAdPlacement(GiantsAdsProvider*, unsigned char const*, unsigned int,
   AdPlacementBase::ASPECT_RATIO) */

void __thiscall
GiantsAdPlacement::GiantsAdPlacement
          (GiantsAdPlacement *this,GiantsAdsProvider *param_1,uchar *param_2,uint param_3,
          ASPECT_RATIO param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 0;
  *(uint *)(this + 0x14) = param_3;
  *(ASPECT_RATIO *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x3c] = (GiantsAdPlacement)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(GiantsAdsProvider **)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 4) = uVar1;
  return;
}


