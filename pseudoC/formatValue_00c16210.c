// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatValue
// Entry Point: 00c16210
// Size: 388 bytes
// Signature: undefined formatValue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::formatValue() */

void AST_ConstantNode::formatValue(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long in_x0;
  undefined8 *in_x8;
  long lVar4;
  ulong uVar5;
  undefined4 local_88 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(in_x0 + 0x48);
  lVar2 = *(long *)(in_x0 + 0x50);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (lVar2 != lVar4) {
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
                    /* try { // try from 00c16290 to 00c1629b has its CatchHandler @ 00c16394 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
        lVar4 = *(long *)(in_x0 + 0x48);
      }
      switch(*(undefined4 *)(lVar4 + uVar5 * 8)) {
      case 3:
                    /* try { // try from 00c162d0 to 00c1634b has its CatchHandler @ 00c16398 */
        FUN_00c163b4((double)*(float *)(lVar4 + uVar5 * 8 + 4),local_88);
        break;
      default:
        local_88[0] = 0x3f3f3f;
        break;
      case 5:
        FUN_00c163b4(local_88);
        break;
      case 6:
        FUN_00c163b4(local_88);
        break;
      case 9:
        pcVar1 = "false";
        if (*(char *)(lVar4 + uVar5 * 8 + 4) != '\0') {
          pcVar1 = "true";
        }
        __strcpy_chk(local_88,pcVar1,0x20);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8);
      lVar4 = *(long *)(in_x0 + 0x48);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(in_x0 + 0x50) - lVar4 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


