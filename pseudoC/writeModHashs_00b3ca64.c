// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeModHashs
// Entry Point: 00b3ca64
// Size: 164 bytes
// Signature: undefined __thiscall writeModHashs(MasterServerManager * this, GsBitStream * param_1, vector * param_2)


/* MasterServerManager::writeModHashs(GsBitStream*,
   std::__ndk1::vector<MasterServerManager::ModHash,
   std::__ndk1::allocator<MasterServerManager::ModHash> > const&) */

void __thiscall
MasterServerManager::writeModHashs(MasterServerManager *this,GsBitStream *param_1,vector *param_2)

{
  long lVar1;
  uchar *puVar2;
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = (undefined2)((uint)(*(int *)(param_2 + 8) - *(int *)param_2) >> 4);
  GsBitStream::writeBits(param_1,(uchar *)local_3c,0x10,true);
  puVar2 = *(uchar **)param_2;
  if (puVar2 != *(uchar **)(param_2 + 8)) {
    do {
      GsBitStream::writeAlignedBytes(param_1,puVar2,0x10);
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != *(uchar **)(param_2 + 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


