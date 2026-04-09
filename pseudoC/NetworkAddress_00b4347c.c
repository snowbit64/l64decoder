// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NetworkAddress
// Entry Point: 00b4347c
// Size: 20 bytes
// Signature: undefined __thiscall NetworkAddress(NetworkAddress * this, char * param_1, ushort param_2)


/* NetworkAddress::NetworkAddress(char const*, unsigned short) */

void __thiscall NetworkAddress::NetworkAddress(NetworkAddress *this,char *param_1,ushort param_2)

{
  *(ushort *)(this + 4) = param_2;
  Network::getAddressByHostname(param_1,(uint *)this);
  return;
}


