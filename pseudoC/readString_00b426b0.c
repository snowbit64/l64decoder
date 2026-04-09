// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readString
// Entry Point: 00b426b0
// Size: 236 bytes
// Signature: undefined __cdecl readString(GsBitStream * param_1, basic_string * param_2)


/* MasterServerUtil::readString(GsBitStream*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void MasterServerUtil::readString(GsBitStream *param_1,basic_string *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uchar *puVar5;
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = 0;
  uVar2 = GsBitStream::readBits(param_1,(uchar *)local_3c,0x10,true);
  uVar3 = 0;
  if ((uVar2 & 1) == 0) goto LAB_00b42774;
  if (local_3c[0] == 0) {
    if ((*(byte *)param_2 & 1) != 0) {
      puVar4 = *(undefined **)(param_2 + 4);
      uVar3 = 1;
LAB_00b4276c:
      *puVar4 = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      goto LAB_00b42774;
    }
    uVar3 = 1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)param_2,(char)local_3c[0]);
    puVar5 = *(uchar **)(param_2 + 4);
    if ((*(byte *)param_2 & 1) == 0) {
      puVar5 = (uchar *)((long)param_2 + 1);
    }
    uVar2 = GsBitStream::readAlignedBytes(param_1,puVar5,(uint)local_3c[0]);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_00b42774;
    }
    if ((*(byte *)param_2 & 1) != 0) {
      puVar4 = *(undefined **)(param_2 + 4);
      uVar3 = 0;
      goto LAB_00b4276c;
    }
    uVar3 = 0;
  }
  *(undefined2 *)param_2 = 0;
LAB_00b42774:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


