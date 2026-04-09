// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeServerModInfos
// Entry Point: 00b417c0
// Size: 188 bytes
// Signature: undefined __thiscall writeServerModInfos(MasterServerManager * this, GsBitStream * param_1, vector * param_2)


/* MasterServerManager::writeServerModInfos(GsBitStream*,
   std::__ndk1::vector<MasterServerManager::ServerModInfo,
   std::__ndk1::allocator<MasterServerManager::ServerModInfo> > const&) */

void __thiscall
MasterServerManager::writeServerModInfos
          (MasterServerManager *this,GsBitStream *param_1,vector *param_2)

{
  long lVar1;
  basic_string *pbVar2;
  short local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = (short)((uint)(*(int *)(param_2 + 8) - *(int *)param_2) >> 3) * -0x3333;
  GsBitStream::writeBits(param_1,(uchar *)local_3c,0x10,true);
  pbVar2 = *(basic_string **)param_2;
  if (pbVar2 != *(basic_string **)(param_2 + 8)) {
    do {
      MasterServerUtil::writeString(param_1,pbVar2);
      GsBitStream::writeAlignedBytes(param_1,(uchar *)(pbVar2 + 6),0x10);
      pbVar2 = pbVar2 + 10;
    } while (pbVar2 != *(basic_string **)(param_2 + 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


