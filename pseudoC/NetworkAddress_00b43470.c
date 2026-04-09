// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NetworkAddress
// Entry Point: 00b43470
// Size: 12 bytes
// Signature: undefined __thiscall NetworkAddress(NetworkAddress * this, uint param_1, ushort param_2)


/* NetworkAddress::NetworkAddress(unsigned int, unsigned short) */

void __thiscall NetworkAddress::NetworkAddress(NetworkAddress *this,uint param_1,ushort param_2)

{
  *(uint *)this = param_1;
  *(ushort *)(this + 4) = param_2;
  return;
}


