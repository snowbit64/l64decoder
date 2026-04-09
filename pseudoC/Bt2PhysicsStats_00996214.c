// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsStats
// Entry Point: 00996214
// Size: 320 bytes
// Signature: undefined __thiscall ~Bt2PhysicsStats(Bt2PhysicsStats * this)


/* Bt2PhysicsStats::~Bt2PhysicsStats() */

void __thiscall Bt2PhysicsStats::~Bt2PhysicsStats(Bt2PhysicsStats *this)

{
  Bt2PhysicsStats BVar1;
  
  *(undefined ***)this = &PTR__Bt2PhysicsStats_00fe0fa0;
  if (*(void **)(this + 0x118) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x118));
  }
  if (((byte)this[0x100] & 1) == 0) {
    BVar1 = this[0xe8];
  }
  else {
    operator_delete(*(void **)(this + 0x110));
    BVar1 = this[0xe8];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0xd0];
  }
  else {
    operator_delete(*(void **)(this + 0xf8));
    BVar1 = this[0xd0];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0xb8];
  }
  else {
    operator_delete(*(void **)(this + 0xe0));
    BVar1 = this[0xb8];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 200));
    BVar1 = this[0xa0];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    BVar1 = this[0x88];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    BVar1 = this[0x70];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    BVar1 = this[0x58];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    BVar1 = this[0x40];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    BVar1 = this[0x28];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    BVar1 = this[0x10];
  }
  if (((byte)BVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


