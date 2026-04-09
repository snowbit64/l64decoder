// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchState
// Entry Point: 00885a28
// Size: 928 bytes
// Signature: undefined __thiscall switchState(DogBehaviorContext * this, BehaviorStateChangeParams * param_1)


/* DogBehaviorContext::switchState(BehaviorStateChangeParams const&) */

void __thiscall
DogBehaviorContext::switchState(DogBehaviorContext *this,BehaviorStateChangeParams *param_1)

{
  BehaviorStateChangeParams BVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  TransformGroup *pTVar5;
  State *pSVar6;
  StateTransition *pSVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte local_58;
  undefined7 local_57;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined uStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  BVar1 = *param_1;
  uVar8 = *(ulong *)(param_1 + 8);
  uVar11 = (ulong)((byte)BVar1 >> 1);
  uVar4 = uVar11;
  if (((byte)BVar1 & 1) != 0) {
    uVar4 = uVar8;
  }
  if (uVar4 == 4) {
                    /* try { // try from 00885a6c to 00885a87 has its CatchHandler @ 00885dfc */
    iVar3 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_1,0,(char *)0xffffffffffffffff,0x50588f);
    if (iVar3 != 0) {
      BVar1 = *param_1;
      uVar8 = *(ulong *)(param_1 + 8);
      uVar11 = (ulong)((byte)BVar1 >> 1);
      goto LAB_00885a9c;
    }
    pSVar6 = *(State **)(this + 0x178);
LAB_00885d94:
    pSVar7 = *(StateTransition **)(this + 0x188);
  }
  else {
LAB_00885a9c:
    uVar4 = uVar11;
    if (((byte)BVar1 & 1) != 0) {
      uVar4 = uVar8;
    }
    if (uVar4 == 5) {
                    /* try { // try from 00885aac to 00885ac7 has its CatchHandler @ 00885df8 */
      iVar3 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x4e5326);
      if (iVar3 == 0) {
        pTVar5 = *(TransformGroup **)(param_1 + 0x18);
        lVar9 = *(long *)(pTVar5 + 0x20);
        if (((lVar9 == 0) || (*(long *)(this + 0x158) == 0)) ||
           ((*(byte *)(lVar9 + 0x10) >> 5 & 1) == 0)) goto LAB_00885da0;
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        *(long *)(this + 0x118) = lVar9;
        *(undefined8 *)(this + 0xf0) = uVar12;
        *(TransformGroup **)(this + 0xf8) = pTVar5;
        SteeringTargetEntity::reset(*(SteeringTargetEntity **)(this + 0x138),pTVar5,0.2);
        SteeringTargetEntity::reset
                  (*(SteeringTargetEntity **)(this + 0x130),*(TransformGroup **)(this + 0xf0),2.0);
        pSVar6 = *(State **)(this + 0x158);
        goto LAB_00885d94;
      }
      BVar1 = *param_1;
      uVar8 = *(ulong *)(param_1 + 8);
      uVar11 = (ulong)((byte)BVar1 >> 1);
    }
    uVar4 = uVar11;
    if (((byte)BVar1 & 1) != 0) {
      uVar4 = uVar8;
    }
    if (uVar4 == 6) {
                    /* try { // try from 00885aec to 00885b07 has its CatchHandler @ 00885df4 */
      iVar3 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x4db492);
      if (iVar3 == 0) {
        uStack_4c = uStack_4c & 0xffffff00;
        local_58 = 0x16;
        local_57 = 0x52776f6c6c6f66;
        uStack_50 = 0x65676e61;
                    /* try { // try from 00885cb8 to 00885ccf has its CatchHandler @ 00885dcc */
        BehaviorDataSource::findRangeDefault
                  (*(BehaviorDataSource **)(this + 0x98),(basic_string *)&local_58,&local_3c,
                   &fStack_40,3.0,5.0);
        if ((local_58 & 1) != 0) {
          operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,uStack_48)));
        }
        SteeringTargetEntity::reset
                  (*(SteeringTargetEntity **)(this + 0x128),*(TransformGroup **)(param_1 + 0x18),
                   local_3c);
        StateMachine::setState
                  ((StateMachine *)(this + 8),*(State **)(this + 0x160),
                   *(StateTransition **)(this + 0x188));
        this[0x191] = (DogBehaviorContext)0x1;
        goto LAB_00885da0;
      }
      BVar1 = *param_1;
      uVar8 = *(ulong *)(param_1 + 8);
      uVar11 = (ulong)((byte)BVar1 >> 1);
    }
    uVar4 = uVar11;
    if (((byte)BVar1 & 1) != 0) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0xc) {
                    /* try { // try from 00885b2c to 00885b47 has its CatchHandler @ 00885df0 */
      iVar3 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x50af3e);
      if (iVar3 == 0) {
        local_58 = 0x22;
        uStack_4c = 0x696d6978;
        uStack_48 = 0x74;
        local_57 = 0x73756f68676f64;
        uStack_50 = 0x6f725065;
        uStack_47 = 0x79;
                    /* try { // try from 00885d30 to 00885d3f has its CatchHandler @ 00885dc8 */
        BehaviorDataSource::findValueDefault
                  (*(BehaviorDataSource **)(this + 0x98),(basic_string *)&local_58,&local_3c,5.0);
        if ((local_58 & 1) != 0) {
          operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,uStack_48)));
        }
        SteeringTargetEntity::reset
                  (*(SteeringTargetEntity **)(this + 0x140),*(TransformGroup **)(param_1 + 0x18),
                   local_3c);
        StateMachine::setState
                  ((StateMachine *)(this + 8),*(State **)(this + 0x168),
                   *(StateTransition **)(this + 0x188));
        this[0x191] = (DogBehaviorContext)0x0;
        goto LAB_00885da0;
      }
      BVar1 = *param_1;
      uVar8 = *(ulong *)(param_1 + 8);
      uVar11 = (ulong)((byte)BVar1 >> 1);
    }
    uVar4 = uVar11;
    if (((byte)BVar1 & 1) != 0) {
      uVar4 = uVar8;
    }
    if (uVar4 == 4) {
                    /* try { // try from 00885b6c to 00885b87 has its CatchHandler @ 00885dec */
      iVar3 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x4ddbd8);
      if (iVar3 == 0) {
        SteeringTargetEntity::reset
                  (*(SteeringTargetEntity **)(this + 0x148),*(TransformGroup **)(param_1 + 0x18),0.5
                  );
        pSVar6 = *(State **)(this + 0x150);
        goto LAB_00885d94;
      }
      BVar1 = *param_1;
      uVar8 = *(ulong *)(param_1 + 8);
      uVar11 = (ulong)((byte)BVar1 >> 1);
    }
    if (((byte)BVar1 & 1) != 0) {
      uVar11 = uVar8;
    }
                    /* try { // try from 00885bac to 00885bc7 has its CatchHandler @ 00885de8 */
    if ((uVar11 == 3) &&
       (iVar3 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x4e5322), iVar3 == 0)) {
      pSVar6 = *(State **)(this + 0x170);
      goto LAB_00885d94;
    }
    uVar4 = FUN_00885e00(param_1,"rideVehicle");
    if ((((uVar4 & 1) == 0) ||
        (uVar4 = StateMachine::isActiveState((StateMachine *)(this + 8),*(State **)(this + 0x160)),
        (uVar4 & 1) == 0)) || (*(long *)(*(long *)(this + 0x128) + 0x30) == 0)) goto LAB_00885da0;
    lVar9 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x10) >> 5 & 1) == 0)) goto LAB_00885da0;
    *(long *)(this + 0xf0) = *(long *)(*(long *)(this + 0x128) + 0x30);
    pSVar6 = *(State **)(this + 0x180);
    pSVar7 = *(StateTransition **)(this + 0x188);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(this + 0x108) = lVar9;
    *(undefined8 *)(this + 0x110) = uVar12;
    *(long *)(this + 0x118) = lVar10;
  }
  StateMachine::setState((StateMachine *)(this + 8),pSVar6,pSVar7);
LAB_00885da0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


