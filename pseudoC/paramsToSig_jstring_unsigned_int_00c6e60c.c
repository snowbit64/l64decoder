// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: paramsToSig<_jstring*,unsigned_int>
// Entry Point: 00c6e60c
// Size: 220 bytes
// Signature: basic_string __cdecl paramsToSig<_jstring*,unsigned_int>(_jstring * param_1, uint param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   paramsToSig<_jstring*, unsigned int>(_jstring*, unsigned int) */

basic_string paramsToSig<_jstring*,unsigned_int>(_jstring *param_1,uint param_2)

{
  long lVar1;
  basic_string bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_68 [16];
  undefined8 *local_58;
  byte local_50;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined2 uStack_3f;
  undefined uStack_3d;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0x24;
  uStack_3f = 0x3b67;
  uStack_47 = 0x697274532f676e;
  uStack_40 = 0x6e;
  local_4f._0_1_ = 'L';
  local_4f._1_1_ = 'j';
  local_4f._2_1_ = 'a';
  local_4f._3_1_ = 'v';
  local_4f._4_1_ = 'a';
  local_4f._5_1_ = '/';
  local_4f._6_1_ = 'l';
  local_4f._7_1_ = 'a';
  uStack_3d = 0;
                    /* try { // try from 00c6e658 to 00c6e663 has its CatchHandler @ 00c6e718 */
  paramsToSig<unsigned_int>(param_2);
  puVar3 = (undefined8 *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    puVar3 = local_58;
  }
                    /* try { // try from 00c6e680 to 00c6e687 has its CatchHandler @ 00c6e6e8 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_50,(ulong)puVar3);
  uVar5 = puVar3[2];
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar5;
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
    puVar3 = local_58;
  }
  bVar2 = (basic_string)puVar3;
  if ((local_50 & 1) != 0) {
    pvVar4 = (void *)CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT21(uStack_3f,uStack_40)));
    operator_delete(pvVar4);
    bVar2 = (basic_string)pvVar4;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


