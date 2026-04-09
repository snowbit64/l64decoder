// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderList
// Entry Point: 00a181e4
// Size: 364 bytes
// Signature: undefined __thiscall RenderList(RenderList * this, RenderController * param_1, bool param_2)


/* RenderList::RenderList(RenderController*, bool) */

void __thiscall RenderList::RenderList(RenderList *this,RenderController *param_1,bool param_2)

{
  void *pvVar1;
  LightList *this_00;
  ThreadPool *pTVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  pTVar2 = *(ThreadPool **)(param_1 + 0x10);
  *(undefined4 *)(this + 0x138) = 0x3f800000;
                    /* try { // try from 00a18254 to 00a1825b has its CatchHandler @ 00a18370 */
  ThreadPoolTaskManager::ThreadPoolTaskManager((ThreadPoolTaskManager *)(this + 0x140),pTVar2);
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined ***)(this + 0x1b8) = &PTR__Task_00fde908;
                    /* try { // try from 00a18278 to 00a18287 has its CatchHandler @ 00a18360 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x1c8));
  *(RenderList **)(this + 0x2a0) = this;
  *(undefined ***)(this + 0x1b8) = &PTR__Task_00fe30a8;
                    /* try { // try from 00a182a0 to 00a182f7 has its CatchHandler @ 00a18378 */
  ShadowRenderController::ShadowRenderController((ShadowRenderController *)(this + 0x2d8),param_1);
  *(undefined8 *)(this + 8) = 0;
  this[0x50] = (RenderList)0x0;
  this[0x10] = (RenderList)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x2a8) = 0x1000;
  pvVar1 = operator_new__(0x10000);
  *(void **)(this + 0x2b0) = pvVar1;
  *(undefined8 *)(this + 0x2b8) = 0x400;
  pvVar1 = operator_new__(0x2000);
  *(void **)(this + 0x2c0) = pvVar1;
  *(undefined4 *)(this + 0x2cc) = 0;
  if (param_2) {
    this_00 = (LightList *)operator_new(0xd0);
                    /* try { // try from 00a18300 to 00a18303 has its CatchHandler @ 00a18350 */
    LightList::LightList(this_00,*(SharedRenderArgs **)(this + 0x20));
    *(LightList **)(this + 0x30) = this_00;
    *(undefined4 *)(this + 0x2c8) = 0x1000;
                    /* try { // try from 00a18310 to 00a18317 has its CatchHandler @ 00a18378 */
    pvVar1 = operator_new__(0x10000);
    *(void **)(this + 0x2d0) = pvVar1;
  }
  else {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x2c8) = 0;
    *(undefined8 *)(this + 0x2d0) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *this = (RenderList)0x0;
  return;
}


