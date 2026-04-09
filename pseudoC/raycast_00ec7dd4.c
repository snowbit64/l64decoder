// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycast
// Entry Point: 00ec7dd4
// Size: 108 bytes
// Signature: undefined __thiscall raycast(AABBTreeImpl * this, double * param_1, double * param_2, double * param_3, double * param_4, double * param_5, double * param_6, double * param_7, uint * param_8)


/* aabbtree::AABBTreeImpl::raycast(double const*, double const*, double&, double&, double&, double&,
   double&, unsigned int&) const */

bool __thiscall
aabbtree::AABBTreeImpl::raycast
          (AABBTreeImpl *this,double *param_1,double *param_2,double *param_3,double *param_4,
          double *param_5,double *param_6,double *param_7,uint *param_8)

{
  *param_3 = 3.402823466385289e+38;
  TraceRecursive(this,0,(XVector3 *)param_1,(XVector3 *)param_2,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  return *param_3 != 3.402823466385289e+38;
}


