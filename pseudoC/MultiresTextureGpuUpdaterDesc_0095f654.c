// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiresTextureGpuUpdaterDesc
// Entry Point: 0095f654
// Size: 244 bytes
// Signature: undefined __thiscall ~MultiresTextureGpuUpdaterDesc(MultiresTextureGpuUpdaterDesc * this)


/* MultiresTextureGpuUpdaterDesc::~MultiresTextureGpuUpdaterDesc() */

void __thiscall
MultiresTextureGpuUpdaterDesc::~MultiresTextureGpuUpdaterDesc(MultiresTextureGpuUpdaterDesc *this)

{
  MultiresTextureGpuUpdaterDesc MVar1;
  
  if (((byte)this[0xf0] & 1) == 0) {
    MVar1 = this[0xd8];
  }
  else {
    operator_delete(*(void **)(this + 0x100));
    MVar1 = this[0xd8];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0xc0];
  }
  else {
    operator_delete(*(void **)(this + 0xe8));
    MVar1 = this[0xc0];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0xa8];
  }
  else {
    operator_delete(*(void **)(this + 0xd0));
    MVar1 = this[0xa8];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x90];
  }
  else {
    operator_delete(*(void **)(this + 0xb8));
    MVar1 = this[0x90];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xa0));
    MVar1 = this[0x78];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    MVar1 = this[0x60];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    MVar1 = this[0x48];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    MVar1 = this[8];
  }
  if (((byte)MVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


