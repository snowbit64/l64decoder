// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 00b434a4
// Size: 56 bytes
// Signature: undefined __thiscall operator<(NetworkAddress * this, NetworkAddress * param_1)


/* NetworkAddress::TEMPNAMEPLACEHOLDERVALUE(NetworkAddress const&) const */

bool __thiscall NetworkAddress::operator<(NetworkAddress *this,NetworkAddress *param_1)

{
  if (*(uint *)this < *(uint *)param_1) {
    return true;
  }
  if (*(uint *)this == *(uint *)param_1) {
    return *(ushort *)(this + 4) < *(ushort *)(param_1 + 4);
  }
  return false;
}


