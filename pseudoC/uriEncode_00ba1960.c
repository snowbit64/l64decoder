// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: uriEncode
// Entry Point: 00ba1960
// Size: 240 bytes
// Signature: undefined __cdecl uriEncode(basic_string * param_1, basic_string * param_2)


/* StringUtil::uriEncode(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::uriEncode(basic_string *param_1,basic_string *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar2 = *(ulong *)(param_1 + 2);
  pbVar5 = *(byte **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pbVar5 = (byte *)((long)param_1 + 1);
    uVar2 = (ulong)(*(byte *)param_1 >> 1);
  }
  pbVar3 = (byte *)operator_new__((ulong)(uint)((int)uVar2 * 3));
  pbVar4 = pbVar3;
  if ((uVar2 & 0xffffffff) != 0) {
    pbVar1 = pbVar5 + (uVar2 & 0xffffffff);
    do {
      if ((&DAT_00527982)[*pbVar5] == '\0') {
        *pbVar4 = 0x25;
        pbVar4[1] = "0123456789ABCDEF"[*pbVar5 >> 4];
        pbVar4[2] = "0123456789ABCDEF"[(ulong)*pbVar5 & 0xf];
        pbVar4 = pbVar4 + 3;
      }
      else {
        *pbVar4 = *pbVar5;
        pbVar4 = pbVar4 + 1;
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < pbVar1);
  }
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __append_forward_unsafe<char*>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2,(char *)pbVar3,(char *)pbVar4);
  operator_delete__(pbVar3);
  return;
}


