// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: completion
// Entry Point: 006d5c60
// Size: 628 bytes
// Signature: undefined __thiscall completion(Console * this, bool param_1)


/* Console::completion(bool) */

void __thiscall Console::completion(Console *this,bool param_1)

{
  basic_string *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  basic_string *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  Console **ppCVar9;
  int iVar10;
  byte *pbVar11;
  Console **ppCVar12;
  Console *pCVar13;
  basic_string *pbVar14;
  Console **ppCVar15;
  basic_string *local_70;
  basic_string *local_68;
  basic_string *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (-1 < *(int *)(this + 0x108)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x80),(basic_string *)(this + 0xf0));
    uVar2 = (uint)((byte)this[0x80] >> 1);
    if (((byte)this[0x80] & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(this + 0x88);
    }
    *(uint *)(this + 0xe8) = uVar2;
  }
  local_70 = (basic_string *)0x0;
  local_68 = (basic_string *)0x0;
  local_60 = (basic_string *)0x0;
                    /* try { // try from 006d5cc8 to 006d5ccf has its CatchHandler @ 006d5ed4 */
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::reserve((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_70,*(ulong *)(this + 0x38));
  if (*(Console ***)(this + 0x28) != (Console **)(this + 0x30)) {
    ppCVar15 = *(Console ***)(this + 0x28);
    do {
      if ((long *)ppCVar15[7] != (long *)0x0) {
                    /* try { // try from 006d5d04 to 006d5d2f has its CatchHandler @ 006d5ee8 */
        pbVar7 = (byte *)(**(code **)(*(long *)ppCVar15[7] + 0x10))();
        pbVar11 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar11 = pbVar7 + 1;
        }
        pCVar13 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pCVar13 = *(Console **)(this + 0x90);
        }
        uVar8 = StringUtil::startsWith((char *)pbVar11,(char *)pCVar13);
        pbVar1 = local_68;
        if ((uVar8 & 1) != 0) {
          if (local_68 == local_60) {
                    /* try { // try from 006d5d58 to 006d5d63 has its CatchHandler @ 006d5ee8 */
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((basic_string *)&local_70);
          }
          else {
                    /* try { // try from 006d5d40 to 006d5d4b has its CatchHandler @ 006d5edc */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(local_68);
            local_68 = pbVar1 + 6;
          }
        }
      }
      ppCVar9 = (Console **)ppCVar15[1];
      if ((Console **)ppCVar15[1] == (Console **)0x0) {
        ppCVar9 = ppCVar15 + 2;
        ppCVar12 = (Console **)*ppCVar9;
        if ((Console **)*ppCVar12 != ppCVar15) {
          do {
            pCVar13 = *ppCVar9;
            ppCVar9 = (Console **)(pCVar13 + 0x10);
            ppCVar12 = (Console **)*ppCVar9;
          } while (*ppCVar12 != pCVar13);
        }
      }
      else {
        do {
          ppCVar12 = ppCVar9;
          ppCVar9 = (Console **)*ppCVar12;
        } while ((Console **)*ppCVar12 != (Console **)0x0);
      }
      ppCVar15 = ppCVar12;
    } while (ppCVar12 != (Console **)(this + 0x30));
  }
  if (local_70 == local_68) goto LAB_006d5e58;
  pbVar1 = (basic_string *)(this + 0x80);
  if (param_1) {
    iVar10 = -1;
    if (*(int *)(this + 0x108) != -1) goto LAB_006d5dd8;
  }
  else {
    iVar10 = 1;
LAB_006d5dd8:
    iVar10 = *(int *)(this + 0x108) + iVar10;
    *(int *)(this + 0x108) = iVar10;
  }
  iVar3 = (int)((ulong)((long)local_68 - (long)local_70) >> 3) * -0x55555555;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = (iVar10 + iVar3) / iVar3;
  }
  *(int *)(this + 0x108) = (iVar10 + iVar3) - iVar4 * iVar3;
                    /* try { // try from 006d5e08 to 006d5e3b has its CatchHandler @ 006d5ed8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xf0),pbVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)pbVar1
            ,local_70 + (long)*(int *)(this + 0x108) * 6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar1);
  uVar2 = (uint)((byte)this[0x80] >> 1);
  if (((byte)this[0x80] & 1) != 0) {
    uVar2 = (uint)*(undefined8 *)(this + 0x88);
  }
  *(uint *)(this + 0xe8) = uVar2;
LAB_006d5e58:
  pbVar1 = local_70;
  pbVar14 = local_68;
  if (local_70 != (basic_string *)0x0) {
    while (pbVar6 = pbVar14, pbVar6 != pbVar1) {
      pbVar14 = pbVar6 + -6;
      if ((*(byte *)pbVar14 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -2));
      }
    }
    local_68 = pbVar1;
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


