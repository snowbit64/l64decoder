// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiresTextureDesc
// Entry Point: 0095b204
// Size: 168 bytes
// Signature: undefined __thiscall MultiresTextureDesc(MultiresTextureDesc * this)


/* MultiresTextureDesc::MultiresTextureDesc() */

void __thiscall MultiresTextureDesc::MultiresTextureDesc(MultiresTextureDesc *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  VirtualTextureTileDesc::VirtualTextureTileDesc((VirtualTextureTileDesc *)(this + 0x2c));
  VirtualTexturePlaneDesc::VirtualTexturePlaneDesc((VirtualTexturePlaneDesc *)(this + 0x44));
  VirtualTexturePlaneDesc::VirtualTexturePlaneDesc((VirtualTexturePlaneDesc *)(this + 0x4c));
  VirtualTexturePlaneDesc::VirtualTexturePlaneDesc((VirtualTexturePlaneDesc *)(this + 0x54));
  VirtualTexturePlaneDesc::VirtualTexturePlaneDesc((VirtualTexturePlaneDesc *)(this + 0x5c));
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)this = 0x44f000003f800000;
  *(undefined4 *)(this + 8) = 0x44870000;
                    /* try { // try from 0095b25c to 0095b267 has its CatchHandler @ 0095b2ac */
  uVar1 = MathUtil::degreeToRadian(70.0);
  uVar2 = NEON_fmov(0x40800000,4);
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined8 *)(this + 0x1c) = 0xffffffff0000000b;
  *(undefined2 *)(this + 0x80) = 0;
  this[0x82] = (MultiresTextureDesc)0x0;
  *(undefined8 *)(this + 0x3c) = 0x100000001;
  *(undefined8 *)(this + 0x34) = 0x400000004000;
  return;
}


