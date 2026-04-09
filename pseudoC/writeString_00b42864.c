// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeString
// Entry Point: 00b42864
// Size: 156 bytes
// Signature: undefined __cdecl writeString(GsBitStream * param_1, basic_string * param_2)


/* MasterServerUtil::writeString(GsBitStream*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void MasterServerUtil::writeString(GsBitStream *param_1,basic_string *param_2)

{
  ulong uVar1;
  uchar *puVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  undefined2 local_3c [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar2 = *(uchar **)(param_2 + 4);
  bVar4 = (*(byte *)param_2 & 1) != 0;
  uVar1 = (ulong)(*(byte *)param_2 >> 1);
  if (bVar4) {
    uVar1 = *(ulong *)(param_2 + 2);
  }
  if (!bVar4) {
    puVar2 = (uchar *)((long)param_2 + 1);
  }
  uVar5 = (uint)uVar1;
  if ((uVar1 >> 0x10 & 0xffff) == 0) {
    local_3c[0] = (undefined2)uVar1;
    GsBitStream::writeBits(param_1,(uchar *)local_3c,0x10,true);
    if (uVar5 != 0) {
      GsBitStream::writeAlignedBytes(param_1,puVar2,uVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5 < 0x10000);
}


