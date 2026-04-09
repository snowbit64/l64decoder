// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MasterServerManager
// Entry Point: 00b39704
// Size: 636 bytes
// Signature: undefined __thiscall MasterServerManager(MasterServerManager * this)


/* MasterServerManager::MasterServerManager() */

void __thiscall MasterServerManager::MasterServerManager(MasterServerManager *this)

{
  undefined2 uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__MasterServerManager_00fe9bc0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined2 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x1c4) = 0;
  this[0x1c0] = (MasterServerManager)0x0;
  *(undefined8 *)(this + 0x1cc) = 0;
  *(undefined2 *)(this + 0x1d4) = 0;
                    /* try { // try from 00b39794 to 00b397d7 has its CatchHandler @ 00b39980 */
  uVar7 = Watch::getCurrentTicks();
  *(ulong *)(this + 0x1e0) = (uVar7 ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d + -0x2152ecc841109800
  ;
  uVar3 = Watch::getCurrentTicks();
  *(undefined2 *)(this + 0x1e8) = uVar3;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  this[0x17c] = (MasterServerManager)0x0;
  *(undefined8 *)(this + 0x168) = 0;
  this[0x171] = (MasterServerManager)0x0;
  this[0x38] = (MasterServerManager)0x0;
  this[200] = (MasterServerManager)0x0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  this[0x208] = (MasterServerManager)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x440) = 0xffffffff;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  cVar2 = s_frontMasterServersDecoded;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  if (cVar2 == '\0') {
    lVar5 = 0;
    s_frontMasterServersDecoded = '\x01';
    do {
      (&s_frontMasterServers)[lVar5] =
           (&s_xorPatterns)[(ulong)((uint)lVar5 + (((uint)lVar5 & 0xff) / 5) * -5) & 0xff] ^
           (&s_frontMasterServers)[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x3a);
  }
  lVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  do {
    while ((&s_frontMasterServers)[lVar5] != '\0') {
      lVar5 = lVar5 + 1;
      if (lVar5 == 0x3a) {
        return;
      }
    }
    uVar7 = (ulong)uVar6;
    uVar3 = (&s_frontMasterServerPorts)[uVar7];
    *(undefined1 **)(this + (ulong)uVar6 * 8 + 0x4a0) = &s_frontMasterServers + uVar4;
    uVar1 = (&s_frontMasterHttpsServerPorts)[uVar7];
    *(undefined2 *)(this + uVar7 * 2 + 0x4b0) = uVar3;
    *(undefined2 *)(this + uVar7 * 2 + 0x4b4) = uVar1;
    if (uVar6 - 1 < 0xfffffffe) {
      return;
    }
    lVar5 = lVar5 + 1;
    uVar6 = 1;
    uVar4 = (uint)lVar5;
  } while (lVar5 != 0x3a);
  return;
}


