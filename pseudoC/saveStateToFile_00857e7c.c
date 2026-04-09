// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveStateToFile
// Entry Point: 00857e7c
// Size: 212 bytes
// Signature: undefined __thiscall saveStateToFile(DensityMapUpdater * this, char * param_1)


/* DensityMapUpdater::saveStateToFile(char const*) */

void __thiscall DensityMapUpdater::saveStateToFile(DensityMapUpdater *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar2 != (long *)0x0) {
    FUN_00857f50((double)*(float *)(this + 0x1058),(double)*(float *)(this + 0x1054),
                 (double)*(float *)(this + 0x1060),(double)*(float *)(this + 0x1088),auStack_438);
    uVar3 = __strlen_chk(auStack_438,0x400);
    (**(code **)(*plVar2 + 0x30))(plVar2,auStack_438,uVar3);
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2 != (long *)0x0);
}


