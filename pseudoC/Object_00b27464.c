// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Object
// Entry Point: 00b27464
// Size: 244 bytes
// Signature: undefined __thiscall Object(Object * this, Object * param_1)


/* JSONUtil::Object::Object(JSONUtil::Object const&) */

void __thiscall JSONUtil::Object::Object(Object *this,Object *param_1)

{
  long lVar1;
  Atom *this_00;
  Atom *pAVar2;
  long *plVar3;
  byte local_88;
  void *local_78;
  Atom *local_70;
  byte local_68;
  void *local_58;
  Atom *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  for (plVar3 = *(long **)(param_1 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
                    /* try { // try from 00b274b4 to 00b274bb has its CatchHandler @ 00b27580 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
    pAVar2 = (Atom *)plVar3[5];
    local_50 = pAVar2;
                    /* try { // try from 00b274c4 to 00b274cb has its CatchHandler @ 00b27588 */
    this_00 = (Atom *)operator_new(0x10);
    *this_00 = (Atom)0x0;
                    /* try { // try from 00b274d4 to 00b274db has its CatchHandler @ 00b2756c */
    Atom::operator=(this_00,pAVar2);
                    /* try { // try from 00b274dc to 00b274e7 has its CatchHandler @ 00b27588 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_88);
                    /* try { // try from 00b274ec to 00b274fb has its CatchHandler @ 00b27558 */
    local_70 = this_00;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>
              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
                *)this,(basic_string *)&local_88,(pair *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


