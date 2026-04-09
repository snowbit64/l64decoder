// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCallbacks
// Entry Point: 00867a04
// Size: 744 bytes
// Signature: undefined __thiscall loadCallbacks(ConditionalAnimationItem * this, DomXMLFile * param_1, char * param_2)


/* ConditionalAnimationItem::loadCallbacks(DomXMLFile&, char const*) */

void __thiscall
ConditionalAnimationItem::loadCallbacks
          (ConditionalAnimationItem *this,DomXMLFile *param_1,char *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  char *__s;
  size_t sVar4;
  void *__dest;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  bool local_1bc [4];
  undefined8 local_1b8;
  size_t local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  ushort local_198 [8];
  void *local_188;
  char acStack_180 [128];
  undefined auStack_100 [128];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_008676ac(auStack_100,0x80,0x80,"%s.callbacks.callback(%u)",param_2,0);
  uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,auStack_100,0);
  if ((uVar3 & 1) != 0) {
    iVar6 = 1;
    do {
      local_198[0] = 0;
      local_1a0 = 0;
                    /* try { // try from 00867aec to 00867b07 has its CatchHandler @ 00867d00 */
      FUN_008676ac(acStack_180,0x80,0x80,"%s#name",auStack_100);
                    /* try { // try from 00867b08 to 00867b5b has its CatchHandler @ 00867d08 */
      __s = (char *)Properties::getString((Properties *)param_1,acStack_180,"");
      sVar4 = strlen(__s);
      if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00867ce0 to 00867ce7 has its CatchHandler @ 00867d04 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar4 < 0x17) {
        local_1b8 = CONCAT71(local_1b8._1_7_,(char)((int)sVar4 << 1));
        __dest = (void *)((ulong)&local_1b8 | 1);
        if (sVar4 != 0) goto LAB_00867b6c;
      }
      else {
        uVar3 = sVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar3);
        local_1b8 = uVar3 | 1;
        local_1b0 = sVar4;
        local_1a8 = __dest;
LAB_00867b6c:
        memcpy(__dest,__s,sVar4);
      }
      *(undefined *)((long)__dest + sVar4) = 0;
      sVar4 = (ulong)((byte)local_1b8 >> 1);
      if ((local_1b8 & 1) != 0) {
        sVar4 = local_1b0;
      }
      if (sVar4 != 0) {
        local_1bc[0] = false;
                    /* try { // try from 00867b9c to 00867bb7 has its CatchHandler @ 00867cfc */
        FUN_008676ac(acStack_180,0x80,0x80,"%s#time",auStack_100);
                    /* try { // try from 00867bb8 to 00867c0b has its CatchHandler @ 00867d18 */
        fVar7 = (float)Properties::getFloat((Properties *)param_1,acStack_180,local_1bc);
        local_1a0 = CONCAT44(local_1a0._4_4_,3);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)local_198,(basic_string *)&local_1b8);
        if (local_1bc[0] == false) {
          FUN_008676ac(acStack_180,0x80,0x80,"%s#interval",auStack_100);
                    /* try { // try from 00867c0c to 00867c1b has its CatchHandler @ 00867cec */
          fVar7 = (float)Properties::getFloat((Properties *)param_1,acStack_180,local_1bc);
          if ((0.0 < fVar7) && (local_1bc[0] != false)) {
            uVar5 = 2;
            goto LAB_00867c34;
          }
        }
        else {
          uVar5 = 1;
LAB_00867c34:
          local_1a0 = CONCAT44(fVar7 * 1000.0,uVar5);
        }
        puVar1 = *(undefined8 **)(this + 200);
        if (puVar1 == *(undefined8 **)(this + 0xd0)) {
                    /* try { // try from 00867c74 to 00867c7f has its CatchHandler @ 00867d18 */
          std::__ndk1::
          vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
          ::__push_back_slow_path<ConditionalAnimationItem::LoadedCallbackInfo_const&>
                    ((vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
                      *)(this + 0xc0),(LoadedCallbackInfo *)&local_1a0);
        }
        else {
          *puVar1 = local_1a0;
                    /* try { // try from 00867c60 to 00867c67 has its CatchHandler @ 00867cf0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)(puVar1 + 1));
          *(undefined8 **)(this + 200) = puVar1 + 4;
        }
      }
      if (((byte)local_1b8 & 1) != 0) {
        operator_delete(local_1a8);
      }
      if ((local_198[0] & 1) != 0) {
        operator_delete(local_188);
      }
      FUN_008676ac(auStack_100,0x80,0x80,"%s.callbacks.callback(%u)",param_2,iVar6);
      uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,auStack_100,0);
      iVar6 = iVar6 + 1;
    } while ((uVar3 & 1) != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


