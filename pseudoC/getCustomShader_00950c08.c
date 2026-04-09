// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomShader
// Entry Point: 00950c08
// Size: 544 bytes
// Signature: undefined __thiscall getCustomShader(MaterialManager * this, char * param_1)


/* MaterialManager::getCustomShader(char const*) */

CustomShader * __thiscall MaterialManager::getCustomShader(MaterialManager *this,char *param_1)

{
  long **this_00;
  char *__s;
  long lVar1;
  undefined8 uVar2;
  __tree_iterator _Var3;
  ulong uVar4;
  size_t sVar5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  CustomShader *this_01;
  void *pvVar8;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  CustomShader *local_80;
  undefined8 local_78;
  size_t local_70;
  void *local_68;
  __tree_end_node *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  __s = FileManager::s_singletonFileManager + 0x31;
  if ((FileManager::s_singletonFileManager[48] & 1) != 0) {
    __s = (char *)FileManager::s_singletonFileManager._64_8_;
  }
  uVar4 = StringUtil::startsWith(param_1,__s);
  if ((uVar4 & 1) != 0) {
    sVar5 = strlen(__s);
    param_1 = param_1 + sVar5;
  }
  sVar5 = strlen(param_1);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar8 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_00950ce0;
  }
  else {
    uVar4 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar4);
    local_78 = uVar4 | 1;
    local_70 = sVar5;
    local_68 = pvVar8;
  }
  memcpy(pvVar8,param_1,sVar5);
LAB_00950ce0:
  this_00 = (long **)(this + 0x38);
  *(undefined *)((long)pvVar8 + sVar5) = 0;
                    /* try { // try from 00950ce8 to 00950cf3 has its CatchHandler @ 00950e68 */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>>>
                      *)this_00,(basic_string *)&local_78);
  if (this + 0x40 == (MaterialManager *)(ulong)_Var3) {
                    /* try { // try from 00950d08 to 00950d0f has its CatchHandler @ 00950e6c */
    this_01 = (CustomShader *)operator_new(0x170);
                    /* try { // try from 00950d14 to 00950d1b has its CatchHandler @ 00950e2c */
    CustomShader::CustomShader(this_01,param_1);
                    /* try { // try from 00950d1c to 00950d23 has its CatchHandler @ 00950e6c */
    CustomShader::load();
                    /* try { // try from 00950d24 to 00950d2f has its CatchHandler @ 00950e28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_98);
                    /* try { // try from 00950d34 to 00950d43 has its CatchHandler @ 00950e38 */
    local_80 = this_01;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CustomShader*>>>
                          *)this_00,&local_60,(basic_string *)&local_98);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
                    /* try { // try from 00950db4 to 00950dbf has its CatchHandler @ 00950e38 */
      puVar7 = (undefined8 *)operator_new(0x40);
      pvVar8 = local_88;
      uVar2 = uStack_90;
      uVar4 = local_98;
      *puVar7 = 0;
      puVar7[1] = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      puVar7[6] = pvVar8;
      puVar7[7] = local_80;
      puVar7[5] = uVar2;
      puVar7[4] = uVar4;
      puVar7[2] = local_60;
      *pp_Var6 = (__tree_node_base *)puVar7;
      if ((long *)**this_00 != (long *)0x0) {
        *this_00 = (long *)**this_00;
        puVar7 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x40),(__tree_node_base *)puVar7);
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  else {
    this_01 = *(CustomShader **)((MaterialManager *)(ulong)_Var3 + 0x38);
  }
  FUN_00f276d0(1,this_01 + 8);
                    /* try { // try from 00950d6c to 00950d73 has its CatchHandler @ 00950e6c */
  Mutex::leaveCriticalSection();
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}


