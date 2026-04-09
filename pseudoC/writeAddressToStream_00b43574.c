// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeAddressToStream
// Entry Point: 00b43574
// Size: 100 bytes
// Signature: undefined __thiscall writeAddressToStream(NetworkAddress * this, GsBitStream * param_1)


/* NetworkAddress::writeAddressToStream(GsBitStream*) const */

void __thiscall NetworkAddress::writeAddressToStream(NetworkAddress *this,GsBitStream *param_1)

{
  uint uVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (~*(uint *)this & 0xff00ff00) >> 8 | (~*(uint *)this & 0xff00ff) << 8;
  local_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  GsBitStream::writeBits(param_1,(uchar *)&local_2c,0x20,true);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


