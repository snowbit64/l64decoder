// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ObstacleWallDetector
// Entry Point: 00879170
// Size: 952 bytes
// Signature: undefined __thiscall ObstacleWallDetector(ObstacleWallDetector * this)


/* ObstacleWallDetector::ObstacleWallDetector() */

void __thiscall ObstacleWallDetector::ObstacleWallDetector(ObstacleWallDetector *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x134) = 0;
  this[0x13c] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0x3f800000;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  this[0x17c] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0x10) = 0x3f80000000000000;
  *(undefined4 *)(this + 0x30) = 0x7f7fffff;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1bc] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  this[0x3c] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  this[0x1fc] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 500) = 0;
  *(undefined8 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = 0x7f7fffff;
  *(undefined8 *)(this + 0x74) = 0;
  this[0x7c] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x88) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x90) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0x7f7fffff;
  *(undefined8 *)(this + 0xb4) = 0;
  this[0xbc] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 200) = 0x3f800000;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0x3f80000000000000;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xf0) = 0x7f7fffff;
  *(undefined8 *)(this + 0xf4) = 0;
  this[0xfc] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x130) = 0x7f7fffff;
  *(undefined8 *)(this + 0x148) = 0x3f800000;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x150) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x170) = 0x7f7fffff;
  *(undefined8 *)(this + 0x188) = 0x3f800000;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1b0) = 0x7f7fffff;
  *(undefined8 *)(this + 0x1c8) = 0x3f800000;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1f0) = 0x7f7fffff;
  *(undefined8 *)(this + 0x208) = 0x3f800000;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x210) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x230) = 0x7f7fffff;
  this[0x23c] = (ObstacleWallDetector)0x0;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined2 *)(this + 0x248) = 0;
  *(undefined2 *)(this + 600) = 0;
  *(undefined ***)(this + 0x240) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x24c) = 0xbf800000;
  *(undefined ***)(this + 0x250) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x25c) = 0xbf800000;
  *(undefined ***)(this + 0x260) = &PTR__RayReportWall_00fdc310;
  *(undefined2 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0xbf800000;
  *(undefined ***)(this + 0x270) = &PTR__RayReportWall_00fdc310;
  *(undefined2 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x27c) = 0xbf800000;
  *(undefined ***)(this + 0x280) = &PTR__RayReportWall_00fdc310;
  *(undefined2 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0xbf800000;
  *(undefined ***)(this + 0x290) = &PTR__RayReportWall_00fdc310;
  *(undefined2 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x29c) = 0xbf800000;
  *(undefined ***)(this + 0x2a0) = &PTR__RayReportWall_00fdc310;
  *(undefined2 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = 0xbf800000;
  *(undefined ***)(this + 0x2b0) = &PTR__RayReportWall_00fdc310;
  *(undefined ***)(this + 0x2c0) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 700) = 0xbf800000;
  *(undefined4 *)(this + 0x2cc) = 0xbf800000;
  *(undefined4 *)(this + 0x2dc) = 0xbf800000;
  *(undefined4 *)(this + 0x2ec) = 0xbf800000;
  *(undefined4 *)(this + 0x2fc) = 0xbf800000;
  *(undefined4 *)(this + 0x30c) = 0xbf800000;
  *(undefined4 *)(this + 0x31c) = 0xbf800000;
  *(undefined4 *)(this + 0x32c) = 0xbf800000;
  *(undefined4 *)(this + 0x33c) = 0xbf800000;
  *(undefined4 *)(this + 0x34c) = 0xbf800000;
  *(undefined4 *)(this + 0x35c) = 0xbf800000;
  *(undefined2 *)(this + 0x2b8) = 0;
  *(undefined2 *)(this + 0x2c8) = 0;
  *(undefined ***)(this + 0x2d0) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x2d8) = 0;
  *(undefined ***)(this + 0x2e0) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x2e8) = 0;
  *(undefined ***)(this + 0x2f0) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x2f8) = 0;
  *(undefined ***)(this + 0x300) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x308) = 0;
  *(undefined ***)(this + 0x310) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x318) = 0;
  *(undefined ***)(this + 800) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x328) = 0;
  *(undefined ***)(this + 0x330) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x338) = 0;
  *(undefined ***)(this + 0x340) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x348) = 0;
  *(undefined ***)(this + 0x350) = &PTR__RayReportWater_00fdc348;
  *(undefined2 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 900) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  *(undefined8 *)(this + 0x398) = 0x3f0000007f7fffff;
  *(undefined8 *)(this + 0x390) = 0x3f80000040400000;
  this[0x3ac] = (ObstacleWallDetector)0x0;
                    /* try { // try from 008793f0 to 00879473 has its CatchHandler @ 00879528 */
  fVar3 = (float)MathUtil::degreeToRadian(-90.0);
  local_6c = fVar3;
  local_68[0] = (float)MathUtil::degreeToRadian(-60.0);
  local_68[1] = (float)MathUtil::degreeToRadian(-45.0);
  local_68[2] = (float)MathUtil::degreeToRadian(-20.0);
  local_68[3] = (float)MathUtil::degreeToRadian(0.0);
  local_68[4] = (float)MathUtil::degreeToRadian(20.0);
  local_68[5] = (float)MathUtil::degreeToRadian(45.0);
  local_68[6] = (float)MathUtil::degreeToRadian(60.0);
  local_68[7] = (float)MathUtil::degreeToRadian(90.0);
  lVar2 = 0;
  *(undefined8 *)(this + 0x368) = 0x200000005;
  *(undefined8 *)(this + 0x360) = 0x300000004;
  *(undefined8 *)(this + 0x378) = 7;
  *(undefined8 *)(this + 0x370) = 0x100000006;
  *(undefined4 *)(this + 0x380) = 8;
  while( true ) {
    sincosf(fVar3,&fStack_70,&local_74);
    *(float *)((long)this + 4) = 0.0;
    *(float *)this = fStack_70;
    *(float *)((long)this + 8) = local_74;
    fVar4 = atan2f(fStack_70,local_74);
    fVar3 = fVar4 + 6.283185;
    if (0.0 <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)((long)this + 0x34) = fVar3;
    if (lVar2 == 0x20) break;
    fVar3 = *(float *)((long)local_68 + lVar2);
    lVar2 = lVar2 + 4;
    this = (ObstacleWallDetector *)((long)this + 0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


