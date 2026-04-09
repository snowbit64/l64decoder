// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPointWithinDistance
// Entry Point: 00ec7e40
// Size: 124 bytes
// Signature: undefined __cdecl getClosestPointWithinDistance(double * param_1, double param_2, double * param_3)


/* aabbtree::AABBTreeImpl::getClosestPointWithinDistance(double const*, double, double*) */

void aabbtree::AABBTreeImpl::getClosestPointWithinDistance
               (double *param_1,double param_2,double *param_3)

{
  long lVar1;
  XVector3 local_44;
  uint auStack_40 [2];
  double dStack_38;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_2 * param_2;
  local_28 = *(long *)(lVar1 + 0x28);
  local_44 = 0xffffffff;
  GetClosestPointWithinDistanceSqRecursive
            ((uint)param_1,(XVector3 *)0x0,param_3,&local_30,&dStack_38,auStack_40,&local_44);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_44 != 0xffffffff);
}


