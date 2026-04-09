// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findBlendingParameter
// Entry Point: 0086a0a8
// Size: 504 bytes
// Signature: undefined __thiscall findBlendingParameter(ConditionalAnimationBlending * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3, uint * param_4, bool * param_5)


/* ConditionalAnimationBlending::findBlendingParameter(DomXMLFile&, char const*,
   ConditionalAnimationShared const&, unsigned int&, bool&) */

uint __thiscall
ConditionalAnimationBlending::findBlendingParameter
          (ConditionalAnimationBlending *this,DomXMLFile *param_1,char *param_2,
          ConditionalAnimationShared *param_3,uint *param_4,bool *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 local_120;
  size_t local_118;
  void *local_110;
  undefined8 local_108;
  size_t local_100;
  void *local_f8;
  char acStack_f0 [128];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_0086a2ec(acStack_f0,param_1,param_2,"%s#blendingParameter",param_2);
  pcVar4 = (char *)Properties::getString((Properties *)param_1,acStack_f0,"");
  sVar5 = strlen(pcVar4);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar7 = (void *)((ulong)&local_108 | 1);
    local_108 = CONCAT71(local_108._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_0086a164;
  }
  else {
    uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar6);
    local_108 = uVar6 | 1;
    local_100 = sVar5;
    local_f8 = pvVar7;
LAB_0086a164:
    memcpy(pvVar7,pcVar4,sVar5);
  }
  *(undefined *)((long)pvVar7 + sVar5) = 0;
  FUN_0086a2ec(acStack_f0);
                    /* try { // try from 0086a18c to 0086a1e3 has its CatchHandler @ 0086a2d0 */
  pcVar4 = (char *)Properties::getString((Properties *)param_1,acStack_f0,"scalar");
  sVar5 = strlen(pcVar4);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0086a294 to 0086a29b has its CatchHandler @ 0086a2d0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar7 = (void *)((ulong)&local_120 | 1);
    local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_0086a204;
  }
  else {
    uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar6);
    local_120 = uVar6 | 1;
    local_118 = sVar5;
    local_110 = pvVar7;
  }
  memcpy(pvVar7,pcVar4,sVar5);
LAB_0086a204:
  *(undefined *)((long)pvVar7 + sVar5) = 0;
  iVar2 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                    ((char *)&local_120);
  *param_5 = iVar2 == 0;
                    /* try { // try from 0086a224 to 0086a233 has its CatchHandler @ 0086a2a0 */
  uVar3 = ConditionalAnimationShared::findParameterId(param_3,(basic_string *)&local_108,param_4);
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


