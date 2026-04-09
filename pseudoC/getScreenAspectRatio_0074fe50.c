// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScreenAspectRatio
// Entry Point: 0074fe50
// Size: 332 bytes
// Signature: undefined getScreenAspectRatio(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getScreenAspectRatio() const */

float EngineManager::getScreenAspectRatio(void)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long in_x0;
  ulong uVar6;
  float fVar7;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_010530b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_010530b8), iVar5 != 0)) {
                    /* try { // try from 0074ff60 to 0074ff6b has its CatchHandler @ 0074ff9c */
    EngineManager((EngineManager *)&DAT_01052d78);
    __cxa_atexit(~EngineManager,&DAT_01052d78,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_010530b8);
  }
  plVar2 = DAT_01052e40;
  if (DAT_01052e40 == (long *)0x0) {
    fVar7 = 1.0;
  }
  else {
    uVar3 = (**(code **)(*DAT_01052e40 + 0x10))(DAT_01052e40);
    uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
    fVar7 = 1.0;
    if (uVar3 != 0 && uVar4 != 0) {
      fVar7 = (float)(ulong)uVar3 / (float)(ulong)uVar4;
    }
    uVar6 = (**(code **)(*plVar2 + 0x78))(plVar2);
    if ((((uVar6 & 1) != 0) &&
        ((**(code **)(**(long **)(in_x0 + 0xc0) + 0x78))
                   (*(long **)(in_x0 + 0xc0),&local_4c,&local_50), local_4c != 0)) &&
       (local_50 != 0)) {
      fVar7 = (float)(ulong)local_4c / (float)(ulong)local_50;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


