// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createWriteStream
// Entry Point: 00b49090
// Size: 164 bytes
// Signature: undefined __thiscall createWriteStream(ENetNetworkManager * this, APPLICATIONS param_1, bool param_2)


/* ENetNetworkManager::createWriteStream(NetworkManagerBase::APPLICATIONS, bool) */

GsBitStream * __thiscall
ENetNetworkManager::createWriteStream(ENetNetworkManager *this,APPLICATIONS param_1,bool param_2)

{
  long lVar1;
  ENetNetworkManager *this_00;
  GsBitStream *pGVar2;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2) {
    this_00 = (ENetNetworkManager *)enet_time_get();
    pGVar2 = (GsBitStream *)createTimestampedWriteStream(this_00,param_1,(uint)this_00);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return pGVar2;
    }
  }
  else {
    pGVar2 = (GsBitStream *)operator_new(0x20);
                    /* try { // try from 00b490e8 to 00b490eb has its CatchHandler @ 00b49134 */
    GsBitStream::GsBitStream(pGVar2);
    local_3c[0] = (char)param_1 + '[';
    GsBitStream::writeBits(pGVar2,local_3c,8,true);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return pGVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


