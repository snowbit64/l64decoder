// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAllFolders
// Entry Point: 00c5f8bc
// Size: 732 bytes
// Signature: undefined __cdecl createAllFolders(char * param_1, bool param_2)


/* NativeFileUtil::createAllFolders(char const*, bool) */

undefined8 NativeFileUtil::createAllFolders(char *param_1,bool param_2)

{
  char *pcVar1;
  long lVar2;
  basic_string *pbVar3;
  bool bVar4;
  size_t __n;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 uVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  void *__dest;
  ushort local_a8 [8];
  char *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  basic_string *local_78;
  basic_string *local_70;
  undefined8 local_68;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00c5f938;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_60 = uVar5 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_00c5f938:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00c5f94c to 00c5f953 has its CatchHandler @ 00c5fb9c */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_60);
  local_78 = (basic_string *)0x0;
  local_70 = (basic_string *)0x0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00c5f970 to 00c5f993 has its CatchHandler @ 00c5fba4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_90,'/');
  StringUtil::split((basic_string *)&local_60,(basic_string *)&local_90,(vector *)&local_78,false,
                    true);
  if ((local_70 == local_78) || (!param_2)) {
    if (local_70 == local_78) goto LAB_00c5facc;
  }
  else {
    pbVar9 = local_70 + -6;
    if ((*(byte *)pbVar9 & 1) != 0) {
      operator_delete(*(void **)(local_70 + -2));
    }
    local_70 = pbVar9;
    if (pbVar9 == local_78) goto LAB_00c5facc;
  }
  local_a8[0] = 0;
  bVar4 = (*(byte *)local_78 & 1) != 0;
  uVar5 = (ulong)(*(byte *)local_78 >> 1);
  if (bVar4) {
    uVar5 = *(ulong *)(local_78 + 2);
  }
  if (uVar5 == 0) {
LAB_00c5fa08:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              local_a8,local_78);
    uVar5 = 1;
  }
  else {
    pbVar6 = *(byte **)(local_78 + 4);
    if (!bVar4) {
      pbVar6 = (byte *)((long)local_78 + 1);
    }
                    /* try { // try from 00c5f9fc to 00c5fa13 has its CatchHandler @ 00c5fb98 */
    uVar5 = PathUtil::isAbsolutePath((char *)pbVar6);
    if ((uVar5 & 1) != 0) goto LAB_00c5fa08;
    uVar5 = 0;
  }
  uVar7 = ((long)local_70 - (long)local_78 >> 3) * -0x5555555555555555;
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
    do {
      if ((int)uVar5 != 0) {
                    /* try { // try from 00c5fa50 to 00c5fa9b has its CatchHandler @ 00c5fbac */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)local_a8);
      }
      pbVar9 = local_78 + uVar5 * 6;
      pbVar6 = *(byte **)(pbVar9 + 4);
      if ((*(byte *)pbVar9 & 1) == 0) {
        pbVar6 = (byte *)((long)pbVar9 + 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)local_a8,(ulong)pbVar6);
      pcVar1 = (char *)((ulong)local_a8 | 1);
      if ((local_a8[0] & 1) != 0) {
        pcVar1 = local_98;
      }
      uVar7 = createFolder(pcVar1);
      if ((uVar7 & 1) == 0) {
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        uVar8 = 0;
        goto joined_r0x00c5fb84;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar7 = ((long)local_70 - (long)local_78 >> 3) * -0x5555555555555555;
    } while (uVar5 <= uVar7 && uVar7 - uVar5 != 0);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00c5facc:
  uVar8 = 1;
joined_r0x00c5fb84:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  pbVar9 = local_78;
  pbVar10 = local_70;
  if (local_78 != (basic_string *)0x0) {
    while (pbVar3 = pbVar10, pbVar3 != pbVar9) {
      pbVar10 = pbVar3 + -6;
      if ((*(byte *)pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -2));
      }
    }
    local_70 = pbVar9;
    operator_delete(local_78);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


