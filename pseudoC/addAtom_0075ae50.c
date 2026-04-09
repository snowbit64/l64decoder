// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAtom
// Entry Point: 0075ae50
// Size: 248 bytes
// Signature: undefined __thiscall addAtom(Object * this, basic_string * param_1, char * param_2)


/* JSONUtil::Object::addAtom(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char const*) */

void __thiscall JSONUtil::Object::addAtom(Object *this,basic_string *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *__dest;
  ulong __n;
  byte local_78;
  void *local_68;
  undefined2 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined2 *)operator_new(0x10);
  *puVar3 = 3;
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 0075ae9c to 0075aebb has its CatchHandler @ 0075af5c */
    uVar2 = __strlen_chk(param_2,0xffffffffffffffff);
  }
  __dest = operator_new__((ulong)(uVar2 + 1));
  *(void **)(puVar3 + 4) = __dest;
  if (uVar2 == 0) {
    __n = 0;
  }
  else {
    __n = (ulong)uVar2;
    memcpy(__dest,param_2,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_78);
                    /* try { // try from 0075aef8 to 0075af07 has its CatchHandler @ 0075af48 */
  local_60 = puVar3;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>
            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
              *)this,(basic_string *)&local_78,(pair *)&local_78);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


