// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator>>
// Entry Point: 00cfbc90
// Size: 572 bytes
// Signature: undefined __cdecl operator>>(basic_istream * param_1, Integer * param_2)


/* CryptoPP::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&, CryptoPP::Integer&) */

basic_istream * CryptoPP::operator>>(basic_istream *param_1,Integer *param_2)

{
  size_t __n;
  long lVar1;
  char *__dest;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_b0;
  char *local_a8;
  byte local_9c [4];
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uStack_b0 = 0x10;
  local_a8 = (char *)UnalignedAllocate(0x10);
                    /* try { // try from 00cfbcdc to 00cfbce3 has its CatchHandler @ 00cfbee8 */
  std::__ndk1::ws<char,std::__ndk1::char_traits<char>>(param_1);
  uVar5 = 0;
switchD_00cfbde4_caseD_2c:
  do {
    uVar4 = uVar5;
                    /* try { // try from 00cfbcf8 to 00cfbd3b has its CatchHandler @ 00cfbeec */
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::read
              ((char *)param_1,(long)local_9c);
    uVar5 = (ulong)((int)uVar4 + 1);
    local_a8[uVar4] = local_9c[0];
    if ((uStack_b0 <= uVar5) && (uVar3 = (ulong)((int)uVar4 + 0x11), uStack_b0 < uVar3)) {
      __dest = (char *)UnalignedAllocate(uVar3);
      if ((local_a8 != (char *)0x0) && (__dest != (char *)0x0)) {
        __n = uVar3;
        if (uStack_b0 <= uVar3) {
          __n = uStack_b0;
        }
        memcpy(__dest,local_a8,__n);
      }
      for (; uStack_b0 != 0; uStack_b0 = uStack_b0 - 1) {
        local_a8[uStack_b0 - 1] = '\0';
      }
                    /* try { // try from 00cfbd74 to 00cfbd7b has its CatchHandler @ 00cfbeec */
      UnalignedDeallocate(local_a8);
      uStack_b0 = uVar3;
      local_a8 = __dest;
    }
    if (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 0x20] & 5) != 0)
    goto switchD_00cfbde4_caseD_2d;
  } while ((((local_9c[0] == 0x2d) || (local_9c[0] == 0x78)) ||
           (uVar2 = (uint)local_9c[0], uVar2 - 0x30 < 10)) || (uVar2 - 0x61 < 6));
  switch(uVar2) {
  case 0x2c:
  case 0x2e:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x48:
  case 0x4f:
  case 0x68:
  case 0x6f:
    goto switchD_00cfbde4_caseD_2c;
  default:
switchD_00cfbde4_caseD_2d:
    if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 00cfbdf4 to 00cfbdfb has its CatchHandler @ 00cfbee8 */
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::putback((char)param_1);
    }
    local_a8[uVar4] = '\0';
                    /* try { // try from 00cfbe0c to 00cfbe1b has its CatchHandler @ 00cfbee4 */
    Integer::Integer((Integer *)local_98,local_a8,1);
                    /* try { // try from 00cfbe1c to 00cfbe27 has its CatchHandler @ 00cfbed4 */
    Integer::operator=(param_2,(Integer *)local_98);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00cfbe60 to 00cfbe63 has its CatchHandler @ 00cfbed0 */
    UnalignedDeallocate(local_78);
    for (; uStack_b0 != 0; uStack_b0 = uStack_b0 - 1) {
      local_a8[uStack_b0 - 1] = '\0';
    }
                    /* try { // try from 00cfbe88 to 00cfbe8f has its CatchHandler @ 00cfbecc */
    UnalignedDeallocate(local_a8);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
}


