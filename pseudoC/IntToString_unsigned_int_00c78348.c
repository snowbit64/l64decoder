// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntToString<unsigned_int>
// Entry Point: 00c78348
// Size: 260 bytes
// Signature: basic_string __cdecl IntToString<unsigned_int>(uint param_1, uint param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   CryptoPP::IntToString<unsigned int>(unsigned int, unsigned int) */

basic_string CryptoPP::IntToString<unsigned_int>(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  basic_string bVar6;
  basic_string *in_x2;
  int iVar7;
  ulong *in_x8;
  long lVar8;
  long lVar9;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  void *local_60;
  
  lVar8 = tpidr_el0;
  lVar9 = *(long *)(lVar8 + 0x28);
  if (param_1 == 0) {
    *(undefined *)((long)in_x8 + 2) = 0;
    *(undefined2 *)in_x8 = 0x3002;
    lVar8 = *(long *)(lVar8 + 0x28);
    bVar6 = 0;
  }
  else {
    uVar2 = param_2 & 0x7fffffff;
    iVar7 = 0x57;
    if ((int)param_2 < 0) {
      iVar7 = 0x37;
    }
    local_70 = 0;
    local_60 = (void *)0x0;
    do {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = param_1 / uVar2;
      }
      uVar4 = param_1 - uVar5 * uVar2;
      iVar3 = 0x30;
      if (9 < uVar4) {
        iVar3 = iVar7;
      }
                    /* try { // try from 00c783d0 to 00c783db has its CatchHandler @ 00c7844c */
      bVar6 = std::__ndk1::operator+((__ndk1 *)(ulong)(iVar3 + uVar4),-0x70,in_x2);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
        bVar6 = (basic_string)local_60;
      }
      local_70 = local_88;
      local_60 = local_78;
      bVar1 = uVar2 <= param_1;
      param_1 = uVar5;
    } while (bVar1);
    in_x8[1] = uStack_80;
    *in_x8 = local_88;
    in_x8[2] = (ulong)local_78;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 == lVar9) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


