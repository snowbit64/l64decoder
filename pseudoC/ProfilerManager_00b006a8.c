// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProfilerManager
// Entry Point: 00b006a8
// Size: 884 bytes
// Signature: undefined __thiscall ProfilerManager(ProfilerManager * this)


/* ProfilerManager::ProfilerManager() */

void __thiscall ProfilerManager::ProfilerManager(ProfilerManager *this)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 00b006dc to 00b009db has its CatchHandler @ 00b00a1c */
  std::__ndk1::vector<ProfiledSection,std::__ndk1::allocator<ProfiledSection>>::__append
            ((vector<ProfiledSection,std::__ndk1::allocator<ProfiledSection>> *)this,0x3d);
  lVar1 = *(long *)this;
  lVar4 = *(long *)(this + 0x20);
  *(char **)(lVar1 + 0x130) = "Game Root";
  *(char **)(lVar1 + 0x270) = "Process Events";
  *(char **)(lVar1 + 0x3b0) = "Process Voice Chat";
  *(char **)(lVar1 + 0x4730) = "Virtual Texture Index Setup";
  *(char **)(lVar1 + 0x4870) = "Virtual Texture Index Upload";
  *(char **)(lVar1 + 0x4f0) = "Process Network";
  *(char **)(lVar1 + 0x49b0) = "Virtual Texture GPU Render";
  *(char **)(lVar1 + 0x4af0) = "Virtual Texture Update Scan";
  *(char **)(lVar1 + 0x630) = "Process Input Update";
  *(char **)(lVar1 + 0x770) = "Process Save Game Update";
  *(char **)(lVar1 + 0x8b0) = "Process System Update";
  *(char **)(lVar1 + 0x9f0) = "Update";
  *(char **)(lVar1 + 0xb30) = "Render";
  *(char **)(lVar1 + 0xc70) = "Swap Buffers";
  *(char **)(lVar1 + 0xdb0) = "Frame Limiter";
  *(char **)(lVar1 + 0xef0) = "Streaming";
  *(char **)(lVar1 + 0x1030) = "Texture Streaming";
  *(char **)(lVar1 + 0x1170) = "Physics";
  *(char **)(lVar1 + 0x12b0) = "Physics Debug Rendering";
  *(char **)(lVar1 + 0x13f0) = "Physics Create New Objects";
  *(char **)(lVar1 + 0x1530) = "Physics Update";
  *(char **)(lVar1 + 0x1670) = "Physics Remove Objects";
  *(char **)(lVar1 + 0x17b0) = "Audio Update";
  *(char **)(lVar1 + 0x18f0) = "Fetch Results";
  *(char **)(lVar1 + 0x1a30) = "Simulate";
  *(char **)(lVar1 + 0x1b70) = "Render Audio";
  *(char **)(lVar1 + 0x1cb0) = "Render Geometry";
  *(char **)(lVar1 + 0x1df0) = "Render PostFx";
  *(char **)(lVar1 + 0x1f30) = "Render Composite";
  *(char **)(lVar1 + 0x2070) = "Debug Rendering";
  *(char **)(lVar1 + 0x22f0) = "ShadowGen";
  *(char **)(lVar1 + 0x21b0) = "Collect Shadow Casters";
  *(char **)(lVar1 + 0x2430) = "Build Render Queues ShadowGen";
  *(char **)(lVar1 + 0x2570) = "Render Queue ShadowGen";
  *(char **)(lVar1 + 0x26b0) = "Cluster Build";
  *(char **)(lVar1 + 0x27f0) = "Cluster Upload";
  *(char **)(lVar1 + 0x2930) = "Set Render States";
  *(char **)(lVar1 + 0x2a70) = "Model Parameters";
  *(char **)(lVar1 + 0x2bb0) = "Render Call";
  *(char **)(lVar1 + 0x2cf0) = "Collect Shapes and Lights";
  *(char **)(lVar1 + 0x2e30) = "Build Render Queues";
  *(char **)(lVar1 + 0x2f70) = "Render Queue";
  *(char **)(lVar1 + 0x30b0) = "Render Refractive Shapes";
  *(char **)(lVar1 + 0x31f0) = "Update Refraction Map";
  *(char **)(lVar1 + 0x3330) = "Update Depth Texture";
  *(char **)(lVar1 + 0x3470) = "Animation Update";
  *(char **)(lVar1 + 0x35b0) = "Scripting Update";
  *(char **)(lVar1 + 0x36f0) = "Scenegraph Render";
  *(char **)(lVar1 + 0x3830) = "Scripting Render";
  *(char **)(lVar1 + 0x3970) = "Render Stats";
  *(char **)(lVar1 + 0x3ab0) = "Render Font";
  *(char **)(lVar1 + 0x3bf0) = "Update lod textures";
  *(char **)(lVar1 + 0x3d30) = "Destruction Actor Move";
  *(char **)(lVar1 + 0x3e70) = "Destruction Update Vertices";
  *(char **)(lVar1 + 0x3fb0) = "Update Culling";
  *(char **)(lVar1 + 0x40f0) = "Update Rendering";
  *(char **)(lVar1 + 0x4230) = "Update Foliage Bending";
  *(char **)(lVar1 + 0x4370) = "Occluder Rendering";
  *(char **)(lVar1 + 0x44b0) = "Virtual Texture Maths";
  *(char **)(lVar1 + 0x45f0) = "Virtual Texture GPU Setup";
  puVar2 = *(undefined4 **)(this + 0x18);
  uVar3 = lVar4 - (long)puVar2;
  if (uVar3 < 0x200) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x18),
               0x80 - (uVar3 >> 2));
    puVar2 = *(undefined4 **)(this + 0x18);
  }
  else if (uVar3 != 0x200) {
    *(undefined4 **)(this + 0x20) = puVar2 + 0x80;
  }
  *(undefined4 **)(this + 0x30) = puVar2;
  this[0x80] = (ProfilerManager)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *puVar2 = 0x3c;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


