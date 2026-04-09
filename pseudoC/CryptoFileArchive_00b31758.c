// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CryptoFileArchive
// Entry Point: 00b31758
// Size: 940 bytes
// Signature: undefined __thiscall CryptoFileArchive(CryptoFileArchive * this, char * param_1, ulonglong param_2, ulonglong param_3, uint param_4, uchar * param_5)


/* CryptoFileArchive::CryptoFileArchive(char const*, unsigned long long, unsigned long long,
   unsigned int, unsigned char*) */

void __thiscall
CryptoFileArchive::CryptoFileArchive
          (CryptoFileArchive *this,char *param_1,ulonglong param_2,ulonglong param_3,uint param_4,
          uchar *param_5)

{
  char *__s;
  long lVar1;
  long *plVar2;
  CustomCipher *this_00;
  AESCipher *this_01;
  uchar *puVar3;
  uchar *puVar4;
  size_t __n;
  void *pvVar5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long **this_02;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  long local_a0;
  undefined8 local_98;
  size_t local_90;
  void *local_88;
  undefined auStack_80 [4];
  uint local_7c;
  uint local_78;
  __tree_end_node *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__CryptoFileArchive_00fe9618;
  Mutex::Mutex((Mutex *)(this + 0x10),true);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this_02 = (long **)(this + 0x38);
  *(CryptoFileArchive **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  plVar14 = (long *)(this + 0x50);
  *plVar14 = 0;
  this[0x68] = (CryptoFileArchive)0x0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
                    /* try { // try from 00b317e8 to 00b317ff has its CatchHandler @ 00b31b20 */
  plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  *(long **)(this + 8) = plVar2;
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00b31810 to 00b3182f has its CatchHandler @ 00b31b28 */
    (**(code **)(*plVar2 + 0x38))(plVar2,0x60);
    (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),auStack_80,0xc);
    if (0x50002 < local_7c) {
      local_b8 = local_b8 & 0xffffffff00000000;
                    /* try { // try from 00b31858 to 00b31863 has its CatchHandler @ 00b31b1c */
      (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),&local_b8,4);
      local_78 = local_78 + (int)local_b8;
    }
    if (local_7c < 0x50002) {
                    /* try { // try from 00b3189c to 00b318a3 has its CatchHandler @ 00b31b28 */
      this_01 = (AESCipher *)operator_new(0x48);
                    /* try { // try from 00b318a8 to 00b318b3 has its CatchHandler @ 00b31b04 */
      AESCipher::AESCipher(this_01,param_4,param_5);
      *(AESCipher **)(this + 0x58) = this_01;
    }
    else {
                    /* try { // try from 00b3187c to 00b31883 has its CatchHandler @ 00b31b28 */
      this_00 = (CustomCipher *)operator_new(0x3b0);
                    /* try { // try from 00b31888 to 00b31893 has its CatchHandler @ 00b31b10 */
      CustomCipher::CustomCipher(this_00,param_2,param_3);
      *(CustomCipher **)(this + 0x60) = this_00;
    }
                    /* try { // try from 00b318c0 to 00b318db has its CatchHandler @ 00b31b24 */
    puVar3 = (uchar *)operator_new__((ulong)local_78 << 9);
    (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8),0x200);
    uVar9 = local_78 << 9;
                    /* try { // try from 00b318f0 to 00b31937 has its CatchHandler @ 00b31b2c */
    (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),puVar3,uVar9);
    puVar4 = (uchar *)operator_new__((ulong)local_78 << 9);
    *(uchar **)(this + 0x50) = puVar4;
    if (*(AESCipher **)(this + 0x58) == (AESCipher *)0x0) {
      CustomCipher::decrypt(*(CustomCipher **)(this + 0x60),puVar3,uVar9,puVar4);
    }
    else {
      AESCipher::decrypt(*(AESCipher **)(this + 0x58),puVar3,uVar9,puVar4);
    }
    operator_delete__(puVar3);
    if (local_78 != 0) {
      lVar13 = 0;
      uVar10 = 0;
      uVar9 = local_78;
      do {
        if (*(int *)(*plVar14 + lVar13) == 1) {
          __s = (char *)(*plVar14 + lVar13 + 0x28);
          __n = strlen(__s);
          if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b31af8 to 00b31aff has its CatchHandler @ 00b31b3c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < 0x17) {
            local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
            pvVar5 = (void *)((ulong)&local_98 | 1);
            if (__n != 0) goto LAB_00b319dc;
          }
          else {
            uVar12 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b319c4 to 00b319cb has its CatchHandler @ 00b31b30 */
            pvVar5 = operator_new(uVar12);
            local_98 = uVar12 | 1;
            local_90 = __n;
            local_88 = pvVar5;
LAB_00b319dc:
            memcpy(pvVar5,__s,__n);
          }
          *(undefined *)((long)pvVar5 + __n) = 0;
          lVar11 = *plVar14;
                    /* try { // try from 00b319f4 to 00b319ff has its CatchHandler @ 00b31b34 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_b8);
          local_a0 = lVar11 + lVar13;
                    /* try { // try from 00b31a08 to 00b31a53 has its CatchHandler @ 00b31b44 */
          pp_Var6 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
                    ::
                    __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
                                *)this_02,&local_70,(basic_string *)&local_b8);
          if (*pp_Var6 == (__tree_node_base *)0x0) {
            puVar7 = (undefined8 *)operator_new(0x40);
            pvVar5 = local_a8;
            uVar8 = uStack_b0;
            uVar12 = local_b8;
            *puVar7 = 0;
            puVar7[1] = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = (void *)0x0;
            puVar7[6] = pvVar5;
            puVar7[7] = local_a0;
            puVar7[5] = uVar8;
            puVar7[4] = uVar12;
            puVar7[2] = local_70;
            *pp_Var6 = (__tree_node_base *)puVar7;
            if ((long *)**this_02 != (long *)0x0) {
              *this_02 = (long *)**this_02;
              puVar7 = (undefined8 *)*pp_Var6;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x40),(__tree_node_base *)puVar7);
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
          }
          if ((local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
          uVar9 = local_78;
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
            uVar9 = local_78;
          }
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x200;
      } while (uVar10 < uVar9);
    }
                    /* try { // try from 00b31abc to 00b31abf has its CatchHandler @ 00b31b2c */
    uVar8 = (**(code **)(**(long **)(this + 8) + 0x58))();
    *(undefined8 *)(this + 0x80) = uVar8;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


