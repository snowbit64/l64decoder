// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parse
// Entry Point: 00c1f53c
// Size: 428 bytes
// Signature: undefined __thiscall parse(HlslParser * this, char * param_1, char * param_2)


/* HlslParser::parse(char const*, char const*) */

uint __thiscall HlslParser::parse(HlslParser *this,char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  undefined auStack_48 [16];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar6 = parseString(param_1,param_2,*(GISLParserContext **)(this + 0x48));
  if ((uVar6 & 1) == 0) {
    puVar9 = *(ulong **)(*(long *)(this + 0x48) + 8);
    bVar3 = *(byte *)puVar9;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar9[1];
    }
    if (uVar1 == 0) {
      uVar1 = 0x16;
      if ((bVar3 & 1) != 0) {
        uVar1 = (*puVar9 & 0xfffffffffffffffe) - 1;
      }
      if (uVar1 < 9) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)puVar9);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)puVar9);
      puVar9 = *(ulong **)(*(long *)(this + 0x48) + 8);
      FUN_00c1fcfc(auStack_48);
      lVar8 = __strlen_chk(auStack_48,0x10);
      bVar5 = (*(byte *)puVar9 & 1) != 0;
      uVar1 = (ulong)(*(byte *)puVar9 >> 1);
      if (bVar5) {
        uVar1 = puVar9[1];
      }
      uVar2 = 0x16;
      if (bVar5) {
        uVar2 = (*puVar9 & 0xfffffffffffffffe) - 1;
      }
      if (uVar2 < lVar8 + uVar1 + 2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)puVar9);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)puVar9);
      bVar5 = (*(byte *)puVar9 & 1) != 0;
      uVar1 = (ulong)(*(byte *)puVar9 >> 1);
      if (bVar5) {
        uVar1 = puVar9[1];
      }
      uVar2 = 0x16;
      if (bVar5) {
        uVar2 = (*puVar9 & 0xfffffffffffffffe) - 1;
      }
      if (uVar2 < uVar1 + 0x2c) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)puVar9);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)puVar9);
    }
  }
  else {
    plVar7 = *(long **)(*(long *)(this + 0x48) + 0x10);
    if (((plVar7 != (long *)0x0) && (lVar8 = (**(code **)(*plVar7 + 0x30))(), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x48) == 0)) {
      *(undefined4 *)(lVar8 + 0x48) = 1;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


