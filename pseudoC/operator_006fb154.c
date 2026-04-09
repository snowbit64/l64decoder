// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 006fb154
// Size: 68 bytes
// Signature: undefined __thiscall operator<(TextureDesc * this, ResourceDesc * param_1)


/* TextureDesc::TEMPNAMEPLACEHOLDERVALUE(ResourceDesc const*) const */

bool __thiscall TextureDesc::operator<(TextureDesc *this,ResourceDesc *param_1)

{
  bool bVar1;
  
  bVar1 = (byte)*(TextureDesc *)(param_1 + 8) <= (byte)this[8];
  if (((this[8] == *(TextureDesc *)(param_1 + 8)) &&
      (bVar1 = *(uint *)(param_1 + 0xc) <= *(uint *)(this + 0xc),
      *(uint *)(this + 0xc) == *(uint *)(param_1 + 0xc))) &&
     (bVar1 = (byte)*(TextureDesc *)(param_1 + 0x11) <= (byte)this[0x11],
     this[0x11] == *(TextureDesc *)(param_1 + 0x11))) {
    bVar1 = (byte)*(TextureDesc *)(param_1 + 0x10) <= (byte)this[0x10];
  }
  return !bVar1;
}


