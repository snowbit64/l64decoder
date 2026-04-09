// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: streamWriteTimestamp
// Entry Point: 00b49240
// Size: 224 bytes
// Signature: undefined __thiscall streamWriteTimestamp(ENetNetworkManager * this, GsBitStream * param_1)


/* ENetNetworkManager::streamWriteTimestamp(GsBitStream*) */

void __thiscall
ENetNetworkManager::streamWriteTimestamp(ENetNetworkManager *this,GsBitStream *param_1)

{
  long lVar1;
  int iVar2;
  uchar local_48 [4];
  uchar local_44 [4];
  undefined4 local_40;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = GsBitStream::getNumBitsUsed();
  if (iVar2 == 8) {
    GsBitStream::resetReadPointer();
    GsBitStream::readBits(param_1,local_48,8,true);
    GsBitStream::resetWritePointer();
    local_44[0] = '\x19';
    GsBitStream::writeBits(param_1,local_44,8,true);
    local_40 = enet_time_get();
    GsBitStream::writeBits(param_1,(uchar *)&local_40,0x20,true);
    local_3c[0] = local_48[0];
    GsBitStream::writeBits(param_1,local_3c,8,true);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 8);
}


