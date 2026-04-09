// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2PhysicsStats
// Entry Point: 00996060
// Size: 132 bytes
// Signature: undefined __thiscall Bt2PhysicsStats(Bt2PhysicsStats * this)


/* Bt2PhysicsStats::Bt2PhysicsStats() */

void __thiscall Bt2PhysicsStats::Bt2PhysicsStats(Bt2PhysicsStats *this)

{
  CProfileIterator *this_00;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR__Bt2PhysicsStats_00fe0fa0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
                    /* try { // try from 009960b8 to 009960bf has its CatchHandler @ 00996168 */
  this_00 = (CProfileIterator *)operator_new(0x10);
                    /* try { // try from 009960c4 to 009960cf has its CatchHandler @ 009960e4 */
  CProfileIterator::CProfileIterator(this_00,(CProfileNode *)&CProfileManager::Root);
  *(CProfileIterator **)(this + 0x118) = this_00;
  return;
}


