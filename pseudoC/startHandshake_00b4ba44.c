// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startHandshake
// Entry Point: 00b4ba44
// Size: 232 bytes
// Signature: undefined startHandshake(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetConnection::startHandshake() */

void ENetConnection::startHandshake(void)

{
  long lVar1;
  ENetConnection *in_x0;
  undefined4 local_8c;
  GsBitStream aGStack_88 [32];
  uchar auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  KeyAgreementInitiator::GenerateChallenge
            (*(KeyAgreementInitiator **)(in_x0 + 0x10),*(SecureRandomGenerator **)(in_x0 + 0x450),
             auStack_68,0x40);
  GsBitStream::GsBitStream(aGStack_88);
  local_8c = CONCAT31(local_8c._1_3_,0x1d);
                    /* try { // try from 00b4ba88 to 00b4baf7 has its CatchHandler @ 00b4bb2c */
  GsBitStream::writeBits(aGStack_88,(uchar *)&local_8c,8,true);
  local_8c = enet_time_get();
  GsBitStream::writeBits(aGStack_88,(uchar *)&local_8c,0x20,true);
  local_8c = CONCAT31(local_8c._1_3_,0x1f);
  GsBitStream::writeBits(aGStack_88,(uchar *)&local_8c,8,true);
  GsBitStream::writeAlignedBytes(aGStack_88,auStack_68,0x40);
  send(in_x0,aGStack_88,1,0);
  *(undefined4 *)(in_x0 + 8) = 3;
  GsBitStream::~GsBitStream(aGStack_88);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


