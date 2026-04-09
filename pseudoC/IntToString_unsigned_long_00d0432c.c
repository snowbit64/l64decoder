// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntToString<unsigned_long>
// Entry Point: 00d0432c
// Size: 260 bytes
// Signature: basic_string __cdecl IntToString<unsigned_long>(ulong param_1, uint param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   CryptoPP::IntToString<unsigned long>(unsigned long, unsigned int) */

basic_string CryptoPP::IntToString<unsigned_long>(ulong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  basic_string bVar5;
  basic_string *in_x2;
  ulong *in_x8;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  void *local_60;
  
  lVar7 = tpidr_el0;
  lVar8 = *(long *)(lVar7 + 0x28);
  if (param_1 == 0) {
    *(undefined *)((long)in_x8 + 2) = 0;
    *(undefined2 *)in_x8 = 0x3002;
    lVar7 = *(long *)(lVar7 + 0x28);
    bVar5 = 0;
  }
  else {
    uVar9 = (ulong)(param_2 & 0x7fffffff);
    iVar2 = 0x57;
    if ((int)param_2 < 0) {
      iVar2 = 0x37;
    }
    local_70 = 0;
    local_60 = (void *)0x0;
    do {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = param_1 / uVar9;
      }
      uVar6 = param_1 - uVar3 * uVar9;
      iVar1 = 0x30;
      if (9 < uVar6) {
        iVar1 = iVar2;
      }
                    /* try { // try from 00d043b4 to 00d043bf has its CatchHandler @ 00d04430 */
      bVar5 = std::__ndk1::operator+((__ndk1 *)(ulong)(uint)(iVar1 + (int)uVar6),-0x70,in_x2);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
        bVar5 = (basic_string)local_60;
      }
      bVar4 = uVar9 <= param_1;
      local_70 = local_88;
      local_60 = local_78;
      param_1 = uVar3;
    } while (bVar4);
    in_x8[1] = uStack_80;
    *in_x8 = local_88;
    in_x8[2] = (ulong)local_78;
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  if (lVar7 == lVar8) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


