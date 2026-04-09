// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00b288c8
// Size: 340 bytes
// Signature: undefined __cdecl serialize(Atom * param_1, SerializationFlags param_2)


/* JSONUtil::serialize(JSONUtil::Atom const&, JSONUtil::SerializationFlags) */

void JSONUtil::serialize(Atom *param_1,SerializationFlags param_2)

{
  long lVar1;
  undefined **local_170;
  undefined **local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_170 = (undefined **)0xfd8f40;
  local_100[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00b28924 to 00b2892f has its CatchHandler @ 00b28a38 */
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00b28954 to 00b2895b has its CatchHandler @ 00b28a1c */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_108 = 0x10;
  uStack_120 = 0;
  local_128 = 0;
  local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
                    /* try { // try from 00b28980 to 00b2899f has its CatchHandler @ 00b28a4c */
  serialize(param_1,(basic_ostream *)&local_170,param_2,0);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_168[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


