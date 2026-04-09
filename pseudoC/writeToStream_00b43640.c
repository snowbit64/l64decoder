// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 00b43640
// Size: 144 bytes
// Signature: undefined __thiscall writeToStream(NetworkAddress * this, GsBitStream * param_1)


/* NetworkAddress::writeToStream(GsBitStream*) const */

void __thiscall NetworkAddress::writeToStream(NetworkAddress *this,GsBitStream *param_1)

{
  uint uVar1;
  long lVar2;
  uint local_40;
  undefined2 local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (~*(uint *)this & 0xff00ff00) >> 8 | (~*(uint *)this & 0xff00ff) << 8;
  local_40 = uVar1 >> 0x10 | uVar1 << 0x10;
  GsBitStream::writeBits(param_1,(uchar *)&local_40,0x20,true);
  local_3c[0] = *(undefined2 *)(this + 4);
  GsBitStream::writeBits(param_1,(uchar *)local_3c,0x10,true);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


