// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readAddressFromStream
// Entry Point: 00b4352c
// Size: 72 bytes
// Signature: undefined __thiscall readAddressFromStream(NetworkAddress * this, GsBitStream * param_1)


/* NetworkAddress::readAddressFromStream(GsBitStream*) */

uint __thiscall NetworkAddress::readAddressFromStream(NetworkAddress *this,GsBitStream *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = GsBitStream::readBits(param_1,(uchar *)this,0x20,true);
  if ((uVar2 & 1) != 0) {
    uVar1 = (~*(uint *)this & 0xff00ff00) >> 8 | (~*(uint *)this & 0xff00ff) << 8;
    *(uint *)this = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return uVar2 & 1;
}


