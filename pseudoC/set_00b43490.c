// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b43490
// Size: 20 bytes
// Signature: undefined __thiscall set(NetworkAddress * this, char * param_1, ushort param_2)


/* NetworkAddress::set(char const*, unsigned short) */

void __thiscall NetworkAddress::set(NetworkAddress *this,char *param_1,ushort param_2)

{
  *(ushort *)(this + 4) = param_2;
  Network::getAddressByHostname(param_1,(uint *)this);
  return;
}


