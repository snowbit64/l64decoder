// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalSource
// Entry Point: 006fba2c
// Size: 260 bytes
// Signature: undefined __thiscall ~AnimalSource(AnimalSource * this)


/* WARNING: Type propagation algorithm not settling */
/* Animal::AnimalSource::~AnimalSource() */

void __thiscall Animal::AnimalSource::~AnimalSource(AnimalSource *this)

{
  AnimalSource AVar1;
  
  *(undefined ***)this = &PTR_onAssetLoaded_00fd9b10;
  if (((byte)this[0x3e88] & 1) == 0) {
    AVar1 = this[0x3e70];
  }
  else {
    operator_delete(*(void **)(this + 0x3e98));
    AVar1 = this[0x3e70];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x3e28];
  }
  else {
    operator_delete(*(void **)(this + 16000));
    AVar1 = this[0x3e28];
  }
  if (((byte)AVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x3e38));
  }
  AnimalAnimationSystemSource::~AnimalAnimationSystemSource
            ((AnimalAnimationSystemSource *)(this + 0x108));
  if (((byte)this[0xb8] & 1) == 0) {
    AVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 200));
    AVar1 = this[0xa0];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    AVar1 = this[0x88];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    AVar1 = this[0x70];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    AVar1 = this[0x58];
  }
  if (((byte)AVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  I3DAssetPtr::~I3DAssetPtr((I3DAssetPtr *)(this + 0x38));
  I3DAssetPtr::~I3DAssetPtr((I3DAssetPtr *)(this + 0x18));
  return;
}


