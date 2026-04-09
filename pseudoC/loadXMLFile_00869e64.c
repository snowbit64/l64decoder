// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 00869e64
// Size: 540 bytes
// Signature: undefined __thiscall loadXMLFile(ConditionalAnimationBlending * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationBlending::loadXMLFile(DomXMLFile&, char const*, ConditionalAnimationShared
   const&) */

void __thiscall
ConditionalAnimationBlending::loadXMLFile
          (ConditionalAnimationBlending *this,DomXMLFile *param_1,char *param_2,
          ConditionalAnimationShared *param_3)

{
  basic_string *pbVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  bool local_1ac [4];
  ConditionalAnimationClipInfo local_1a8 [16];
  void *local_198;
  undefined5 uStack_190;
  undefined3 local_18b;
  undefined5 uStack_188;
  int local_180;
  float fStack_17c;
  basic_string local_178;
  code *local_170 [16];
  char acStack_f0 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_1ac[0] = false;
  uVar4 = findBlendingParameter(this,param_1,param_2,param_3,(uint *)this,local_1ac);
  bVar3 = local_1ac[0];
  if ((uVar4 & 1) != 0) {
    FUN_0086a2ec(acStack_f0);
    uVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_f0,0);
    if ((uVar4 & 1) != 0) {
      iVar5 = 0;
      do {
        ConditionalAnimationClipInfo::ConditionalAnimationClipInfo(local_1a8);
        fStack_17c = 0.0;
        local_178 = 0;
        local_180 = 0xffffffff;
        FUN_0086a2ec(local_170);
                    /* try { // try from 00869f70 to 00869f9f has its CatchHandler @ 0086a08c */
        fStack_17c = (float)Properties::getFloat((Properties *)param_1,(char *)local_170,0.0);
        if (bVar3 != false) {
          fStack_17c = (float)MathUtil::degreeToRadian(fStack_17c);
        }
        ConditionalAnimationClipInfo::loadXMLFile(local_1a8,param_1,acStack_f0);
        pbVar1 = *(basic_string **)(this + 0x18);
        local_178 = 0;
        local_180 = iVar5;
        if (pbVar1 == *(basic_string **)(this + 0x20)) {
                    /* try { // try from 00869fec to 00869ff7 has its CatchHandler @ 0086a08c */
          std::__ndk1::
          vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
          ::__push_back_slow_path<ConditionalAnimationBlending::Node_const&>
                    ((vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
                      *)(this + 0x10),(Node *)local_1a8);
        }
        else {
                    /* try { // try from 00869fb4 to 00869fbf has its CatchHandler @ 0086a080 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar1);
          *(ulong *)((long)pbVar1 + 0x1d) = CONCAT53(uStack_188,local_18b);
          *(ulong *)(pbVar1 + 6) = CONCAT35(local_18b,uStack_190);
          pbVar1[0xc] = local_178;
          *(ulong *)(pbVar1 + 10) = CONCAT44(fStack_17c,local_180);
          *(basic_string **)(this + 0x18) = pbVar1 + 0xe;
        }
        if (fStack_17c < *(float *)(this + 4)) {
          *(float *)(this + 4) = fStack_17c;
        }
        if (*(float *)(this + 8) < fStack_17c) {
          *(float *)(this + 8) = fStack_17c;
        }
        if (((byte)local_1a8[0] & 1) != 0) {
          operator_delete(local_198);
        }
        iVar5 = iVar5 + 1;
        FUN_0086a2ec(acStack_f0);
        uVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_f0,0);
      } while ((uVar4 & 1) != 0);
    }
    local_170[0] = Node::isThresholdLess;
    std::__ndk1::
    __sort<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (*(Node **)(this + 0x10),*(Node **)(this + 0x18),
               (_func_bool_Node_ptr_Node_ptr *)local_170);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


