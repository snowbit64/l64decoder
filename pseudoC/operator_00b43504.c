// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator!=
// Entry Point: 00b43504
// Size: 40 bytes
// Signature: undefined __thiscall operator!=(NetworkAddress * this, NetworkAddress * param_1)


/* NetworkAddress::TEMPNAMEPLACEHOLDERVALUE(NetworkAddress const&) const */

bool __thiscall NetworkAddress::operator!=(NetworkAddress *this,NetworkAddress *param_1)

{
  return *(int *)this != *(int *)param_1 || *(short *)(this + 4) != *(short *)(param_1 + 4);
}


