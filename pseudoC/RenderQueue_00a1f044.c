// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderQueue
// Entry Point: 00a1f044
// Size: 472 bytes
// Signature: undefined __thiscall RenderQueue(RenderQueue * this, RenderController * param_1, bool param_2)


/* RenderQueue::RenderQueue(RenderController*, bool) */

void __thiscall RenderQueue::RenderQueue(RenderQueue *this,RenderController *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  LightListRasterizer *this_00;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 8) = uVar3;
                    /* try { // try from 00a1f094 to 00a1f09b has its CatchHandler @ 00a1f244 */
  ReflectionRenderController::ReflectionRenderController
            ((ReflectionRenderController *)(this + 0x70),param_1);
                    /* try { // try from 00a1f0a0 to 00a1f0ab has its CatchHandler @ 00a1f23c */
  Mutex::Mutex((Mutex *)(this + 0x198),true);
  *(RenderController **)this = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
                    /* try { // try from 00a1f0d8 to 00a1f0db has its CatchHandler @ 00a1f24c */
  uVar3 = (**(code **)(***(long ***)(this + 8) + 0x138))();
  local_78 = 0;
  local_80._0_4_ = 0x1c0;
  local_70._0_4_ = 8;
                    /* try { // try from 00a1f104 to 00a1f10f has its CatchHandler @ 00a1f238 */
  uVar2 = (**(code **)(***(long ***)(this + 8) + 0x118))(**(long ***)(this + 8),uVar3,&local_80);
  *(undefined8 *)(this + 0x50) = uVar2;
  local_78 = 0;
  local_80._0_4_ = 4;
  local_70._0_4_ = 8;
                    /* try { // try from 00a1f134 to 00a1f13f has its CatchHandler @ 00a1f234 */
  uVar2 = (**(code **)(***(long ***)(this + 8) + 0x118))(**(long ***)(this + 8),uVar3,&local_80);
  *(undefined8 *)(this + 0x58) = uVar2;
  local_78 = 0;
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_70 = (char *)CONCAT44(local_70._4_4_,8);
                    /* try { // try from 00a1f168 to 00a1f173 has its CatchHandler @ 00a1f230 */
  uVar2 = (**(code **)(***(long ***)(this + 8) + 0x118))(**(long ***)(this + 8),uVar3,&local_80);
  *(undefined8 *)(this + 0x60) = uVar2;
  if (param_2) {
                    /* try { // try from 00a1f17c to 00a1f183 has its CatchHandler @ 00a1f24c */
    this_00 = (LightListRasterizer *)operator_new(0x1d0);
                    /* try { // try from 00a1f194 to 00a1f197 has its CatchHandler @ 00a1f21c */
    LightListRasterizer::LightListRasterizer
              (this_00,**(IRenderDevice ***)(this + 8),*(ThreadPool **)(param_1 + 0x10));
    *(LightListRasterizer **)(this + 0x20) = this_00;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  local_80 = 0;
  local_78 = 0x800000168;
  local_70 = "RenderQueue Z stencil vertex buffer";
                    /* try { // try from 00a1f1d0 to 00a1f1db has its CatchHandler @ 00a1f22c */
  uVar3 = (**(code **)(***(long ***)(this + 8) + 0x108))(**(long ***)(this + 8),uVar3,&local_80);
  *(undefined8 *)(this + 0x68) = uVar3;
  this[400] = (RenderQueue)0x1;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


