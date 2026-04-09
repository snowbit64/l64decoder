// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanRenderDevice
// Entry Point: 00ab3ac4
// Size: 720 bytes
// Signature: undefined __thiscall VulkanRenderDevice(VulkanRenderDevice * this)


/* VulkanRenderDevice::VulkanRenderDevice() */

void __thiscall VulkanRenderDevice::VulkanRenderDevice(VulkanRenderDevice *this)

{
  ulong uVar1;
  
  *(undefined ***)this = &PTR__VulkanRenderDevice_00fe5f68;
  Semaphore::Semaphore((Semaphore *)(this + 0x398),1);
                    /* try { // try from 00ab3b10 to 00ab3b1b has its CatchHandler @ 00ab3e7c */
  Mutex::Mutex((Mutex *)(this + 0x3bc),true);
  *(VulkanRenderDevice **)(this + 0x468) = this + 0x470;
  *(VulkanRenderDevice **)(this + 0x480) = this + 0x488;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(VulkanRenderDevice **)(this + 0x498) = this + 0x4a0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(VulkanRenderDevice **)(this + 0x4b0) = this + 0x4b8;
  *(VulkanRenderDevice **)(this + 0x4c8) = this + 0x4d0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(VulkanRenderDevice **)(this + 0x4e0) = this + 0x4e8;
  *(VulkanRenderDevice **)(this + 0x4f8) = this + 0x500;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  *(VulkanRenderDevice **)(this + 0x510) = this + 0x518;
  *(VulkanRenderDevice **)(this + 0x528) = this + 0x530;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined8 *)(this + 0x548) = 0;
  *(VulkanRenderDevice **)(this + 0x540) = this + 0x548;
  *(undefined8 *)(this + 0x578) = 0;
  *(undefined8 *)(this + 0x570) = 0;
  *(undefined8 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x5a8) = 0;
  *(undefined8 *)(this + 0x5a0) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x5c8) = 0;
  *(undefined8 *)(this + 0x5c0) = 0;
  *(undefined8 *)(this + 0x5b8) = 0;
  this[0x608] = (VulkanRenderDevice)0x0;
  this[0x610] = (VulkanRenderDevice)0x0;
  this[0x620] = (VulkanRenderDevice)0x0;
  this[0x622] = (VulkanRenderDevice)0x0;
  this[0x624] = (VulkanRenderDevice)0x0;
  this[0x626] = (VulkanRenderDevice)0x0;
  this[0x628] = (VulkanRenderDevice)0x0;
  this[0x62a] = (VulkanRenderDevice)0x0;
  this[0x62c] = (VulkanRenderDevice)0x0;
  this[0x62e] = (VulkanRenderDevice)0x0;
  this[0x630] = (VulkanRenderDevice)0x0;
  this[0x632] = (VulkanRenderDevice)0x0;
  this[0x634] = (VulkanRenderDevice)0x0;
  this[0x63c] = (VulkanRenderDevice)0x0;
  this[0x644] = (VulkanRenderDevice)0x0;
  this[0x64c] = (VulkanRenderDevice)0x0;
  this[0x654] = (VulkanRenderDevice)0x0;
  this[0x65c] = (VulkanRenderDevice)0x0;
  this[0x664] = (VulkanRenderDevice)0x0;
  this[0x66c] = (VulkanRenderDevice)0x0;
  this[0x66e] = (VulkanRenderDevice)0x0;
  this[0x670] = (VulkanRenderDevice)0x0;
  this[0x672] = (VulkanRenderDevice)0x0;
  this[0x674] = (VulkanRenderDevice)0x0;
  this[0x676] = (VulkanRenderDevice)0x0;
  this[0x678] = (VulkanRenderDevice)0x0;
  this[0x67c] = (VulkanRenderDevice)0x0;
  this[0x684] = (VulkanRenderDevice)0x0;
  this[0x68c] = (VulkanRenderDevice)0x0;
  this[0x694] = (VulkanRenderDevice)0x0;
  this[0x69c] = (VulkanRenderDevice)0x0;
  this[0x6a4] = (VulkanRenderDevice)0x0;
  this[0x6a6] = (VulkanRenderDevice)0x0;
  this[0x6ac] = (VulkanRenderDevice)0x0;
  this[0x6b6] = (VulkanRenderDevice)0x0;
  this[0x6b8] = (VulkanRenderDevice)0x0;
  this[0x5d8] = (VulkanRenderDevice)0x1;
  *(undefined8 *)(this + 0x5e0) = 0;
  this[0x5e8] = (VulkanRenderDevice)0x1;
  *(undefined8 *)(this + 0x5f0) = 0;
  this[0x5f8] = (VulkanRenderDevice)0x1;
  *(undefined8 *)(this + 0x600) = 0;
  *(undefined2 *)(this + 0x6a8) = 1;
  *(undefined2 *)(this + 0x6b4) = 1;
  *(undefined4 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x5d0) = 0x1000000;
  *(undefined8 *)(this + 0x436) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(int *)(this + 0x3b4) = *(int *)(this + 0x3b8) + 2;
  *(undefined4 *)(this + 0x560) = 0;
  uVar1 = *(long *)(this + 0x570) - *(long *)(this + 0x568);
  if (uVar1 < 0x800) {
                    /* try { // try from 00ab3d10 to 00ab3d57 has its CatchHandler @ 00ab3d94 */
    std::__ndk1::vector<VulkanRenderQuery*,std::__ndk1::allocator<VulkanRenderQuery*>>::__append
              ((vector<VulkanRenderQuery*,std::__ndk1::allocator<VulkanRenderQuery*>> *)
               (this + 0x568),0x100 - (uVar1 >> 3));
  }
  else if (uVar1 != 0x800) {
    *(long *)(this + 0x570) = *(long *)(this + 0x568) + 0x800;
  }
  *(undefined8 *)(this + 0x558) = 0;
  *(undefined8 *)(this + 0x580) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x590) = 0;
  uVar1 = *(long *)(this + 0x5a0) - *(long *)(this + 0x598);
  if (uVar1 < 0x800) {
    std::__ndk1::vector<VulkanRenderQuery*,std::__ndk1::allocator<VulkanRenderQuery*>>::__append
              ((vector<VulkanRenderQuery*,std::__ndk1::allocator<VulkanRenderQuery*>> *)
               (this + 0x598),0x100 - (uVar1 >> 3));
  }
  else if (uVar1 != 0x800) {
    *(long *)(this + 0x5a0) = *(long *)(this + 0x598) + 0x800;
  }
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x5b0) = 0xffffffffffffffff;
  return;
}


