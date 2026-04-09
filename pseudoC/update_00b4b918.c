// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b4b918
// Size: 248 bytes
// Signature: undefined __cdecl update(ENetNetworkManager * param_1)


/* ENetConnection::update(ENetNetworkManager*) */

void ENetConnection::update(ENetNetworkManager *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_5c;
  GsBitStream aGStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 8) == 5) {
    uVar4 = enet_time_get();
    if (*(uint *)(param_1 + 0x4bc) < uVar4) {
      bVar3 = 2 < *(int *)(param_1 + 0x4c0) + 1U;
      iVar5 = 3000;
      if (bVar3) {
        iVar5 = 10000;
      }
      iVar1 = 0;
      if (!bVar3) {
        iVar1 = *(int *)(param_1 + 0x4c0) + 1;
      }
      *(int *)(param_1 + 0x4c0) = iVar1;
      *(uint *)(param_1 + 0x4bc) = uVar4 + iVar5;
      GsBitStream::GsBitStream(aGStack_58);
      local_5c = CONCAT31(local_5c._1_3_,0x1d);
                    /* try { // try from 00b4b994 to 00b4b9df has its CatchHandler @ 00b4ba10 */
      GsBitStream::writeBits(aGStack_58,(uchar *)&local_5c,8,true);
      local_5c = enet_time_get();
      GsBitStream::writeBits(aGStack_58,(uchar *)&local_5c,0x20,true);
      send((ENetConnection *)param_1,aGStack_58,0,0x1f);
      Event::post();
      GsBitStream::~GsBitStream(aGStack_58);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


