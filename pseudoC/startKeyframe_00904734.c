// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startKeyframe
// Entry Point: 00904734
// Size: 688 bytes
// Signature: undefined __cdecl startKeyframe(void * param_1, char * param_2, char * * param_3)


/* I3DAnimationSetsFactory::startKeyframe(void*, char const*, char const**) */

void I3DAnimationSetsFactory::startKeyframe(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  CompressedTransformationKeyFrame *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float afStack_54 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)ExpatUtil::getAttr("time",param_3);
  if (pcVar4 != (char *)0x0) {
    local_84 = 0.0;
    StringUtil::atof(pcVar4,&local_84);
    local_a0 = 0;
    uStack_98 = 0;
    pcVar4 = (char *)ExpatUtil::getAttr("translation",param_3);
    if (pcVar4 == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      StringUtil::splitIntoFloats(pcVar4,afStack_54,3,' ');
      pcVar4 = (char *)ExpatUtil::getAttr("iptin",param_3);
      if ((pcVar4 == (char *)0x0) || (iVar3 = strcmp(pcVar4,"linear"), iVar3 != 0)) {
        uVar6 = 0x11;
      }
      else {
        uVar6 = 1;
      }
      pcVar4 = (char *)ExpatUtil::getAttr("iptout",param_3);
      if ((pcVar4 == (char *)0x0) || (iVar3 = strcmp(pcVar4,"linear"), iVar3 != 0)) {
        uVar6 = uVar6 | 0x80;
      }
    }
    pcVar4 = (char *)ExpatUtil::getAttr("rotation",param_3);
    if (pcVar4 != (char *)0x0) {
      StringUtil::splitIntoFloats(pcVar4,&local_60,3,' ');
      uVar7 = MathUtil::degreeToRadian(local_60);
      uVar8 = MathUtil::degreeToRadian(local_5c);
      local_68 = MathUtil::degreeToRadian(local_58);
      local_70 = uVar7;
      uStack_6c = uVar8;
      GsQuaternion::GsQuaternion((GsQuaternion *)&local_80,(Vector3 *)&local_70);
      uStack_98 = uStack_78;
      local_a0 = local_80;
      pcVar4 = (char *)ExpatUtil::getAttr("iprin",param_3);
      if ((pcVar4 == (char *)0x0) || (iVar3 = strcmp(pcVar4,"linear"), iVar3 != 0)) {
        uVar6 = uVar6 | 0x22;
      }
      else {
        uVar6 = uVar6 | 2;
      }
      pcVar4 = (char *)ExpatUtil::getAttr("iprout",param_3);
      if ((pcVar4 == (char *)0x0) || (iVar3 = strcmp(pcVar4,"linear"), iVar3 != 0)) {
        uVar6 = uVar6 | 0x100;
      }
    }
    pcVar4 = (char *)ExpatUtil::getAttr("scale",param_3);
    if (pcVar4 != (char *)0x0) {
      StringUtil::splitIntoFloats(pcVar4,(float *)&local_80,3,' ');
      pcVar4 = (char *)ExpatUtil::getAttr("ipsin",param_3);
      if ((pcVar4 == (char *)0x0) || (iVar3 = strcmp(pcVar4,"linear"), iVar3 != 0)) {
        uVar6 = uVar6 | 0x44;
      }
      else {
        uVar6 = uVar6 | 4;
      }
      pcVar4 = (char *)ExpatUtil::getAttr("ipsout",param_3);
      if ((pcVar4 == (char *)0x0) || (iVar3 = strcmp(pcVar4,"linear"), iVar3 != 0)) {
        uVar6 = uVar6 | 0x200;
      }
    }
    pcVar4 = (char *)ExpatUtil::getAttr("visibility",param_3);
    if (pcVar4 == (char *)0x0) {
      bVar2 = true;
    }
    else {
      iVar3 = strcasecmp(pcVar4,"false");
      bVar2 = iVar3 != 0;
      uVar6 = uVar6 | 8;
    }
    pCVar5 = (CompressedTransformationKeyFrame *)
             CompressedTransformationKeyFrame::create
                       (local_84,uVar6,afStack_54,(GsQuaternion *)&local_a0,(float *)&local_80,bVar2
                       );
    KeyframedTransformation::addKey
              (*(KeyframedTransformation **)(*(long *)((long)param_1 + 0x288) + 0x10),pCVar5,
               (bool *)&local_60);
    if (local_60._0_1_ == '\0') {
      CompressedTransformationKeyFrame::destroy(pCVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


