// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveMasks
// Entry Point: 009d45e8
// Size: 288 bytes
// Signature: undefined saveMasks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::saveMasks() */

void ProceduralPlacementManager::saveMasks(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ushort local_50 [8];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x50);
  if (*(long *)(in_x0 + 0x58) != lVar3) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      local_50[0] = 0;
                    /* try { // try from 009d4644 to 009d464b has its CatchHandler @ 009d4710 */
      (**(code **)(*plVar2 + 0x30))(plVar2,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      lVar3 = *(long *)(in_x0 + 0x50);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(in_x0 + 0x58) - lVar3 >> 3));
  }
  lVar3 = *(long *)(in_x0 + 0x68);
  if (*(long *)(in_x0 + 0x70) != lVar3) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      local_50[0] = 0;
                    /* try { // try from 009d4698 to 009d469f has its CatchHandler @ 009d470c */
      (**(code **)(*plVar2 + 0x30))(plVar2,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      lVar3 = *(long *)(in_x0 + 0x68);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(in_x0 + 0x70) - lVar3 >> 3));
  }
  plVar2 = *(long **)(in_x0 + 0xb0);
  if (plVar2 != (long *)0x0) {
    local_50[0] = 0;
                    /* try { // try from 009d46c8 to 009d46cf has its CatchHandler @ 009d4708 */
    (**(code **)(*plVar2 + 0x30))(plVar2,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


