// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findName
// Entry Point: 00c33b04
// Size: 380 bytes
// Signature: undefined __cdecl findName(vector * param_1, char * param_2)


/* IR_HllConvertUtil::findName(std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> > const&, char const*) */

bool IR_HllConvertUtil::findName(vector *param_1,char *param_2)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  __tree_iterator _Var5;
  size_t sVar6;
  size_t sVar7;
  void *__dest;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)param_1;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != lVar10) {
    uVar8 = 0;
    do {
      pbVar1 = (byte *)(lVar10 + uVar8 * 0x20);
      sVar6 = strlen(param_2);
      sVar7 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        sVar7 = *(size_t *)(pbVar1 + 8);
      }
      if (sVar6 == sVar7) {
                    /* try { // try from 00c33b84 to 00c33b97 has its CatchHandler @ 00c33c9c */
        iVar4 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar1,0,(char *)0xffffffffffffffff,(ulong)param_2);
        if (iVar4 == 0) {
          bVar3 = true;
          goto LAB_00c33c44;
        }
        lVar10 = *(long *)param_1;
        lVar9 = *(long *)(param_1 + 8);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar9 - lVar10 >> 5));
  }
  sVar7 = strlen(param_2);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 == 0) goto LAB_00c33c08;
  }
  else {
    uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = sVar7;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,sVar7);
LAB_00c33c08:
  *(undefined *)((long)__dest + sVar7) = 0;
                    /* try { // try from 00c33c0c to 00c33c1f has its CatchHandler @ 00c33c80 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&s_reservedNames,(basic_string *)&local_70);
  bVar3 = _Var5 != 0x211f258;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00c33c44:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


