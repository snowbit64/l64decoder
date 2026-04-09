// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BaseTerrain
// Entry Point: 008e431c
// Size: 224 bytes
// Signature: undefined __thiscall BaseTerrain(BaseTerrain * this)


/* BaseTerrain::BaseTerrain() */

void __thiscall BaseTerrain::BaseTerrain(BaseTerrain *this)

{
  TerrainLodTexture *this_00;
  
  *(undefined4 *)(this + 0x118) = 0x20;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__BaseTerrain_00fde698;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x108] = (BaseTerrain)0x0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa8) = 0x42c800003fcccccd;
  *(undefined8 *)(this + 0xa0) = 0x378000803f800000;
  *(undefined8 *)(this + 0xb8) = 0x40a00000435c0000;
  *(undefined8 *)(this + 0xb0) = 0x42c80000435c0000;
                    /* try { // try from 008e43c0 to 008e43c7 has its CatchHandler @ 008e4420 */
  this_00 = (TerrainLodTexture *)operator_new(0x90);
                    /* try { // try from 008e43cc to 008e43cf has its CatchHandler @ 008e43fc */
  TerrainLodTexture::TerrainLodTexture(this_00);
  *(TerrainLodTexture **)(this + 0xd8) = this_00;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0x100000000;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  return;
}


