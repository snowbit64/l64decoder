// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanCommandBuffer
// Entry Point: 00ac8b7c
// Size: 2160 bytes
// Signature: undefined __thiscall VulkanCommandBuffer(VulkanCommandBuffer * this, VulkanRenderDevice * param_1, COMMAND_BUFFER_TYPE param_2)


/* VulkanCommandBuffer::VulkanCommandBuffer(VulkanRenderDevice*,
   ICommandBuffer::COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanCommandBuffer::VulkanCommandBuffer
          (VulkanCommandBuffer *this,VulkanRenderDevice *param_1,COMMAND_BUFFER_TYPE param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Thread *pTVar5;
  ulong uVar6;
  VulkanVertexBuffer *this_00;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__VulkanCommandBuffer_00fe6660;
  *(undefined ***)(this + 8) = &PTR__VulkanCommandBuffer_00fe6808;
  Semaphore::Semaphore((Semaphore *)(this + 0x18),0);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
                    /* try { // try from 00ac8be0 to 00ac8be7 has its CatchHandler @ 00ac941c */
  Semaphore::Semaphore((Semaphore *)(this + 0x40),0);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(VulkanCommandBuffer **)(this + 0x468) = this + 0x470;
                    /* try { // try from 00ac8c10 to 00ac8c1b has its CatchHandler @ 00ac9414 */
  Mutex::Mutex((Mutex *)(this + 0x480),true);
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
                    /* try { // try from 00ac8c38 to 00ac8c47 has its CatchHandler @ 00ac9408 */
  Mutex::Mutex((Mutex *)(this + 0x528),true);
  *(undefined8 *)(this + 0x630) = 0;
  *(undefined8 *)(this + 0x628) = 0;
  *(undefined8 *)(this + 0x640) = 0;
  *(undefined8 *)(this + 0x638) = 0;
  *(undefined4 *)(this + 0x648) = 0x3f800000;
  *(undefined4 *)(this + 0x670) = 0x3f800000;
  *(undefined8 *)(this + 0x578) = 0;
  *(undefined8 *)(this + 0x570) = 0;
  *(undefined8 *)(this + 0x690) = 0;
  *(undefined8 *)(this + 0x688) = 0;
  *(undefined8 *)(this + 0x8c0) = 0;
  *(undefined8 *)(this + 0x8b8) = 0;
  *(undefined8 *)(this + 0x8d0) = 0;
  *(undefined8 *)(this + 0x8c8) = 0;
  *(undefined8 *)(this + 0x8e0) = 0;
  *(undefined8 *)(this + 0x8d8) = 0;
  *(undefined8 *)(this + 0x8f0) = 0;
  *(undefined8 *)(this + 0x8e8) = 0;
  *(undefined8 *)(this + 0x960) = 0;
  *(undefined8 *)(this + 0x958) = 0;
  *(undefined8 *)(this + 0x8f8) = 0;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x590) = 0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x990) = 0;
  *(undefined8 *)(this + 0x988) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  *(undefined8 *)(this + 0x660) = 0;
  *(undefined4 *)(this + 0x678) = 0;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(undefined8 *)(this + 0x9b8) = 0;
  *(undefined2 *)(this + 0x67c) = 1;
  *(undefined8 *)(this + 0x680) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined4 *)(this + 0x6b8) = 0;
  *(undefined2 *)(this + 0x6bc) = 1;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0x6c8) = 0;
  *(undefined8 *)(this + 0x6c0) = 0;
  *(undefined8 *)(this + 0x6d0) = 0;
  *(undefined4 *)(this + 0x6f8) = 0;
  *(char **)(this + 0xa40) = "<null>";
  *(undefined2 *)(this + 0x6fc) = 1;
  *(undefined8 *)(this + 0x710) = 0;
  *(undefined8 *)(this + 0x708) = 0;
  *(undefined8 *)(this + 0x700) = 0;
  *(undefined4 *)(this + 0x738) = 0;
  *(undefined2 *)(this + 0x73c) = 1;
  *(undefined8 *)(this + 0x750) = 0;
  *(undefined8 *)(this + 0x748) = 0;
  *(undefined8 *)(this + 0x740) = 0;
  *(undefined4 *)(this + 0x778) = 0;
  *(undefined2 *)(this + 0x77c) = 1;
  *(undefined8 *)(this + 0x790) = 0;
  *(undefined8 *)(this + 0x788) = 0;
  *(undefined8 *)(this + 0x780) = 0;
  *(undefined4 *)(this + 0x7b8) = 0;
  *(undefined2 *)(this + 0x7bc) = 1;
  *(undefined8 *)(this + 2000) = 0;
  *(undefined8 *)(this + 0x7c8) = 0;
  *(undefined8 *)(this + 0x7c0) = 0;
  *(undefined4 *)(this + 0x7f8) = 0;
  *(undefined2 *)(this + 0x7fc) = 1;
  *(undefined8 *)(this + 0x810) = 0;
  *(undefined8 *)(this + 0x808) = 0;
  *(undefined8 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x838) = 0;
  *(undefined2 *)(this + 0x83c) = 1;
  *(undefined8 *)(this + 0x848) = 0;
  *(undefined8 *)(this + 0x840) = 0;
  *(undefined8 *)(this + 0x850) = 0;
  *(undefined8 *)(this + 0x968) = 0;
  *(undefined4 *)(this + 0x970) = 0;
  *(undefined8 *)(this + 0x97c) = 0x300000003;
  *(undefined8 *)(this + 0x974) = 0x100000002;
  this[0x984] = (VulkanCommandBuffer)0x0;
  *(undefined4 *)(this + 0x9a0) = 0;
  *(undefined8 *)(this + 0x998) = 0;
  *(undefined8 *)(this + 0x9ac) = 0x300000003;
  *(undefined8 *)(this + 0x9a4) = 0x100000002;
  this[0x9b4] = (VulkanCommandBuffer)0x0;
  *(undefined4 *)(this + 0x9d0) = 0;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined8 *)(this + 0x9dc) = 0x300000003;
  *(undefined8 *)(this + 0x9d4) = 0x100000002;
  this[0x9e4] = (VulkanCommandBuffer)0x0;
  *(undefined4 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined8 *)(this + 0xa0c) = 0x300000003;
  *(undefined8 *)(this + 0xa04) = 0x100000002;
  this[0xa14] = (VulkanCommandBuffer)0x0;
  *(undefined8 *)(this + 0xa30) = 0x300000003;
  *(undefined8 *)(this + 0xa28) = 0x100000002;
  this[0xa38] = (VulkanCommandBuffer)0x0;
  *(undefined4 *)(this + 0x950) = 0;
  *(undefined8 *)(this + 0xac8) = 0;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xab8) = 0;
  *(undefined8 *)(this + 0xae0) = 0;
  *(undefined8 *)(this + 0xad8) = 0;
  *(VulkanCommandBuffer **)(this + 0xad0) = this + 0xad8;
  *(undefined8 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xae8) = 0;
  *(undefined8 *)(this + 0xb10) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(VulkanCommandBuffer **)(this + 0xb00) = this + 0xb08;
  *(VulkanRenderDevice **)(this + 0x98) = param_1;
  *(COMMAND_BUFFER_TYPE *)(this + 0x1f0) = param_2;
  *(uint *)(this + 500) = (uint)(param_2 != 0);
  pcVar3 = vkCreatePipelineCache;
  iVar1 = *(int *)(param_1 + 0x460);
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  this[0xa59] = (VulkanCommandBuffer)(*(int *)(param_1 + 0x458) != iVar1);
  local_178 = 0x11;
                    /* try { // try from 00ac8e1c to 00ac8e27 has its CatchHandler @ 00ac942c */
  (*pcVar3)(*(undefined8 *)(param_1 + 0x18),&local_178,0,this + 0x90);
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
                    /* try { // try from 00ac8e48 to 00ac8e67 has its CatchHandler @ 00ac9430 */
  uVar4 = VulkanResourceAllocator::getFenceStatus();
  *(undefined8 *)(this + 0x550) = uVar4;
  this[0x560] = (VulkanCommandBuffer)0x0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  uVar4 = VulkanResourceAllocator::getFenceStatus();
  *(undefined8 *)(this + 0x558) = uVar4;
  this[0x561] = (VulkanCommandBuffer)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0xa50) = 0;
  if (this[0xa59] == (VulkanCommandBuffer)0x0) {
    uVar4 = 0;
    iVar1 = *(int *)(this + 0x1f0);
  }
  else {
    local_e0 = 0x27;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
                    /* try { // try from 00ac8ea4 to 00ac8eb3 has its CatchHandler @ 00ac942c */
    local_cc = iVar1;
    (*vkCreateCommandPool)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    uVar4 = CONCAT44(uStack_14c,local_150);
    *(undefined8 *)(this + 0xa50) = uVar4;
    iVar1 = *(int *)(this + 0x1f0);
  }
  if (iVar1 == 0) {
    *(undefined8 *)(this + 0x5a0) = 0;
    if (this[0xa59] != (VulkanCommandBuffer)0x0) {
      uStack_c8 = 0;
      uStack_c4 = 1;
      local_e0 = 0x28;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = (undefined4)uVar4;
      local_cc = (int)((ulong)uVar4 >> 0x20);
                    /* try { // try from 00ac8f10 to 00ac90ab has its CatchHandler @ 00ac9440 */
      (*vkAllocateCommandBuffers)
                (*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,&local_150);
      *(ulong *)(this + 0x5a0) = CONCAT44(uStack_14c,local_150);
    }
    local_e0 = 9;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    local_e0 = 9;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    *(ulong *)(this + 0x5a8) = CONCAT44(uStack_14c,local_150);
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    *(ulong *)(this + 0x5b0) = CONCAT44(uStack_14c,local_150);
    local_e0 = 9;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    *(undefined2 *)(this + 0x5c0) = 0;
    this[0x5c2] = (VulkanCommandBuffer)0x0;
    *(undefined8 *)(this + 0x5c8) = 0;
    *(ulong *)(this + 0x5b8) = CONCAT44(uStack_14c,local_150);
    if (this[0xa59] != (VulkanCommandBuffer)0x0) {
      uStack_c8 = 0;
      uStack_c4 = 1;
      local_e0 = 0x28;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = (undefined4)*(undefined8 *)(this + 0xa50);
      local_cc = (int)((ulong)*(undefined8 *)(this + 0xa50) >> 0x20);
      (*vkAllocateCommandBuffers)
                (*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,&local_150);
      *(ulong *)(this + 0x5c8) = CONCAT44(uStack_14c,local_150);
    }
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_e0 = 9;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    local_e0 = 9;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    *(ulong *)(this + 0x5d0) = CONCAT44(uStack_14c,local_150);
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    *(ulong *)(this + 0x5d8) = CONCAT44(uStack_14c,local_150);
    local_e0 = 9;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),&local_e0,0,&local_150);
    *(undefined2 *)(this + 0x5e8) = 0;
    this[0x5ea] = (VulkanCommandBuffer)0x0;
    *(ulong *)(this + 0x5e0) = CONCAT44(uStack_14c,local_150);
  }
  this[0x460] = (VulkanCommandBuffer)0x0;
  this[0x948] = (VulkanCommandBuffer)0x0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined4 *)(this + 0xa48) = 0xffffffff;
  *(undefined8 *)(this + 0xa60) = 0;
  this[0xa58] = (VulkanCommandBuffer)0x0;
  local_e0 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  local_bc = 0;
  uStack_a4 = 0;
  local_ac = 0;
  uStack_94 = 0;
  local_9c = 0;
  uStack_84 = 0;
  local_8c = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
                    /* try { // try from 00ac9110 to 00ac914b has its CatchHandler @ 00ac9438 */
  uVar4 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_e0);
  *(undefined8 *)(this + 0xa8) = uVar4;
  initializeReusableBuffers();
  *(undefined8 *)(this + 0x908) = 0;
  *(undefined4 *)(this + 0x918) = 0;
  *(undefined4 *)(this + 0x900) = 0x22;
  *(VulkanCommandBuffer **)(this + 0x920) = this + 0x928;
  if (param_2 == 0) {
    beginNextFrame();
    *(undefined8 *)(this + 0x10) = 0;
    *(VulkanCommandBuffer **)(this + 0x60) = this;
    *(undefined4 *)(this + 0x68) = 0;
                    /* try { // try from 00ac9158 to 00ac915f has its CatchHandler @ 00ac9428 */
    pTVar5 = (Thread *)operator_new(0x48);
                    /* try { // try from 00ac9164 to 00ac9167 has its CatchHandler @ 00ac93ec */
    Thread::Thread(pTVar5);
    *(Thread **)(this + 0x10) = pTVar5;
                    /* try { // try from 00ac9170 to 00ac91b7 has its CatchHandler @ 00ac9428 */
    Thread::start(pTVar5,fenceThread,this + 0x60,0xffffffff,"Vulkan Fence Thread",2,0x80000);
    *(undefined8 *)(this + 0x38) = 0;
    uVar6 = VulkanRenderDevice::hasCopyQueue();
    if ((uVar6 & 1) != 0) {
      *(VulkanCommandBuffer **)(this + 0x70) = this;
      *(undefined4 *)(this + 0x78) = 1;
      pTVar5 = (Thread *)operator_new(0x48);
                    /* try { // try from 00ac91bc to 00ac91bf has its CatchHandler @ 00ac93ec */
      Thread::Thread(pTVar5);
      *(Thread **)(this + 0x38) = pTVar5;
                    /* try { // try from 00ac91c8 to 00ac91eb has its CatchHandler @ 00ac9428 */
      Thread::start(pTVar5,fenceThread,this + 0x70,0xffffffff,"Vulkan Fence Thread",2,0x80000);
    }
  }
  local_150 = 1;
  uStack_134 = 0;
  uStack_104 = 0;
  local_10c = 0;
  uStack_f4 = 0;
  local_fc = 0;
  local_13c = 0x300000000;
  uStack_124 = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_114 = 0;
  local_11c = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_12c = 4;
                    /* try { // try from 00ac9230 to 00ac9237 has its CatchHandler @ 00ac9404 */
  uVar4 = (**(code **)(**(long **)(this + 0x98) + 0x128))(*(long **)(this + 0x98),&local_150);
  *(undefined8 *)(this + 0x1e0) = uVar4;
  local_190 = 0;
  local_180 = 0;
  local_188 = 0x800020000;
                    /* try { // try from 00ac9250 to 00ac9257 has its CatchHandler @ 00ac9434 */
  this_00 = (VulkanVertexBuffer *)operator_new(0x18);
                    /* try { // try from 00ac9260 to 00ac926b has its CatchHandler @ 00ac93f0 */
  VulkanVertexBuffer::VulkanVertexBuffer
            (this_00,this,*(VulkanRenderDevice **)(this + 0x98),(VertexBufferDesc *)&local_190);
  *(VulkanVertexBuffer **)(this + 0x1e8) = this_00;
  *(undefined8 *)(this + 0x608) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x688) = *(undefined8 *)(this + 0x680);
  *(undefined8 *)(this + 0x610) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xaac) = 0;
  *(undefined8 *)(this + 0x6c8) = *(undefined8 *)(this + 0x6c0);
  *(undefined8 *)(this + 0x788) = *(undefined8 *)(this + 0x780);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x708) = *(undefined8 *)(this + 0x700);
  *(undefined8 *)(this + 0x7c8) = *(undefined8 *)(this + 0x7c0);
  *(undefined8 *)(this + 0x618) = 0;
  *(undefined8 *)(this + 0x890) = 0;
  *(undefined8 *)(this + 0x888) = 0;
  *(undefined8 *)(this + 0x808) = *(undefined8 *)(this + 0x800);
  *(undefined8 *)(this + 0x5f8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0x678) = 0;
  *(undefined2 *)(this + 0x67c) = 1;
  *(undefined8 *)(this + 0x878) = 0;
  *(undefined4 *)(this + 0x6b8) = 0;
  *(undefined8 *)(this + 0x6a0) = 0;
  *(undefined8 *)(this + 0x698) = 0;
  *(undefined2 *)(this + 0x6bc) = 1;
  *(undefined8 *)(this + 0x880) = 0;
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined8 *)(this + 0x6e0) = 0;
  *(undefined8 *)(this + 0x6d8) = 0;
  *(undefined2 *)(this + 0x6fc) = 1;
  *(undefined4 *)(this + 0x738) = 0;
  *(undefined8 *)(this + 0x720) = 0;
  *(undefined8 *)(this + 0x718) = 0;
  *(undefined2 *)(this + 0x73c) = 1;
  *(undefined8 *)(this + 0x748) = *(undefined8 *)(this + 0x740);
  *(undefined8 *)(this + 0x620) = 0;
  *(undefined8 *)(this + 0x600) = 0;
  *(undefined8 *)(this + 0x758) = 0;
  *(undefined8 *)(this + 0x760) = 0;
  *(undefined4 *)(this + 0x778) = 0;
  *(undefined2 *)(this + 0x77c) = 1;
  *(undefined8 *)(this + 0x898) = 0;
  *(undefined4 *)(this + 0x7b8) = 0;
  *(undefined8 *)(this + 0x7a0) = 0;
  *(undefined8 *)(this + 0x798) = 0;
  *(undefined2 *)(this + 0x7bc) = 1;
  *(undefined8 *)(this + 0x8a0) = 0;
  *(undefined4 *)(this + 0x7f8) = 0;
  *(undefined8 *)(this + 0x7e0) = 0;
  *(undefined8 *)(this + 0x7d8) = 0;
  *(undefined2 *)(this + 0x7fc) = 1;
  *(undefined8 *)(this + 0x8a8) = 0;
  *(undefined4 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x820) = 0;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined2 *)(this + 0x83c) = 1;
  *(undefined8 *)(this + 0x848) = *(undefined8 *)(this + 0x840);
  *(undefined8 *)(this + 0x8b0) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0xaa8) = 0;
  *(undefined8 *)(this + 0x860) = 0;
  *(undefined8 *)(this + 0x858) = 0;
  if (param_2 == 0) {
                    /* try { // try from 00ac9398 to 00ac93b3 has its CatchHandler @ 00ac9434 */
    setupBlitShader();
  }
  *(undefined8 *)(this + 0xb60) = 0;
  *(undefined8 *)(this + 0xb58) = 0;
  createDummyPso();
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


