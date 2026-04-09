// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readVisibilityCondition
// Entry Point: 00932038
// Size: 812 bytes
// Signature: undefined __cdecl readVisibilityCondition(TransformGroup * param_1, I3DReader * param_2)


/* I3DSceneGraphFactory::readVisibilityCondition(TransformGroup&, I3DReader&) */

void I3DSceneGraphFactory::readVisibilityCondition(TransformGroup *param_1,I3DReader *param_2)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  VisibilityCondition *pVVar13;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_5c = 1.0;
  pcVar7 = (char *)ExpatUtil::getAttr("minuteOfDayStart",*(char ***)param_2);
  if (pcVar7 == (char *)0x0) {
LAB_009320c0:
    bVar2 = 0;
  }
  else {
    uVar3 = StringUtil::strtouint(pcVar7);
    pcVar7 = (char *)ExpatUtil::getAttr("minuteOfDayEnd",*(char ***)param_2);
    if (pcVar7 == (char *)0x0) goto LAB_009320c0;
    uVar4 = StringUtil::strtouint(pcVar7);
    bVar2 = 1;
    local_78._0_4_ = CONCAT22(uVar4,uVar3);
  }
  pcVar7 = (char *)ExpatUtil::getAttr("dayOfYearStart",*(char ***)param_2);
  if (pcVar7 != (char *)0x0) {
    uVar3 = StringUtil::strtouint(pcVar7);
    pcVar7 = (char *)ExpatUtil::getAttr("dayOfYearEnd",*(char ***)param_2);
    if (pcVar7 != (char *)0x0) {
      uVar4 = StringUtil::strtouint(pcVar7);
      bVar2 = 1;
      local_78 = CONCAT26(uVar4,CONCAT24(uVar3,(undefined4)local_78));
    }
  }
  pcVar7 = (char *)ExpatUtil::getAttr("renderInvisible",*(char ***)param_2);
  if (pcVar7 != (char *)0x0) {
    iVar5 = strcasecmp(pcVar7,"false");
    local_60 = iVar5 != 0;
  }
  pcVar8 = (char *)ExpatUtil::getAttr("visibleShaderParameter",*(char ***)param_2);
  if (pcVar8 != (char *)0x0) {
    StringUtil::atof(pcVar8,&local_5c);
  }
  pcVar9 = (char *)ExpatUtil::getAttr("weatherRequiredMask",*(char ***)param_2);
  if (pcVar9 != (char *)0x0) {
    uVar6 = StringUtil::strtouint(pcVar9);
    local_70 = CONCAT44(local_70._4_4_,uVar6);
  }
  pcVar10 = (char *)ExpatUtil::getAttr("weatherPreventMask",*(char ***)param_2);
  if (pcVar10 != (char *)0x0) {
    uVar6 = StringUtil::strtouint(pcVar10);
    local_70 = CONCAT44(uVar6,(undefined4)local_70);
  }
  pcVar11 = (char *)ExpatUtil::getAttr("viewerSpacialityRequiredMask",*(char ***)param_2);
  if (pcVar11 != (char *)0x0) {
    uVar6 = StringUtil::strtouint(pcVar11);
    local_68 = CONCAT44(local_68._4_4_,uVar6);
  }
  pcVar12 = (char *)ExpatUtil::getAttr("viewerSpacialityPreventMask",*(char ***)param_2);
  if (pcVar12 == (char *)0x0) {
    if (!(bool)(bVar2 | (((((ulong)pcVar7 | (ulong)pcVar8) != 0 || pcVar9 != (char *)0x0) ||
                         pcVar10 != (char *)0x0) || pcVar11 != (char *)0x0))) goto LAB_0093227c;
  }
  else {
    uVar6 = StringUtil::strtouint(pcVar12);
    local_68 = CONCAT44(uVar6,(undefined4)local_68);
  }
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar5 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 009322d0 to 009322db has its CatchHandler @ 00932368 */
    Mutex::Mutex((Mutex *)&DAT_0107c5c8,true);
    __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                 &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
  }
  pVVar13 = (VisibilityCondition *)
            VisibilityConditionManager::getVisibilityCondition
                      ((VisibilityConditionManager *)
                       &VisibilityConditionManager::getInstance()::instance,
                       (VisibilityConditionDesc *)&local_78);
  RawTransformGroup::setVisibilityCondition((RawTransformGroup *)param_1,pVVar13,false);
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar5 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 00932328 to 00932333 has its CatchHandler @ 00932364 */
    Mutex::Mutex((Mutex *)&DAT_0107c5c8,true);
    __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                 &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
  }
  VisibilityConditionManager::releaseVisibilityCondition
            ((VisibilityConditionManager *)&VisibilityConditionManager::getInstance()::instance,
             pVVar13);
LAB_0093227c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


