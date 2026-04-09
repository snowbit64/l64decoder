// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIsUserBlocked
// Entry Point: 00c66370
// Size: 1540 bytes
// Signature: undefined __thiscall setIsUserBlocked(UserBlockManager * this, char * param_1, char * param_2, PLATFORM_ID param_3, bool param_4, char * param_5)


/* UserBlockManager::setIsUserBlocked(char const*, char const*, SysUtilBase::PLATFORM_ID, bool, char
   const*) */

void __thiscall
UserBlockManager::setIsUserBlocked
          (UserBlockManager *this,char *param_1,char *param_2,PLATFORM_ID param_3,bool param_4,
          char *param_5)

{
  basic_string *this_00;
  UserDetails *pUVar1;
  long lVar2;
  ulong uVar3;
  __hash_iterator _Var4;
  int iVar5;
  pair pVar6;
  size_t sVar7;
  size_t sVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 local_e0;
  size_t local_d8;
  void *local_d0;
  undefined8 *local_c0;
  undefined8 local_b8;
  size_t sStack_b0;
  void *local_a8;
  undefined8 local_a0;
  size_t sStack_98;
  void *local_90;
  PLATFORM_ID local_88;
  undefined8 local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  sVar7 = strlen(param_1);
  if (0xffffffffffffffef < sVar7) goto LAB_00c66948;
  if (sVar7 < 0x17) {
    pvVar13 = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00c66408;
  }
  else {
    uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar13 = operator_new(uVar12);
    local_b8 = uVar12 | 1;
    sStack_b0 = sVar7;
    local_a8 = pvVar13;
LAB_00c66408:
    memcpy(pvVar13,param_1,sVar7);
  }
  this_00 = (basic_string *)(this + 0x28);
  *(undefined *)((long)pvVar13 + sVar7) = 0;
                    /* try { // try from 00c66420 to 00c6642b has its CatchHandler @ 00c669e8 */
  _Var4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
                      *)this_00,(basic_string *)&local_b8);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((_Var4 != 0) == param_4) goto LAB_00c66918;
  if (param_4) {
    sVar7 = strlen(param_1);
    if (0xffffffffffffffef < sVar7) goto LAB_00c66948;
    if (sVar7 < 0x17) {
      pvVar13 = (void *)((ulong)&local_b8 | 1);
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00c664dc;
    }
    else {
      uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar13 = operator_new(uVar12);
      local_b8 = uVar12 | 1;
      sStack_b0 = sVar7;
      local_a8 = pvVar13;
LAB_00c664dc:
      memcpy(pvVar13,param_1,sVar7);
    }
    *(undefined *)((long)pvVar13 + sVar7) = 0;
    sVar7 = strlen(param_2);
    if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c66958 to 00c6695f has its CatchHandler @ 00c669e4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar13 = (void *)((long)&local_a0 + 1);
      local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00c6665c;
    }
    else {
      uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c66630 to 00c66637 has its CatchHandler @ 00c669e4 */
      pvVar13 = operator_new(uVar12);
      local_a0 = uVar12 | 1;
      sStack_98 = sVar7;
      local_90 = pvVar13;
LAB_00c6665c:
      memcpy(pvVar13,param_2,sVar7);
    }
    *(undefined *)((long)pvVar13 + sVar7) = 0;
    local_88 = param_3;
    sVar7 = strlen(param_5);
    if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c66960 to 00c66967 has its CatchHandler @ 00c669d0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar13 = (void *)((long)&local_80 + 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00c666cc;
    }
    else {
      uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c666b4 to 00c666bb has its CatchHandler @ 00c669d0 */
      pvVar13 = operator_new(uVar12);
      local_80 = uVar12 | 1;
      sStack_78 = sVar7;
      local_70 = pvVar13;
LAB_00c666cc:
      memcpy(pvVar13,param_5,sVar7);
    }
    *(undefined *)((long)pvVar13 + sVar7) = 0;
    sVar7 = strlen(param_1);
    if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c66968 to 00c6696f has its CatchHandler @ 00c669bc */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar13 = (void *)((ulong)&local_e0 | 1);
      local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00c66734;
    }
    else {
      uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c6671c to 00c66723 has its CatchHandler @ 00c669bc */
      pvVar13 = operator_new(uVar12);
      local_e0 = (undefined8 *)(uVar12 | 1);
      local_d8 = sVar7;
      local_d0 = pvVar13;
LAB_00c66734:
      memcpy(pvVar13,param_1,sVar7);
    }
    local_c0 = &local_e0;
    *(undefined *)((long)pvVar13 + sVar7) = 0;
                    /* try { // try from 00c66750 to 00c6676b has its CatchHandler @ 00c66980 */
    pVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                      (this_00,(piecewise_construct_t *)&local_e0,(tuple *)&DAT_0053e4db,
                       (tuple *)&local_c0);
    uVar12 = (ulong)pVar6;
    if ((*(byte *)(ulong *)(uVar12 + 0x28) & 1) != 0) {
      operator_delete(*(void **)(uVar12 + 0x38));
    }
    uVar3 = local_b8;
    local_b8 = local_b8 & 0xffffffffffff0000;
    *(void **)(uVar12 + 0x38) = local_a8;
    *(size_t *)(uVar12 + 0x30) = sStack_b0;
    *(ulong *)(uVar12 + 0x28) = uVar3;
    if ((*(byte *)(ulong *)(uVar12 + 0x40) & 1) != 0) {
      operator_delete(*(void **)(uVar12 + 0x50));
    }
    uVar3 = local_a0;
    local_a0 = local_a0 & 0xffffffffffff0000;
    *(size_t *)(uVar12 + 0x48) = sStack_98;
    *(ulong *)(uVar12 + 0x40) = uVar3;
    *(void **)(uVar12 + 0x50) = local_90;
    *(PLATFORM_ID *)(uVar12 + 0x58) = local_88;
    if ((*(byte *)(ulong *)(uVar12 + 0x60) & 1) != 0) {
      operator_delete(*(void **)(uVar12 + 0x70));
    }
    uVar3 = local_80;
    local_80 = local_80 & 0xffffffffffff0000;
    *(size_t *)(uVar12 + 0x68) = sStack_78;
    *(ulong *)(uVar12 + 0x60) = uVar3;
    *(void **)(uVar12 + 0x70) = local_70;
    if ((((ulong)local_e0 & 1) != 0) && (operator_delete(local_d0), (local_80 & 1) != 0)) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    sVar7 = strlen(param_1);
    if (0xffffffffffffffef < sVar7) {
LAB_00c66948:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar13 = (void *)((ulong)&local_b8 | 1);
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00c66884;
    }
    else {
      uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar13 = operator_new(uVar12);
      local_b8 = uVar12 | 1;
      sStack_b0 = sVar7;
      local_a8 = pvVar13;
LAB_00c66884:
      memcpy(pvVar13,param_1,sVar7);
    }
    local_e0 = &local_b8;
    *(undefined *)((long)pvVar13 + sVar7) = 0;
                    /* try { // try from 00c668a0 to 00c668bb has its CatchHandler @ 00c669ac */
    pVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                      (this_00,(piecewise_construct_t *)&local_b8,(tuple *)&DAT_0053e4db,
                       (tuple *)&local_e0);
    pUVar1 = *(UserDetails **)(this + 0x58);
    if (pUVar1 == *(UserDetails **)(this + 0x60)) {
                    /* try { // try from 00c668e8 to 00c668ef has its CatchHandler @ 00c669ac */
      std::__ndk1::
      vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>::
      __push_back_slow_path<UserBlockManager::UserDetails_const&>
                ((vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>
                  *)(this + 0x50),(UserDetails *)((ulong)pVar6 + 0x28));
    }
    else {
                    /* try { // try from 00c668d0 to 00c668d7 has its CatchHandler @ 00c66974 */
      std::__ndk1::allocator<UserBlockManager::UserDetails>::
      construct<UserBlockManager::UserDetails,UserBlockManager::UserDetails_const&>
                ((allocator<UserBlockManager::UserDetails> *)(this + 0x60),pUVar1,
                 (UserDetails *)((ulong)pVar6 + 0x28));
      *(UserDetails **)(this + 0x58) = pUVar1 + 0x50;
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  else {
    sVar7 = strlen(param_1);
    if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar13 = (void *)((ulong)&local_e0 | 1);
      local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00c66548;
    }
    else {
      uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar13 = operator_new(uVar12);
      local_e0 = (undefined8 *)(uVar12 | 1);
      local_d8 = sVar7;
      local_d0 = pvVar13;
LAB_00c66548:
      memcpy(pvVar13,param_1,sVar7);
    }
    *(undefined *)((long)pvVar13 + sVar7) = 0;
                    /* try { // try from 00c6655c to 00c6656b has its CatchHandler @ 00c66998 */
    _Var4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
                        *)this_00,(basic_string *)&local_e0);
    if (_Var4 != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
      ::remove((__hash_const_iterator)this_00);
      uVar12 = local_b8;
      local_b8 = 0;
      if (uVar12 != 0) {
        FUN_00c68690(&sStack_b0);
      }
    }
    if (((ulong)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    pbVar9 = *(byte **)(this + 0x50);
    pbVar11 = *(byte **)(this + 0x58);
    pbVar10 = pbVar9;
    if (pbVar9 != pbVar11) {
      do {
        sVar8 = strlen(param_1);
        sVar7 = (ulong)(*pbVar10 >> 1);
        if ((*pbVar10 & 1) != 0) {
          sVar7 = *(size_t *)(pbVar10 + 8);
        }
        if (sVar8 == sVar7) {
                    /* try { // try from 00c665f4 to 00c66607 has its CatchHandler @ 00c66a04 */
          iVar5 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,(ulong)param_1);
          if (iVar5 == 0) {
            FUN_00c66ab0(this + 0x50,pbVar9);
            break;
          }
          pbVar11 = *(byte **)(this + 0x58);
        }
        pbVar9 = pbVar9 + 0x50;
        pbVar10 = pbVar10 + 0x50;
      } while (pbVar10 != pbVar11);
    }
  }
  this[0x20] = (UserBlockManager)0x1;
LAB_00c66918:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


