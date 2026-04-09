// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readStringListAttribute
// Entry Point: 00939270
// Size: 468 bytes
// Signature: undefined __thiscall readStringListAttribute(I3DReader * this, char * param_1, basic_string * param_2, uint param_3)


/* I3DReader::readStringListAttribute(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, unsigned int) */

uint __thiscall
I3DReader::readStringListAttribute(I3DReader *this,char *param_1,basic_string *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *__s;
  size_t __n;
  byte *pbVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  ushort local_a0;
  undefined local_9e;
  void *local_90;
  undefined8 local_88;
  size_t local_80;
  void *local_78;
  byte *local_70;
  byte *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __s = (char *)ExpatUtil::getAttr(param_1,*(char ***)this);
  if (__s == (char *)0x0) {
    param_3 = 0;
    goto LAB_00939408;
  }
  local_70 = (byte *)0x0;
  local_68 = (byte *)0x0;
  local_60 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00939438 to 0093943f has its CatchHandler @ 0093946c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00939318;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00939300 to 00939307 has its CatchHandler @ 0093946c */
    __dest = operator_new(uVar7);
    local_88 = uVar7 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00939318:
    memcpy(__dest,__s,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
  local_9e = 0;
  local_a0 = 0x3b02;
                    /* try { // try from 00939338 to 0093934f has its CatchHandler @ 00939444 */
  StringUtil::split((basic_string *)&local_88,(basic_string *)&local_a0,(vector *)&local_70,true,
                    false);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  uVar1 = (int)((ulong)((long)local_68 - (long)local_70) >> 3) * -0x55555555;
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
  if (param_3 != 0) {
    lVar6 = 0;
    do {
                    /* try { // try from 009393a8 to 009393ab has its CatchHandler @ 00939470 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ((long)param_2 + lVar6),(basic_string *)(local_70 + lVar6));
      lVar6 = lVar6 + 0x18;
    } while ((ulong)param_3 * 0x18 - lVar6 != 0);
  }
  pbVar4 = local_70;
  pbVar5 = local_68;
  if (local_70 != (byte *)0x0) {
    while (pbVar3 = pbVar5, pbVar3 != pbVar4) {
      pbVar5 = pbVar3 + -0x18;
      if ((*pbVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
    }
    local_68 = pbVar4;
    operator_delete(local_70);
  }
LAB_00939408:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


