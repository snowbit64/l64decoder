// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSignature
// Entry Point: 00c58910
// Size: 416 bytes
// Signature: undefined getSignature(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsTFunction::getSignature() const */

void GsTFunction::getSignature(void)

{
  long lVar1;
  void *pvVar2;
  long in_x0;
  undefined8 *in_x8;
  ulong uVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00c5894c to 00c58957 has its CatchHandler @ 00c58ab4 */
  SHC_Type::getUserString();
  pvVar2 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
                    /* try { // try from 00c58974 to 00c5897b has its CatchHandler @ 00c58ab0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
                    /* try { // try from 00c5898c to 00c589c7 has its CatchHandler @ 00c58ab8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  if (*(long *)(in_x0 + 0x28) != *(long *)(in_x0 + 0x20)) {
    uVar4 = 0;
    do {
      if (uVar4 != 0) {
                    /* try { // try from 00c58a18 to 00c58a23 has its CatchHandler @ 00c58abc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
      }
                    /* try { // try from 00c58a34 to 00c58a3b has its CatchHandler @ 00c58af0 */
      SHC_Type::getUserString();
      pvVar2 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar2 = local_60;
      }
                    /* try { // try from 00c58a54 to 00c58a5b has its CatchHandler @ 00c58ac0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar2);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar3 = (*(long *)(in_x0 + 0x28) - *(long *)(in_x0 + 0x20) >> 3) * -0x5555555555555555;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
                    /* try { // try from 00c58a70 to 00c58a7f has its CatchHandler @ 00c58ab8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


