// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVisibilityCondition
// Entry Point: 007a7bb4
// Size: 316 bytes
// Signature: undefined __thiscall getVisibilityCondition(VisibilityConditionManager * this, VisibilityConditionDesc * param_1)


/* VisibilityConditionManager::getVisibilityCondition(VisibilityConditionDesc const&) */

undefined8 * __thiscall
VisibilityConditionManager::getVisibilityCondition
          (VisibilityConditionManager *this,VisibilityConditionDesc *param_1)

{
  long lVar1;
  byte bVar2;
  __tree_node_base **pp_Var3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
                    /* try { // try from 007a7bec to 007a7c0f has its CatchHandler @ 007a7cf8 */
  pp_Var3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
            ::__find_equal<VisibilityConditionDesc>
                      ((__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                        *)this,&local_50,param_1);
  puVar6 = (undefined8 *)*pp_Var3;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x68);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)param_1;
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)puVar6 + 0x3c) = 0;
    *(undefined8 *)((long)puVar6 + 0x4c) = 0;
    *(undefined8 *)((long)puVar6 + 0x44) = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0x3f800000;
    *(undefined8 *)((long)puVar6 + 0x24) = uVar8;
    *(undefined8 *)((long)puVar6 + 0x1c) = uVar7;
    *(undefined8 *)((long)puVar6 + 0x34) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x2c) = uVar9;
    *(undefined *)((long)puVar6 + 0x54) = 0;
    *(undefined *)((long)puVar6 + 0x5c) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = local_50;
    *pp_Var3 = (__tree_node_base *)puVar6;
    puVar5 = puVar6;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar5 = (undefined8 *)*pp_Var3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar5);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar5 = (undefined8 *)((long)puVar6 + 0x3c);
  if (*(int *)(puVar6 + 0xc) == 0) {
    uVar9 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)puVar6 + 0x44) = *(undefined8 *)(param_1 + 8);
    *puVar5 = uVar9;
    *(undefined8 *)((long)puVar6 + 0x54) = uVar8;
    *(undefined8 *)((long)puVar6 + 0x4c) = uVar7;
                    /* try { // try from 007a7c94 to 007a7c97 has its CatchHandler @ 007a7cf0 */
    lVar4 = EngineManager::getInstance();
    bVar2 = EnvironmentSettings::isElementAllowed
                      (*(EnvironmentSettings **)(lVar4 + 0x2e8),(VisibilityConditionDesc *)puVar5);
    *(byte *)((long)puVar6 + 0x5c) = bVar2 & 1;
  }
  FUN_00f276d0(1,puVar6 + 0xc);
                    /* try { // try from 007a7cb8 to 007a7cbf has its CatchHandler @ 007a7cf4 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}


