// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TraceRay
// Entry Point: 00ec7168
// Size: 108 bytes
// Signature: undefined __thiscall TraceRay(AABBTreeImpl * this, XVector3 * param_1, XVector3 * param_2, double * param_3, double * param_4, double * param_5, double * param_6, double * param_7, uint * param_8)


/* aabbtree::AABBTreeImpl::TraceRay(aabbtree::XVector3<double> const&, aabbtree::XVector3<double>
   const&, double&, double&, double&, double&, double&, unsigned int&) const */

bool __thiscall
aabbtree::AABBTreeImpl::TraceRay
          (AABBTreeImpl *this,XVector3 *param_1,XVector3 *param_2,double *param_3,double *param_4,
          double *param_5,double *param_6,double *param_7,uint *param_8)

{
  *param_3 = 3.402823466385289e+38;
  TraceRecursive(this,0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return *param_3 != 3.402823466385289e+38;
}


