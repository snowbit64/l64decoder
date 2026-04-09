// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MyMicroAllocator
// Entry Point: 00d5a364
// Size: 2076 bytes
// Signature: undefined __thiscall MyMicroAllocator(MyMicroAllocator * this, MicroHeap * param_1, void * param_2, uint param_3, uint param_4)


/* HACD::MyMicroAllocator::MyMicroAllocator(HACD::MicroHeap*, void*, unsigned int, unsigned int) */

void __thiscall
HACD::MyMicroAllocator::MyMicroAllocator
          (MyMicroAllocator *this,MicroHeap *param_1,void *param_2,uint param_3,uint param_4)

{
  MyMicroAllocator *pMVar1;
  MyMicroAllocator *pMVar2;
  MyMicroAllocator *pMVar3;
  MyMicroAllocator *pMVar4;
  MyMicroAllocator *pMVar5;
  MyMicroAllocator *pMVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  pMVar1 = this + 0x860;
  uVar18 = (ulong)param_4;
  *(undefined ***)this = &PTR_malloc_01012a20;
  *(undefined ***)(this + 8) = &PTR_addMicroChunk_01012a60;
  MemoryChunkChunk::MemoryChunkChunk((MemoryChunkChunk *)(this + 0x878));
  pMVar2 = this + 0xe90;
  *(undefined8 *)(this + 0x870) = 0;
  MemoryChunkChunk::MemoryChunkChunk((MemoryChunkChunk *)(this + 0xea8));
  pMVar3 = this + 0x14c0;
  *(undefined8 *)(this + 0xea0) = 0;
  MemoryChunkChunk::MemoryChunkChunk((MemoryChunkChunk *)(this + 0x14d8));
  pMVar4 = this + 0x1af0;
  *(undefined8 *)(this + 0x14d0) = 0;
  MemoryChunkChunk::MemoryChunkChunk((MemoryChunkChunk *)(this + 0x1b08));
  pMVar5 = this + 0x2120;
  *(undefined8 *)(this + 0x1b00) = 0;
  MemoryChunkChunk::MemoryChunkChunk((MemoryChunkChunk *)(this + 0x2138));
  pMVar6 = this + 0x2750;
  *(undefined8 *)(this + 0x2130) = 0;
  MemoryChunkChunk::MemoryChunkChunk((MemoryChunkChunk *)(this + 0x2768));
  uVar8 = param_4 >> 3;
  *(MyMicroAllocator **)(this + 0x870) = this + 0x890;
  puVar9 = (undefined8 *)((long)param_2 + 0x2da0U & 0xfffffffffffffff0);
  *(ulong *)(this + 0x20) = (long)param_2 + (ulong)param_3;
  *(MyMicroAllocator **)(this + 0x28) = pMVar1;
  puVar12 = (undefined8 *)((long)puVar9 + uVar18);
  *(undefined8 *)(this + 0x2760) = 0;
  *(undefined8 *)(this + 0x848) = 0;
  *(undefined8 *)(this + 0x858) = 0;
  *(undefined8 *)(this + 0x850) = 0;
  *(uint *)(this + 0x830) = param_4;
  *(MyMicroAllocator **)(this + 0x30) = pMVar1;
  *(MyMicroAllocator **)(this + 0x38) = pMVar1;
  *(MyMicroAllocator **)(this + 0x40) = pMVar1;
  *(MyMicroAllocator **)(this + 0x48) = pMVar1;
  *(MyMicroAllocator **)(this + 0x50) = pMVar1;
  *(MyMicroAllocator **)(this + 0x58) = pMVar1;
  *(MyMicroAllocator **)(this + 0x60) = pMVar1;
  *(MyMicroAllocator **)(this + 0x68) = pMVar1;
  *(MyMicroAllocator **)(this + 0x70) = pMVar2;
  *(MyMicroAllocator **)(this + 0x78) = pMVar2;
  *(MyMicroAllocator **)(this + 0x80) = pMVar2;
  *(MyMicroAllocator **)(this + 0x88) = pMVar2;
  *(MyMicroAllocator **)(this + 0x90) = pMVar2;
  *(MyMicroAllocator **)(this + 0x98) = pMVar2;
  *(MyMicroAllocator **)(this + 0xa0) = pMVar2;
  *(MyMicroAllocator **)(this + 0xa8) = pMVar2;
  *(MyMicroAllocator **)(this + 0xb0) = pMVar3;
  *(MyMicroAllocator **)(this + 0xb8) = pMVar3;
  *(MyMicroAllocator **)(this + 0xc0) = pMVar3;
  *(MyMicroAllocator **)(this + 200) = pMVar3;
  *(MyMicroAllocator **)(this + 0xd0) = pMVar3;
  *(MyMicroAllocator **)(this + 0xd8) = pMVar3;
  *(MyMicroAllocator **)(this + 0xe0) = pMVar3;
  *(MyMicroAllocator **)(this + 0xe8) = pMVar3;
  *(MyMicroAllocator **)(this + 0xf0) = pMVar3;
  *(MyMicroAllocator **)(this + 0xf8) = pMVar3;
  *(MyMicroAllocator **)(this + 0x100) = pMVar3;
  *(MyMicroAllocator **)(this + 0x108) = pMVar3;
  *(MyMicroAllocator **)(this + 0x110) = pMVar3;
  *(MyMicroAllocator **)(this + 0x118) = pMVar3;
  *(MyMicroAllocator **)(this + 0x120) = pMVar3;
  *(MyMicroAllocator **)(this + 0x128) = pMVar3;
  *(MyMicroAllocator **)(this + 0x130) = pMVar4;
  *(MyMicroAllocator **)(this + 0x138) = pMVar4;
  *(MyMicroAllocator **)(this + 0x140) = pMVar4;
  *(MyMicroAllocator **)(this + 0x148) = pMVar4;
  *(MyMicroAllocator **)(this + 0x150) = pMVar4;
  *(MyMicroAllocator **)(this + 0x158) = pMVar4;
  *(MyMicroAllocator **)(this + 0x160) = pMVar4;
  *(MyMicroAllocator **)(this + 0x168) = pMVar4;
  *(MyMicroAllocator **)(this + 0x170) = pMVar4;
  *(MyMicroAllocator **)(this + 0x178) = pMVar4;
  *(MyMicroAllocator **)(this + 0x180) = pMVar4;
  *(MyMicroAllocator **)(this + 0x188) = pMVar4;
  *(MyMicroAllocator **)(this + 400) = pMVar4;
  *(MyMicroAllocator **)(this + 0x198) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1a0) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1a8) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1b0) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1b8) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1c0) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1c8) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1d0) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1d8) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1e0) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1e8) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1f0) = pMVar4;
  *(MyMicroAllocator **)(this + 0x1f8) = pMVar4;
  *(MyMicroAllocator **)(this + 0x200) = pMVar4;
  *(MyMicroAllocator **)(this + 0x208) = pMVar4;
  *(MyMicroAllocator **)(this + 0x210) = pMVar4;
  *(MyMicroAllocator **)(this + 0x218) = pMVar4;
  *(MyMicroAllocator **)(this + 0x220) = pMVar4;
  *(MyMicroAllocator **)(this + 0x228) = pMVar4;
  *(MyMicroAllocator **)(this + 0x230) = pMVar5;
  *(MyMicroAllocator **)(this + 0x238) = pMVar5;
  *(MyMicroAllocator **)(this + 0x240) = pMVar5;
  *(MyMicroAllocator **)(this + 0x248) = pMVar5;
  *(MyMicroAllocator **)(this + 0x250) = pMVar5;
  *(MyMicroAllocator **)(this + 600) = pMVar5;
  *(MyMicroAllocator **)(this + 0x260) = pMVar5;
  *(MyMicroAllocator **)(this + 0x268) = pMVar5;
  *(MyMicroAllocator **)(this + 0x270) = pMVar5;
  *(MyMicroAllocator **)(this + 0x278) = pMVar5;
  *(MyMicroAllocator **)(this + 0x280) = pMVar5;
  *(MyMicroAllocator **)(this + 0x288) = pMVar5;
  *(MyMicroAllocator **)(this + 0x290) = pMVar5;
  *(MyMicroAllocator **)(this + 0x298) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2a0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2a8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2b0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2b8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2c0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2c8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2d0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2d8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2e0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2e8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2f0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x2f8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x300) = pMVar5;
  *(MyMicroAllocator **)(this + 0x308) = pMVar5;
  *(MyMicroAllocator **)(this + 0x310) = pMVar5;
  *(MyMicroAllocator **)(this + 0x318) = pMVar5;
  *(MyMicroAllocator **)(this + 800) = pMVar5;
  *(MyMicroAllocator **)(this + 0x328) = pMVar5;
  *(MyMicroAllocator **)(this + 0x330) = pMVar5;
  *(MyMicroAllocator **)(this + 0x338) = pMVar5;
  *(MyMicroAllocator **)(this + 0x340) = pMVar5;
  *(MyMicroAllocator **)(this + 0x348) = pMVar5;
  *(MyMicroAllocator **)(this + 0x350) = pMVar5;
  *(MyMicroAllocator **)(this + 0x358) = pMVar5;
  *(MyMicroAllocator **)(this + 0x360) = pMVar5;
  *(MyMicroAllocator **)(this + 0x368) = pMVar5;
  *(MyMicroAllocator **)(this + 0x370) = pMVar5;
  *(MyMicroAllocator **)(this + 0x378) = pMVar5;
  *(MyMicroAllocator **)(this + 0x380) = pMVar5;
  *(MyMicroAllocator **)(this + 0x388) = pMVar5;
  *(MyMicroAllocator **)(this + 0x390) = pMVar5;
  *(MyMicroAllocator **)(this + 0x398) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3a0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3a8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3b0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3b8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3c0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3c8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3d0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3d8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3e0) = pMVar5;
  *(MyMicroAllocator **)(this + 1000) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3f0) = pMVar5;
  *(MyMicroAllocator **)(this + 0x3f8) = pMVar5;
  *(MyMicroAllocator **)(this + 0x400) = pMVar5;
  *(MyMicroAllocator **)(this + 0x408) = pMVar5;
  *(MyMicroAllocator **)(this + 0x410) = pMVar5;
  *(MyMicroAllocator **)(this + 0x418) = pMVar5;
  *(MyMicroAllocator **)(this + 0x420) = pMVar5;
  *(MyMicroAllocator **)(this + 0x428) = pMVar5;
  *(MyMicroAllocator **)(this + 0x438) = pMVar6;
  *(MyMicroAllocator **)(this + 0x430) = pMVar6;
  *(MyMicroAllocator **)(this + 0x448) = pMVar6;
  *(MyMicroAllocator **)(this + 0x440) = pMVar6;
  *(MyMicroAllocator **)(this + 0x458) = pMVar6;
  *(MyMicroAllocator **)(this + 0x450) = pMVar6;
  *(MyMicroAllocator **)(this + 0x468) = pMVar6;
  *(MyMicroAllocator **)(this + 0x460) = pMVar6;
  *(MyMicroAllocator **)(this + 0x478) = pMVar6;
  *(MyMicroAllocator **)(this + 0x470) = pMVar6;
  *(MyMicroAllocator **)(this + 0x488) = pMVar6;
  *(MyMicroAllocator **)(this + 0x480) = pMVar6;
  *(MyMicroAllocator **)(this + 0x498) = pMVar6;
  *(MyMicroAllocator **)(this + 0x490) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4a8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4a0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4b8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4b0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4c8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4c0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4d8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4d0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4e8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4e0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4f8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x4f0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x508) = pMVar6;
  *(MyMicroAllocator **)(this + 0x500) = pMVar6;
  *(MyMicroAllocator **)(this + 0x518) = pMVar6;
  *(MyMicroAllocator **)(this + 0x510) = pMVar6;
  *(MyMicroAllocator **)(this + 0x528) = pMVar6;
  *(MyMicroAllocator **)(this + 0x520) = pMVar6;
  *(MyMicroAllocator **)(this + 0x538) = pMVar6;
  *(MyMicroAllocator **)(this + 0x530) = pMVar6;
  *(MyMicroAllocator **)(this + 0x548) = pMVar6;
  *(MyMicroAllocator **)(this + 0x540) = pMVar6;
  *(MyMicroAllocator **)(this + 0x558) = pMVar6;
  *(MyMicroAllocator **)(this + 0x550) = pMVar6;
  *(MyMicroAllocator **)(this + 0x568) = pMVar6;
  *(MyMicroAllocator **)(this + 0x560) = pMVar6;
  *(MyMicroAllocator **)(this + 0x578) = pMVar6;
  *(MyMicroAllocator **)(this + 0x570) = pMVar6;
  *(MyMicroAllocator **)(this + 0x588) = pMVar6;
  *(MyMicroAllocator **)(this + 0x580) = pMVar6;
  *(MyMicroAllocator **)(this + 0x598) = pMVar6;
  *(MyMicroAllocator **)(this + 0x590) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5a8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5a0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5b8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5b0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5c8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5c0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5d8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5d0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5e8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5e0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5f8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x5f0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x608) = pMVar6;
  *(MyMicroAllocator **)(this + 0x600) = pMVar6;
  *(MyMicroAllocator **)(this + 0x618) = pMVar6;
  *(MyMicroAllocator **)(this + 0x610) = pMVar6;
  *(MyMicroAllocator **)(this + 0x628) = pMVar6;
  *(MyMicroAllocator **)(this + 0x620) = pMVar6;
  *(MyMicroAllocator **)(this + 0x638) = pMVar6;
  *(MyMicroAllocator **)(this + 0x630) = pMVar6;
  *(MyMicroAllocator **)(this + 0x648) = pMVar6;
  *(MyMicroAllocator **)(this + 0x640) = pMVar6;
  *(MyMicroAllocator **)(this + 0x658) = pMVar6;
  *(MyMicroAllocator **)(this + 0x650) = pMVar6;
  *(MyMicroAllocator **)(this + 0x668) = pMVar6;
  *(MyMicroAllocator **)(this + 0x660) = pMVar6;
  *(MyMicroAllocator **)(this + 0x678) = pMVar6;
  *(MyMicroAllocator **)(this + 0x670) = pMVar6;
  *(MyMicroAllocator **)(this + 0x688) = pMVar6;
  *(MyMicroAllocator **)(this + 0x680) = pMVar6;
  *(MyMicroAllocator **)(this + 0x698) = pMVar6;
  *(MyMicroAllocator **)(this + 0x690) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6a8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6a0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6b8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6b0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6c8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6c0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6d8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6d0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6e8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6e0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6f8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x6f0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x708) = pMVar6;
  *(MyMicroAllocator **)(this + 0x700) = pMVar6;
  *(MyMicroAllocator **)(this + 0x718) = pMVar6;
  *(MyMicroAllocator **)(this + 0x710) = pMVar6;
  *(MyMicroAllocator **)(this + 0x728) = pMVar6;
  *(MyMicroAllocator **)(this + 0x720) = pMVar6;
  *(MyMicroAllocator **)(this + 0x738) = pMVar6;
  *(MyMicroAllocator **)(this + 0x730) = pMVar6;
  *(MyMicroAllocator **)(this + 0x748) = pMVar6;
  *(MyMicroAllocator **)(this + 0x740) = pMVar6;
  *(MyMicroAllocator **)(this + 0x758) = pMVar6;
  *(MyMicroAllocator **)(this + 0x750) = pMVar6;
  *(MyMicroAllocator **)(this + 0x768) = pMVar6;
  *(MyMicroAllocator **)(this + 0x760) = pMVar6;
  *(MyMicroAllocator **)(this + 0x778) = pMVar6;
  *(MyMicroAllocator **)(this + 0x770) = pMVar6;
  *(MyMicroAllocator **)(this + 0x788) = pMVar6;
  *(MyMicroAllocator **)(this + 0x780) = pMVar6;
  *(MyMicroAllocator **)(this + 0x798) = pMVar6;
  *(MyMicroAllocator **)(this + 0x790) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7a8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7a0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7b8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7b0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7c8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7c0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7d8) = pMVar6;
  *(MyMicroAllocator **)(this + 2000) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7e8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7e0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7f8) = pMVar6;
  *(MyMicroAllocator **)(this + 0x7f0) = pMVar6;
  *(MyMicroAllocator **)(this + 0x808) = pMVar6;
  *(MyMicroAllocator **)(this + 0x800) = pMVar6;
  *(MyMicroAllocator **)(this + 0x818) = pMVar6;
  *(MyMicroAllocator **)(this + 0x810) = pMVar6;
  *(MyMicroAllocator **)(this + 0x828) = pMVar6;
  *(MyMicroAllocator **)(this + 0x820) = pMVar6;
  *(MicroHeap **)(this + 0x10) = param_1;
  *(void **)(this + 0x18) = param_2;
  *(undefined8 **)(this + 0x838) = puVar9;
  *(undefined8 **)(this + 0x860) = puVar9;
  *(undefined8 **)(this + 0x868) = puVar12;
  *(MicroHeap **)(this + 0x878) = param_1;
  *(undefined4 *)(this + 0x880) = 8;
  *(uint *)(this + 0x884) = uVar8;
  *(undefined4 *)(this + 0x8b8) = 8;
  *(undefined8 **)(this + 0x898) = puVar9;
  *(ulong *)(this + 0x8a0) = (long)puVar9 + (ulong)(param_4 & 0xfffffff8);
  *(undefined8 **)(this + 0x8b0) = puVar9;
  puVar11 = puVar9;
  if (uVar8 != 1) {
    if (uVar8 - 2 < 3) {
      uVar14 = 0;
    }
    else {
      uVar15 = (ulong)(uVar8 - 2) + 1;
      uVar14 = uVar15 & 0x1fffffffc;
      puVar11 = puVar9 + uVar14;
      uVar17 = uVar14;
      puVar16 = puVar9;
      do {
        uVar17 = uVar17 - 4;
        puVar16[1] = puVar16 + 2;
        *puVar16 = puVar16 + 1;
        puVar16[3] = puVar16 + 4;
        puVar16[2] = puVar16 + 3;
        puVar16 = puVar16 + 4;
      } while (uVar17 != 0);
      if (uVar15 == uVar14) goto LAB_00d5a7d0;
    }
    iVar13 = ~(uint)uVar14 + uVar8;
    do {
      puVar16 = puVar11 + 1;
      iVar13 = iVar13 + -1;
      *puVar11 = puVar16;
      puVar11 = puVar16;
    } while (iVar13 != 0);
  }
