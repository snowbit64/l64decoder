// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTimeSync
// Entry Point: 00b4bd38
// Size: 344 bytes
// Signature: undefined __thiscall parseTimeSync(ENetConnection * this, GsBitStream * param_1, GsBitStream * param_2)


/* ENetConnection::parseTimeSync(GsBitStream&, GsBitStream&) */

void __thiscall
ENetConnection::parseTimeSync(ENetConnection *this,GsBitStream *param_1,GsBitStream *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_54;
  uchar local_50 [4];
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = GsBitStream::getNumUnreadBits();
  if (0xf < uVar2) {
    uVar2 = GsBitStream::getReadOffset();
    local_50[0] = '\0';
    GsBitStream::readBits(param_1,local_50,8,true);
    if (local_50[0] == '\x1e') {
      GsBitStream::readBits(param_1,(uchar *)&local_4c,0x20,true);
      GsBitStream::readBits(param_1,(uchar *)&local_54,0x20,true);
      processTimeSync(this,local_4c,local_54);
    }
    else if (local_50[0] == '\x1d') {
      GsBitStream::readBits(param_1,(uchar *)&local_54,0x20,true);
      local_4c = CONCAT31(local_4c._1_3_,0x1e);
      GsBitStream::writeBits(param_2,(uchar *)&local_4c,8,true);
      local_4c = local_54;
      GsBitStream::writeBits(param_2,(uchar *)&local_4c,0x20,true);
      local_4c = enet_time_get();
      GsBitStream::writeBits(param_2,(uchar *)&local_4c,0x20,true);
    }
    else {
      GsBitStream::setReadOffset(param_1,uVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


