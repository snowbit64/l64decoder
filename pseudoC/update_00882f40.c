// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00882f40
// Size: 196 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementMoveTo::update() */

undefined8 BTMovementMoveTo::update(void)

{
  long lVar1;
  long in_x0;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
                    /* try { // try from 00882f70 to 00882f77 has its CatchHandler @ 00883004 */
  AnimalSteering::getEvents(*(AnimalSteering **)(in_x0 + 0x30),(vector *)&local_50);
  if ((long)local_48 - (long)local_50 == 0) {
    uVar4 = 3;
    if (local_50 == (void *)0x0) goto LAB_00882fd8;
  }
  else {
    uVar2 = 0;
    do {
      piVar3 = *(int **)((long)local_50 + uVar2 * 8);
      if (*piVar3 == 2) {
        uVar4 = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(int *)(*(long *)(in_x0 + 0x28) + 0xc4) = piVar3[1];
        goto LAB_00882fd0;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)((long)local_48 - (long)local_50 >> 3));
    uVar4 = 3;
  }
LAB_00882fd0:
  local_48 = local_50;
  operator_delete(local_50);
LAB_00882fd8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