LAB_00d5a7d0:
  *puVar11 = 0;
  uVar8 = param_4 >> 4;
  puVar11 = (undefined8 *)((long)puVar12 + uVar18);
  *(MyMicroAllocator **)(this + 0xea0) = this + 0xec0;
  *(undefined8 **)(this + 0xe90) = puVar12;
  *(uint *)(this + 0xeb4) = uVar8;
  *(undefined8 **)(this + 0xe98) = puVar11;
  *(MicroHeap **)(this + 0xea8) = param_1;
  *(undefined4 *)(this + 0xeb0) = 0x10;
  *(undefined4 *)(this + 0xee8) = 0x10;
  *(undefined8 **)(this + 0xec8) = puVar12;
  *(ulong *)(this + 0xed0) = (long)puVar12 + (ulong)(param_4 & 0xfffffff0);
  *(undefined8 **)(this + 0xee0) = puVar12;
  if (uVar8 != 1) {
    uVar15 = (ulong)(uVar8 - 2);
    if (uVar8 - 2 != 0) {
      uVar17 = uVar15 + 1;
      uVar15 = uVar17 & 0x1fffffffe;
      puVar12 = puVar12 + uVar15 * 2;
      plVar10 = (long *)((long)puVar9 + uVar18 + 0x10);
      uVar14 = uVar15;
      do {
        uVar14 = uVar14 - 2;
        plVar10[-2] = (long)plVar10;
        *plVar10 = (long)(plVar10 + 2);
        plVar10 = plVar10 + 4;
      } while (uVar14 != 0);
      if (uVar17 == uVar15) goto LAB_00d5a878;
    }
    iVar13 = ~(uint)uVar15 + uVar8;
    puVar16 = puVar12;
    do {
      puVar12 = puVar16 + 2;
      iVar13 = iVar13 + -1;
      *puVar16 = puVar12;
      puVar16 = puVar12;
    } while (iVar13 != 0);
  }
