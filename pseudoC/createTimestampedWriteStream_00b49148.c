// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTimestampedWriteStream
// Entry Point: 00b49148
// Size: 180 bytes
// Signature: undefined __thiscall createTimestampedWriteStream(ENetNetworkManager * this, APPLICATIONS param_1, uint param_2)


/* ENetNetworkManager::createTimestampedWriteStream(NetworkManagerBase::APPLICATIONS, unsigned int)
    */

GsBitStream * __thiscall
ENetNetworkManager::createTimestampedWriteStream
          (ENetNetworkManager *this,APPLICATIONS param_1,uint param_2)

{
  long lVar1;
  GsBitStream *this_00;
  uchar local_44 [4];
  uint local_40;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (GsBitStream *)operator_new(0x20);
                    /* try { // try from 00b4917c to 00b4917f has its CatchHandler @ 00b491fc */
  GsBitStream::GsBitStream(this_00);
  local_44[0] = '\x19';
  GsBitStream::writeBits(this_00,local_44,8,true);
  local_40 = param_2;
  GsBitStream::writeBits(this_00,(uchar *)&local_40,0x20,true);
  local_3c[0] = (char)param_1 + '[';
  GsBitStream::writeBits(this_00,local_3c,8,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


