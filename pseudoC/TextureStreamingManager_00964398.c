// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TextureStreamingManager
// Entry Point: 00964398
// Size: 588 bytes
// Signature: undefined __thiscall TextureStreamingManager(TextureStreamingManager * this)


/* TextureStreamingManager::TextureStreamingManager() */

void __thiscall TextureStreamingManager::TextureStreamingManager(TextureStreamingManager *this)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined2 *)this = 0;
  this[2] = (TextureStreamingManager)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  Event::Event((Event *)(this + 0x20),true,true);
  this[0x7c] = (TextureStreamingManager)0x0;
                    /* try { // try from 009643f8 to 009643ff has its CatchHandler @ 009646cc */
  Thread::Thread((Thread *)(this + 0x88));
                    /* try { // try from 00964404 to 0096440f has its CatchHandler @ 009646c4 */
  Semaphore::Semaphore((Semaphore *)(this + 0xd0),0);
  this[0xe0] = (TextureStreamingManager)0x0;
                    /* try { // try from 00964418 to 00964423 has its CatchHandler @ 009646bc */
  Mutex::Mutex((Mutex *)(this + 0xe8),true);
  puVar1 = (undefined8 *)(this + 0x218);
  *(undefined4 *)(this + 0x130) = 0x3f800000;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  this[0x148] = (TextureStreamingManager)0x0;
  *(undefined4 *)(this + 0x170) = 0x3f800000;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0x459c4000469c4000;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1e8) = 0x3f800000;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x210) = 0x3f800000;
  *(undefined8 *)(this + 0x220) = 0;
  *puVar1 = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x248) = 0x3f800000;
                    /* try { // try from 00964488 to 00964493 has its CatchHandler @ 00964664 */
  Mutex::Mutex((Mutex *)(this + 0x250),true);
  *(undefined4 *)(this + 0x298) = 0x3f800000;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
                    /* try { // try from 009644b0 to 009644b7 has its CatchHandler @ 00964654 */
  Mutex::Mutex((Mutex *)(this + 0x2a0),true);
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined8 **)(this + 0x2d0) = puVar1;
                    /* try { // try from 009644c4 to 009644cf has its CatchHandler @ 00964644 */
  Mutex::Mutex((Mutex *)(this + 0x2d8),true);
  *(undefined8 *)(this + 0x300) = 1;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x328) = 0x3f800000;
                    /* try { // try from 009644f8 to 00964503 has its CatchHandler @ 00964634 */
  Mutex::Mutex((Mutex *)(this + 0x330),true);
  *(undefined4 *)(this + 0x378) = 0x3f800000;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
                    /* try { // try from 00964520 to 00964527 has its CatchHandler @ 00964624 */
  Mutex::Mutex((Mutex *)(this + 0x380),true);
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
                    /* try { // try from 00964548 to 00964553 has its CatchHandler @ 00964614 */
  UpgradePipeline::UpgradePipeline((UpgradePipeline *)(this + 0x3d8),(CommonPipelineData *)puVar1);
                    /* try { // try from 00964558 to 00964563 has its CatchHandler @ 00964604 */
  DowngradePipeline::DowngradePipeline
            ((DowngradePipeline *)(this + 0x688),(CommonPipelineData *)puVar1);
  *(undefined8 *)(this + 0x848) = 0;
  *(undefined2 *)(this + 0x840) = 0;
  *(undefined8 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x830) = 0;
                    /* try { // try from 00964578 to 00964583 has its CatchHandler @ 009645f4 */
  Mutex::Mutex((Mutex *)(this + 0x850),true);
  *(undefined4 *)(this + 0x878) = 0;
  *(undefined8 *)(this + 0x8a8) = 0;
  *(undefined8 *)(this + 0x8b8) = 0;
  *(undefined8 *)(this + 0x8b0) = 0;
  *(undefined4 *)(this + 0x18) = 0xfc00;
                    /* try { // try from 0096459c to 009645ab has its CatchHandler @ 009645e4 */
  iVar3 = MipMapUtil::getSimpleMipChainSize(0x100,0x100,8);
  uVar2 = iVar3 + 0x3ffU & 0xfffffc00;
  if (uVar2 <= *(uint *)(this + 0x18)) {
    uVar2 = *(uint *)(this + 0x18);
  }
  *(uint *)(this + 0x1c) = uVar2;
  return;
}


