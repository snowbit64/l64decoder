// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: paramsToSig<_jstring*>
// Entry Point: 00c6e340
// Size: 184 bytes
// Signature: basic_string __cdecl paramsToSig<_jstring*>(_jstring * param_1)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   paramsToSig<_jstring*>(_jstring*) */

basic_string paramsToSig<_jstring*>(_jstring *param_1)

{
  long lVar1;
  basic_string bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort local_58 [8];
  undefined8 *local_48;
  byte local_40;
  undefined8 local_3f;
  undefined7 uStack_37;
  undefined uStack_30;
  undefined2 uStack_2f;
  undefined uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x24;
  uStack_2f = 0x3b67;
  uStack_37 = 0x697274532f676e;
  uStack_30 = 0x6e;
  local_3f._0_1_ = 'L';
  local_3f._1_1_ = 'j';
  local_3f._2_1_ = 'a';
  local_3f._3_1_ = 'v';
  local_3f._4_1_ = 'a';
  local_3f._5_1_ = '/';
  local_3f._6_1_ = 'l';
  local_3f._7_1_ = 'a';
  uStack_2d = 0;
  local_58[0] = 0;
                    /* try { // try from 00c6e390 to 00c6e39b has its CatchHandler @ 00c6e3f8 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_40,(ulong)local_58 | 1);
  uVar5 = puVar3[2];
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar5;
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
    puVar3 = local_48;
  }
  bVar2 = (basic_string)puVar3;
  if ((local_40 & 1) != 0) {
    pvVar4 = (void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
    operator_delete(pvVar4);
    bVar2 = (basic_string)pvVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


