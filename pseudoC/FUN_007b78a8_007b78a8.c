// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b78a8
// Entry Point: 007b78a8
// Size: 168 bytes
// Signature: undefined FUN_007b78a8(void)


void FUN_007b78a8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  GsBitStream *this;
  ulong uVar4;
  ENetNetworkManager *this_00;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  this = (GsBitStream *)NetworkStream::getReadStream();
  uVar4 = GsBitStream::readBits(this,(uchar *)&local_3c,0x20,true);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  else {
    this_00 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    local_40 = NetworkStream::getConnectionId();
    uVar3 = ENetNetworkManager::convertToLocalTime(this_00,&local_40,local_3c);
    *(undefined4 *)(param_2 + 0x100) = uVar3;
  }
  *(uint *)(param_2 + 0x108) = (uint)!bVar1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


