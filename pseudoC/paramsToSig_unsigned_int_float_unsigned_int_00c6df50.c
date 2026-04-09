// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: paramsToSig<unsigned_int,float,unsigned_int>
// Entry Point: 00c6df50
// Size: 196 bytes
// Signature: basic_string __cdecl paramsToSig<unsigned_int,float,unsigned_int>(uint param_1, float param_2, uint param_3)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   paramsToSig<unsigned int, float, unsigned int>(unsigned int, float, unsigned int) */

basic_string paramsToSig<unsigned_int,float,unsigned_int>(uint param_1,float param_2,uint param_3)

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
  local_50 = 0x4902;
  local_4e = 0;
                    /* try { // try from 00c6df84 to 00c6df8f has its CatchHandler @ 00c6e044 */
  paramsToSig<float,unsigned_int>(param_2,param_3);
  puVar3 = (undefined8 *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    puVar3 = local_58;
  }
                    /* try { // try from 00c6dfac to 00c6dfb3 has its CatchHandler @ 00c6e014 */
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


