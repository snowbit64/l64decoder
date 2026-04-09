// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressedFileArchive
// Entry Point: 00b30b5c
// Size: 756 bytes
// Signature: undefined __thiscall CompressedFileArchive(CompressedFileArchive * this, char * param_1, char * param_2)


/* CompressedFileArchive::CompressedFileArchive(char const*, char const*) */

void __thiscall
CompressedFileArchive::CompressedFileArchive
          (CompressedFileArchive *this,char *param_1,char *param_2)

{
  NativeFile *this_00;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  __tree_node_base **pp_Var9;
  undefined8 *puVar10;
  ACCESS_MODE AVar11;
  long **this_01;
  long lVar12;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined auStack_b8 [4];
  int local_b4;
  uint local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  __tree_end_node *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (NativeFile *)(this + 0x78);
  *(long *)(this + 0x10) = 0;
  this_01 = (long **)(this + 8);
  *this_01 = (long *)(this + 0x10);
  *(undefined ***)this = &PTR__CompressedFileArchive_00fe9510;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 00b30be0 to 00b30be7 has its CatchHandler @ 00b30e64 */
  NativeFile::NativeFile(this_00);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
                    /* try { // try from 00b30bf8 to 00b30c03 has its CatchHandler @ 00b30e58 */
  Mutex::Mutex((Mutex *)(this + 0xc0),true);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (void *)0x0;
                    /* try { // try from 00b30c18 to 00b30c97 has its CatchHandler @ 00b30f34 */
  uVar6 = PathUtil::isAbsolutePath(param_1);
  if ((uVar6 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_a8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_a8);
  PathUtil::getBasePath((basic_string *)&local_a8,(basic_string *)(this + 0x48),true);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x60));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30),(basic_string *)&local_a8);
  uVar7 = ThreadUtil::getCurrentThreadHandle();
  *(undefined8 *)(this + 0xa0) = uVar7;
  AVar11 = (ACCESS_MODE)*(undefined8 *)(this + 0x40);
  if (((byte)this[0x30] & 1) == 0) {
    AVar11 = (int)this + 0x31;
  }
  uVar6 = NativeFile::open((char *)this_00,AVar11,false);
  if ((uVar6 & 1) != 0) {
    uVar7 = NativeFile::getTimestamp();
    *(undefined8 *)(this + 0xe8) = uVar7;
                    /* try { // try from 00b30ca0 to 00b30caf has its CatchHandler @ 00b30e54 */
    iVar4 = NativeFile::read(this_00,auStack_b8,0xc);
    uVar2 = local_b0;
    if ((iVar4 == 0xc) && (local_b4 == 1)) {
                    /* try { // try from 00b30ccc to 00b30ce7 has its CatchHandler @ 00b30e50 */
      pvVar8 = operator_new__((ulong)local_b0 << 9);
      *(void **)(this + 0x28) = pvVar8;
      uVar5 = NativeFile::read(this_00,pvVar8,uVar2 * 0x200);
      if (uVar5 == uVar2 * 0x200) {
        *(uint *)(this + 0x20) = local_b0;
        if (local_b0 != 0) {
          uVar6 = 0;
          lVar12 = 0x14;
          do {
            local_d0 = 0;
            uStack_c8 = 0;
            local_c0 = (void *)0x0;
                    /* try { // try from 00b30d2c to 00b30d37 has its CatchHandler @ 00b30e74 */
            PathUtil::buildAbsolutePath
                      ((basic_string *)(this + 0x48),(char *)(*(long *)(this + 0x28) + lVar12),
                       (basic_string *)&local_d0);
                    /* try { // try from 00b30d38 to 00b30d43 has its CatchHandler @ 00b30e70 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_88);
            local_70 = (undefined4)uVar6;
                    /* try { // try from 00b30d48 to 00b30d93 has its CatchHandler @ 00b30e94 */
            pp_Var9 = std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                      ::
                      __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                  *)this_01,&local_90,(basic_string *)&local_88);
            if (*pp_Var9 == (__tree_node_base *)0x0) {
              puVar10 = (undefined8 *)operator_new(0x40);
              pvVar8 = local_78;
              uVar7 = uStack_80;
              uVar3 = local_88;
              *puVar10 = 0;
              puVar10[1] = 0;
              uStack_80 = 0;
              local_78 = (void *)0x0;
              local_88 = 0;
              puVar10[6] = pvVar8;
              puVar10[5] = uVar7;
              puVar10[4] = uVar3;
              *(undefined4 *)(puVar10 + 7) = local_70;
              puVar10[2] = local_90;
              *pp_Var9 = (__tree_node_base *)puVar10;
              if ((long *)**this_01 != (long *)0x0) {
                *this_01 = (long *)**this_01;
                puVar10 = (undefined8 *)*pp_Var9;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0x10),(__tree_node_base *)puVar10);
              *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
            }
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if ((local_d0 & 1) != 0) {
              operator_delete(local_c0);
            }
            uVar6 = uVar6 + 1;
            lVar12 = lVar12 + 0x200;
          } while (uVar6 < local_b0);
        }
      }
      else {
        if (*(void **)(this + 0x28) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x28));
        }
        *(undefined8 *)(this + 0x28) = 0;
      }
    }
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


