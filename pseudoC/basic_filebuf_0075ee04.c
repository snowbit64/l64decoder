// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: basic_filebuf
// Entry Point: 0075ee04
// Size: 256 bytes
// Signature: undefined basic_filebuf(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::basic_filebuf() */

void std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf(void)

{
  long lVar1;
  byte bVar2;
  long *in_x0;
  ulong uVar3;
  long lVar4;
  locale alStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  in_x0[9] = 0;
  in_x0[10] = 0;
  in_x0[8] = 0;
  in_x0[0xd] = 0;
  in_x0[0xc] = 0;
  in_x0[0xf] = 0;
  in_x0[0xe] = 0;
  in_x0[0x11] = 0;
  in_x0[0x10] = 0;
  in_x0[0x13] = 0;
  in_x0[0x12] = 0;
  *(undefined4 *)((long)in_x0 + 0x9f) = 0;
  *in_x0 = (long)&PTR__basic_filebuf_00fdb428;
  std::__ndk1::locale::locale(alStack_40,(locale *)(in_x0 + 1));
                    /* try { // try from 0075ee64 to 0075ee73 has its CatchHandler @ 0075ef28 */
  uVar3 = std::__ndk1::locale::has_facet((id *)alStack_40);
  std::__ndk1::locale::~locale(alStack_40);
  if ((uVar3 & 1) != 0) {
    std::__ndk1::locale::locale(alStack_40,(locale *)(in_x0 + 1));
                    /* try { // try from 0075ee90 to 0075ee9f has its CatchHandler @ 0075ef04 */
    lVar4 = std::__ndk1::locale::use_facet((id *)alStack_40);
    in_x0[0x10] = lVar4;
    std::__ndk1::locale::~locale(alStack_40);
    bVar2 = (**(code **)(*(long *)in_x0[0x10] + 0x38))();
    *(byte *)((long)in_x0 + 0xa2) = bVar2 & 1;
  }
                    /* try { // try from 0075eecc to 0075eedb has its CatchHandler @ 0075ef14 */
  (**(code **)(*in_x0 + 0x18))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


