// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSignature
// Entry Point: 009e6bec
// Size: 188 bytes
// Signature: undefined getSignature(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRule::getSignature() */

void ProceduralPlacementRule::getSignature(void)

{
  ulong uVar1;
  long lVar2;
  long in_x0;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort local_50;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x58) == *(long *)(in_x0 + 0x50)) {
    local_50 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_50);
  }
  uVar1 = *(ulong *)(in_x0 + 0x38);
  if ((*(byte *)(in_x0 + 0x28) & 1) == 0) {
    uVar1 = in_x0 + 0x29;
  }
                    /* try { // try from 009e6c4c to 009e6c57 has its CatchHandler @ 009e6ca8 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)&local_50,(char *)0x0,uVar1);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[2] = uVar4;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


