// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: paramsToSig<bool>
// Entry Point: 00c6d9ec
// Size: 160 bytes
// Signature: basic_string __cdecl paramsToSig<bool>(bool param_1)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   paramsToSig<bool>(bool) */

basic_string paramsToSig<bool>(bool param_1)

{
  long lVar1;
  basic_string bVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort local_58 [8];
  undefined8 *local_48;
  ushort local_40;
  undefined local_3e;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x5a02;
  local_3e = 0;
  local_58[0] = 0;
                    /* try { // try from 00c6da24 to 00c6da2f has its CatchHandler @ 00c6da8c */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_40,(ulong)local_58 | 1);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
    puVar3 = local_48;
  }
  bVar2 = (basic_string)puVar3;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
    bVar2 = (basic_string)local_30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


