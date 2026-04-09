// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeTextString
// Entry Point: 00cccb38
// Size: 220 bytes
// Signature: undefined __cdecl DEREncodeTextString(BufferedTransformation * param_1, basic_string * param_2, uchar param_3)


/* CryptoPP::DEREncodeTextString(CryptoPP::BufferedTransformation&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char) */

long CryptoPP::DEREncodeTextString
               (BufferedTransformation *param_1,basic_string *param_2,uchar param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uchar local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c[0] = param_3;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_3c,1,0,1);
  uVar1 = (ulong)(*(byte *)param_2 >> 1);
  if ((*(byte *)param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 2);
  }
  lVar4 = DERLengthEncode(param_1,uVar1);
  uVar1 = *(ulong *)(param_2 + 2);
  lVar2 = *(long *)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    lVar2 = (long)param_2 + 1;
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
  }
  (**(code **)(*(long *)param_1 + 0x38))(param_1,lVar2,uVar1,0,1);
  uVar1 = (ulong)(*(byte *)param_2 >> 1);
  if ((*(byte *)param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 2);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return lVar4 + uVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