LAB_00d5a878:
  *puVar12 = 0;
  uVar8 = param_4 >> 5;
  puVar12 = (undefined8 *)((long)puVar11 + uVar18);
  *(MyMicroAllocator **)(this + 0x14d0) = this + 0x14f0;
  *(uint *)(this + 0x14e4) = uVar8;
  *(undefined8 **)(this + 0x14c0) = puVar11;
  *(undefined8 **)(this + 0x14c8) = puVar12;
  *(MicroHeap **)(this + 0x14d8) = param_1;
  *(undefined4 *)(this + 0x14e0) = 0x20;
  *(undefined4 *)(this + 0x1518) = 0x20;
  *(undefined8 **)(this + 0x14f8) = puVar11;
  *(ulong *)(this + 0x1500) = (long)puVar11 + (ulong)(param_4 & 0xffffffe0);
  *(undefined8 **)(this + 0x1510) = puVar11;
  if (uVar8 != 1) {
    uVar15 = (ulong)(uVar8 - 2);
    if (uVar8 - 2 != 0) {
      uVar17 = uVar15 + 1;
      uVar15 = uVar17 & 0x1fffffffe;
      puVar11 = puVar11 + uVar15 * 4;
      plVar10 = (long *)((long)puVar9 + uVar18 * 2 + 0x20);
      uVar14 = uVar15;
      do {
        uVar14 = uVar14 - 2;
        plVar10[-4] = (long)plVar10;
        *plVar10 = (long)(plVar10 + 4);
        plVar10 = plVar10 + 8;
      } while (uVar14 != 0);
      if (uVar17 == uVar15) goto LAB_00d5a92c;
    }
    iVar13 = ~(uint)uVar15 + uVar8;
    puVar16 = puVar11;
    do {
      puVar11 = puVar16 + 4;
      iVar13 = iVar13 + -1;
      *puVar16 = puVar11;
      puVar16 = puVar11;
    } while (iVar13 != 0);
  }
