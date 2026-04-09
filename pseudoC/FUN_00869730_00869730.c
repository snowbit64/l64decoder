// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00869730
// Entry Point: 00869730
// Size: 356 bytes
// Signature: undefined FUN_00869730(void)


uint FUN_00869730(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,code **param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = std::__ndk1::
          __sort4<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
                    ((RunningCallbackInfo *)param_1,(RunningCallbackInfo *)param_2,
                     (RunningCallbackInfo *)param_3,(RunningCallbackInfo *)param_4,
                     (_func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr *)param_6);
  uVar5 = (**param_6)(param_5,param_4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar6 = param_4[2];
    *param_4 = *param_5;
    if (param_5 != param_4) {
      uVar3 = param_5[2];
      param_4[1] = param_5[1];
      param_4[2] = uVar3;
    }
    *param_5 = uVar1;
    param_5[1] = uVar2;
    param_5[2] = uVar6;
    uVar5 = (**param_6)(param_4,param_3);
    if ((uVar5 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar6 = param_3[2];
      *param_3 = *param_4;
      if (param_4 != param_3) {
        uVar3 = param_4[2];
        param_3[1] = param_4[1];
        param_3[2] = uVar3;
      }
      *param_4 = uVar1;
      param_4[1] = uVar2;
      param_4[2] = uVar6;
      uVar5 = (**param_6)(param_3,param_2);
      if ((uVar5 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar6 = param_2[2];
        *param_2 = *param_3;
        if (param_3 != param_2) {
          uVar3 = param_3[2];
          param_2[1] = param_3[1];
          param_2[2] = uVar3;
        }
        *param_3 = uVar1;
        param_3[1] = uVar2;
        param_3[2] = uVar6;
        uVar5 = (**param_6)(param_2,param_1);
        if ((uVar5 & 1) == 0) {
          uVar4 = uVar4 + 3;
        }
        else {
          uVar1 = *param_1;
          uVar2 = param_1[1];
          uVar6 = param_1[2];
          *param_1 = *param_2;
          if (param_2 != param_1) {
            uVar3 = param_2[2];
            param_1[1] = param_2[1];
            param_1[2] = uVar3;
          }
          uVar4 = uVar4 + 4;
          *param_2 = uVar1;
          param_2[1] = uVar2;
          param_2[2] = uVar6;
        }
      }
    }
  }
  return uVar4;
}


