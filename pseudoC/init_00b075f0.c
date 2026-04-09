// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b075f0
// Size: 484 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericStoreUtil::init() */

void GenericStoreUtil::init(void)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  double dVar8;
  byte local_180 [2];
  undefined local_17e;
  void *local_170;
  long local_80;
  
  lVar4 = tpidr_el0;
  uVar7 = 0;
  local_80 = *(long *)(lVar4 + 0x28);
  pcVar5 = (char *)((ulong)local_180 | 1);
  lVar6 = 0;
  do {
    cVar2 = (char)uVar7 + '0';
    local_180[0] = 2;
    local_17e = 0;
    *pcVar5 = cVar2;
                    /* try { // try from 00b076f0 to 00b076fb has its CatchHandler @ 00b077dc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(s_products + lVar6,(ulong)pcVar5);
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(s_products + lVar6 + 0x18);
    local_180[0] = 2;
    *pcVar5 = cVar2;
    local_17e = 0;
                    /* try { // try from 00b07730 to 00b0773f has its CatchHandler @ 00b077d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(s_products + lVar6 + 0x18,(ulong)pcVar5);
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(s_products + lVar6 + 0x30);
    local_180[0] = 2;
    *pcVar5 = cVar2;
    local_17e = 0;
                    /* try { // try from 00b07774 to 00b07783 has its CatchHandler @ 00b077d4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(s_products + lVar6 + 0x30,(ulong)pcVar5);
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(s_products + lVar6 + 0x48);
    uVar3 = (ulong)uVar7;
    dVar8 = (double)((float)uVar3 * 15.2);
    FUN_00b077f8(dVar8,local_180);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(s_products + lVar6 + 0x60);
    FUN_00b077f8(dVar8,local_180);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(s_products + lVar6 + 0x78);
    uVar7 = uVar7 + 1;
    lVar1 = lVar6 + 0x98;
    *(float *)(s_products + lVar6 + 0x90) = (float)uVar3 * 15.2;
    lVar6 = lVar1;
  } while (lVar1 != 0x390);
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


