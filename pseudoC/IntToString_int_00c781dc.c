// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntToString<int>
// Entry Point: 00c781dc
// Size: 332 bytes
// Signature: basic_string __cdecl IntToString<int>(int param_1, uint param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   CryptoPP::IntToString<int>(int, unsigned int) */

basic_string CryptoPP::IntToString<int>(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  basic_string bVar7;
  basic_string *in_x2;
  int iVar8;
  ulong *in_x8;
  uint uVar9;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_1 == 0) {
    *(undefined *)((long)in_x8 + 2) = 0;
    *(undefined2 *)in_x8 = 0x3002;
    if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00c78324;
  }
  else {
    uVar9 = -param_1;
    if (-1 < param_1) {
      uVar9 = param_1;
    }
    iVar8 = 0x57;
    if ((int)param_2 < 0) {
      iVar8 = 0x37;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    bVar7 = param_1;
    if (0 < (int)uVar9) {
      uVar2 = param_2 & 0x7fffffff;
      do {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar9 / uVar2;
        }
        uVar4 = uVar9 - uVar5 * uVar2;
        iVar3 = 0x30;
        if (9 < uVar4) {
          iVar3 = iVar8;
        }
                    /* try { // try from 00c78274 to 00c7827f has its CatchHandler @ 00c7832c */
        bVar7 = std::__ndk1::operator+((__ndk1 *)(ulong)(iVar3 + uVar4),(char)&local_70,in_x2);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
          bVar7 = (basic_string)local_60;
        }
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        bVar1 = uVar2 <= uVar9;
        uVar9 = uVar5;
      } while (bVar1);
    }
    bVar1 = param_1 < 0;
    param_1 = bVar7;
    if (bVar1) {
                    /* try { // try from 00c78298 to 00c782ab has its CatchHandler @ 00c78328 */
      param_1 = std::__ndk1::operator+("-",(basic_string *)&local_70);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
        param_1 = (int)local_60;
      }
      uStack_68 = uStack_80;
      local_70 = local_88;
      local_60 = local_78;
    }
    in_x8[1] = uStack_68;
    *in_x8 = local_70;
    in_x8[2] = (ulong)local_60;
    if (*(long *)(lVar6 + 0x28) != local_58) {
LAB_00c78324:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return param_1;
}


