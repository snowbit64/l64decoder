// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00b2761c
// Size: 392 bytes
// Signature: undefined __thiscall operator=(Object * this, Object * param_1)


/* JSONUtil::Object::TEMPNAMEPLACEHOLDERVALUE(JSONUtil::Object const&) */

Object * __thiscall JSONUtil::Object::operator=(Object *this,Object *param_1)

{
  long lVar1;
  void **ppvVar2;
  Atom *pAVar3;
  long lVar4;
  long lVar5;
  Atom *pAVar6;
  long *plVar7;
  void *pvVar8;
  byte local_88;
  void *local_78;
  Atom *local_70;
  byte local_68;
  void *local_58;
  Atom *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  for (plVar7 = *(long **)(this + 0x10); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
    pAVar3 = (Atom *)plVar7[5];
    local_50 = pAVar3;
    if (pAVar3 != (Atom *)0x0) {
      Atom::clear();
      operator_delete(pAVar3);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    ppvVar2 = (void **)*(void **)(this + 0x10);
    while (ppvVar2 != (void **)0x0) {
      pvVar8 = *ppvVar2;
      if ((*(byte *)(ppvVar2 + 2) & 1) != 0) {
        operator_delete(ppvVar2[4]);
      }
      operator_delete(ppvVar2);
      ppvVar2 = (void **)pvVar8;
    }
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  for (plVar7 = *(long **)(param_1 + 0x10); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
    pAVar6 = (Atom *)plVar7[5];
    local_50 = pAVar6;
                    /* try { // try from 00b2771c to 00b27723 has its CatchHandler @ 00b277e0 */
    pAVar3 = (Atom *)operator_new(0x10);
    *pAVar3 = (Atom)0x0;
                    /* try { // try from 00b2772c to 00b27733 has its CatchHandler @ 00b277a4 */
    Atom::operator=(pAVar3,pAVar6);
                    /* try { // try from 00b27734 to 00b2773f has its CatchHandler @ 00b277e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_88);
                    /* try { // try from 00b27744 to 00b27753 has its CatchHandler @ 00b277b0 */
    local_70 = pAVar3;
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
  return this;
}


