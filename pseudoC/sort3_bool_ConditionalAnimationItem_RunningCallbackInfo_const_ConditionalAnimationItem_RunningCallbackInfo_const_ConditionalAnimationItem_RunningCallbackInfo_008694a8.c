// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
// Entry Point: 008694a8
// Size: 372 bytes
// Signature: uint __cdecl __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>(RunningCallbackInfo * param_1, RunningCallbackInfo * param_2, RunningCallbackInfo * param_3, _func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr * param_4)


/* unsigned int std::__ndk1::__sort3<bool (*&)(ConditionalAnimationItem::RunningCallbackInfo const&,
   ConditionalAnimationItem::RunningCallbackInfo const&),
   ConditionalAnimationItem::RunningCallbackInfo*>(ConditionalAnimationItem::RunningCallbackInfo*,
   ConditionalAnimationItem::RunningCallbackInfo*, ConditionalAnimationItem::RunningCallbackInfo*,
   bool (*&)(ConditionalAnimationItem::RunningCallbackInfo const&,
   ConditionalAnimationItem::RunningCallbackInfo const&)) */

uint std::__ndk1::
     __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
               (RunningCallbackInfo *param_1,RunningCallbackInfo *param_2,
               RunningCallbackInfo *param_3,
               _func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = (**(code **)param_4)(param_2,param_1);
  uVar5 = (**(code **)param_4)(param_3,param_2);
  if ((uVar4 & 1) == 0) {
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    if (param_3 != param_2) {
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
    }
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar2;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    uVar4 = (**(code **)param_4)(param_2,param_1);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      if (param_2 != param_1) {
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x10) = uVar3;
      }
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 8) = uVar2;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      return 2;
    }
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      if (param_3 != param_1) {
        uVar3 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_1 + 0x10) = uVar3;
      }
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar2;
      *(undefined8 *)(param_3 + 0x10) = uVar6;
      return 1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    if (param_2 != param_1) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
    }
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    uVar4 = (**(code **)param_4)(param_3,param_2);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined8 *)param_2;
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      if (param_3 != param_2) {
        uVar3 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_2 + 0x10) = uVar3;
      }
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar2;
      *(undefined8 *)(param_3 + 0x10) = uVar6;
      return 2;
    }
  }
  return 1;
}


