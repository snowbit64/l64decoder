// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addArchiveToCache
// Entry Point: 00b30314
// Size: 456 bytes
// Signature: undefined __thiscall addArchiveToCache(ArchiveFileLoader * this, char * param_1)


/* ArchiveFileLoader::addArchiveToCache(char const*) */

undefined8 __thiscall ArchiveFileLoader::addArchiveToCache(ArchiveFileLoader *this,char *param_1)

{
  long **this_00;
  long lVar1;
  undefined8 uVar2;
  ArchiveFileLoader *this_01;
  undefined8 uVar3;
  size_t __n;
  __tree_node_base **pp_Var4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  uint local_64;
  __tree_end_node *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_01 = (ArchiveFileLoader *)Mutex::enterCriticalSection();
  uVar3 = createFileArchive(this_01,param_1,&local_64);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b303c4;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_80 = uVar7 | 1;
    local_78 = __n;
    local_70 = pvVar6;
  }
  memcpy(pvVar6,param_1,__n);
LAB_00b303c4:
  *(undefined *)((long)pvVar6 + __n) = 0;
                    /* try { // try from 00b303cc to 00b303db has its CatchHandler @ 00b304e0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_a8);
  this_00 = (long **)(this + 0x40);
  local_90 = local_64;
                    /* try { // try from 00b303e8 to 00b303f7 has its CatchHandler @ 00b304f0 */
  uStack_88 = uVar3;
  pp_Var4 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
                        *)this_00,&local_60,(basic_string *)&local_a8);
  if (*pp_Var4 == (__tree_node_base *)0x0) {
                    /* try { // try from 00b3045c to 00b30467 has its CatchHandler @ 00b304f0 */
    puVar5 = (undefined8 *)operator_new(0x48);
    pvVar6 = local_98;
    uVar2 = uStack_a0;
    uVar7 = local_a8;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0;
    puVar5[5] = uVar2;
    puVar5[4] = uVar7;
    puVar5[6] = pvVar6;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[8] = uStack_88;
    puVar5[7] = CONCAT44(uStack_8c,local_90);
    puVar5[2] = local_60;
    *pp_Var4 = (__tree_node_base *)puVar5;
    if ((long *)**this_00 != (long *)0x0) {
      *this_00 = (long *)**this_00;
      puVar5 = (undefined8 *)*pp_Var4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),(__tree_node_base *)puVar5);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
                    /* try { // try from 00b30414 to 00b3041b has its CatchHandler @ 00b304dc */
  Mutex::leaveCriticalSection();
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