LAB_00d5a92c:
  *puVar11 = 0;
  uVar8 = param_4 >> 6;
  puVar11 = (undefined8 *)((long)puVar12 + uVar18);
  *(MyMicroAllocator **)(this + 0x1b00) = this + 0x1b20;
  *(uint *)(this + 0x1b14) = uVar8;
  *(undefined8 **)(this + 0x1af0) = puVar12;
  *(undefined8 **)(this + 0x1af8) = puVar11;
  *(MicroHeap **)(this + 0x1b08) = param_1;
  *(undefined4 *)(this + 0x1b10) = 0x40;
  *(undefined4 *)(this + 0x1b48) = 0x40;
  *(undefined8 **)(this + 0x1b28) = puVar12;
  *(ulong *)(this + 0x1b30) = (long)puVar12 + (ulong)(param_4 & 0xffffffc0);
  *(undefined8 **)(this + 0x1b40) = puVar12;
  if (uVar8 != 1) {
    uVar15 = (ulong)(uVar8 - 2);
    if (uVar8 - 2 != 0) {
      uVar17 = uVar15 + 1;
      uVar15 = uVar17 & 0x1fffffffe;
      puVar12 = puVar12 + uVar15 * 8;
      plVar10 = (long *)((long)puVar9 + uVar18 * 3 + 0x40);
      uVar14 = uVar15;
      do {
        uVar14 = uVar14 - 2;
        plVar10[-8] = (long)plVar10;
        *plVar10 = (long)(plVar10 + 8);
        plVar10 = plVar10 + 0x10;
      } while (uVar14 != 0);
      if (uVar17 == uVar15) goto LAB_00d5a9e4;
    }
    iVar13 = ~(uint)uVar15 + uVar8;
    puVar16 = puVar12;
    do {
      puVar12 = puVar16 + 8;
      iVar13 = iVar13 + -1;
      *puVar16 = puVar12;
      puVar16 = puVar12;
    } while (iVar13 != 0);
  }
