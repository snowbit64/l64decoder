// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finish
// Entry Point: 008fcf18
// Size: 104 bytes
// Signature: undefined __thiscall finish(I3DAssetPtr * this, TransformGroup * param_1, FailedReason param_2)


/* I3DAssetPtr::finish(TransformGroup*, IStreamingCallback::FailedReason) */

void __thiscall I3DAssetPtr::finish(I3DAssetPtr *this,TransformGroup *param_1,FailedReason param_2)

{
  long *plVar1;
  
  if (*this == (I3DAssetPtr)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  plVar1 = *(long **)(this + 0x18);
  *(TransformGroup **)(this + 8) = param_1;
  *(FailedReason *)(this + 0x10) = param_2;
  if (plVar1 != (long *)0x0) {
    if (param_1 == (TransformGroup *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,param_2,this);
    }
    else {
      (**(code **)*plVar1)(plVar1,param_1,this);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


