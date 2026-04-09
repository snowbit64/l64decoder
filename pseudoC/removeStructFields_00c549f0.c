// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeStructFields
// Entry Point: 00c549f0
// Size: 448 bytes
// Signature: undefined __thiscall removeStructFields(IR_TypeSet * this, bool * param_1, set * param_2)


/* IR_TypeSet::removeStructFields(bool const*, std::__ndk1::set<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const*) */

uint __thiscall IR_TypeSet::removeStructFields(IR_TypeSet *this,bool *param_1,set *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  __tree_const_iterator _Var4;
  IR_Struct *this_00;
  size_t __n;
  void *__dest;
  long lVar5;
  ulong uVar6;
  IR_Struct *__s;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0xda0);
  if (*(long *)(this + 0xda8) == lVar5) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = 0;
    uVar9 = 1;
    do {
      this_00 = *(IR_Struct **)(*(long *)(lVar5 + uVar6 * 0x10) + 8);
      if (this_00[0x54] == (IR_Struct)0x0) {
        if (param_2 != (set *)0x0) {
          __s = *(IR_Struct **)(this_00 + 0x10);
          if (((byte)*this_00 & 1) == 0) {
            __s = this_00 + 1;
          }
          __n = strlen((char *)__s);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < 0x17) {
            local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
            __dest = (void *)((ulong)&local_80 | 1);
            if (__n != 0) goto LAB_00c54b1c;
          }
          else {
            uVar7 = __n + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar7);
            local_80 = uVar7 | 1;
            local_78 = __n;
            local_70 = __dest;
LAB_00c54b1c:
            memcpy(__dest,__s,__n);
          }
          *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00c54b30 to 00c54b3b has its CatchHandler @ 00c54bb0 */
          _Var4 = std::__ndk1::
                  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)param_2,(basic_string *)&local_80);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          if (param_2 + 8 != (set *)(ulong)_Var4) goto LAB_00c54a6c;
          this_00 = *(IR_Struct **)(*(long *)(*(long *)(this + 0xda0) + uVar6 * 0x10) + 8);
        }
        uVar3 = IR_Struct::removeFields(this_00,param_1,this);
        uVar8 = uVar8 | uVar3;
      }
LAB_00c54a6c:
      lVar5 = *(long *)(this + 0xda0);
      bVar2 = uVar9 < (ulong)(*(long *)(this + 0xda8) - lVar5 >> 4);
      uVar6 = uVar9;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (bVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8 & 1;
}


