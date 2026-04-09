// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetClosestPointWithinDistance
// Entry Point: 00ec775c
// Size: 156 bytes
// Signature: undefined __cdecl GetClosestPointWithinDistance(XVector3 * param_1, double param_2, double * param_3, double * param_4, double * param_5, uint * param_6, XVector3 * param_7)


/* aabbtree::AABBTreeImpl::GetClosestPointWithinDistance(aabbtree::XVector3<double> const&, double,
   double&, double&, double&, unsigned int&, aabbtree::XVector3<double>&) const */

void aabbtree::AABBTreeImpl::GetClosestPointWithinDistance
               (XVector3 *param_1,double param_2,double *param_3,double *param_4,double *param_5,
               uint *param_6,XVector3 *param_7)

{
  long lVar1;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_40 = param_2 * param_2;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_4 = param_2;
  *param_7 = 0xffffffff;
  GetClosestPointWithinDistanceSqRecursive
            ((uint)param_1,(XVector3 *)0x0,param_3,&local_40,param_5,param_6,param_7);
  *param_4 = SQRT(local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_7 != 0xffffffff);
}


