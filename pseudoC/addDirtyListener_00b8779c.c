// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDirtyListener
// Entry Point: 00b8779c
// Size: 92 bytes
// Signature: undefined __thiscall addDirtyListener(DensityMap * this, DirtyListener * param_1, bool param_2, uint param_3, uint param_4)


/* DensityMap::addDirtyListener(DensityMap::DirtyListener*, bool, unsigned int, unsigned int) */

void __thiscall
DensityMap::addDirtyListener
          (DensityMap *this,DirtyListener *param_1,bool param_2,uint param_3,uint param_4)

{
  long lVar1;
  DirtyListener *local_40;
  undefined local_38;
  uint local_34;
  int iStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iStack_30 = param_4 + param_3;
  local_40 = param_1;
  local_38 = param_2;
  local_34 = param_3;
  FUN_00b877f8(this + 0x78,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