LAB_00d5a9e4:
  uVar8 = param_4 >> 7;
  *puVar12 = 0;
  puVar12 = (undefined8 *)((long)puVar11 + uVar18);
  *(MyMicroAllocator **)(this + 0x2130) = this + 0x2150;
  *(uint *)(this + 0x2144) = uVar8;
  *(undefined8 **)(this + 0x2120) = puVar11;
  *(undefined8 **)(this + 0x2128) = puVar12;
  *(MicroHeap **)(this + 0x2138) = param_1;
  *(undefined4 *)(this + 0x2140) = 0x80;
  *(undefined4 *)(this + 0x2178) = 0x80;
  *(undefined8 **)(this + 0x2158) = puVar11;
  *(ulong *)(this + 0x2160) = (long)puVar11 + (ulong)(param_4 & 0xffffff80);
  *(undefined8 **)(this + 0x2170) = puVar11;
  if (uVar8 != 1) {
    uVar15 = (ulong)(uVar8 - 2);
    if (uVar8 - 2 != 0) {
      uVar17 = uVar15 + 1;
      uVar15 = uVar17 & 0x1fffffffe;
      plVar10 = (long *)((long)puVar9 + uVar18 * 4 + 0x80);
      puVar11 = puVar11 + uVar15 * 0x10;
      uVar14 = uVar15;
      do {
        plVar10[-0x10] = (long)plVar10;
        uVar14 = uVar14 - 2;
        *plVar10 = (long)(plVar10 + 0x10);
        plVar10 = plVar10 + 0x20;
      } while (uVar14 != 0);
      if (uVar17 == uVar15) goto LAB_00d5aa9c;
    }
    iVar13 = ~(uint)uVar15 + uVar8;
    puVar16 = puVar11;
    do {
      puVar11 = puVar16 + 0x10;
      iVar13 = iVar13 + -1;
      *puVar16 = puVar11;
      puVar16 = puVar11;
    } while (iVar13 != 0);
  }
