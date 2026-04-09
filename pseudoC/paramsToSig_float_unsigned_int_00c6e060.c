// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: paramsToSig<float,unsigned_int>
// Entry Point: 00c6e060
// Size: 192 bytes
// Signature: basic_string __cdecl paramsToSig<float,unsigned_int>(float param_1, uint param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   paramsToSig<float, unsigned int>(float, unsigned int) */

basic_string paramsToSig<float,unsigned_int>(float param_1,uint param_2)

{
  long lVar1;
  basic_string bVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_68 [16];
  undefined8 *local_58;
  ushort local_50;
  undefined local_4e;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0x4602;
  local_4e = 0;
                    /* try { // try from 00c6e090 to 00c6e09b has its CatchHandler @ 00c6e150 */
  paramsToSig<unsigned_int>(param_2);
  puVar3 = (undefined8 *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    puVar3 = local_58;
  }
                    /* try { // try from 00c6e0b8 to 00c6e0bf has its CatchHandler @ 00c6e120 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_50,(ulong)puVar3);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
    puVar3 = local_58;
  }
  bVar2 = (basic_string)puVar3;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
    bVar2 = (basic_string)local_40;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


