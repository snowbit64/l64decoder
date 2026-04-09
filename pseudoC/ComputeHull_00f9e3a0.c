// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeHull
// Entry Point: 00f9e3a0
// Size: 140 bytes
// Signature: undefined __thiscall ComputeHull(HullLibrary * this, uint param_1, btVector3 * param_2, PHullResult * param_3, uint param_4)


/* HullLibrary::ComputeHull(unsigned int, btVector3 const*, PHullResult&, unsigned int) */

void __thiscall
HullLibrary::ComputeHull
          (HullLibrary *this,uint param_1,btVector3 *param_2,PHullResult *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = calchull(this,param_2,param_1,(btAlignedObjectArray *)(param_3 + 0x18),&local_3c,param_4);
  if (iVar2 != 0) {
    *(btVector3 **)(param_3 + 0x10) = param_2;
    *(uint *)param_3 = param_1;
    *(int *)(param_3 + 4) = local_3c * 3;
    *(int *)(param_3 + 8) = local_3c;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}


