// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTexture
// Entry Point: 00ac2008
// Size: 860 bytes
// Signature: undefined __thiscall createTexture(VulkanResourceAllocator * this, TextureDesc * param_1, MEMORY_TYPE param_2, bool param_3)


/* VulkanResourceAllocator::createTexture(VulkanResourceAllocator::TextureDesc const&,
   VulkanMemoryAllocator::MEMORY_TYPE, bool) */

undefined8 * __thiscall
VulkanResourceAllocator::createTexture
          (VulkanResourceAllocator *this,TextureDesc *param_1,MEMORY_TYPE param_2,bool param_3)

{
  PIXEL_FORMAT_USAGE PVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  TextureDesc TVar7;
  long lVar8;
  PIXEL_FORMAT_USAGE PVar9;
  uint uVar10;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120 [2];
  uint *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_f8 [2];
  undefined8 local_f0;
  int local_e8;
  int iStack_e4;
  uint local_e0 [2];
  uint local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  uint uStack_90;
  undefined4 local_8c;
  uint local_88;
  undefined8 local_84;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  Mutex::enterCriticalSection();
  local_b8 = 0;
  local_c0[0] = 0xe;
  local_b0 = (uint)(*(int *)param_1 == 2) << 4;
  local_ac = 1;
  if (*(int *)param_1 == 1) {
    local_ac = 2;
    if (param_1[0x21] == (TextureDesc)0x0) {
      TVar7 = (TextureDesc)0x0;
    }
    else {
      TVar7 = (TextureDesc)0x1;
      local_b0 = 0x20;
    }
  }
  else {
    TVar7 = param_1[0x21];
  }
  uVar3 = *(uint *)(PixelFormatUtil::s_pixelFormats + (ulong)*(uint *)(param_1 + 4) * 0x18 + 0xc);
  PVar9 = 3;
  if ((uVar3 & 0x20) != 0) {
    PVar9 = 4;
  }
  PVar1 = (uint)(param_1[0x24] != (TextureDesc)0x0);
  if (TVar7 != (TextureDesc)0x0) {
    PVar1 = PVar9;
  }
                    /* try { // try from 00ac20f0 to 00ac20f3 has its CatchHandler @ 00ac237c */
  local_a8 = VulkanUtil::getVulkanPixelFormat
                       (*(VkPhysicalDevice_T **)(*(long *)(this + 0x980) + 0x20),
                        *(uint *)(param_1 + 4),PVar1,(bool)param_1[0x20]);
  local_9c = *(undefined4 *)(param_1 + 0x10);
  uStack_90 = *(uint *)(param_1 + 0x14);
  uStack_98 = *(undefined4 *)(param_1 + 0x1c);
  local_a4 = *(undefined8 *)(param_1 + 8);
  local_8c = 0;
  local_94 = 6;
  if (*(int *)param_1 != 2) {
    local_94 = *(undefined4 *)(param_1 + 0x18);
  }
  if (uStack_90 < 2) {
    uStack_90 = 1;
  }
  uVar10 = 0x10;
  if ((uVar3 & 0x20) != 0) {
    uVar10 = 0x20;
  }
  local_88 = 0;
  if (param_1[0x21] != (TextureDesc)0x0) {
    local_88 = uVar10;
  }
  if (param_1[0x22] == (TextureDesc)0x0) {
    uVar3 = local_88 | 4;
    if (param_1[0x23] != (TextureDesc)0x0) {
      uVar3 = local_88;
    }
    local_88 = 2;
    if (param_1[0x21] != (TextureDesc)0x0 || param_3) {
      local_88 = 3;
    }
    local_88 = uVar3 | local_88;
    if (param_1[0x25] != (TextureDesc)0x0) {
      local_88 = local_88 | 8;
    }
    if (param_1[0x26] != (TextureDesc)0x0) {
      local_88 = local_88 | 0x100;
    }
  }
  else {
    local_88 = local_88 | 0x40;
  }
  local_84 = 0;
  local_70 = 0;
                    /* try { // try from 00ac21c4 to 00ac21d3 has its CatchHandler @ 00ac2378 */
  (*vkCreateImage)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),local_c0,0,&local_c8);
                    /* try { // try from 00ac21ec to 00ac21f3 has its CatchHandler @ 00ac2374 */
  (*vkGetImageMemoryRequirements)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),local_c8,local_e0)
  ;
  lVar8 = *(long *)(this + 0x980);
  if ((*(char *)(lVar8 + 0x438) == '\0') ||
     ((param_1[0x21] == (TextureDesc)0x0 && (local_e0[0] >> 0x19 == 0)))) {
    bVar5 = false;
  }
  else {
    local_f8[0] = 0x3b9cba18;
    local_118 = local_f8;
    local_f0 = 0;
    local_138[0] = 0x3b9d0451;
    local_120[0] = 0x3b9d0453;
    local_130 = 0;
    uStack_128 = local_c8;
                    /* try { // try from 00ac2268 to 00ac2273 has its CatchHandler @ 00ac2364 */
    (*vkGetImageMemoryRequirements2KHR)(*(undefined8 *)(lVar8 + 0x18),local_138,local_120);
    bVar5 = local_e8 == 1 || iStack_e4 == 1;
    lVar8 = *(long *)(this + 0x980);
  }
                    /* try { // try from 00ac2294 to 00ac22a3 has its CatchHandler @ 00ac2370 */
  VulkanMemoryAllocator::getMemoryTypeIndex
            (*(VulkanMemoryAllocator **)(lVar8 + 0x378),local_d0,param_2,local_f8);
  puVar2 = local_120;
  local_120[0] = 0x3b9cba19;
  if (!bVar5) {
    puVar2 = (undefined4 *)0x0;
  }
  local_118 = (uint *)0x0;
  uStack_110 = local_c8;
  local_108 = 0;
                    /* try { // try from 00ac22d0 to 00ac2303 has its CatchHandler @ 00ac2380 */
  lVar8 = VulkanMemoryAllocator::allocateImageMemory
                    (*(VulkanMemoryAllocator **)(*(long *)(this + 0x980) + 0x378),local_e0[0],
                     local_d8,local_f8[0],puVar2);
  (*vkBindImageMemory)
            (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),local_c8,*(undefined8 *)(lVar8 + 0x18),
             *(undefined4 *)(lVar8 + 0x28));
                    /* try { // try from 00ac2304 to 00ac230b has its CatchHandler @ 00ac236c */
  puVar6 = (undefined8 *)operator_new(0x18);
  puVar6[2] = lVar8;
  *puVar6 = local_c8;
  *(undefined4 *)(puVar6 + 1) = local_a8;
                    /* try { // try from 00ac2324 to 00ac232b has its CatchHandler @ 00ac2368 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}


