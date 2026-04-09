// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addText
// Entry Point: 009fc3b0
// Size: 240 bytes
// Signature: undefined __cdecl addText(float param_1, float param_2, float param_3, float * param_4, char * param_5)


/* DeferredDebugRenderer::addText(float, float, float, float*, char const*) */

void DeferredDebugRenderer::addText
               (float param_1,float param_2,float param_3,float *param_4,char *param_5)

{
  basic_string *pbVar1;
  long lVar2;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined uStack_64;
  undefined7 uStack_63;
  undefined local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 009fc3f4 to 009fc403 has its CatchHandler @ 009fc4ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_90);
  pbVar1 = *(basic_string **)(param_4 + 0x7a);
  local_5c = *(undefined *)((long)param_4 + 0x1f9);
  uStack_64 = (undefined)*(undefined8 *)(param_5 + 8);
  uStack_63 = (undefined7)((ulong)*(undefined8 *)(param_5 + 8) >> 8);
  uStack_6c = (undefined4)*(undefined8 *)param_5;
  uStack_68 = (undefined4)((ulong)*(undefined8 *)param_5 >> 0x20);
  local_78 = param_1;
  fStack_74 = param_2;
  fStack_70 = param_3;
  if (pbVar1 == *(basic_string **)(param_4 + 0x7c)) {
                    /* try { // try from 009fc458 to 009fc45f has its CatchHandler @ 009fc4ac */
    std::__ndk1::
    vector<DeferredDebugRenderer::DebugText,std::__ndk1::allocator<DeferredDebugRenderer::DebugText>>
    ::__push_back_slow_path<DeferredDebugRenderer::DebugText_const&>
              ((vector<DeferredDebugRenderer::DebugText,std::__ndk1::allocator<DeferredDebugRenderer::DebugText>>
                *)(param_4 + 0x78),(DebugText *)&local_90);
  }
  else {
                    /* try { // try from 009fc428 to 009fc433 has its CatchHandler @ 009fc4a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    *(ulong *)((long)pbVar1 + 0x2d) = CONCAT17(local_5c,uStack_63);
    *(ulong *)((long)pbVar1 + 0x25) = CONCAT17(uStack_64,CONCAT43(uStack_68,uStack_6c._1_3_));
    *(ulong *)(pbVar1 + 8) = CONCAT44(uStack_6c,fStack_70);
    *(ulong *)(pbVar1 + 6) = CONCAT44(fStack_74,local_78);
    *(basic_string **)(param_4 + 0x7a) = pbVar1 + 0xe;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


