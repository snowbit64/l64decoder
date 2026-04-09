// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dump
// Entry Point: 00c57f44
// Size: 532 bytes
// Signature: undefined __cdecl dump(GsTInfoSink * param_1)


/* GsTSymbolTable::dump(GsTInfoSink&) const */

void GsTSymbolTable::dump(GsTInfoSink *param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long in_x1;
  undefined8 extraout_x1;
  undefined8 in_x2;
  long **pplVar7;
  long *plVar8;
  ulong uVar9;
  long **pplVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined auStack_78 [16];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (0 < (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 3)) {
    pcVar1 = (char *)(in_x1 + 0x18);
    uVar11 = (ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 3 & 0xffffffff;
    do {
      uVar9 = uVar11 - 1;
      bVar5 = (*(byte *)(in_x1 + 0x18) & 1) != 0;
      uVar2 = (ulong)(*(byte *)(in_x1 + 0x18) >> 1);
      if (bVar5) {
        uVar2 = *(ulong *)(in_x1 + 0x20);
      }
      uVar3 = 0x16;
      if (bVar5) {
        uVar3 = (*(ulong *)(in_x1 + 0x18) & 0xfffffffffffffffe) - 1;
      }
      if (uVar3 < uVar2 + 8) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)pcVar1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(pcVar1);
      FUN_00c598c0(auStack_78,extraout_x1,in_x2,uVar9 & 0xffffffff);
      lVar6 = __strlen_chk(auStack_78,0x10);
      bVar5 = (*(byte *)(in_x1 + 0x18) & 1) != 0;
      uVar2 = (ulong)(*(byte *)(in_x1 + 0x18) >> 1);
      if (bVar5) {
        uVar2 = *(ulong *)(in_x1 + 0x20);
      }
      uVar3 = 0x16;
      if (bVar5) {
        uVar3 = (*(ulong *)(in_x1 + 0x18) & 0xfffffffffffffffe) - 1;
      }
      if (uVar3 < lVar6 + uVar2 + 2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)pcVar1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(pcVar1);
      bVar5 = (*(byte *)(in_x1 + 0x18) & 1) != 0;
      uVar2 = (ulong)(*(byte *)(in_x1 + 0x18) >> 1);
      if (bVar5) {
        uVar2 = *(ulong *)(in_x1 + 0x20);
      }
      uVar3 = 0x16;
      if (bVar5) {
        uVar3 = (*(ulong *)(in_x1 + 0x18) & 0xfffffffffffffffe) - 1;
      }
      if (uVar3 < uVar2 + 3) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)pcVar1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(pcVar1);
      puVar12 = *(undefined8 **)(*(long *)param_1 + (uVar9 & 0xffffffff) * 8);
      pplVar10 = (long **)*puVar12;
      while (pplVar10 != (long **)(puVar12 + 1)) {
        (**(code **)(*pplVar10[8] + 0x28))();
        pplVar7 = (long **)pplVar10[1];
        if ((long **)pplVar10[1] == (long **)0x0) {
          pplVar7 = pplVar10 + 2;
          bVar5 = (long **)**pplVar7 != pplVar10;
          pplVar10 = (long **)*pplVar7;
          if (bVar5) {
            do {
              plVar8 = *pplVar7;
              pplVar7 = (long **)(plVar8 + 2);
              pplVar10 = (long **)*pplVar7;
            } while (*pplVar10 != plVar8);
          }
        }
        else {
          do {
            pplVar10 = pplVar7;
            pplVar7 = (long **)*pplVar10;
          } while (*pplVar10 != (long *)0x0);
        }
      }
      bVar5 = 1 < (long)uVar11;
      uVar11 = uVar9;
    } while (bVar5);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


