// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeInPlace
// Entry Point: 00f639fc
// Size: 24 bytes
// Signature: undefined __thiscall serializeInPlace(btOptimizedBvh * this, void * param_1, uint param_2, bool param_3)


/* btOptimizedBvh::serializeInPlace(void*, unsigned int, bool) const */

undefined8 __thiscall
btOptimizedBvh::serializeInPlace(btOptimizedBvh *this,void *param_1,uint param_2,bool param_3)

{
  btQuantizedBvh::serialize((btQuantizedBvh *)this,param_1,param_2,param_3);
  return 1;
}


