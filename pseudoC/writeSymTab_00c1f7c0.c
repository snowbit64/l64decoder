// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSymTab
// Entry Point: 00c1f7c0
// Size: 700 bytes
// Signature: undefined __thiscall writeSymTab(HlslParser * this, char * param_1, bool * param_2)


/* HlslParser::writeSymTab(char const*, bool*) */

void __thiscall HlslParser::writeSymTab(HlslParser *this,char *param_1,bool *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  FILE *__s;
  size_t __n;
  long lVar7;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uStack_88 = 0;
  local_90 = (void *)0x0;
  local_78 = (void *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_2 != (bool *)0x0) {
    lVar7 = 0;
    do {
      if (param_2[lVar7] != false) {
        lVar6 = __strlen_chk("Need libfunc ",0xe);
        bVar5 = (uStack_88 & 1) != 0;
        uVar1 = uStack_88 >> 1 & 0x7f;
        if (bVar5) {
          uVar1 = uStack_80;
        }
        uVar2 = 0x16;
        if (bVar5) {
          uVar2 = (uStack_88 & 0xfffffffffffffffe) - 1;
        }
        if (uVar2 < lVar6 + uVar1 + 2) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
                    ((ulong)&uStack_88);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&uStack_88);
        lVar6 = __strlen_chk((&GISLParserUtil::s_operatorName)[lVar7],0xffffffffffffffff);
        bVar5 = (uStack_88 & 1) != 0;
        uVar1 = uStack_88 >> 1 & 0x7f;
        if (bVar5) {
          uVar1 = uStack_80;
        }
        uVar2 = 0x16;
        if (bVar5) {
          uVar2 = (uStack_88 & 0xfffffffffffffffe) - 1;
        }
        if (uVar2 < lVar6 + uVar1 + 2) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
                    ((ulong)&uStack_88);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&uStack_88);
        lVar6 = __strlen_chk(&DAT_004fddf9,2);
        bVar5 = (uStack_88 & 1) != 0;
        uVar1 = uStack_88 >> 1 & 0x7f;
        if (bVar5) {
          uVar1 = uStack_80;
        }
        uVar2 = 0x16;
        if (bVar5) {
          uVar2 = (uStack_88 & 0xfffffffffffffffe) - 1;
        }
        if (uVar2 < lVar6 + uVar1 + 2) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
                    ((ulong)&uStack_88);
        }
                    /* try { // try from 00c1f834 to 00c1f947 has its CatchHandler @ 00c1fa84 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&uStack_88);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xbe);
  }
                    /* try { // try from 00c1f958 to 00c1f9d3 has its CatchHandler @ 00c1fa80 */
  GsTSymbolTableLevel::dump
            (*(GsTSymbolTableLevel **)(**(long **)(this + 0x40) + 0x10),(GsTInfoSink *)&local_a0);
  pvVar3 = (void *)((long)&uStack_88 + 1);
  if ((uStack_88 & 1) != 0) {
    pvVar3 = local_78;
  }
  lVar7 = __strlen_chk(pvVar3,0xffffffffffffffff);
  bVar5 = (local_a0 & 1) != 0;
  uVar1 = local_a0 >> 1 & 0x7f;
  if (bVar5) {
    uVar1 = uStack_98;
  }
  uVar2 = 0x16;
  if (bVar5) {
    uVar2 = (local_a0 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < lVar7 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)&local_a0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_a0);
  pvVar3 = (void *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pvVar3 = local_90;
  }
  __s = fopen(param_1,"wb");
  if (__s != (FILE *)0x0) {
                    /* try { // try from 00c1fa00 to 00c1fa0b has its CatchHandler @ 00c1fa7c */
    __n = __strlen_chk(pvVar3,0xffffffffffffffff);
    fwrite(pvVar3,1,__n,__s);
    fclose(__s);
  }
  if ((uStack_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


