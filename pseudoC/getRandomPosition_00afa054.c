// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomPosition
// Entry Point: 00afa054
// Size: 100 bytes
// Signature: undefined __thiscall getRandomPosition(DetourNavigationMeshQuery * this, float * param_1)


/* DetourNavigationMeshQuery::getRandomPosition(float*) */

uint __thiscall
DetourNavigationMeshQuery::getRandomPosition(DetourNavigationMeshQuery *this,float *param_1)

{
  long lVar1;
  uint uVar2;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = dtNavMeshQuery::findRandomPoint
                    (*(dtNavMeshQuery **)(this + 8),(dtQueryFilter *)(this + 0x10),getRandomWrapper,
                     &uStack_2c,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 >> 0x1e & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


