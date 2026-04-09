// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRunningCallbackList
// Entry Point: 00867f1c
// Size: 584 bytes
// Signature: undefined createRunningCallbackList(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationItem::createRunningCallbackList() */

void ConditionalAnimationItem::createRunningCallbackList(void)

{
  long lVar1;
  ConditionalAnimationPlayer **in_x0;
  ulong uVar2;
  ulong uVar3;
  ConditionalAnimationPlayer *pCVar4;
  ulong uVar5;
  ConditionalAnimationPlayer *pCVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  byte local_e8;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_a0;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  pCVar6 = in_x0[0x18];
  uVar3 = (long)in_x0[0x19] - (long)pCVar6;
  if ((int)(uVar3 >> 5) == 0) {
LAB_00868114:
    local_b8 = RunningCallbackInfo::isTimeLess;
    std::__ndk1::
    __sort<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              ((RunningCallbackInfo *)in_x0[0x1b],(RunningCallbackInfo *)in_x0[0x1c],
               (_func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr *)&local_b8);
    if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar5 = 0;
  do {
    if (*(int *)(pCVar6 + uVar5 * 0x20) == 3) {
      pCVar6 = *in_x0;
      local_88 = 0;
      uStack_80 = 0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_d0);
                    /* try { // try from 00867ff8 to 00868007 has its CatchHandler @ 00868178 */
      uVar2 = ConditionalAnimationPlayer::getCallback
                        (pCVar6,(basic_string)&local_d0,(ConditionalAnimationCallback *)&local_88);
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((uVar2 & 1) != 0) {
        local_b8 = (code *)0x0;
        local_b0 = 0;
        local_a8 = 0;
        if (*(char *)((long)in_x0 + 0xc) == '\0') {
          uVar7 = ConditionalAnimationClipInfo::getClipDuration();
        }
        else {
          uVar7 = ConditionalAnimationBlending::getClipDuration();
        }
LAB_008680e8:
        local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
        local_b0 = local_88;
        local_a8 = uStack_80;
        FUN_008681a8(in_x0 + 0x1b,&local_b8);
      }
    }
    else if (*(int *)(pCVar6 + uVar5 * 0x20) == 1) {
      pCVar4 = *in_x0;
      local_88 = 0;
      uStack_80 = 0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_a0);
                    /* try { // try from 00867fa4 to 00867fb3 has its CatchHandler @ 0086818c */
      uVar2 = ConditionalAnimationPlayer::getCallback
                        (pCVar4,(int)&stack0xffffffffffffffa0 - 0x40,
                         (ConditionalAnimationCallback *)&local_88);
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((uVar2 & 1) != 0) {
        local_b8 = (code *)0x0;
        uVar7 = *(undefined4 *)(pCVar6 + uVar5 * 0x20 + 4);
        goto LAB_008680e8;
      }
    }
    else {
      if (*(char *)((long)in_x0 + 0xc) == '\0') {
        fVar8 = (float)ConditionalAnimationClipInfo::getClipDuration();
      }
      else {
        fVar8 = (float)ConditionalAnimationBlending::getClipDuration();
      }
      pCVar4 = *in_x0;
      local_88 = 0;
      uStack_80 = 0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_e8);
                    /* try { // try from 00868074 to 00868083 has its CatchHandler @ 00868164 */
      uVar2 = ConditionalAnimationPlayer::getCallback
                        (pCVar4,(basic_string)&local_e8,(ConditionalAnimationCallback *)&local_88);
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if (((uVar2 & 1) != 0) && (0.0 < fVar8)) {
        fVar9 = 0.0;
        do {
          local_b0 = local_88;
          local_b8 = (code *)(ulong)(uint)fVar9;
          local_a8 = uStack_80;
          FUN_008681a8(in_x0 + 0x1b,&local_b8);
          fVar9 = fVar9 + *(float *)(pCVar6 + uVar5 * 0x20 + 4);
        } while (fVar9 < fVar8);
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (uVar3 >> 5 & 0xffffffff)) goto LAB_00868114;
    pCVar6 = in_x0[0x18];
  } while( true );
}


