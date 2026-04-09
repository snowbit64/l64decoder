// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDumpSource
// Entry Point: 00efd43c
// Size: 508 bytes
// Signature: undefined __thiscall setDumpSource(BytecodeBuilder * this, basic_string * param_1)


/* Luau::BytecodeBuilder::setDumpSource(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall Luau::BytecodeBuilder::setDumpSource(BytecodeBuilder *this,basic_string *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar11 = *(byte **)(this + 0x268);
  pbVar9 = *(byte **)(this + 0x270);
  while (pbVar5 = pbVar9, pbVar5 != pbVar11) {
    pbVar9 = pbVar5 + -0x18;
    if ((*pbVar9 & 1) != 0) {
      operator_delete(*(void **)(pbVar5 + -8));
    }
  }
  uVar10 = 0;
  *(byte **)(this + 0x270) = pbVar11;
  do {
    lVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                      ((char)param_1,10);
    if (lVar6 == -1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_60,(ulong)param_1,uVar10,(allocator *)0xffffffffffffffff);
      puVar7 = *(undefined8 **)(this + 0x270);
      if (puVar7 < *(undefined8 **)(this + 0x278)) {
        uVar10 = 0xffffffffffffffff;
        puVar7[2] = local_50;
        puVar7[1] = uStack_58;
        *puVar7 = CONCAT71(uStack_5f,local_60);
        *(undefined8 **)(this + 0x270) = puVar7 + 3;
      }
      else {
                    /* try { // try from 00efd59c to 00efd5a7 has its CatchHandler @ 00efd638 */
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x268),(basic_string *)&local_60);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        uVar10 = 0xffffffffffffffff;
      }
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_60,(ulong)param_1,uVar10,(allocator *)(lVar6 - uVar10));
      puVar7 = *(undefined8 **)(this + 0x270);
      if (puVar7 < *(undefined8 **)(this + 0x278)) {
        puVar7[2] = local_50;
        puVar7[1] = uStack_58;
        *puVar7 = CONCAT71(uStack_5f,local_60);
        *(undefined8 **)(this + 0x270) = puVar7 + 3;
      }
      else {
                    /* try { // try from 00efd578 to 00efd583 has its CatchHandler @ 00efd63c */
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x268),(basic_string *)&local_60);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
      }
      uVar10 = lVar6 + 1;
    }
    lVar6 = *(long *)(this + 0x270);
    pbVar9 = (byte *)(lVar6 + -0x18);
    bVar2 = *pbVar9;
    bVar4 = bVar2 >> 1;
    uVar1 = (ulong)bVar4;
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(lVar6 + -0x10);
    }
    if (uVar1 != 0) {
      lVar8 = *(long *)(lVar6 + -8);
      if ((bVar2 & 1) == 0) {
        lVar8 = lVar6 + -0x17;
      }
      if (*(char *)(lVar8 + uVar1 + -1) == '\r') {
        if ((bVar2 & 1) == 0) {
          pbVar11 = pbVar9 + bVar4;
          *pbVar9 = (bVar4 - 1) * '\x02';
        }
        else {
          lVar8 = *(ulong *)(lVar6 + -0x10) - 1;
          pbVar11 = (byte *)(*(long *)(lVar6 + -8) + lVar8);
          *(long *)(lVar6 + -0x10) = lVar8;
        }
        *pbVar11 = 0;
      }
    }
  } while (uVar10 != 0xffffffffffffffff);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