LAB_00d5aa9c:
  uVar8 = param_4 >> 8;
  *puVar11 = 0;
  lVar7 = (long)puVar12 + uVar18;
  *(uint *)(this + 0x2774) = uVar8;
  *(MicroHeap **)(this + 0x2768) = param_1;
  *(undefined8 **)(this + 0x2750) = puVar12;
  *(long *)(this + 0x2758) = lVar7;
  *(MyMicroAllocator **)(this + 0x2760) = this + 0x2780;
  *(undefined4 *)(this + 0x2770) = 0x100;
  *(undefined4 *)(this + 0x27a8) = 0x100;
  *(undefined8 **)(this + 0x2788) = puVar12;
  *(ulong *)(this + 0x2790) = (long)puVar12 + (ulong)(param_4 & 0xffffff00);
  *(undefined8 **)(this + 0x27a0) = puVar12;
  if (uVar8 != 1) {
    uVar15 = (ulong)(uVar8 - 2);
    if (uVar8 - 2 != 0) {
      uVar17 = uVar15 + 1;
      uVar15 = uVar17 & 0x1fffffffe;
      plVar10 = (long *)((long)puVar9 + uVar18 * 5 + 0x100);
      puVar12 = puVar12 + uVar15 * 0x20;
      uVar18 = uVar15;
      do {
        plVar10[-0x20] = (long)plVar10;
        uVar18 = uVar18 - 2;
        *plVar10 = (long)(plVar10 + 0x20);
        plVar10 = plVar10 + 0x40;
      } while (uVar18 != 0);
      if (uVar17 == uVar15) goto LAB_00d5ab58;
    }
    iVar13 = ~(uint)uVar15 + uVar8;
    puVar11 = puVar12;
    do {
      puVar12 = puVar11 + 0x20;
      iVar13 = iVar13 + -1;
      *puVar11 = puVar12;
      puVar11 = puVar12;
    } while (iVar13 != 0);
  }
LAB_00d5ab58:
  *(long *)(this + 0x840) = lVar7;
  *puVar12 = 0;
  return;
}


