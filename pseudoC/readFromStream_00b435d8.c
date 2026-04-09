// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 00b435d8
// Size: 104 bytes
// Signature: undefined __thiscall readFromStream(NetworkAddress * this, GsBitStream * param_1)


/* NetworkAddress::readFromStream(GsBitStream*) */

undefined8 __thiscall NetworkAddress::readFromStream(NetworkAddress *this,GsBitStream *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = GsBitStream::readBits(param_1,(uchar *)this,0x20,true);
  if ((uVar2 & 1) != 0) {
    uVar1 = (~*(uint *)this & 0xff00ff00) >> 8 | (~*(uint *)this & 0xff00ff) << 8;
    *(uint *)this = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = GsBitStream::readBits(param_1,(uchar *)(this + 4),0x10,true);
    return uVar3;
  }
  return 0;
}


