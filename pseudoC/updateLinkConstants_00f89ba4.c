// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLinkConstants
// Entry Point: 00f89ba4
// Size: 68 bytes
// Signature: undefined updateLinkConstants(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::updateLinkConstants() */

void btSoftBody::updateLinkConstants(void)

{
  long in_x0;
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (ulong)*(uint *)(in_x0 + 0x394);
  if (0 < (int)*(uint *)(in_x0 + 0x394)) {
    plVar2 = (long *)(*(long *)(in_x0 + 0x3a0) + 0x18);
    do {
      uVar1 = uVar1 - 1;
      *(float *)(plVar2 + 2) =
           (*(float *)(*plVar2 + 0x60) + *(float *)(plVar2[-1] + 0x60)) / *(float *)(plVar2[-2] + 8)
      ;
      plVar2 = plVar2 + 9;
    } while (uVar1 != 0);
  }
  return;
}


