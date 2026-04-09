// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 00867488
// Size: 520 bytes
// Signature: undefined __thiscall loadXMLFile(SpeedScaleInfo * this, DomXMLFile * param_1, char * param_2)


/* ConditionalAnimationItem::SpeedScaleInfo::loadXMLFile(DomXMLFile&, char const*) */

void __thiscall
ConditionalAnimationItem::SpeedScaleInfo::loadXMLFile
          (SpeedScaleInfo *this,DomXMLFile *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  char *__dest;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  char acStack_d8 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_008676ac(acStack_d8,0x80,0x80,"%s#speedScaleType",param_2);
  pcVar3 = (char *)Properties::getString((Properties *)param_1,acStack_d8,"");
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_f0 | 1);
    local_f0 = CONCAT71(local_f0._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00867540;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar4);
    local_f0 = uVar4 | 1;
    local_e8 = __n;
    local_e0 = __dest;
LAB_00867540:
    memcpy(__dest,pcVar3,__n);
  }
  __dest[__n] = '\0';
  *(undefined4 *)this = 0;
  pcVar3 = (char *)((ulong)&local_f0 | 1);
  if ((local_f0 & 1) != 0) {
    pcVar3 = local_e0;
  }
  iVar2 = strcasecmp(pcVar3,s_speedScaleStr);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    iVar2 = strcasecmp(pcVar3,PTR_s_fixed_0103eef0);
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    else {
      iVar2 = strcasecmp(pcVar3,PTR_s_distance_0103eef8);
      if (iVar2 == 0) {
        uVar6 = 2;
      }
      else {
        iVar2 = strcasecmp(pcVar3,PTR_s_angular_0103ef00);
        if (iVar2 != 0) goto LAB_008675d8;
        uVar6 = 3;
      }
    }
  }
  *(undefined4 *)this = uVar6;
LAB_008675d8:
                    /* try { // try from 008675d8 to 00867643 has its CatchHandler @ 00867690 */
  FUN_008676ac(acStack_d8,0x80,0x80,"%s#speedScaleParameter",param_2);
  if (*(int *)this == 2) {
    uVar6 = Properties::getFloat((Properties *)param_1,acStack_d8,0.0);
  }
  else if (*(int *)this == 3) {
    fVar5 = (float)Properties::getFloat((Properties *)param_1,acStack_d8,0.0);
    uVar6 = MathUtil::degreeToRadian(fVar5);
  }
  else {
    uVar6 = Properties::getFloat((Properties *)param_1,acStack_d8,1.0);
  }
  *(undefined4 *)(this + 4) = uVar6;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


