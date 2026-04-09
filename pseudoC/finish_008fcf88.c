// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finish
// Entry Point: 008fcf88
// Size: 108 bytes
// Signature: undefined __thiscall finish(Callback * this, uint param_1, TransformGroup * param_2, FailedReason param_3)


/* I3DAssetPtr::Callback::finish(unsigned int, TransformGroup*, IStreamingCallback::FailedReason) */

void __thiscall
I3DAssetPtr::Callback::finish
          (Callback *this,uint param_1,TransformGroup *param_2,FailedReason param_3)

{
  long *plVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(this + 8);
  if (*pcVar2 == '\0') {
    *(undefined4 *)(pcVar2 + 4) = 0;
  }
  plVar1 = *(long **)(pcVar2 + 0x18);
  *(TransformGroup **)(pcVar2 + 8) = param_2;
  *(FailedReason *)(pcVar2 + 0x10) = param_3;
  if (plVar1 != (long *)0x0) {
    if (param_2 == (TransformGroup *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,param_3,pcVar2);
    }
    else {
      (**(code **)*plVar1)(plVar1,param_2,pcVar2);
    }
    *(undefined8 *)(pcVar2 + 0x18) = 0;
  }
  return;
}


